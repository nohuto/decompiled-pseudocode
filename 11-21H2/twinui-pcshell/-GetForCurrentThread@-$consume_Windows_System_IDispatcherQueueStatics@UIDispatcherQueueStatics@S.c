/*
 * XREFs of ?GetForCurrentThread@?$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@System@Windows@winrt@@@impl@winrt@@QEBA?AUDispatcherQueue@System@Windows@3@XZ @ 0x1805AF308
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_871e5350aad6bf1182fd63b884b2a598_@@CA?AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@345@@Z @ 0x1805AD3E0 (-_lambda_invoker_cdecl_@_lambda_871e5350aad6bf1182fd63b884b2a598_@@CA-AUDispatcherQueue@System@W.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B11AC (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_IDispatcherQueueStatics<winrt::Windows::System::IDispatcherQueueStatics>::GetForCurrentThread(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}
