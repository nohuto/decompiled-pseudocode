/*
 * XREFs of ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x140008DC8
 * Callers:
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140006CA0 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x1400388E2 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z @ 0x140073AF0 (-EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x140073E90 (-Stop@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioPump::CancelTimer(CAudioPump *this, void *a2)
{
  if ( a2 )
  {
    CancelWaitableTimer(a2);
    WaitForSingleObject(a2, 0);
  }
}
