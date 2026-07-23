/*
 * XREFs of IoTransferActivityId @ 0x140386330
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_140386368 @ 0x140386368 (sub_140386368.c)
 */

NTSTATUS __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  NTSTATUS result; // eax

  result = sub_140386368(&stru_14000EDC8);
  if ( (_BYTE)result )
    return EtwWriteEx(qword_140C47358, &stru_14000EDC8, 0LL, 0, ActivityId, RelatedActivityId, 0, 0LL);
  return result;
}
