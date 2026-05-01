/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024B5EC
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802356B0 (--1-$test_data_control@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18024BEA0 (-start@-$tip_test@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@AEAAKXZ @ 0x180240FB0 (-Release@-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>::Release(result);
  return result;
}
