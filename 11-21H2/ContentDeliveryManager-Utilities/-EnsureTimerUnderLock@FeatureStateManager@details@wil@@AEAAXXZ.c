/*
 * XREFs of ?EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x1800323E0
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18003FE50 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x1800470D0 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180031A58 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::FeatureStateManager::EnsureTimerUnderLock(_QWORD *pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rsi
  struct _TP_TIMER *v3; // rbp
  DWORD LastError; // ebx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)pv + 65) )
  {
    ThreadpoolTimer = (struct _TP_TIMER *)pv[6];
    if ( ThreadpoolTimer )
      goto LABEL_6;
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)_lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_,
                        pv,
                        0LL);
    v3 = (struct _TP_TIMER *)pv[6];
    if ( v3 )
    {
      LastError = GetLastError();
      wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v3);
      SetLastError(LastError);
    }
    pv[6] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
LABEL_6:
      pftDueTime = (struct _FILETIME)-3000000000LL;
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x124F8u);
      *((_BYTE *)pv + 65) = 1;
    }
  }
}
