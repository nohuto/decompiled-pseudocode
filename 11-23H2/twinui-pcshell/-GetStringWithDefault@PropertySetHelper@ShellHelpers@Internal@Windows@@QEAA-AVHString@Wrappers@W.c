/*
 * XREFs of ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x180192A28
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800992D0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804301F0 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18045FD08 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800DDD20 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180192AE0 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x180295180 (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        _QWORD *a2,
        HSTRING a3,
        ...)
{
  int PropVal; // ebx
  int v8; // eax
  struct Windows::Foundation::IPropertyValue *v9[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  *a2 = 0LL;
  WindowsDeleteString(0LL);
  *a2 = 0LL;
  v9[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v9);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(a1, a3, v9);
  if ( PropVal >= 0 )
  {
    v8 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}(v9[0], a2);
    PropVal = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v8);
    else
      PropVal = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v9);
  if ( PropVal < 0 )
    Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(a2, va);
  return a2;
}
