/*
 * XREFs of HvlBugCheckCallbackRoutine @ 0x140547DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_140C5F3A8 )
  {
    if ( (*((_DWORD *)qword_140C5F3A8 + 1) & 1) != 0 )
    {
      ReasonSpecificData[1] = HvlCrashdumpGuid;
      *((_QWORD *)ReasonSpecificData + 4) = qword_140C5F3A8;
      *((_DWORD *)ReasonSpecificData + 10) = dword_140C5F3B8 << 12;
    }
  }
}
