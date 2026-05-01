/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024B658
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235758 (--1-$test_data_control@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@detai.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180249668 (-close@-$test_data_control@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@d.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18024BF3C (-start@-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@ti.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@AEAAKXZ @ 0x180241088 (-Release@-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@AEAAKX.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>::Release(result);
  return result;
}
