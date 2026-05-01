/*
 * XREFs of ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18063BC48
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x180050D84 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800511E0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18063BF74 (-SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhs.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        const struct winrt::hstring *a2)
{
  int v4; // eax
  const WCHAR *v5; // rax
  HRESULT v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int ppv; // [rsp+20h] [rbp-18h]
  int ppva; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 185) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 96LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 4));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x387,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
        (const char *)(unsigned int)v4,
        ppv);
    *((_BYTE *)this + 185) = 0;
  }
  if ( *(_QWORD *)a2 )
  {
    v12 = 0LL;
    v5 = winrt::hstring::c_str(a2);
    v6 = SHCreateItemInKnownFolder(&FOLDERID_AppsFolder, 0x4000u, v5, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v12);
    if ( v6 >= 0 )
    {
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowAppUserModelId(this, a2);
      v7 = *((_QWORD *)this + 14);
      if ( v7 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 88LL))(
               v7,
               *((_QWORD *)this + 4),
               *((_QWORD *)this + 7));
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x39D,
            (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
            (const char *)(unsigned int)v8,
            ppva);
        *((_BYTE *)this + 185) = 1;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x391,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
        (const char *)(unsigned int)v6);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  }
  else
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowAppUserModelId(this, a2);
  }
}
