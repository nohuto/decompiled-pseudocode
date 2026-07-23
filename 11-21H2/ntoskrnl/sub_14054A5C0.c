/*
 * XREFs of sub_14054A5C0 @ 0x14054A5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14054A610 @ 0x14054A610 (sub_14054A610.c)
 *     sub_1405529A8 @ 0x1405529A8 (sub_1405529A8.c)
 */

void __fastcall sub_14054A5C0(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  __int64 v4; // rcx

  if ( (dword_140C48978 & 1) != 0
    || ReasonSpecificData[3] == 131073
    && !(unsigned __int8)sub_1405529A8(Reason, Record, ReasonSpecificData, ReasonSpecificDataLength) )
  {
    byte_140C48839 = 1;
    v4 = 2LL;
  }
  else
  {
    byte_140C48839 = 0;
    v4 = 8LL;
  }
  sub_14054A610(v4, Record, ReasonSpecificData, ReasonSpecificData);
}
