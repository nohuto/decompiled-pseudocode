/*
 * XREFs of ?query_interface@?$root_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppActivatedEventArgs2@3456@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@UIInitializeActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@6@UIActivatedEventArgsWithUser@9ApplicationModel@Windows@6@UIPrelaunchActivatedEventArgs@9ApplicationModel@Windows@6@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D81CC
 * Callers:
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D7D00 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@w.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801B39D0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1801B39D0.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801B39F0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1801B39F0.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801B3A10 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1801B3A10.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801B3A30 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1801B3A30.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801BCC30 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1801BCC30.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18047F4E0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_18047F4E0.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18047F500 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_18047F500.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18022905C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  signed __int64 v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rax
  __int64 weak_ref; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v13 = *((_QWORD *)a1 + 1);
    while ( v13 >= 0 )
    {
      v15 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
      v14 = v13 == v15;
      v13 = v15;
      if ( v14 )
        return 0LL;
    }
  }
  else
  {
    v7 = *a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
      v7 = a2[1] + 0x6FA470359B110040LL;
    if ( v7 )
    {
      v8 = *a2 - winrt::impl::guid_v<winrt::impl::IMarshal>;
      if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> )
        v8 = a2[1] - 0x46000000000000C0LL;
      if ( !v8 )
      {
        v17 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        return winrt::impl::make_marshaler(v17, a3);
      }
      v9 = *a2 - winrt::impl::guid_v<IInspectable>;
      if ( *a2 == winrt::impl::guid_v<IInspectable> )
        v9 = a2[1] + 0x6FE1EF9A5528A564LL;
      if ( v9 )
      {
        v10 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
        if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
          v10 = a2[1] - 0x46000000000000C0LL;
        if ( v10 )
        {
          v11 = *a2 - winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>;
          if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReferenceSource> )
            v11 = a2[1] - 0x46000000000000C0LL;
          if ( v11 )
            return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
          weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
          *a3 = weak_ref;
          return weak_ref == 0 ? 0x8007000E : 0;
        }
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        v13 = *((_QWORD *)a1 + 1);
        while ( v13 >= 0 )
        {
          v18 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
          v14 = v13 == v18;
          v13 = v18;
          if ( v14 )
            return 0LL;
        }
      }
      else
      {
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
        v13 = *((_QWORD *)a1 + 1);
        while ( v13 >= 0 )
        {
          v19 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
          v14 = v13 == v19;
          v13 = v19;
          if ( v14 )
            return 0LL;
        }
      }
    }
    else
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v13 = *((_QWORD *)a1 + 1);
      while ( v13 >= 0 )
      {
        v16 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
        v14 = v13 == v16;
        v13 = v16;
        if ( v14 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v13 + 24), 1u);
  return 0LL;
}
