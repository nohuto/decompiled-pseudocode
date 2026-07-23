/*
 * XREFs of sub_1402768E4 @ 0x1402768E4
 * Callers:
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_140275FC0 @ 0x140275FC0 (sub_140275FC0.c)
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     sub_140310AD0 @ 0x140310AD0 (sub_140310AD0.c)
 *     sub_140389670 @ 0x140389670 (sub_140389670.c)
 *     sub_1403C7DE0 @ 0x1403C7DE0 (sub_1403C7DE0.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 *     sub_14053D400 @ 0x14053D400 (sub_14053D400.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402768E4(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // rdi
  __int64 v10; // r10
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v9 = *((_QWORD *)CurrentPrcb + 268);
  ++*(_DWORD *)(v9 + 20);
  v10 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v9);
  if ( v10 )
    goto LABEL_2;
  ++*(_DWORD *)(v9 + 24);
  v12 = *((_QWORD *)CurrentPrcb + 269);
  ++*(_DWORD *)(v12 + 20);
  v10 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v12);
  if ( v10
    || (v13 = *(unsigned int *)(v12 + 44),
        v14 = *(unsigned int *)(v12 + 36),
        ++*(_DWORD *)(v12 + 24),
        (v10 = sub_14042A5E0(v14, v13)) != 0) )
  {
LABEL_2:
    *(_DWORD *)v10 = *((_DWORD *)CurrentPrcb + 9);
  }
  *a4 = v10;
  if ( !v10 )
    return 3221225626LL;
  *(_QWORD *)(v10 + 136) = a1;
  *(_QWORD *)(v10 + 144) = a2;
  *(_QWORD *)(v10 + 152) = a3;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1232)) <= 1 )
    __fastfail(0xEu);
  if ( a2 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8)) <= 1 )
      __fastfail(0xEu);
  }
  return 0LL;
}
