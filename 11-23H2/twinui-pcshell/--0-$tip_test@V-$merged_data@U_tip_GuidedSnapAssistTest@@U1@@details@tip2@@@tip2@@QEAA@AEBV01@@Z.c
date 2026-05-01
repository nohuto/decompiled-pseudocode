/*
 * XREFs of ??0?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x18022B9CC
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x1806878B4 (CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___--CMultitaskingViewTask.c)
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806883CC (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802240D0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(
        void **a1,
        void **a2)
{
  void **v3; // rax
  volatile signed __int32 *v4; // rdx

  v3 = tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::ensure_data(a2);
  v4 = (volatile signed __int32 *)*v3;
  *a1 = *v3;
  if ( v4 )
    _InterlockedIncrement(v4 + 72);
  return a1;
}
