/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180225174
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@1@XZ @ 0x180224E88 (--C-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data_co.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@2@XZ @ 0x1802253A4 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@.c)
 * Callees:
 *     ??0?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@QEAA@XZ @ 0x180224BC4 (--0-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180224CE4 (--1-$com_ptr_t@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@.c)
 *     ?Release@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@AEAAKXZ @ 0x180224F0C (-Release@-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x178uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
