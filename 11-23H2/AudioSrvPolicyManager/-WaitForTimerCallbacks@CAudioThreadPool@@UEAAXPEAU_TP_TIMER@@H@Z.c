/*
 * XREFs of ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x1800462F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::WaitForTimerCallbacks(CAudioThreadPool *this, struct _TP_TIMER *a2, BOOL a3)
{
  WaitForThreadpoolTimerCallbacks(a2, a3);
}
