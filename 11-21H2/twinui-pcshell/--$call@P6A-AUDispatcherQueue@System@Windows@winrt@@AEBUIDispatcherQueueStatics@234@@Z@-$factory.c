/*
 * XREFs of ??$call@P6A?AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@234@@Z@?$factory_cache_entry@UDispatcherQueue@System@Windows@winrt@@UIDispatcherQueueStatics@234@@impl@winrt@@QEAA?AUDispatcherQueue@System@Windows@2@$$QEAP6A?AU3452@AEBUIDispatcherQueueStatics@452@@Z@Z @ 0x1805ADC00
 * Callers:
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B11AC (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIDispatcherQueueStatics@System@Windows@winrt@@@winrt@@YA?AUIDispatcherQueueStatics@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1805ADD90 (--$get_activation_factory@UIDispatcherQueueStatics@System@Windows@winrt@@@winrt@@YA-AUIDispatche.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics>::call<winrt::Windows::System::DispatcherQueue (*)(winrt::Windows::System::IDispatcherQueueStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v5; // rax
  char v6; // di
  __int64 v8[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"Windows.System.DispatcherQueue", 30LL);
  winrt::get_activation_factory<winrt::Windows::System::IDispatcherQueueStatics>(&v10, v9);
  if ( !v10 )
  {
    v5 = 0LL;
    v8[0] = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v11 = 0LL;
  (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
  v5 = v11;
  v8[0] = v11;
  if ( !v11 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
  if ( v6 )
  {
    v8[1] = (__int64)&qword_1807B5D68;
    _InterlockedIncrement64(&qword_1807B5D68);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B5D70);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics>);
    _InterlockedDecrement64(&qword_1807B5D68);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
