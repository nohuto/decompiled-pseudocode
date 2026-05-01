/*
 * XREFs of ?UnsubscribeFromServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180165AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::UnsubscribeFromServices(
        TabletModePositioner *this,
        struct IServiceProvider *a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v7; // eax
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 52) = 2;
  v4 = (__int64 *)((char *)this + 280);
  v5 = *((_QWORD *)this + 35);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
  }
  if ( *((_DWORD *)this + 117) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 32LL))(*((_QWORD *)this + 40));
    *((_DWORD *)this + 117) = 0;
  }
  if ( *((_DWORD *)this + 118) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 80LL))(*((_QWORD *)this + 41));
    *((_DWORD *)this + 118) = 0;
  }
  if ( *((_DWORD *)this + 119) )
  {
    v15 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v15);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1CA,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v7);
    else
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, *((unsigned int *)this + 119));
    *((_DWORD *)this + 119) = 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  }
  if ( *((_DWORD *)this + 120) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 32LL))(*((_QWORD *)this + 47));
    *((_DWORD *)this + 120) = 0;
  }
  if ( *((_DWORD *)this + 121) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 40LL))(*((_QWORD *)this + 48));
    *((_DWORD *)this + 121) = 0;
  }
  if ( *((_DWORD *)this + 122) )
  {
    v15 = 0LL;
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v8)(
           a2,
           &SID_ShellTargetingTracker,
           &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
           &v15);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1E0,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v9);
    else
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, *((unsigned int *)this + 122));
    *((_DWORD *)this + 122) = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
  if ( *((_DWORD *)this + 123) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 51) + 32LL))(*((_QWORD *)this + 51));
    *((_DWORD *)this + 123) = 0;
  }
  v10 = *((_QWORD *)this + 53);
  if ( !v10 )
    goto LABEL_24;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, 2LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 53);
LABEL_24:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 39);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 40);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 41);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 42);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 44);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 45);
    IUnknown_SetSite(*((IUnknown **)this + 36), 0LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 36);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 46);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 47);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 48);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 33);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 51);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 54);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EF,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
