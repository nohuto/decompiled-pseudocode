/*
 * XREFs of ?SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D7D70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x180179C2C (-RecoverPriorities@ShellPositionerManager@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerManager::SubscribeToServices(
        ShellPositionerManager *this,
        struct IServiceProvider *a2)
{
  char *v2; // rbx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v6; // ebx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v8; // rdi
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (char *)this + 128;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v2);
  if ( v6 < 0 )
  {
    v12 = 206LL;
  }
  else
  {
    v7 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 17);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
           a2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (char *)this + 136);
    if ( v6 < 0 )
    {
      v12 = 207LL;
    }
    else
    {
      v8 = (_QWORD *)((char *)this + 144);
      v9 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
      v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
             a2,
             &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
             &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
             (char *)this + 144);
      if ( v6 < 0 )
      {
        v12 = 208LL;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 17) + 96LL))(
               *((_QWORD *)this + 17),
               ((unsigned __int64)this + 72) & -(__int64)(this != (ShellPositionerManager *)24),
               (char *)this + 160);
        if ( v6 < 0 )
        {
          v12 = 210LL;
        }
        else
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v8 + 72LL))(
                 *v8,
                 ((unsigned __int64)this + 80) & -(__int64)(this != (ShellPositionerManager *)24),
                 (char *)this + 164);
          if ( v6 < 0 )
          {
            v12 = 211LL;
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v8 + 24LL))(*v8, (char *)this + 120);
            v10 = a2->lpVtbl->QueryService;
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
            v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
                   a2,
                   &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
                   &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
                   (char *)this + 152);
            if ( v6 >= 0 )
            {
              ShellPositionerManager::RecoverPriorities((ShellPositionerManager *)((char *)this - 24));
              return 0LL;
            }
            v12 = 214LL;
          }
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
