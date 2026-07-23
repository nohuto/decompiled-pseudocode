/*
 * XREFs of ExInitializePagedHeaps @ 0x140388BA4
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     ExCreateHeap @ 0x140388E4C (ExCreateHeap.c)
 *     RtlpDynamicLookasideInitialize @ 0x140389E70 (RtlpDynamicLookasideInitialize.c)
 */

__int64 ExInitializePagedHeaps()
{
  unsigned int v0; // esi
  __int64 v1; // r14
  int v2; // ecx
  _RTL_RUN_ONCE v3; // rdi
  _RTL_RUN_ONCE v4; // rax
  __int64 Value; // rax
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-10h] BYREF
  _RTL_RUN_ONCE v10; // [rsp+50h] [rbp+20h] BYREF

  v10.Value = 0LL;
  v0 = 0;
  if ( dword_140C749E0 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      BYTE2(v9) = v0;
      LOBYTE(v9) = 2;
      v1 = 1048LL * v0;
      v2 = ExCreateHeap(&v9, 0LL, &v10);
      if ( v2 < 0 )
        break;
      v3.Ptr = v10.Ptr;
      if ( PoolForceFullDecommit )
      {
        *(_DWORD *)(v10.Value + 880) |= 2u;
        *(_BYTE *)(v3.Value + 333) |= 8u;
        *(_BYTE *)(v3.Value + 525) |= 8u;
      }
      ExPoolState[v1 + 1826] = v3;
      RtlpDynamicLookasideInitialize(&ExPoolState[v1 + 1832]);
      *(_QWORD *)(v3.Value + 40) = &ExPoolState[v1 + 1832];
      v9 = 0LL;
      BYTE2(v9) = v0;
      LOBYTE(v9) = 10;
      v2 = ExCreateHeap(&v9, 0LL, &v10);
      if ( v2 < 0 )
        break;
      v4.Ptr = v10.Ptr;
      ++v0;
      ExPoolState[v1 + 1827] = v10;
      *(_DWORD *)(v4.Value + 880) |= 2u;
      *(_BYTE *)(v4.Value + 333) |= 8u;
      *(_BYTE *)(v4.Value + 525) |= 8u;
      if ( v0 >= dword_140C749E0 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v9 = 0LL;
    LOBYTE(v9) = 2;
    v2 = ExCreateHeap(&v9, 0LL, &v10);
    if ( v2 >= 0 )
    {
      Value = v10.Value;
      v9 = 0LL;
      LOBYTE(v9) = 10;
      v6 = v9;
      *(_DWORD *)(v10.Value + 880) |= 2u;
      *(_BYTE *)(Value + 333) |= 8u;
      *(_BYTE *)(Value + 525) |= 8u;
      qword_140CF7A10 = Value;
      v9 = v6;
      v2 = ExCreateHeap(&v9, 0LL, &v10);
      if ( v2 >= 0 )
      {
        v7 = v10.Value;
        *(_DWORD *)(v10.Value + 880) |= 2u;
        *(_BYTE *)(v7 + 333) |= 8u;
        *(_BYTE *)(v7 + 525) |= 8u;
        qword_140CF7A18 = v7;
      }
    }
  }
  return (unsigned int)v2;
}
