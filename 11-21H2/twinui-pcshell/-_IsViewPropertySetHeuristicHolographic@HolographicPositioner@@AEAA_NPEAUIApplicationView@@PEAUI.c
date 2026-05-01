/*
 * XREFs of ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180099A4C
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180099AFC (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x180093334 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18009848C (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x18009B388 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009B3A8 (-_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@F.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x18009B474 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchHeuristic@@$$QEAI@Z @ 0x1803CAC44 (--$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SA.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1803D1D18 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x1803D2450 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1803D2480 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1803D2730 (-_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@.c)
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
  unsigned int v10; // r8d
  __int64 v11; // rax
  unsigned int *v12; // rdx
  unsigned int *p_ApplicationViewUniqueIdForTracing; // rcx
  int v14; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int ApplicationViewUniqueIdForTracing; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v20; // [rsp+58h] [rbp-18h]

  if ( HolographicPositioner::_IsViewWin32Slate((__int64)a2, 6) && !*((_BYTE *)this + 304) )
    return 0;
  ForegroundWindow = GetForegroundWindow();
  v8 = ForegroundWindow;
  if ( !ForegroundWindow
    || (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(ForegroundWindow, 0LL, &v18) < 0
    || v18 != 1 )
  {
LABEL_5:
    if ( !HolographicPositioner::_IsPropertySetCallerProcessExplorer(v7, a3)
      && HolographicPositioner::_IsDisplayContextHolographic(this)
      && HolographicPositioner::_IsInputContextHolographic(this)
      && !HolographicPositioner::_IsViewWin32Slate((__int64)a2, 6) )
    {
      ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      v15 = 2;
      HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic,unsigned int>(
        &v15,
        &ApplicationViewUniqueIdForTracing);
      return 1;
    }
    return 0;
  }
  v17 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)off_1806697C0,
          v10);
  if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
         *(HSTRING *)(v11 + 24))
    && (v14 = 0, (int)HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(this, a3, v8, &v14) >= 0)
    && v14 )
  {
    v15 = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    ApplicationViewUniqueIdForTracing = 1;
    v12 = &v15;
    p_ApplicationViewUniqueIdForTracing = &ApplicationViewUniqueIdForTracing;
  }
  else
  {
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"AAMShim.CallingProcessId",
      0x19u,
      0x18u);
    if ( !Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
            v20)
      || (v14 = 0, (int)HolographicPositioner::_IsPropertySetActivationSourceProcessIdForeground(this, a3, v8, &v14) < 0)
      || !v14 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
      goto LABEL_5;
    }
    ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    v15 = 0;
    v12 = &ApplicationViewUniqueIdForTracing;
    p_ApplicationViewUniqueIdForTracing = &v15;
  }
  HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic,unsigned int>(
    p_ApplicationViewUniqueIdForTracing,
    v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  return 1;
}
