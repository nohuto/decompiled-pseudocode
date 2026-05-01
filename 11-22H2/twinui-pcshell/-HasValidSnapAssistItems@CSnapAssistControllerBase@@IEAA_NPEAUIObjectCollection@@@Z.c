/*
 * XREFs of ?HasValidSnapAssistItems@CSnapAssistControllerBase@@IEAA_NPEAUIObjectCollection@@@Z @ 0x18066AFF8
 * Callers:
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x18066E048 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CSnapAssistControllerBase::HasValidSnapAssistItems(
        CSnapAssistControllerBase *this,
        struct IObjectCollection *a2)
{
  __int64 (__fastcall ***v2)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  struct IApplicationView *v3; // rdx
  HWND WindowForView; // rax
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-38h]
  unsigned int v8; // [rsp+30h] [rbp-30h] BYREF
  ApplicationViewHelpers *v9; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-20h]
  unsigned int v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v13; // [rsp+58h] [rbp-8h]
  ApplicationViewHelpers *v14; // [rsp+70h] [rbp+10h] BYREF

  v14 = this;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v6,
    (__int64)a2);
  v8 = 0;
  v9 = 0LL;
  v10 = &v6;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v8);
  v11 = v7;
  v12 = 0LL;
  v13 = &v6;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v11);
  while ( 1 )
  {
    if ( v8 == v11 && v10 == v13 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
      return 0;
    }
    v2 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v9;
    v14 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v2, v3);
    if ( !GetPropW(WindowForView, (LPCWSTR)0xA921) )
      break;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
    ++v8;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v8);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return 1;
}
