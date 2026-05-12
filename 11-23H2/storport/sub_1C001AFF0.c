/*
 * XREFs of sub_1C001AFF0 @ 0x1C001AFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 */

LONG __fastcall sub_1C001AFF0(__int64 a1)
{
  LONG result; // eax

  result = sub_1C00071D4(a1, 0LL, 0LL);
  if ( result >= 0 )
    return sub_1C000729C(a1);
  return result;
}
