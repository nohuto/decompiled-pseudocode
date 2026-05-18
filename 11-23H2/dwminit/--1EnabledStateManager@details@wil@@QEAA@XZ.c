/*
 * XREFs of ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180004300
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18000FAA0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007174 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180009C24 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000F9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::~EnabledStateManager(struct _TP_TIMER **this)
{
  struct _TP_TIMER *v2; // rdi
  HANDLE ProcessHeap; // rax
  struct _TP_TIMER *v4; // rdi
  HANDLE v5; // rax
  struct _TP_TIMER *v6; // rcx
  void (*v7)(void); // rdx
  void (*v8)(void); // rax
  struct _TP_TIMER *v9; // rbx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this);
  v2 = this[13];
  this[13] = 0LL;
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  v4 = this[9];
  this[9] = 0LL;
  if ( v4 )
  {
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v4);
  }
  v6 = this[5];
  v7 = (void (*)(void))g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  if ( v6 )
  {
    if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification )
    {
      ((void (*)(void))g_wil_details_internalUnsubscribeFeatureStateChangeNotification)();
    }
    else
    {
      v8 = (void (*)(void))g_wil_details_apiUnsubscribeFeatureStateChangeNotification;
      if ( !g_wil_details_apiUnsubscribeFeatureStateChangeNotification )
        goto LABEL_12;
      g_wil_details_apiUnsubscribeFeatureStateChangeNotification(v6, 0LL);
    }
    v7 = (void (*)(void))g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  }
  v8 = (void (*)(void))g_wil_details_apiUnsubscribeFeatureStateChangeNotification;
LABEL_12:
  if ( this[4] )
  {
    if ( v7 )
    {
      v7();
    }
    else if ( v8 )
    {
      v8();
    }
  }
  v9 = this[2];
  if ( v9 )
  {
    SetThreadpoolTimer(v9, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v9, 1);
    CloseThreadpoolTimer(v9);
  }
}
