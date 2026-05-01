/*
 * XREFs of ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x180086434
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z @ 0x180086408 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@.c)
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1801F0FBC (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 * Callees:
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18008660C (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     TestQueryData @ 0x1800BCEA0 (TestQueryData.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::complete_helper(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]

  v2 = *(unsigned int *)(a1 + 184);
  v4 = *(_QWORD *)(a1 + 232);
  v5 = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_OWORD *)pv = 0LL;
  v7 = 0LL;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *))TestQueryData)(v4, a2, v2, &v5) )
  {
    *(_DWORD *)(a1 + 64) |= HIDWORD(pv[0]);
    if ( !pv[1] )
      *(_DWORD *)(a1 + 184) = pv[0];
    tip2::details::shared_data<0,0,0>::evaluate_and_report(a1, v7);
  }
  CoTaskMemFree(pv[1]);
}
