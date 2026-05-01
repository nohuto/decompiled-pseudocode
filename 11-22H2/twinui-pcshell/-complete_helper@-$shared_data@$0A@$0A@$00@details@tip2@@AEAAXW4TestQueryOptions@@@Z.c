/*
 * XREFs of ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x180288A74
 * Callers:
 *     ??1?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x180287628 (--1-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180288B14 (-complete_without_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 * Callees:
 *     TestQueryData @ 0x1800BCEA0 (TestQueryData.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x180288E14 (-evaluate_and_report@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z.c)
 */

void __fastcall tip2::details::shared_data<0,0,1>::complete_helper(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]

  v2 = *(_DWORD *)(a1 + 184);
  v4 = *(_QWORD *)(a1 + 232);
  v5 = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_OWORD *)pv = 0LL;
  v7 = 0LL;
  if ( (unsigned int)TestQueryData(v4, a2, v2, (__int64)&v5) )
  {
    *(_DWORD *)(a1 + 64) |= HIDWORD(pv[0]);
    if ( !pv[1] )
      *(_DWORD *)(a1 + 184) = pv[0];
    tip2::details::shared_data<0,0,1>::evaluate_and_report(a1, v7);
  }
  CoTaskMemFree(pv[1]);
}
