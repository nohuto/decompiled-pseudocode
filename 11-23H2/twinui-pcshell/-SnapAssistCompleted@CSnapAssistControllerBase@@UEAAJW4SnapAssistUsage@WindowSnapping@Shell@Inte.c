/*
 * XREFs of ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x18066B9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B68FC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E48 (--1-$test_data_control@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@1@XZ @ 0x180223F70 (--C-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_d.c)
 *     ?_Tidy@?$vector@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1802D29C0 (-_Tidy@-$vector@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x180669E28 (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x18066AB0C (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ?_Clear_and_reserve_geometric@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x18066D634 (-_Clear_and_reserve_geometric@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistControllerBase::SnapAssistCompleted(__int64 a1, int a2, __int64 a3, const void *a4)
{
  __int64 v5; // rbx
  BOOL v8; // esi
  __int64 v9; // r14
  size_t v10; // r8
  char *v11; // rbx
  __int64 *v12; // rax
  void *v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int64 v16[3]; // [rsp+38h] [rbp-30h] BYREF
  void *v17; // [rsp+70h] [rbp+8h] BYREF

  v5 = (unsigned int)a3;
  v8 = a2 == 2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3,
    (__int64)a4);
  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  v9 = 8 * v5;
  if ( (_DWORD)v5 )
    std::vector<unsigned __int64>::_Clear_and_reserve_geometric(v14, (unsigned int)v5);
  v10 = 8 * v5;
  v11 = (char *)v14[0];
  memmove_0(v14[0], a4, v10);
  v14[1] = &v11[v9];
  v12 = std::vector<unsigned __int64>::vector<unsigned __int64>(v16, (__int64)v14);
  CSnapAssistControllerBase::EndGuidedSnapAssist(a1 - 32, v8, v12);
  std::vector<unsigned __int64>::_Tidy((__int64)v14);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)(a1 + 280)) )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::operator->(
                  a1 + 280,
                  (__int64 *)&v17)
             + 264) = a2 != 2;
    tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>(&v17);
    tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((__int64 *)(a1 + 280));
  }
  return 0LL;
}
