/*
 * XREFs of EnableCallback @ 0x1408653D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140578454 @ 0x140578454 (sub_140578454.c)
 */

void __fastcall EnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
    sub_140578454(1);
}
