/*
 * XREFs of sub_180027E0C @ 0x180027E0C
 * Callers:
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_180073DDC @ 0x180073DDC (sub_180073DDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027E0C(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
