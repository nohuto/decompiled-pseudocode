/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024B5C8
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235678 (--1-$test_data_control@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@2@XZ @ 0x18024C0D0 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@Q.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@AEAAKXZ @ 0x180240F68 (-Release@-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>::Release(result);
  return result;
}
