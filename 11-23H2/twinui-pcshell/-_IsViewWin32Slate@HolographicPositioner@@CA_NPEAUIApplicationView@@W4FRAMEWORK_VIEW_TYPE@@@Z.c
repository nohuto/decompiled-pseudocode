/*
 * XREFs of ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180076980
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180076440 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800765C0 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180076818 (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180152FD0 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180153188 (-_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Applicat.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804ADDD4 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804AECE8 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x18005CE70 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18016BDA0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall HolographicPositioner::_IsViewWin32Slate(void (__fastcall ***a1)(_QWORD, GUID *, _QWORD *), int a2)
{
  void (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v5 = a1;
  if ( !IsHolographicWin32SlatesFeatureEnabled() )
    return 0;
  wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v7, &v5);
  if ( !v7 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
    return 0;
  }
  v6 = 0;
  if ( a2 == 6 && ((int (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *), int *))(*a1)[50])(a1, &v6) >= 0 )
    a2 = v6;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  return a2 == 0;
}
