/*
 * XREFs of MiFinishLargePageFree @ 0x1402E7824
 * Callers:
 *     MiProbeUnlockPage @ 0x1402CB400 (MiProbeUnlockPage.c)
 *     MiFreeLargePageMemory @ 0x1402E7728 (MiFreeLargePageMemory.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 */

unsigned __int64 __fastcall MiFinishLargePageFree(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  char v11; // al
  char v12; // r9
  char v13; // r10
  unsigned __int64 inserted; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v19; // zf
  signed __int32 v20; // eax
  _QWORD v22[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v23; // [rsp+30h] [rbp-28h]

  v8 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  MiLockPageInline(a1);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( a3 )
    v10 = 0LL;
  else
    v10 = 4294967293LL;
  *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), v10);
  v11 = *(_BYTE *)(a1 + 34);
  v22[0] = v9;
  v22[1] = a2;
  v23 = 0LL;
  *(_BYTE *)(a1 + 34) = v11 ^ (v11 ^ v12) & 7;
  LOBYTE(v23) = v13;
  inserted = MiInsertLargePageInNodeList((__int64)v22);
  v15 = inserted;
  if ( !inserted || a4 )
    return v15;
  MiReturnCommit(v8, inserted);
  v16 = v15;
  if ( (_UNKNOWN *)v8 != &MiSystemPartition )
    goto LABEL_13;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_13;
  if ( v15 + CachedResidentAvailable > 0x100 || v15 >= 0x80000 )
  {
LABEL_11:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v16 = v15 + (int)CachedResidentAvailable - 192;
    }
    if ( !v16 )
      return v15;
LABEL_13:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 17280), v16);
    return v15;
  }
  while ( 1 )
  {
    v20 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            v15 + CachedResidentAvailable,
            CachedResidentAvailable);
    v19 = (_DWORD)CachedResidentAvailable == v20;
    LODWORD(CachedResidentAvailable) = v20;
    if ( v19 )
      return v15;
    if ( v20 == -1 || v15 + v20 > 0x100 )
      goto LABEL_11;
  }
}
