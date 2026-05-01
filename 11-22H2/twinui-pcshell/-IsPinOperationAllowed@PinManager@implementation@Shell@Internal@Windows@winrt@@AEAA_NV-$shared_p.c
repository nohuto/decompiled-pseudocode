/*
 * XREFs of ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A3868
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1806A3594 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180086364 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180086894 (-reset@-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@.c)
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x1800868B8 (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$OperationAllowedChecked@AEA_NW4OperationAllowedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAXAEA_N$$QEAW4OperationAllowedCheckResult@0@@Z @ 0x18069A558 (--$OperationAllowedChecked@AEA_NW4OperationAllowedCheckResult@PinManagerTelemetry@@@PinManagerTe.c)
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1806A3964 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinOperationAllowed(
        __int64 a1,
        _QWORD *a2,
        char a3,
        void **a4)
{
  RTL_SRWLOCK *v6; // r9
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v11; // rcx
  LPVOID pv; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  char v14[8]; // [rsp+38h] [rbp-30h] BYREF

  v14[0] = a3;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v13,
    a2);
  if ( (unsigned __int8)PinHistory::IsPinOperationBlocked(v6 + 16) )
  {
    v7 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(a4);
    pv = (LPVOID)v7;
    if ( v7 )
      _InterlockedIncrement(v7 + 332);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v7 + 2));
    *((_DWORD *)v7 + 327) = 3;
    tip2::details::shared_data<0,0,0>::end_update((__int64)(v7 + 2), v8);
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&pv);
    if ( pv )
      tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)pv);
    LODWORD(pv) = 1;
    PinManagerTelemetry::OperationAllowedChecked<bool &,enum PinManagerTelemetry::OperationAllowedCheckResult>(
      v14,
      (int *)&pv);
    v9 = (std::_Ref_count_base *)a2[1];
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return 0;
  }
  else
  {
    LODWORD(pv) = 0;
    PinManagerTelemetry::OperationAllowedChecked<bool &,enum PinManagerTelemetry::OperationAllowedCheckResult>(
      v14,
      (int *)&pv);
    v11 = (std::_Ref_count_base *)a2[1];
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return 1;
  }
}
