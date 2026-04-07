/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18009AD60
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005C270 (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180057134 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800580D8 (-MemoryFree@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?UnregisterWilFeatureConfigurationChange@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009AC28 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-UnregisterWilFeatureConfigurationChange@.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18009B614 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18009CD70 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18009DEFC (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  void *v2; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v3; // r8
  void *v4; // rcx
  void *v5; // rcx
  struct _TP_TIMER *v6; // rcx
  struct _TP_TIMER *v7; // rcx
  void *v8; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 6,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 7,
    0LL);
  v2 = (void *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = 0LL;
  if ( v2 )
    MemoryFree(v2);
  v3 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 28);
  if ( v3 && *((_QWORD *)&xmmword_1801484E8 + 1) )
    wil::details_abi::SubscriptionList::Unsubscribe(
      (wil::details_abi::SubscriptionList *)(*((_QWORD *)&xmmword_1801484E8 + 1) + 200LL),
      *((struct wil::srwlock **)&xmmword_1801484E8 + 1),
      v3);
  v4 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = 0LL;
  if ( v4 )
    MemoryFree(v4);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::UnregisterWilFeatureConfigurationChange(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::UnregisterWilFeatureConfigurationChange(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((__int64 *)this + 18);
  v5 = (void *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v5 )
    MemoryFree(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v6 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v6 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v6);
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v7 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v7);
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v8);
}
