/*
 * XREFs of sub_140373150 @ 0x140373150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140373150(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  ReasonSpecificData[1] = xmmword_14001C0A0;
  *((_DWORD *)ReasonSpecificData + 10) = dword_140C18F24;
  *((_QWORD *)ReasonSpecificData + 4) = &dword_140C18F20;
}
