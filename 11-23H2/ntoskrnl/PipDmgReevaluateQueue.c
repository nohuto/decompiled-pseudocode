/*
 * XREFs of PipDmgReevaluateQueue @ 0x14096B43C
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x140811F34 (PipDmgInitPhaseTwo.c)
 *     PiDmaGuardProcessPostRemove @ 0x140869D84 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096B274 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x14096B35C (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x14096C56C (PiCslIsConsoleLocked.c)
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
