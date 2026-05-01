/*
 * XREFs of ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x1803CCCD8
 * Callers:
 *     ??_G?$EventInvocationContext@$00@details@wil@@UEAAPEAXI@Z @ 0x1803CD260 (--_G-$EventInvocationContext@$00@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1?CoDecrementMTAUsage@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1803CCE24 (--1-$unique_storage@U-$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1-CoDecrementMTAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1803CCE4C (--1-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPoolW.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x1803D3F28 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall wil::details::EventInvocationContext<1>::~EventInvocationContext<1>(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *a1 = &wil::details::EventInvocationContext<1>::`vftable';
  a1[1] = &wil::details::EventInvocationContext<1>::`vftable'{for `IWeakReferenceSource'};
  a1[2] = &wil::details::EventInvocationContext<1>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    a1 + 10,
    0LL);
  v2 = (void (__fastcall ***)(_QWORD, __int64))a1[12];
  a1[12] = 0LL;
  if ( v2 )
    (**v2)(v2, 1LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>(a1 + 10);
  wil::details::unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>(a1 + 9);
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>((__int64)a1);
}
