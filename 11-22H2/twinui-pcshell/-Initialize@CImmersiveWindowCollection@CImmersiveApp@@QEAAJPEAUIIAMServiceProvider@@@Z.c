/*
 * XREFs of ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180029780
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180028844 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180024724 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x180029A3C (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180029CD8 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180064538 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::Initialize(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IIAMServiceProvider *a2)
{
  bool v4; // bl
  __int64 *v5; // r14
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  void (__fastcall ***v10)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rdi
  void (__fastcall *v11)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  __int64 v12; // rdi
  struct IIAMServiceProvider *v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, char *); // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, char *); // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  *((_BYTE *)this + 203) = 0;
  v4 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 20) + 88LL) + 328LL))(
         *((_QWORD *)this + 20) + 88LL,
         0LL)
    && !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 20) + 88LL) + 328LL))(
          *((_QWORD *)this + 20) + 88LL,
          4LL);
  v5 = (__int64 *)((char *)this + 152);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((char *)this + 152);
  v6 = *((_QWORD *)this + 20);
  v19 = (v6 + 112) & -(__int64)(v6 != 0);
  LODWORD(v17) = *(_DWORD *)(v6 + 592);
  v15 = *(_QWORD *)(v6 + 584);
  v14 = a2;
  LOBYTE(v16) = v4;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CFrameApplicationPresentation,CFrameApplicationPresentation,unsigned short const * &,unsigned long &,bool &,IIAMServiceProvider * &,IImmersiveApplicationInternal * &>(
         (unsigned int)&v18,
         (unsigned int)&v15,
         (unsigned int)&v17,
         (unsigned int)&v16,
         (__int64)&v14,
         (__int64)&v19);
  if ( v7 >= 0 )
    v7 = (**v18)(v18, &GUID_ab535146_7d9a_4d26_a0a7_404fd8355fb0, (char *)this + 152);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  if ( v7 >= 0 )
  {
    v17 = 0LL;
    v8 = *v5;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 136LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    v7 = v9(v8, &v17);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v15);
      if ( v7 >= 0 )
      {
        v16 = 0LL;
        v10 = (void (__fastcall ***)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))*((_QWORD *)this + 20);
        v11 = **v10;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
        v11(v10, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v16);
        v18 = v16;
        v19 = *v5;
        v12 = *((_QWORD *)this + 20);
        Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((char *)this + 248);
        v7 = Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
               (int)this + 248,
               (unsigned int)&v15,
               (int)v12 + 752,
               (unsigned int)&v19,
               (__int64)&v18);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    if ( v7 >= 0 )
    {
      *((_BYTE *)this + 200) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v5 + 104LL))(*v5);
      CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(this);
    }
  }
  return (unsigned int)v7;
}
