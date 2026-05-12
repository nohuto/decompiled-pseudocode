/*
 * XREFs of sub_1C004514C @ 0x1C004514C
 * Callers:
 *     sub_1C00480F8 @ 0x1C00480F8 (sub_1C00480F8.c)
 *     sub_1C004A6B0 @ 0x1C004A6B0 (sub_1C004A6B0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C004514C(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( (unsigned int)a1[1] < 0x10 )
      return 0;
  }
  else if ( v1 == 2 )
  {
    return (unsigned int)a1[1] >= 0x18;
  }
  if ( v1 != 3 )
    return (unsigned int)(v1 - 1) <= 2;
  return (unsigned int)a1[1] >= 0x18;
}
