/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x140221928
 * Callers:
 *     KiIntSteerLogStatus @ 0x14022183C (KiIntSteerLogStatus.c)
 *     KiIntSteerLogState @ 0x1403213C8 (KiIntSteerLogState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall KiIntSteerEtwEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( KiIntSteerEtwHandle )
    return EtwEventEnabled(KiIntSteerEtwHandle, EventDescriptor);
  else
    return 0;
}
