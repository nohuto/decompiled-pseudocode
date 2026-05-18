/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180009D04
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18000E270 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x18000401C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ??$invoke@P6AXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@ZAEAPEAU1@@Z @ 0x180009970 (--$invoke@P6AXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUFEATUR.c)
 *     ??$invoke@P6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@Z @ 0x1800099D0 (--$invoke@P6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@Z.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18000C698 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  DWORD LastError; // eax
  DWORD v3; // ebx
  DWORD v4; // eax
  DWORD v5; // ebx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rsi
  HANDLE v9; // rax
  void *v10; // rsi
  HANDLE v11; // rax
  void *v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  __int64 (__fastcall *v14)(PTP_TIMER); // [rsp+48h] [rbp+28h] BYREF

  *(_BYTE *)this = 0;
  if ( *((_QWORD *)this + 6) )
  {
    v13 = *((_QWORD *)this + 6);
    LastError = GetLastError();
    v14 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    v3 = LastError;
    wistd::invoke<void (*)(_TP_TIMER *),_TP_TIMER * &>((__int64 (__fastcall **)(_QWORD))&v14, &v13);
    SetLastError(v3);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v13 = *((_QWORD *)this + 7);
    v4 = GetLastError();
    v14 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    v5 = v4;
    wistd::invoke<void (*)(_TP_TIMER *),_TP_TIMER * &>((__int64 (__fastcall **)(_QWORD))&v14, &v13);
    SetLastError(v5);
  }
  *((_QWORD *)this + 7) = 0LL;
  v6 = (void *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  if ( *((_QWORD *)this + 28) )
  {
    v13 = *((_QWORD *)this + 28);
    v14 = (__int64 (__fastcall *)(PTP_TIMER))wil::details::UnregisterWilFeatureConfigurationChange;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v14, &v13);
  }
  v8 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = 0LL;
  if ( v8 )
  {
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v10 = (void *)*((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v10 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  if ( *((_QWORD *)this + 9) )
  {
    v13 = *((_QWORD *)this + 9);
    v14 = (__int64 (__fastcall *)(PTP_TIMER))wil::details::UnsubscribeProcessWideUsageFlush;
    wistd::invoke<void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),FEATURE_STATE_CHANGE_SUBSCRIPTION__ * &>(
      (__int64 (__fastcall **)(_QWORD))&v14,
      &v13);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v13 = *((_QWORD *)this + 7);
    v14 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    wistd::invoke<void (*)(_TP_TIMER *),_TP_TIMER * &>((__int64 (__fastcall **)(_QWORD))&v14, &v13);
  }
  if ( *((_QWORD *)this + 6) )
  {
    v13 = *((_QWORD *)this + 6);
    v14 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    wistd::invoke<void (*)(_TP_TIMER *),_TP_TIMER * &>((__int64 (__fastcall **)(_QWORD))&v14, &v13);
  }
  v12 = (void *)*((_QWORD *)this + 2);
  if ( v12 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v12);
}
