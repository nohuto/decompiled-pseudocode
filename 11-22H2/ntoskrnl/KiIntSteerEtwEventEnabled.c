/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x140221948
 * Callers:
 *     KiIntSteerLogStatus @ 0x14022185C (KiIntSteerLogStatus.c)
 *     KiIntSteerLogState @ 0x1403211E8 (KiIntSteerLogState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall KiIntSteerEtwEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( KiIntSteerEtwHandle )
    return EtwEventEnabled(KiIntSteerEtwHandle, EventDescriptor);
  else
    return 0;
}
