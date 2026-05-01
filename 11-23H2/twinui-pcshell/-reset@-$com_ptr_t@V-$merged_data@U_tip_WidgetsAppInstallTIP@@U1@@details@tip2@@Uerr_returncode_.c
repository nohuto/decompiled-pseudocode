/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024B70C
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18023585C (--1-$test_data_control@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18024C034 (-start@-$tip_test@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@AEAAKXZ @ 0x1802411F0 (-Release@-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>::Release(result);
  return result;
}
