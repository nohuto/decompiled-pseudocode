/*
 * XREFs of ??$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@?$factory_cache_entry@UThreadPool@Threading@System@Windows@winrt@@UIThreadPoolStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@Z @ 0x1800F1C84
 * Callers:
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800F2AA4 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x180058FB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA?AUIThreadPoolStatics@Threading@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800F1DEC (--$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA-AUIThre.c)
 *     ?RunAsync@?$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUWorkItemHandler@Threading@System@Windows@3@@Z @ 0x1800F3638 (-RunAsync@-$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@Sy.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>::call<_lambda_4e2f6834dae5c2d9676db4968b0ab11c_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v9; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+50h] [rbp-10h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF

  v12 = a1;
  if ( aWindowsSystemT[35] )
    abort();
  v10[0] = 1;
  v10[1] = 35;
  v11 = L"Windows.System.Threading.ThreadPool";
  v9 = v10;
  winrt::get_activation_factory<winrt::Windows::System::Threading::IThreadPoolStatics>(&v12, &v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 && (v13 = 0LL, (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13), (v8[0] = v13) != 0) )
  {
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_180278998;
    _InterlockedIncrement64(&qword_180278998);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1802789A0);
    }
    winrt::impl::consume_Windows_System_Threading_IThreadPoolStatics<winrt::Windows::System::Threading::IThreadPoolStatics>::RunAsync(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180278998);
    v6 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolStatics<winrt::Windows::System::Threading::IThreadPoolStatics>::RunAsync(
      &v12,
      a2,
      *a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v12);
  return a2;
}
