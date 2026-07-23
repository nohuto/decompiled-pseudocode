/*
 * XREFs of sub_14054ACF0 @ 0x14054ACF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_14054ACF0(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_140C48908 )
  {
    ReasonSpecificData[1] = xmmword_14003AD88;
    *((_QWORD *)ReasonSpecificData + 4) = qword_140C48908;
    *((_DWORD *)ReasonSpecificData + 10) = dword_140C48918 << 12;
  }
}
