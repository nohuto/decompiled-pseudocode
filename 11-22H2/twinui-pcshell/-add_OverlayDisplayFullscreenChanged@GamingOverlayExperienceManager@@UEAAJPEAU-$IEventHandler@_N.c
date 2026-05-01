/*
 * XREFs of ?add_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801B2DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800E3E34 (-AddInternal@-$EventSource@U-$IEventHandler@_N@Foundation@Windows@@U-$InvokeModeOptions@$0-1@WRL.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@_N@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800EA390 (--$CreateAgileHelper@U-$IEventHandler@_N@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU-$IE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::add_OverlayDisplayFullscreenChanged(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v8 = 4005LL;
LABEL_11:
    v6 = -2147467261;
    goto LABEL_13;
  }
  if ( !a3 )
  {
    v8 = 4006LL;
    goto LABEL_11;
  }
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  v6 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<bool>>(a2, (__int64 *)&v10);
  if ( v6 >= 0 )
  {
    if ( v10 )
      v6 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             a1 + 1216,
             v10,
             *(void **)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v6 = -2147024809;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  if ( v6 >= 0 )
    return 0LL;
  v8 = 4008LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
