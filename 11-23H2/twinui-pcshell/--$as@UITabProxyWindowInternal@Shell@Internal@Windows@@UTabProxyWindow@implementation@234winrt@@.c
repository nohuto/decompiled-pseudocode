/*
 * XREFs of ??$as@UITabProxyWindowInternal@Shell@Internal@Windows@@UTabProxyWindow@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITabProxyWindowInternal@Shell@Internal@Windows@@@1@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@1@@Z @ 0x180638E10
 * Callers:
 *     ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x180638F30 (-CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<Windows::Internal::Shell::ITabProxyWindowInternal,winrt::Windows::Internal::Shell::implementation::TabProxyWindow,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  signed int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<Windows::Internal::Shell::ITabProxyWindowInternal>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
