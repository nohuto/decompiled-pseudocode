/*
 * XREFs of ?SetSite@XamlLauncherState@@UEAAJPEAUIUnknown@@@Z @ 0x1800FC5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SetSite(XamlLauncherState *this, struct IUnknown *a2)
{
  __int64 *v2; // rdi
  HRESULT Service; // eax
  unsigned int v6; // ebp
  HRESULT v7; // edi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 280);
  if ( !a2 )
  {
    if ( *((_DWORD *)this + 68) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 32LL))(*v2);
      *((_DWORD *)this + 68) = 0;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
    if ( *((_DWORD *)this + 69) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
      *((_DWORD *)this + 69) = 0;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
    return 0LL;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  Service = IUnknown_QueryService(
              a2,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              (void **)v2);
  v6 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x101,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)Service);
    return v6;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, char *))(*(_QWORD *)*v2 + 24LL))(
         *v2,
         0LL,
         (char *)this + 40,
         (char *)this + 272);
  if ( v7 < 0 )
  {
    v12 = 258LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
  v7 = IUnknown_QueryService(
         a2,
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         (void **)this + 14);
  if ( v7 < 0 )
  {
    v12 = 260LL;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 14) + 32LL))(
         *((_QWORD *)this + 14),
         (char *)this + 48,
         (char *)this + 276);
  if ( v7 < 0 )
  {
    v12 = 261LL;
    goto LABEL_16;
  }
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
         a2,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         (char *)this + 120);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x107,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
