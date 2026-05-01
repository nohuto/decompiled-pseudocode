/*
 * XREFs of ?query_interface@?$root_implements@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800DA1CC
 * Callers:
 *     ?QueryInterface@?$produce_base@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800DB340 (-QueryInterface@-$produce_base@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTask.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18022905C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::DesktopTaskGroups::DesktopTaskGroupsSwitchItemController>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  signed __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  __int64 weak_ref; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v11 = *((_QWORD *)a1 + 1);
    while ( v11 >= 0 )
    {
      v15 = _InterlockedCompareExchange64(a1 + 1, v11 + 1, v11);
      v12 = v11 == v15;
      v11 = v15;
      if ( v12 )
        return 0LL;
    }
  }
  else if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v11 = *((_QWORD *)a1 + 1);
    while ( v11 >= 0 )
    {
      v16 = _InterlockedCompareExchange64(a1 + 1, v11 + 1, v11);
      v12 = v11 == v16;
      v11 = v16;
      if ( v12 )
        return 0LL;
    }
  }
  else
  {
    if ( winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v17 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v17, a3);
    }
    if ( winrt::operator==(v8, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      v11 = *((_QWORD *)a1 + 1);
      while ( v11 >= 0 )
      {
        v18 = _InterlockedCompareExchange64(a1 + 1, v11 + 1, v11);
        v12 = v11 == v18;
        v11 = v18;
        if ( v12 )
          return 0LL;
      }
    }
    else
    {
      if ( !winrt::operator==(v9, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      {
        if ( !winrt::operator==(v10, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
        weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
        *a3 = weak_ref;
        return weak_ref == 0 ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v11 = *((_QWORD *)a1 + 1);
      while ( v11 >= 0 )
      {
        v13 = _InterlockedCompareExchange64(a1 + 1, v11 + 1, v11);
        v12 = v11 == v13;
        v11 = v13;
        if ( v12 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v11 + 24), 1u);
  return 0LL;
}
