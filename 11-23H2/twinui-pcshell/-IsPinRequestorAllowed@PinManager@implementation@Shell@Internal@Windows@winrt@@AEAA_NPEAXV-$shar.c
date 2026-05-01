/*
 * XREFs of ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A3ACC
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
 *     ??$RequestorAllowedChecked@AEA_NW4RequestorAllowedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAXAEA_N$$QEAW4RequestorAllowedCheckResult@0@@Z @ 0x18069A9E4 (--$RequestorAllowedChecked@AEA_NW4RequestorAllowedCheckResult@PinManagerTelemetry@@@PinManagerTe.c)
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x1806A0F94 (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 *     _anonymous_namespace_::IsAppsFolderEntryPresent @ 0x1806A310C (_anonymous_namespace_--IsAppsFolderEntryPresent.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54A4 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinRequestorAllowed(
        __int64 a1,
        void *a2,
        _QWORD *a3,
        char a4,
        void **a5)
{
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rdx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-20h] BYREF
  char v19[8]; // [rsp+58h] [rbp-18h] BYREF

  pv = a3;
  v19[0] = a4;
  if ( a4 )
  {
    v16 = *(_OWORD *)PinRequestContext::RequestorBestAvailableAppId(*a3, v17);
    if ( !anonymous_namespace_::IsAppsFolderEntryPresent(&v16) )
    {
      v7 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(a5);
      pv = (LPVOID)v7;
      if ( v7 )
        _InterlockedIncrement(v7 + 332);
      tip2::details::shared_data<0,0,1>::begin_update((__int64)(v7 + 2));
      *((_DWORD *)v7 + 327) = 5;
      tip2::details::shared_data<0,0,0>::end_update((__int64)(v7 + 2), v8);
      wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&pv);
      if ( pv )
        tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)pv);
      LODWORD(pv) = 1;
LABEL_14:
      PinManagerTelemetry::RequestorAllowedChecked<bool &,enum PinManagerTelemetry::RequestorAllowedCheckResult>(
        v19,
        (int *)&pv);
      v12 = (std::_Ref_count_base *)a3[1];
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      return 0;
    }
    v9 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
           &v15,
           a3);
    if ( !anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements(a2, v9) )
    {
      v10 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(a5);
      pv = (LPVOID)v10;
      if ( v10 )
        _InterlockedIncrement(v10 + 332);
      tip2::details::shared_data<0,0,1>::begin_update((__int64)(v10 + 2));
      *((_DWORD *)v10 + 327) = 4;
      tip2::details::shared_data<0,0,0>::end_update((__int64)(v10 + 2), v11);
      wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&pv);
      if ( pv )
        tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)pv);
      LODWORD(pv) = 2;
      goto LABEL_14;
    }
  }
  LODWORD(pv) = 0;
  PinManagerTelemetry::RequestorAllowedChecked<bool &,enum PinManagerTelemetry::RequestorAllowedCheckResult>(
    v19,
    (int *)&pv);
  v14 = (std::_Ref_count_base *)a3[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  return 1;
}
