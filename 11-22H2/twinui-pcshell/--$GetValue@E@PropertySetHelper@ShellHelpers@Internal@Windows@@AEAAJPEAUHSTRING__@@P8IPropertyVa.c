/*
 * XREFs of ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800DDC9C
 * Callers:
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180010098 (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800195D0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180039D90 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800992D0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180112970 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     _lambda_15831a3e11fde15e653ed50ac8f9facd_::operator() @ 0x180212644 (_lambda_15831a3e11fde15e653ed50ac8f9facd_--operator().c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180420650 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804301F0 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804378C0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18045FD08 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18047AD5C (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18048570C (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAE@Z @ 0x1804C3F6C (-GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1805B39F4 (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 * Callees:
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800DDD20 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJA@AA @ 0x18028E834 (--_9IPropertyValue@Foundation@Windows@@$BJA@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        HSTRING a2,
        __int64 a3,
        _BYTE *a4)
{
  int PropVal; // ebx
  struct Windows::Foundation::IPropertyValue *v6; // rcx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v11; // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0;
  v11 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(a1, a2, &v11);
  if ( PropVal >= 0 )
  {
    v8 =  Windows::Foundation::IPropertyValue::`vcall'{144,{flat}}(v11, a4);
    PropVal = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v8,
        v9);
    else
      PropVal = 0;
  }
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)PropVal;
}
