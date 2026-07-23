/*
 * XREFs of sub_140808C50 @ 0x140808C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14081C88C @ 0x14081C88C (sub_14081C88C.c)
 */

void __fastcall sub_140808C50(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    if ( (_BYTE)Level == 85 )
      sub_14081C88C(7LL, ControlCode, Level, MatchAnyKeyword);
  }
}
