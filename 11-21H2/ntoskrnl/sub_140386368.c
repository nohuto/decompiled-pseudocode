/*
 * XREFs of sub_140386368 @ 0x140386368
 * Callers:
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140386330 (IoTransferActivityId.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

bool __fastcall sub_140386368(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( qword_140C47358 )
    return EtwEventEnabled(qword_140C47358, EventDescriptor) != 0;
  return v1;
}
