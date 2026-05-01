/*
 * XREFs of ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180015990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180015A20 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180015AD0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CFullScreenManager::IsFullScreen(IUnknown **this, struct IUnknown *a2, int *a3)
{
  struct IImmersiveApplication *v6; // rbx
  struct IApplicationView **v7; // r9
  int ViewForApplication; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  v14 = 0LL;
  v6 = *(struct IImmersiveApplication **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                           &v14,
                                           &v15);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v6);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(*(this - 9), a2, v6, v7);
  v9 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    v11 = 286LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)ViewForApplication,
      v12);
    goto LABEL_4;
  }
  ViewForApplication = CFullScreenManager::IsViewFullScreen((CFullScreenManager *)this, v14, a3);
  v9 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    v11 = 287LL;
    goto LABEL_7;
  }
  v9 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  return v9;
}
