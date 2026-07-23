/*
 * XREFs of sub_14054A890 @ 0x14054A890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_14054A890(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_140C48908 )
  {
    if ( (*((_DWORD *)qword_140C48908 + 1) & 1) != 0 )
    {
      ReasonSpecificData[1] = xmmword_14003AD78;
      *((_QWORD *)ReasonSpecificData + 4) = qword_140C48908;
      *((_DWORD *)ReasonSpecificData + 10) = dword_140C48918 << 12;
    }
  }
}
