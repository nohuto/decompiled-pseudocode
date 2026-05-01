/*
 * XREFs of ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18001E9B8
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18001DF70 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18001D7B4 (-StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1DeleteWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18001EB50 (--1DeleteWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x18001EB7C (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18001F234 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18001F6F8 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180020094 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180020778 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800227B4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800227B4.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023798 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x1800599D0 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1803C5484 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        const struct CTaskWindowFinder *a2,
        bool *a3,
        struct IUnknown **a4)
{
  __int64 v8; // rbx
  int Window; // r14d
  unsigned __int64 v10; // rdi
  bool v11; // bl
  __int64 v12; // rax
  bool v13; // dl
  struct IUnknown *v15; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v17[40]; // [rsp+30h] [rbp-D0h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  v8 = *((_QWORD *)this + 20);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v17,
    "DeleteWindow");
  v17[0] = &CImmersiveAppTelemetry::DeleteWindow::`vftable';
  CImmersiveAppTelemetry::DeleteWindow::StartActivity(
    (CImmersiveAppTelemetry::DeleteWindow *)v17,
    *(const unsigned __int16 **)(v8 + 584));
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  Window = CImmersiveApp::CImmersiveWindowCollection::_GetWindow(this, a2, (struct ITaskWindow **)&v15, &v16);
  if ( Window >= 0 )
  {
    v10 = v16;
    v11 = v16 == 0;
    if ( *((_QWORD *)this + 17)
      && ((unsigned int)SHIsSameObject(v15, *((struct IUnknown **)this + 16))
       || v11
       && *((_QWORD *)this + 22) > 1uLL
       && (unsigned int)SHIsSameObject(
                          *(struct IUnknown **)(*((_QWORD *)this + 21) + 8LL),
                          *((struct IUnknown **)this + 16))) )
    {
      CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(this);
    }
    CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow(this, v10);
    ((void (__fastcall *)(struct IUnknown *, _QWORD))v15->lpVtbl[7].Release)(v15, 0LL);
    v12 = *((_QWORD *)this + 22);
    if ( v11 )
    {
      *a3 = 1;
      *((_BYTE *)this + 200) = 0;
      if ( v12 )
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, **((struct ITaskWindow ***)this + 21));
      }
      else
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, 0LL);
        if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
        {
          CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus(this, 0LL);
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this, v13);
        }
        *((_DWORD *)this + 51) = 0;
      }
      CImmersiveApp::CImmersiveWindowCollection::HideFrame(this);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    *a4 = v15;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17, (unsigned int)Window);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  CImmersiveAppTelemetry::DeleteWindow::~DeleteWindow((CImmersiveAppTelemetry::DeleteWindow *)v17);
  return (unsigned int)Window;
}
