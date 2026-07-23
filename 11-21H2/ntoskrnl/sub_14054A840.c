/*
 * XREFs of sub_14054A840 @ 0x14054A840
 * Callers:
 *     <none>
 * Callees:
 *     sub_14054A610 @ 0x14054A610 (sub_14054A610.c)
 *     sub_1405529A8 @ 0x1405529A8 (sub_1405529A8.c)
 */

void __fastcall sub_14054A840(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  __int64 v4; // rcx

  v4 = 1LL;
  if ( (dword_140C48978 & 1) != 0
    || ReasonSpecificData[3] == 395
    && !(unsigned __int8)sub_1405529A8(1LL, Record, ReasonSpecificData, ReasonSpecificDataLength) )
  {
    byte_140C48838 = v4;
  }
  else
  {
    byte_140C48838 = 0;
    v4 = 16LL;
  }
  sub_14054A610(v4, (__int64)Record, (__int64)ReasonSpecificData, (__int64)ReasonSpecificData);
}
