/*
 * XREFs of sub_18002F0C0 @ 0x18002F0C0
 * Callers:
 *     sub_1800E0E90 @ 0x1800E0E90 (sub_1800E0E90.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18002F0C0(__int64 a1, float a2, float a3)
{
  char result; // al

  if ( a2 < 0.1 || a2 > 1.0 || a3 < 0.1 || a3 > 1.0 )
    return 0;
  *(float *)(a1 + 192) = a2;
  result = 1;
  *(float *)(a1 + 196) = a3;
  return result;
}
