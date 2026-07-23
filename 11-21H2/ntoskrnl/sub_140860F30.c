/*
 * XREFs of sub_140860F30 @ 0x140860F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DC298 @ 0x1403DC298 (sub_1403DC298.c)
 *     sub_140860F60 @ 0x140860F60 (sub_140860F60.c)
 */

void __fastcall sub_140860F30(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  dword_140C10AF8 = ControlCode;
  if ( ControlCode == 1 )
  {
    sub_1403DC298();
    sub_140860F60();
  }
}
