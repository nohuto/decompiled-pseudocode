/*
 * XREFs of ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180053A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180053B00 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180053DA8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CFullScreenManager::IsFullScreen(IUnknown **this, struct IUnknown *a2, int *a3)
{
  __int64 **v6; // rax
  __int64 *AddressOf; // rax
  struct IApplicationView **v8; // r9
  int ViewForApplication; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  v15 = 0LL;
  v6 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v15, &v16, a3);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(*v6);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(this - 9),
                         a2,
                         (struct IImmersiveApplication *)AddressOf,
                         v8);
  v10 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    v12 = 286LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)ViewForApplication,
      v13);
    goto LABEL_4;
  }
  ViewForApplication = CFullScreenManager::IsViewFullScreen((CFullScreenManager *)this, v15, a3);
  v10 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    v12 = 287LL;
    goto LABEL_7;
  }
  v10 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
  return v10;
}
