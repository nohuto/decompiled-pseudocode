/*
 * XREFs of ?evaluate@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18046C204
 * Callers:
 *     ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18046C7E4 (-evaluate_and_report@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall tip2::details::shared_data<1,0,0>::evaluate(__int64 a1)
{
  __int64 (__fastcall ***v2)(_QWORD); // rcx
  __int64 result; // rax

  v2 = *(__int64 (__fastcall ****)(_QWORD))a1;
  if ( !tip2::details::g_test_interface_exception_guard )
    return (**v2)(v2);
  result = tip2::details::g_test_interface_exception_guard(v2, 0LL, 0LL, 0LL, 0LL);
  if ( !(_BYTE)result && !*(_BYTE *)(a1 + 160) )
  {
    *(_BYTE *)(a1 + 160) = 3;
    result = 16395LL;
    *(_WORD *)(a1 + 162) = 16395;
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  return result;
}
