/*
 * XREFs of ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180093D70
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005FC2C (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180011188 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18001398C (-MemoryFree@@YAXPEAX@Z.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18003EEA0 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180093CC0 (--1-$unique_storage@U-$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1-W.c)
 */

void __fastcall wil::details::EnabledStateManager::~EnabledStateManager(struct _TP_TIMER **this)
{
  __int64 v2; // rdx
  void (*v3)(unsigned int, unsigned int, unsigned int, const char *); // r8
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v4; // rdx
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER *v6; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v7; // rdx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this, v2, v3);
  v5 = this[13];
  this[13] = 0LL;
  if ( v5 )
    MemoryFree(v5);
  v6 = this[9];
  this[9] = 0LL;
  if ( v6 )
    MemoryFree(v6);
  wil::details::unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>(
    this + 5,
    v4);
  wil::details::unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>(
    this + 4,
    v7);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>(this + 2);
}
