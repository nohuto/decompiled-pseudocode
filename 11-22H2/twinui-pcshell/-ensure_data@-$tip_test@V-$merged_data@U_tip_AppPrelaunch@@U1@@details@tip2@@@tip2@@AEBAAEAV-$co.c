/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249B88
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@1@XZ @ 0x180235D04 (--C-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data_con.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@2@XZ @ 0x18024C0D0 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@Q.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@2@XZ @ 0x18024C158 (-watch_errors@-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA-AV-$te.c)
 * Callees:
 *     ??0?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@XZ @ 0x180233C14 (--0-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235028 (--1-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180235B5C (--4-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x160uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v5 = tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>((__int64)v2);
    wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>((void **)&v5);
  }
  return a1;
}
