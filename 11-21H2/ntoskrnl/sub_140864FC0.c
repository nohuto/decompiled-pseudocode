/*
 * XREFs of sub_140864FC0 @ 0x140864FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14081C88C @ 0x14081C88C (sub_14081C88C.c)
 */

void __fastcall sub_140864FC0(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  int v4; // ecx

  if ( ControlCode )
  {
    if ( Level != 85 )
      return;
    v4 = 1;
  }
  else
  {
    v4 = 2;
  }
  sub_14081C88C(v4);
}
