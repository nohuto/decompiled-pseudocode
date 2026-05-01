/*
 * XREFs of ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x180342430
 * Callers:
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x180332920 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 *     ?OnConsolidationRequestedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803352D4 (-OnConsolidationRequestedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewMan.c)
 *     ?OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180335A84 (-OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180335CC0 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803361DC (-OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180336664 (-OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

bool __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *this,
        int a2)
{
  bool result; // al
  signed int v4; // eax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0;
  v7 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3), &v7);
  try
  {
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    result = v7 == a2;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD3,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                           v5) != 0;
  }
  return result;
}
