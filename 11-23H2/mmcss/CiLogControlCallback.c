/*
 * XREFs of CiLogControlCallback @ 0x1C000D6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CiLogControlCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    RegHandle = CiLoggerContext;
    byte_1C00083F8 = 1;
  }
  else
  {
    RegHandle = 0LL;
    byte_1C00083F8 = 0;
  }
}
