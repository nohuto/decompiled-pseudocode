/*
 * XREFs of ?RunAsync@?$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@AEBUWorkItemHandler@Threading@System@63@@Z @ 0x1800CB048
 * Callers:
 *     ??$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@?$factory_cache_entry@UThreadPool@Threading@System@Windows@winrt@@UIThreadPoolStatics@2345@@impl@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@2@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@Z @ 0x1800C93C0 (--$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@-$factory_cache_entry@UThreadPool@Thread.c)
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800CA4B4 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_Threading_IThreadPoolStatics<winrt::Windows::System::Threading::IThreadPoolStatics>::RunAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
