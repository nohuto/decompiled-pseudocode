/*
 * XREFs of sub_1C004511C @ 0x1C004511C
 * Callers:
 *     sub_1C00480F8 @ 0x1C00480F8 (sub_1C00480F8.c)
 *     sub_1C004A6B0 @ 0x1C004A6B0 (sub_1C004A6B0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C004511C(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( (unsigned int)a1[1] >= 0x20 )
      return (unsigned int)(v1 - 1) <= 1;
  }
  else
  {
    if ( v1 != 2 )
      return (unsigned int)(v1 - 1) <= 1;
    if ( (unsigned int)a1[1] >= 0x28 )
      return 1;
  }
  return 0;
}
