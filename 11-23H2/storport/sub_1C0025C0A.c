/*
 * XREFs of sub_1C0025C0A @ 0x1C0025C0A
 * Callers:
 *     sub_1C003AB20 @ 0x1C003AB20 (sub_1C003AB20.c)
 *     Callback @ 0x1C003D660 (Callback.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0025C0A(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[613] && a1[615] || a1[749] )
    return 1;
  return result;
}
