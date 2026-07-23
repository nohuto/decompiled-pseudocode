/*
 * XREFs of MD4Init @ 0x180124670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MD4Init(_DWORD *a1)
{
  a1[4] = 0;
  a1[5] = 0;
  *a1 = 1732584193;
  a1[1] = -271733879;
  a1[2] = -1732584194;
  a1[3] = 271733878;
}
