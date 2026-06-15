/*
 * XREFs of ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14002D254
 * Callers:
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140005B70 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x1400196B0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14006B19C (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z @ 0x14006B3E0 (-EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z.c)
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
