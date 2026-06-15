/*
 * XREFs of ?TimerCallback@?$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800D2CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWatchdogTimer<1>::TimerCallback(PTP_CALLBACK_INSTANCE Instance, __int64 Context, PTP_TIMER Timer)
{
  CWatchdogTimer<1>::OnTimer(Context);
}
