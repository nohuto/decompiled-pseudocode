/*
 * XREFs of ?TearOutTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x18063C54C
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18005DF60 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TearOutTab(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        __int64 a2)
{
  signed int v2; // eax
  int v3; // ebx
  const char *v4; // r9
  const winrt::hresult_error *v5; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 6) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 5) + 96LL))(
           *((_QWORD *)this + 5),
           *((_QWORD *)this + 6),
           qword_18098F120,
           a2);
    try
    {
      if ( v2 < 0 )
        winrt::throw_hresult(v2);
    }
    catch ( winrt::hresult_invalid_argument )
    {
      return;
    }
    catch ( const winrt::hresult_error *v5 )
    {
      v3 = *((_DWORD *)v5 + 3);
      if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v3) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3EA,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          v4);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3EE,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          (const char *)(unsigned int)v3);
    }
  }
}
