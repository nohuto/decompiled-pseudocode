/*
 * XREFs of sub_1403DA420 @ 0x1403DA420
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DA43C @ 0x1403DA43C (sub_1403DA43C.c)
 */

void __fastcall sub_1403DA420(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode == 1 )
    sub_1403DA43C(SourceId, ControlCode, Level, MatchAnyKeyword);
}
