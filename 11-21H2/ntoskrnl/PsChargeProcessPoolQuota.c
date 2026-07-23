/*
 * XREFs of PsChargeProcessPoolQuota @ 0x140367C40
 * Callers:
 *     PsChargePoolQuota @ 0x1402331B0 (PsChargePoolQuota.c)
 *     sub_14024CCD0 @ 0x14024CCD0 (sub_14024CCD0.c)
 *     sub_140A6E9A4 @ 0x140A6E9A4 (sub_140A6E9A4.c)
 * Callees:
 *     sub_1402436C8 @ 0x1402436C8 (sub_1402436C8.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  NTSTATUS v5; // ebp
  __int64 v6; // r15
  unsigned __int64 *v7; // rbx
  char v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 i; // [rsp+60h] [rbp+8h] BYREF

  if ( Process == PsInitialSystemProcess )
    return 0;
  v5 = 0;
  v6 = PoolType == PagedPool;
  v7 = (unsigned __int64 *)(*((_QWORD *)Process + 173) + (v6 << 7));
  v8 = byte_140D07030[8 * v6];
  _m_prefetchw(v7);
  v9 = *v7;
  _InterlockedOr(v22, 0);
  while ( 2 )
  {
    v10 = v7[8];
LABEL_4:
    for ( i = v10; ; v10 = i )
    {
      v11 = v9 + Amount;
      if ( v9 + Amount < v9 )
        return *(_DWORD *)&byte_140D07030[8 * v6 + 4];
      if ( v11 <= v10 )
        break;
      if ( (v8 & 1) == 0 || !v7[10] )
        return *(_DWORD *)&byte_140D07030[8 * v6 + 4];
      v20 = _InterlockedExchange64((volatile __int64 *)v7 + 9, 0LL);
      if ( v20 )
      {
        v10 = v20 + _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 8, v20);
        goto LABEL_4;
      }
      if ( !sub_1402436C8(v6, (__int64)v7, v9, Amount, &i) )
        return *(_DWORD *)&byte_140D07030[8 * v6 + 4];
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v11, v9);
    v12 = v9 == v13;
    v9 = v13;
    if ( !v12 )
      continue;
    break;
  }
  _m_prefetchw(v7 + 1);
  v14 = v7[1];
  if ( v11 > v14 )
  {
    do
    {
      v21 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 1, v11, v14);
    }
    while ( v14 != v21 && v11 > v14 );
  }
  if ( (v8 & 4) != 0 )
  {
    v15 = Amount + _InterlockedExchangeAdd64((volatile signed __int64 *)Process + v6 + 142, Amount);
    v16 = (char *)Process + 8 * v6;
    _m_prefetchw(v16 + 1152);
    v17 = *((_QWORD *)v16 + 144);
    if ( v15 > v17 )
    {
      do
      {
        v19 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 144, v15, v17);
      }
      while ( v17 != v19 && v15 > v17 );
    }
  }
  return v5;
}
