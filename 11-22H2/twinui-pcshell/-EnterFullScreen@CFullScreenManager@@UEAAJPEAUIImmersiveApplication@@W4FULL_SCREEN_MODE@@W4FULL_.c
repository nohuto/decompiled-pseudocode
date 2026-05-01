/*
 * XREFs of ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803EF6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180015A20 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803EF780 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 */

__int64 __fastcall CFullScreenManager::EnterFullScreen(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 *v8; // rbx
  struct IApplicationView **v9; // r9
  int ViewForApplication; // eax
  int v11; // ebx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v15, v13);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v8);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(IUnknown **)(a1 - 72),
                         a2,
                         (struct IImmersiveApplication *)v8,
                         v9);
  v11 = ViewForApplication;
  if ( ViewForApplication >= 0 )
  {
    v11 = CFullScreenManager::EnterFullScreenForView(a1, v15, a3, a4);
    if ( v11 >= 0 )
      v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)ViewForApplication);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
  return (unsigned int)v11;
}
