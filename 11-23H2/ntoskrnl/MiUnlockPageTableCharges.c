/*
 * XREFs of MiUnlockPageTableCharges @ 0x1402E2DD0
 * Callers:
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiUnlockWsle @ 0x1402A2990 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MiProbeUnlockPage @ 0x1402CB400 (MiProbeUnlockPage.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     MiUnlockPhysicalPageByVa @ 0x14061D320 (MiUnlockPhysicalPageByVa.c)
 *     MiUnlockPageTableRange @ 0x14064D730 (MiUnlockPageTableRange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiIsLowestPageTablePage @ 0x1403495BC (MiIsLowestPageTablePage.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v6; // esi
  unsigned __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v15; // zf
  signed __int32 v16; // eax
  int v17; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( a2 == 2 )
  {
    v6 = 3;
    if ( !(unsigned int)MiIsLowestPageTablePage() )
      goto LABEL_37;
  }
  else
  {
    v6 = a2 != 0 ? 1 : 4;
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_37:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v7 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 40);
    v17 = 0;
    v10 = v9 & 0xFFFFFFFFFFLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    v11 = *(_QWORD *)(BugCheckParameter2 + 24) ^ ((*(_QWORD *)(BugCheckParameter2 + 24) - 0x10000LL) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v11;
    v12 = v11 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v12 >= 0x10000 )
      break;
    if ( !v4 )
      v4 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
    ++v7;
    if ( !v12 && (unsigned int)MiPfnShareCountIsZero(BugCheckParameter2, 0LL, (_QWORD *)0x7FFFFFFFFFFFFFFFLL, a4) != 3 )
      ++v8;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v6 )
      goto LABEL_8;
    BugCheckParameter2 = 48 * v10 - 0x220000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_8:
  if ( v7 )
  {
    if ( (_UNKNOWN *)v4 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v7 + CachedResidentAvailable <= 0x100 && v7 < 0x80000 )
        {
          do
          {
            v16 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v7,
                    CachedResidentAvailable);
            v15 = (_DWORD)CachedResidentAvailable == v16;
            LODWORD(CachedResidentAvailable) = v16;
            if ( v15 )
              goto LABEL_9;
          }
          while ( v16 != -1 && v7 + v16 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v7 += (int)CachedResidentAvailable - 192;
        }
        if ( !v7 )
          goto LABEL_9;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17280), v7);
  }
LABEL_9:
  if ( v8 )
    MiReturnCommit(v4, v8);
}
