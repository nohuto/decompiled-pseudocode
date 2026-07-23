/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x14062DC1C
 * Callers:
 *     MiDeprioritizeVad @ 0x1403C701C (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x14085FB5C (HvTrimHive.c)
 * Callees:
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiTbFlushType @ 0x14025BD3C (MiTbFlushType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiUpdatePfnPriority @ 0x1402E2640 (MiUpdatePfnPriority.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E3C4C (MI_WSLE_LOG_ACCESS.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 valid; // r15
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  __int64 v15; // rdi
  char v16; // r13
  __int64 v17; // r8
  unsigned __int8 v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+28h] [rbp-D8h] BYREF
  int v21; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v22; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v24, 0, 0xB8uLL);
  v8 = MiTbFlushType(a3);
  v24[2] = 0LL;
  v24[3] = 0LL;
  LODWORD(v24[0]) = v8;
  v21 = dword_140C67FE8;
  WORD2(v24[0]) = 4;
  LODWORD(v24[1]) = 20;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v22 = v9 + 8 * a2;
  v12 = MiLockWorkingSetShared(v11);
  v19 = v12;
  if ( v9 >= v22 )
    return MiUnlockWorkingSetShared(a3, v12);
  do
  {
    v14 = v9 >> 9;
    if ( valid )
    {
      if ( valid == (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        goto LABEL_9;
      if ( HIDWORD(v24[1]) )
        MiFreeWsleList(a3, (__int64)v24, 0);
      MiUnlockPageTableInternal(a3, valid);
    }
    valid = MiLockLowestValidPageTable(a3, v9, &v23, v13);
    if ( valid != (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(a3, valid);
      valid = 0LL;
      v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_26;
    }
LABEL_9:
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v16 = MiGetWsleContents(0xFFFFFFFFFFLL, (__int64)(v9 << 25) >> 16) & 0xF;
      if ( v16 != 9 )
      {
        if ( !_bittest64((const signed __int64 *)(v15 + 40), 0x28u) )
        {
          v17 = *(_QWORD *)(v15 + 8);
          if ( v17 > 0 )
            MiDemoteCombinedPte(a3, v9, v17 | 0x8000000000000000uLL);
        }
        if ( (a4 & 8) == 0 && (a4 & 7) != (unsigned int)MiGetPfnPriority(v15) )
        {
          v20 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v20);
            while ( *(__int64 *)(v15 + 24) < 0 );
          }
          MiUpdatePfnPriority(v15);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( (a4 & 0x10) != 0 && v16 != 8 )
        {
          if ( v21 )
            MI_WSLE_LOG_ACCESS(a3, v9);
          MiInsertTbFlushEntry((__int64)v24, (__int64)(v9 << 25) >> 16, 1LL, 0);
          if ( HIDWORD(v24[1]) == LODWORD(v24[1]) )
            MiFreeWsleList(a3, (__int64)v24, 0);
        }
      }
    }
LABEL_26:
    v9 += 8LL;
  }
  while ( v9 < v22 );
  if ( valid )
  {
    if ( HIDWORD(v24[1]) )
      MiFreeWsleList(a3, (__int64)v24, 0);
    MiUnlockPageTableInternal(a3, valid);
  }
  v12 = v19;
  return MiUnlockWorkingSetShared(a3, v12);
}
