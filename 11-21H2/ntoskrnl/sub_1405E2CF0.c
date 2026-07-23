/*
 * XREFs of sub_1405E2CF0 @ 0x1405E2CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1405E2CF0(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_140D051A8 )
  {
    ReasonSpecificData[4] = qword_140D051A8;
    *((_DWORD *)ReasonSpecificData + 10) = 0x2000;
    *((_OWORD *)ReasonSpecificData + 1) = xmmword_14003C858;
  }
}
