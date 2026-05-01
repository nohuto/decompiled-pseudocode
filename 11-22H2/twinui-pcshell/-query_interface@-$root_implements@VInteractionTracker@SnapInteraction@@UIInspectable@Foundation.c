/*
 * XREFs of ?query_interface@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D7554
 * Callers:
 *     ?QueryInterface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9F30 (-QueryInterface@-$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windo.c)
 *     ?QueryInterface@?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180662D70 (-QueryInterface@-$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Win.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18022905C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::query_interface(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r11
  signed __int64 v18; // rdx
  bool v19; // zf
  signed __int64 v20; // rax
  signed __int64 v21; // rax
  __int64 v22; // rax
  signed __int64 v23; // rax
  signed __int64 v24; // rax
  __int64 weak_ref; // rax

  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>) )
  {
    v10 = (v7 + 16) & -(__int64)(v7 != 0);
  }
  else if ( !(unsigned __int8)winrt::operator==(v5, &winrt::impl::guid_v<IApplicationViewChangeListener>) )
  {
    if ( (unsigned __int8)winrt::operator==(v9, &winrt::impl::guid_v<IWindowSnappingEvents>) && v11 )
      v10 = v11 + 8;
    else
      v10 = 0LL;
  }
  *v6 = v10;
  if ( v10 )
  {
    v18 = *((_QWORD *)a1 + 1);
    while ( v18 >= 0 )
    {
      v21 = _InterlockedCompareExchange64(a1 + 1, v18 + 1, v18);
      v19 = v18 == v21;
      v18 = v21;
      if ( v19 )
        return 0LL;
    }
  }
  else if ( (unsigned __int8)winrt::operator==(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v18 = *((_QWORD *)a1 + 1);
    while ( v18 >= 0 )
    {
      v20 = _InterlockedCompareExchange64(a1 + 1, v18 + 1, v18);
      v19 = v18 == v20;
      v18 = v20;
      if ( v19 )
        return 0LL;
    }
  }
  else
  {
    if ( (unsigned __int8)winrt::operator==(v12, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v22 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v22, a3);
    }
    if ( (unsigned __int8)winrt::operator==(v13, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      v18 = *((_QWORD *)a1 + 1);
      while ( v18 >= 0 )
      {
        v23 = _InterlockedCompareExchange64(a1 + 1, v18 + 1, v18);
        v19 = v18 == v23;
        v18 = v23;
        if ( v19 )
          return 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(v14, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      {
        if ( !(unsigned __int8)winrt::operator==(v15, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64))a1)(a1, v16);
        weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
        *a3 = weak_ref;
        return weak_ref == 0 ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v18 = *((_QWORD *)a1 + 1);
      while ( v18 >= 0 )
      {
        v24 = _InterlockedCompareExchange64(a1 + 1, v18 + 1, v18);
        v19 = v18 == v24;
        v18 = v24;
        if ( v19 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v18 + 24), 1u);
  return 0LL;
}
