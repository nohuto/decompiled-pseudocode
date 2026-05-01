/*
 * XREFs of ??$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@1@PEAUimmersive_shell_component@1@@Z @ 0x1800D6694
 * Callers:
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800D8F80 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<IServiceProvider,winrt::immersive_shell_component,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, const IID *, __int64 *))
{
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<IServiceProvider>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
