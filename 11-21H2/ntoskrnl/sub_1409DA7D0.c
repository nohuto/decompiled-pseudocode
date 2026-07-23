/*
 * XREFs of sub_1409DA7D0 @ 0x1409DA7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14081C88C @ 0x14081C88C (sub_14081C88C.c)
 */

void __fastcall sub_1409DA7D0(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  int v4; // ecx

  if ( ControlCode )
  {
    if ( Level != 85 )
      return;
    v4 = 5;
  }
  else
  {
    v4 = 6;
  }
  sub_14081C88C(v4);
}
