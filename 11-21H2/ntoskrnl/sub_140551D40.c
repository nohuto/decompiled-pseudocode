/*
 * XREFs of sub_140551D40 @ 0x140551D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140551D40(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( KtriageDumpDataArray )
    *ReasonSpecificData = KtriageDumpDataArray;
}
