/*
 * XREFs of ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1801B3F00
 * Callers:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1801F0F90 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18046BC88 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 * Callees:
 *     ?update_from_test_info@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x180013178 (-update_from_test_info@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_gu.c)
 *     TestQueryData @ 0x1800BCEA0 (TestQueryData.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18046C7E4 (-evaluate_and_report@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 */

void __fastcall tip2::details::shared_data<1,0,0>::complete_helper(__int64 a1, unsigned int a2)
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
    tip2::details::shared_data<1,0,0>::update_from_test_info(a1, (__int64)&v5);
    tip2::details::shared_data<1,0,0>::evaluate_and_report(a1, v7);
  }
  CoTaskMemFree(pv[1]);
}
