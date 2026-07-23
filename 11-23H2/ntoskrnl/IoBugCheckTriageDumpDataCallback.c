/*
 * XREFs of IoBugCheckTriageDumpDataCallback @ 0x14054FE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IoBugCheckTriageDumpDataCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( IopTriageDumpDataArray )
    *ReasonSpecificData = IopTriageDumpDataArray;
}
