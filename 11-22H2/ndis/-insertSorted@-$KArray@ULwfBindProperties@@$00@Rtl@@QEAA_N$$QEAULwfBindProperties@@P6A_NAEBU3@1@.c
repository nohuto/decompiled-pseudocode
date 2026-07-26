/*
 * XREFs of ?insertSorted@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@Z@Z @ 0x1C013C054
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013CF64 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?grow@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x1C013BEF8 (-grow@-$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ?insertAt@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z @ 0x1C013BF80 (-insertAt@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z.c)
 *     ndisLwfSortPredicate @ 0x1C013CF0C (ndisLwfSortPredicate.c)
 */

char __fastcall Rtl::KArray<LwfBindProperties,1>::insertSorted(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  char v3; // bl
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  int v9; // eax

  LODWORD(v2) = *(_DWORD *)(a1 + 4);
  v3 = 0;
  v6 = 0LL;
  if ( (_DWORD)v2 )
  {
    v7 = 0LL;
    while ( (unsigned __int8)ndisLwfSortPredicate(v7 + *(_QWORD *)(a1 + 8), a2) )
    {
      v2 = *(unsigned int *)(a1 + 4);
      ++v6;
      v7 += 64LL;
      if ( v6 >= v2 )
        goto LABEL_5;
    }
    return Rtl::KArray<LwfBindProperties,1>::insertAt(a1, v6, a2);
  }
  else
  {
LABEL_5:
    if ( Rtl::KArray<LwfBindProperties,1>::grow((unsigned int *)a1, (unsigned int)(v2 + 1)) )
    {
      v8 = *(_QWORD *)(a1 + 8) + ((unsigned __int64)*(unsigned int *)(a1 + 4) << 6);
      *(_OWORD *)v8 = *(_OWORD *)a2;
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(a2 + 20);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(a2 + 24);
      v9 = *(_DWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(v8 + 32) = v9;
      *(_DWORD *)(v8 + 36) = *(_DWORD *)(a2 + 36);
      *(_QWORD *)(v8 + 40) = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      v3 = 1;
      *(_DWORD *)(v8 + 48) = *(_DWORD *)(a2 + 48);
      *(_BYTE *)(v8 + 52) = *(_BYTE *)(a2 + 52);
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(a2 + 56);
      ++*(_DWORD *)(a1 + 4);
    }
    return v3;
  }
}
