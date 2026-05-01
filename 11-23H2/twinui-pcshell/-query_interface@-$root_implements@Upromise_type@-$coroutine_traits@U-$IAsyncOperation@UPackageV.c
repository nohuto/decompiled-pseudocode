/*
 * XREFs of ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18024B2C0
 * Callers:
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802409E0 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackageVolum.c)
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180240A00 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_ea_180240A00.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?AddRef@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@QEAAIXZ @ 0x1801F9E08 (-AddRef@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winr.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18022905C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,winrt::Windows::Foundation::IAsyncInfo>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // r11
  void *weak_ref; // rax

  if ( winrt::operator==(
         a2,
         winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>) )
  {
    v7 = (unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL);
  }
  else if ( winrt::operator==(v5, L"6") )
  {
    v7 = (unsigned __int64)(a1 + 3) & -(__int64)(a1 != 0LL);
  }
  else
  {
    v7 = 0LL;
  }
  *a3 = v7;
  if ( v7 )
    goto LABEL_7;
  if ( winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
    goto LABEL_9;
  if ( winrt::operator==(v9, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    v12 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    return winrt::impl::make_marshaler(v12, a3);
  }
  else
  {
    if ( winrt::operator==(v11, &winrt::impl::guid_v<IInspectable>) )
    {
      v10 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      goto LABEL_10;
    }
    if ( winrt::operator==(v13, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
    {
LABEL_9:
      v10 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
LABEL_10:
      *a3 = v10;
LABEL_7:
      winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef((__int64)a1);
      return 0LL;
    }
    if ( winrt::operator==(v14, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
    {
      weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
      *a3 = (__int64)weak_ref;
      return weak_ref == 0LL ? 0x8007000E : 0;
    }
    else
    {
      return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64, __int64 *))a1)(a1, v15, a3);
    }
  }
}
