/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1403C3078
 * Callers:
 *     IoReuseIrp @ 0x1402903D0 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x1403C3040 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x140555724 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
