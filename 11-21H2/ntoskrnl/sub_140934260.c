/*
 * XREFs of sub_140934260 @ 0x140934260
 * Callers:
 *     <none>
 * Callees:
 *     sub_140556DE0 @ 0x140556DE0 (sub_140556DE0.c)
 */

void __fastcall sub_140934260(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( ControlCode != 1 )
      return;
  }
  else
  {
    ControlCode = 0;
  }
  sub_140556DE0(1, ControlCode);
}
