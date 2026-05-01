/*
 * XREFs of ?GetForCurrentThread@?$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180656A50
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_871e5350aad6bf1182fd63b884b2a598_@@CA@AEBUIDispatcherQueueStatics@System@Windows@winrt@@@Z @ 0x180656320 (-_lambda_invoker_cdecl_@_lambda_871e5350aad6bf1182fd63b884b2a598_@@CA@AEBUIDispatcherQueueStatic.c)
 *     ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x180656FC8 (-XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_IDispatcherQueueStatics<winrt::Windows::System::IDispatcherQueueStatics>::GetForCurrentThread(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}
