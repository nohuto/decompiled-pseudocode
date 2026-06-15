/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180013A84
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18004A270 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D330 (--3@YAXPEAX@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800188B4 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180034DC8 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800368E0 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180039934 (-UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z.c)
 *     wil_details_RtlUnregisterFeatureConfigurationChangeNotification @ 0x18003AC50 (wil_details_RtlUnregisterFeatureConfigurationChangeNotification.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(
        wil::details::FeatureStateManager *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  struct _TP_TIMER *v3; // rdi
  struct _TP_TIMER *v4; // rdi
  void *v5; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  struct _TP_TIMER *v9; // rcx
  struct _TP_TIMER *v10; // rcx
  void *v11; // rcx
  char v12; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]

  *(_BYTE *)this = 0;
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    v12 = 0;
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v3);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
  }
  *((_QWORD *)this + 6) = 0LL;
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    v12 = 0;
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
  }
  *((_QWORD *)this + 7) = 0LL;
  v5 = (void *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = 0LL;
  if ( v5 )
    operator delete(v5);
  v6 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 28);
  if ( v6 )
    wil::details::UnsubscribeProcessWideUsageFlush(v6, a2);
  v7 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = 0LL;
  if ( v7 )
    operator delete(v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  if ( *((_QWORD *)this + 18) )
    wil_details_RtlUnregisterFeatureConfigurationChangeNotification();
  v8 = (void *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v8 )
    operator delete(v8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v9 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v9 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v9);
  v10 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v10 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v10);
  v11 = (void *)*((_QWORD *)this + 2);
  if ( v11 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v11);
}
