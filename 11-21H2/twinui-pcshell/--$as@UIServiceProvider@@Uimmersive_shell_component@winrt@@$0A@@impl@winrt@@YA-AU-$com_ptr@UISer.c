/*
 * XREFs of ??$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@1@PEAUimmersive_shell_component@1@@Z @ 0x1800F84E0
 * Callers:
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180079610 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<IServiceProvider,winrt::immersive_shell_component,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, const IID *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, const IID *, __int64 *); // rax
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *a2;
    v6 = 0LL;
    v4 = (*v3)(a2, &winrt::impl::guid_v<IServiceProvider>, &v6);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
