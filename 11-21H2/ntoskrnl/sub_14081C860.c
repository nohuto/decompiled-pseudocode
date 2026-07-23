/*
 * XREFs of sub_14081C860 @ 0x14081C860
 * Callers:
 *     <none>
 * Callees:
 *     sub_14081C88C @ 0x14081C88C (sub_14081C88C.c)
 */

void __fastcall sub_14081C860(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx

  if ( !(_DWORD)ControlCode )
  {
    v4 = 4LL;
LABEL_3:
    sub_14081C88C(v4, ControlCode, Level, MatchAnyKeyword);
    return;
  }
  if ( (_BYTE)Level == 85 )
  {
    v4 = 3LL;
    goto LABEL_3;
  }
}
