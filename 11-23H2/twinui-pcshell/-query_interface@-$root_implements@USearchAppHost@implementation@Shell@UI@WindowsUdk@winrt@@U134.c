/*
 * XREFs of ?query_interface@?$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D7F88
 * Callers:
 *     ?QueryInterface@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18006CFB0 (-QueryInterface@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearch.c)
 *     ?QueryInterface@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D7BD0 (-QueryInterface@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@wi_ea_1800D7BD0.c)
 *     ?QueryInterface@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801BCC10 (-QueryInterface@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@wi_ea_1801BCC10.c)
 *     ?QueryInterface@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180469F40 (-QueryInterface@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@wi_ea_180469F40.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18022905C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4>::query_interface(
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
  __int64 v16; // rax
  signed __int64 v17; // rax
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
      v18 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
      v14 = v13 == v18;
      v13 = v18;
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
        v16 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        return winrt::impl::make_marshaler(v16, a3);
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
          v17 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
          v14 = v13 == v17;
          v13 = v17;
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
        v15 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
        v14 = v13 == v15;
        v13 = v15;
        if ( v14 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v13 + 24), 1u);
  return 0LL;
}
