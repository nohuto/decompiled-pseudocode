/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1403C3258
 * Callers:
 *     IoReuseIrp @ 0x140290660 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x1403C3220 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x140555DE4 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
