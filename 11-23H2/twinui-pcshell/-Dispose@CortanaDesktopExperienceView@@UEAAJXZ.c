/*
 * XREFs of ?Dispose@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180482450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18004418C (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x18047E22C (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::Dispose(CortanaDesktopExperienceView *this)
{
  __int64 *v2; // r14
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = (__int64 *)((char *)this + 96);
  v3 = *((_QWORD *)this + 12);
  v4 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  v5 = v4(v3, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v12);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2AF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
  v6 = v12;
  if ( v12 )
  {
    if ( *((_DWORD *)this + 57) )
    {
      (*(void (**)(void))(*(_QWORD *)v12 + 32LL))();
      *((_DWORD *)this + 57) = 0;
      v6 = v12;
    }
    if ( *((_DWORD *)this + 58) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      *((_DWORD *)this + 58) = 0;
    }
  }
  v13 = 0LL;
  v7 = *v2;
  v8 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)*v2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  v9 = v8(v7, &IID_IImmersiveSessionIdleDetector, &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29, &v13);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C1,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v9);
  if ( v13 && *((_DWORD *)this + 61) )
  {
    (*(void (**)(void))(*(_QWORD *)v13 + 40LL))();
    *((_DWORD *)this + 61) = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 31,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 32,
    0LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 8LL))(*((_QWORD *)this + 10));
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (void **)this + 10,
    0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return 0LL;
}
