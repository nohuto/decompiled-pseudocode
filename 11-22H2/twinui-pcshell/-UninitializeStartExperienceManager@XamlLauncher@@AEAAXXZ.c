/*
 * XREFs of ?UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ @ 0x1800F5A94
 * Callers:
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F54E0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncher::UninitializeStartExperienceManager(XamlLauncher *this)
{
  IUnknown **v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (IUnknown **)((char *)this + 184);
  v3 = *((_QWORD *)this + 23);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 29) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 200LL))(v3);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x442,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v7,
          v9);
      *((_QWORD *)this + 29) = 0LL;
    }
    if ( *((_QWORD *)this + 30) )
    {
      v8 = ((__int64 (__fastcall *)(IUnknown *))(*v1)->lpVtbl[9].QueryInterface)(*v1);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x448,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v8,
          v9);
      *((_QWORD *)this + 30) = 0LL;
    }
    if ( *((_QWORD *)this + 31) )
    {
      v4 = ((__int64 (__fastcall *)(IUnknown *))(*v1)->lpVtbl[10].AddRef)(*v1);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x44E,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v4,
          v9);
      *((_QWORD *)this + 31) = 0LL;
    }
    if ( *((_QWORD *)this + 32) )
    {
      v5 = ((__int64 (__fastcall *)(IUnknown *))(*v1)->lpVtbl[11].QueryInterface)(*v1);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x454,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v5,
          v9);
      *((_QWORD *)this + 32) = 0LL;
    }
    if ( *((_QWORD *)this + 33) )
    {
      v6 = ((__int64 (__fastcall *)(IUnknown *))(*v1)->lpVtbl[9].Release)(*v1);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x45A,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v6,
          v9);
      *((_QWORD *)this + 33) = 0LL;
    }
    IUnknown_SetSite(*v1, 0LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v1);
  }
}
