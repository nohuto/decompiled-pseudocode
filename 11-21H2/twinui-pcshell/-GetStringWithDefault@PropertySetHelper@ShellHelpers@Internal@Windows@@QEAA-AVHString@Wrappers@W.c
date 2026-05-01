/*
 * XREFs of ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x18013B7B0
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180094910 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18035E1DC (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18038BDC8 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F2EE0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180093870 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18013B958 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x1801F1690 (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 */

// Hidden C++ exception states: #wind=4
HSTRING *__fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        HSTRING *a2,
        HSTRING a3)
{
  int v7; // eax
  struct Windows::Foundation::IPropertyValue *v8; // rcx
  struct Windows::Foundation::IPropertyValue *v9; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]

  *a2 = 0LL;
  WindowsDeleteString(0LL);
  *a2 = 0LL;
  v9 = 0LL;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(a1, a3, &v9) < 0 )
    goto LABEL_2;
  v7 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}(v9, a2);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v7);
LABEL_2:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
    Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(a2);
    return a2;
  }
  v8 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return a2;
}
