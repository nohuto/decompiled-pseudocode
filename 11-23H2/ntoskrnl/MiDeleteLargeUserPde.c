/*
 * XREFs of MiDeleteLargeUserPde @ 0x1406508B4
 * Callers:
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiDecreaseUsedPtesCount @ 0x14033B320 (MiDecreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiRewritePteWithLockBit @ 0x140376630 (MiRewritePteWithLockBit.c)
 *     MiDeleteVadAwePtes @ 0x140649EB8 (MiDeleteVadAwePtes.c)
 */

unsigned __int64 __fastcall MiDeleteLargeUserPde(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  int v14; // r15d
  unsigned __int64 i; // rcx
  unsigned __int64 v16; // rdi
  int v17; // r15d
  __int64 v18; // r8
  bool v19; // zf
  ULONG_PTR UsedPtesHandle; // rax
  unsigned __int64 result; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+70h] [rbp+18h]
  int v26; // [rsp+78h] [rbp+20h]

  v24 = a1;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = a1;
  v8 = *(_DWORD *)(v4 + 120);
  v25 = v8;
  if ( a3 == 3 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2);
    LOBYTE(v8) = v25;
    v10 = v9;
  }
  else
  {
    v10 = *(_QWORD *)a2;
  }
  v11 = v10 & 1;
  if ( (v10 & 1) == 0 && qword_140C65B40 && (v10 & 0x10) == 0 )
    v10 &= ~qword_140C65B40;
  v12 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  v13 = (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  v14 = v8 & 0x10;
  v26 = v14;
  if ( (v8 & 0x10) != 0 )
  {
    MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL), a2, (unsigned __int64 *)(v4 + 128));
    goto LABEL_33;
  }
  if ( !a3 )
  {
    for ( i = 0LL; i < v13; ++i )
      *(_QWORD *)(a2 + 8 * i) = ZeroPte;
    goto LABEL_27;
  }
  if ( !v11 )
  {
    v16 = ZeroPte;
    v17 = 0;
    if ( MiPteInShadowRange(a2) )
    {
      if ( MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_140C66CFC) )
        {
          v19 = (ZeroPte & 1) == 0;
          goto LABEL_22;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (ZeroPte & 1) == 0;
LABEL_22:
        if ( !v19 )
          v16 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v16;
    if ( v17 )
      MiWritePteShadow(a2, v16, v18);
    v14 = v26;
    v5 = v24;
    goto LABEL_27;
  }
  MiRewritePteWithLockBit(*(_QWORD *)(v5 + 24), (__int64 *)a2, ZeroPte, a4);
LABEL_27:
  if ( (v25 & 0x1000) != 0 )
  {
    if ( !*(_QWORD *)(v4 + 16) )
      *(_QWORD *)(v4 + 16) = a2;
    *(_QWORD *)(v4 + 24) = a2 - 8 + 8 * v13;
  }
  if ( a3 != 3 )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
    MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v13);
  }
LABEL_33:
  result = 0xFFFFDE0000000000uLL;
  v22 = 48 * v12 - 0x220000000000LL;
  if ( v11 )
  {
    v23 = *(_QWORD *)(v5 + 16);
    if ( a3 )
      result = MiInsertLargeTbFlushEntry(v23, a3, a2);
    else
      result = MiInsertTbFlushEntry(v23, (__int64)(a2 << 25) >> 16, v13, 0);
  }
  if ( !v14 && *(__int64 *)(v22 + 40) >= 0 )
  {
    LODWORD(v24) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    *(_QWORD *)v22 ^= (*(_QWORD *)v22 ^ (*(_QWORD *)(*(_QWORD *)(v4 + 32) + 48LL) >> 3)) & 0xFFFFFFFFFFELL;
    *(_QWORD *)(*(_QWORD *)(v4 + 32) + 48LL) = v22;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v25 & 0x810) != 0 && !a3 )
  {
    result = 15LL;
    *(_DWORD *)(v5 + 8) = 15;
  }
  return result;
}
