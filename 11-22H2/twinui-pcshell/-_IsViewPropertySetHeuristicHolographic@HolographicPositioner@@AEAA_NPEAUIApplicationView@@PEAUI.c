/*
 * XREFs of ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180076818
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800765C0 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1800768C0 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180076980 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800769D8 (-_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@F.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1800DDB28 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180153204 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchHeuristic@@$$QEAI@Z @ 0x1804A7CC4 (--$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SA.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1804AEBF4 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x1804AF334 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1804AF364 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1804AF5FC (-_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall HolographicPositioner::_IsViewPropertySetHeuristicHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  HWND ForegroundWindow; // rax
  HolographicPositioner *v7; // rcx
  HWND v8; // rsi
  __int64 v10; // rax
  unsigned int *v11; // rdx
  unsigned int *p_ApplicationViewUniqueIdForTracing; // rcx
  int v13; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int ApplicationViewUniqueIdForTracing; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v16; // [rsp+30h] [rbp-40h] BYREF
  int v17; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v19; // [rsp+58h] [rbp-18h]

  if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) && !*((_BYTE *)this + 296) )
    return 0;
  ForegroundWindow = GetForegroundWindow();
  v8 = ForegroundWindow;
  if ( !ForegroundWindow
    || (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(ForegroundWindow, 0LL, &v17) < 0
    || v17 != 1 )
  {
LABEL_5:
    if ( !HolographicPositioner::_IsPropertySetCallerProcessExplorer(v7, a3)
      && HolographicPositioner::_IsDisplayContextHolographic(this)
      && HolographicPositioner::_IsInputContextHolographic(this)
      && !(unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
    {
      ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      v14 = 2;
      HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic,unsigned int>(
        &v14,
        &ApplicationViewUniqueIdForTracing);
      return 1;
    }
    return 0;
  }
  v16 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807F46C0);
  if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
         *(HSTRING *)(v10 + 24))
    && (v13 = 0, (int)HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(this, a3, v8, &v13) >= 0)
    && v13 )
  {
    v14 = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    ApplicationViewUniqueIdForTracing = 1;
    v11 = &v14;
    p_ApplicationViewUniqueIdForTracing = &ApplicationViewUniqueIdForTracing;
  }
  else
  {
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"AAMShim.CallingProcessId",
      0x19u,
      0x18u);
    if ( !Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
            v19)
      || (v13 = 0, (int)HolographicPositioner::_IsPropertySetActivationSourceProcessIdForeground(this, a3, v8, &v13) < 0)
      || !v13 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
      goto LABEL_5;
    }
    ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    v14 = 0;
    v11 = &ApplicationViewUniqueIdForTracing;
    p_ApplicationViewUniqueIdForTracing = &v14;
  }
  HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic,unsigned int>(
    p_ApplicationViewUniqueIdForTracing,
    v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return 1;
}
