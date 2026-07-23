/*
 * XREFs of MiObtainMdlCharges @ 0x1402F90FC
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1402F8F6C (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainMdlCharges(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v5; // r15d
  unsigned __int64 v6; // rbp
  _WORD *Pool; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v15; // zf
  signed __int32 v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  LODWORD(v2) = *(_DWORD *)(a1 + 56);
  v3 = v1 >> 4;
  v5 = 0;
  if ( !(v1 >> 4) )
    v3 = 1LL;
  if ( (v2 & 0x40) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
LABEL_5:
    v5 = 1;
    goto LABEL_6;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 )
    {
      v3 = v10;
      goto LABEL_5;
    }
  }
  while ( 1 )
  {
LABEL_6:
    if ( (v2 & 0x400) == 0 && (int)MiAcquireNonPagedResources(*(_QWORD *)a1, v1, *(_QWORD *)(a1 + 40), 2u) < 0 )
      goto LABEL_30;
    v6 = v1 / *(_QWORD *)(a1 + 48);
    if ( (*(_DWORD *)(a1 + 84) & 1) != 0 )
      break;
    Pool = MiAllocatePool(64, 8 * v6 + 48, 0x69646D4Du);
    if ( Pool )
      goto LABEL_10;
    if ( (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
    {
      v11 = *(_QWORD *)a1;
      MiReturnCommit(*(_QWORD *)a1, v1);
      v12 = v1;
      if ( (_UNKNOWN *)v11 != &MiSystemPartition )
        goto LABEL_28;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_28;
      if ( v1 + CachedResidentAvailable > 0x100 || v1 >= 0x80000 )
      {
LABEL_25:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v12 = v1 + (int)CachedResidentAvailable - 192;
        }
LABEL_28:
        if ( v12 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 17280), v12);
        goto LABEL_30;
      }
      while ( 1 )
      {
        v16 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                v1 + CachedResidentAvailable,
                CachedResidentAvailable);
        v15 = (_DWORD)CachedResidentAvailable == v16;
        LODWORD(CachedResidentAvailable) = v16;
        if ( v15 )
          break;
        if ( v16 == -1 || v1 + v16 > 0x100 )
          goto LABEL_25;
      }
    }
LABEL_30:
    if ( (*(_DWORD *)(a1 + 56) & 4) != 0 )
      return 3221225626LL;
    v17 = *(_QWORD *)(*(_QWORD *)a1 + 17280LL);
    if ( v17 <= 0 )
      return 3221225626LL;
    v18 = *(_QWORD *)(a1 + 40);
    if ( v17 <= v18 )
      return 3221225626LL;
    v19 = *(_QWORD *)(*(_QWORD *)a1 + 17576LL);
    v20 = v17 - v18;
    v21 = *(_QWORD *)(*(_QWORD *)a1 + 17816LL);
    if ( v19 < v21 )
    {
      v22 = v21 - v19;
      if ( v22 < v20 )
        v20 = v22;
    }
    if ( v1 <= v20 )
    {
      if ( v1 <= v3 )
      {
        if ( v5 || v3 == 1 )
          return 3221225626LL;
        while ( v1 < v3 )
          v3 >>= 1;
        if ( !v3 )
          v3 = 1LL;
      }
      v1 -= v3;
    }
    else
    {
      v1 = v20;
    }
    v23 = *(_DWORD *)(a1 + 56);
    if ( (v23 & 0x40) != 0 )
    {
      v2 = *(_QWORD *)(a1 + 24) - 1LL;
    }
    else
    {
      LOWORD(v2) = *(_DWORD *)(a1 + 56);
      if ( (v23 & 0x20) == 0 )
        goto LABEL_53;
      v24 = *(_QWORD *)(a1 + 24);
      if ( !v24 )
        goto LABEL_53;
      v2 = v24 - 1;
    }
    v1 &= ~v2;
    LOWORD(v2) = *(_DWORD *)(a1 + 56);
LABEL_53:
    if ( !v1 )
      return 3221225626LL;
  }
  Pool = *(_WORD **)(a1 + 64);
LABEL_10:
  v8 = v6 << 12;
  *(_QWORD *)Pool = 0LL;
  Pool[5] = 0;
  Pool[4] = 8 * ((v8 >> 12) + 6);
  *((_QWORD *)Pool + 4) = 0LL;
  *((_QWORD *)Pool + 5) = (unsigned int)v8;
  *(_QWORD *)(a1 + 32) = v1;
  *(_QWORD *)(a1 + 64) = Pool;
  if ( *(_UNKNOWN **)a1 == &MiSystemPartition && (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
    _InterlockedExchangeAdd64(&qword_140C699B0, v1);
  return 0LL;
}
