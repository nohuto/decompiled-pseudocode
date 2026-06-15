/*
 * XREFs of ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180013E20
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18004B760 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D380 (--3@YAXPEAX@Z.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180013ED8 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180018AA4 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180035178 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18003A958 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::EnabledStateManager::~EnabledStateManager(wil::details::EnabledStateManager *this)
{
  struct _TP_TIMER *v2; // rdi
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v3; // rdx
  void *v4; // rcx
  void *v5; // rcx
  wil::details *v6; // rcx
  wil::details *v7; // rcx
  struct _TP_TIMER *v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]

  *(_BYTE *)this = 0;
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v9 = 0;
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v9);
  }
  *((_QWORD *)this + 2) = 0LL;
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this);
  v4 = (void *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v5 )
    operator delete(v5);
  v6 = (wil::details *)*((_QWORD *)this + 5);
  if ( v6 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v6, v3);
  v7 = (wil::details *)*((_QWORD *)this + 4);
  if ( v7 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v7, v3);
  v8 = (struct _TP_TIMER *)*((_QWORD *)this + 2);
  if ( v8 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v8);
}
