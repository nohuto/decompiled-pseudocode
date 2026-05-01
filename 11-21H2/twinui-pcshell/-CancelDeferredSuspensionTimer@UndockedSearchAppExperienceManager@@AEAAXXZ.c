/*
 * XREFs of ?CancelDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009E550
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UndockedSearchAppExperienceManager_DeferredSuspensionTimerCanceled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18009E598 (-UndockedSearchAppExperienceManager_DeferredSuspensionTimerCanceled@SearchAppExperienceManagerTe.c)
 *     ??B?$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1800F9E14 (--B-$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 */

void __fastcall UndockedSearchAppExperienceManager::CancelDeferredSuspensionTimer(
        UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rbx

  v1 = (struct _TP_TIMER **)((char *)this + 656);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl)
    || (unsigned __int8)wil::com_ptr_t<IWindowManagementEvents,wil::err_returncode_policy>::operator bool(v1) )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_DeferredSuspensionTimerCanceled();
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
  }
}
