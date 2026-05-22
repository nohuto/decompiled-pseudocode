/*
 * XREFs of ??$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@?$factory_cache_entry@UThreadPool@Threading@System@Windows@winrt@@UIThreadPoolStatics@2345@@impl@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@2@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@Z @ 0x1800C93C0
 * Callers:
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800CA4B4 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18004C289 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA?AUIThreadPoolStatics@Threading@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C9538 (--$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA-AUIThre.c)
 *     ?RunAsync@?$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@AEBUWorkItemHandler@Threading@System@63@@Z @ 0x1800CB048 (-RunAsync@-$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@Sy.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>::call<_lambda_4e2f6834dae5c2d9676db4968b0ab11c_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v7; // rax
  char v8; // si
  bool v9; // zf
  __int64 v11[2]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v12; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v13[4]; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v14; // [rsp+48h] [rbp-8h]
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v15 = a1;
  if ( aWindowsSystemT[35] )
  {
    _o_terminate(a1, a2, a3, a4);
    __debugbreak();
  }
  v13[0] = 1;
  v13[1] = 35;
  v14 = L"Windows.System.Threading.ThreadPool";
  v12 = v13;
  winrt::get_activation_factory<winrt::Windows::System::Threading::IThreadPoolStatics>(&v15, &v12);
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
  if ( !v15 )
  {
    v7 = 0LL;
    v11[0] = 0LL;
    goto LABEL_6;
  }
  v16 = 0LL;
  (**v15)(v15, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v16);
  v7 = v16;
  v11[0] = v16;
  v8 = 1;
  if ( !v16 )
  {
LABEL_6:
    v8 = 0;
    if ( !v7 )
      goto LABEL_8;
  }
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v11);
LABEL_8:
  if ( v8 )
  {
    v11[1] = (__int64)&qword_1802434E8;
    _InterlockedIncrement64(&qword_1802434E8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>,
            (signed __int64)v15,
            0LL) )
    {
      v15 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1802434F0);
    }
    winrt::impl::consume_Windows_System_Threading_IThreadPoolStatics<winrt::Windows::System::Threading::IThreadPoolStatics>::RunAsync(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1802434E8);
    v9 = v15 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolStatics<winrt::Windows::System::Threading::IThreadPoolStatics>::RunAsync(
      &v15,
      a2,
      *a3);
    v9 = v6 == 0LL;
  }
  if ( !v9 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v15);
  return a2;
}
