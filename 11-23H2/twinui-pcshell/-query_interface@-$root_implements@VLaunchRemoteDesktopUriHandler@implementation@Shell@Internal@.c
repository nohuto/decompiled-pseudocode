/*
 * XREFs of ?query_interface@?$root_implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180701884
 * Callers:
 *     ?QueryInterface@?$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180701730 (-QueryInterface@-$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Window.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18022905C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rax
  signed __int64 v7; // rdx
  bool v8; // zf
  signed __int64 v9; // rax
  _QWORD *v10; // rcx
  signed __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v15; // rcx
  signed __int64 v16; // rax
  _QWORD *v17; // rcx
  signed __int64 v18; // rax
  void *weak_ref; // rax

  v3 = (volatile signed __int64 *)a1;
  if ( !a1 )
    a1 = 16LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v7 = *((_QWORD *)v3 + 1);
    while ( v7 >= 0 )
    {
      v9 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
      v8 = v7 == v9;
      v7 = v9;
      if ( v8 )
        return 0LL;
    }
  }
  else if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
    v7 = *((_QWORD *)v3 + 1);
    while ( v7 >= 0 )
    {
      v11 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
      v8 = v7 == v11;
      v7 = v11;
      if ( v8 )
        return 0LL;
    }
  }
  else
  {
    if ( winrt::operator==(v10, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v13 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
      return winrt::impl::make_marshaler(v13, a3);
    }
    if ( winrt::operator==(v12, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 56))(v3);
      v7 = *((_QWORD *)v3 + 1);
      while ( v7 >= 0 )
      {
        v16 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
        v8 = v7 == v16;
        v7 = v16;
        if ( v8 )
          return 0LL;
      }
    }
    else
    {
      if ( !winrt::operator==(v15, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      {
        if ( !winrt::operator==(v17, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))v3)(v3, a2, a3);
        weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(v3);
        *a3 = (__int64)weak_ref;
        return weak_ref == 0LL ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
      v7 = *((_QWORD *)v3 + 1);
      while ( v7 >= 0 )
      {
        v18 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
        v8 = v7 == v18;
        v7 = v18;
        if ( v8 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
  return 0LL;
}
