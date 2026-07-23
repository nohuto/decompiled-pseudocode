/*
 * XREFs of MiMakePteClean @ 0x140285B00
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiRewritePteWithLockBit @ 0x140376630 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiMakePteClean(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  int v7; // r14d
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)a1;
  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v12 & 0x20) != 0 )
        v2 |= 0x20uLL;
      if ( (v12 & 0x42) != 0 )
        v2 |= 0x42uLL;
    }
  }
  v6 = v2 & 0xFFFFFFFFFFFFFFBDuLL;
  v15 = v6;
  v7 = 0;
  v8 = (__int64)(a1 << 25) >> 16;
  if ( v8 < 0xFFFFF68000000000uLL )
    goto LABEL_3;
  do
  {
    if ( v8 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v7;
    v8 = (__int64)(v8 << 25) >> 16;
  }
  while ( v8 >= 0xFFFFF68000000000uLL );
  if ( v7 )
  {
    MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26], a1, v15, v5);
    MiInsertLargeTbFlushEntry(a2, v7, a1);
  }
  else
  {
LABEL_3:
    MiWriteValidPteNewProtection(a1, v6);
    MiInsertTbFlushEntry(a2, v8, 1LL, 0);
  }
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  result = MiCaptureDirtyBitToPfn(v9);
  if ( result )
  {
    v13 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiReleasePageFileInfo(v13, result, 1LL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
