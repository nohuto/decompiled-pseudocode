/*
 * XREFs of PipDmgReevaluateQueue @ 0x14096B63C
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x140812204 (PipDmgInitPhaseTwo.c)
 *     PiDmaGuardProcessPostRemove @ 0x140869FC4 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096B474 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x14096B55C (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x14096C76C (PiCslIsConsoleLocked.c)
 */

void PipDmgReevaluateQueue()
{
  if ( PipDmaGuardPolicy == 1 )
  {
LABEL_6:
    PipDmgFlushQueueAndRestartDevices();
    return;
  }
  if ( PipDmaGuardPolicy == 2 )
  {
    if ( (unsigned __int8)PiCslIsConsoleLocked() )
      return;
    goto LABEL_6;
  }
  if ( PipDmaGuardPolicy != 3 )
    __fastfail(5u);
}
