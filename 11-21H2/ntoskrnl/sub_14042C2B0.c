/*
 * XREFs of sub_14042C2B0 @ 0x14042C2B0
 * Callers:
 *     sub_14042C1F0 @ 0x14042C1F0 (sub_14042C1F0.c)
 *     sub_14042C2D0 @ 0x14042C2D0 (sub_14042C2D0.c)
 * Callees:
 *     sub_14042BD70 @ 0x14042BD70 (sub_14042BD70.c)
 */

__int64 __fastcall sub_14042C2B0(int a1, unsigned int *a2)
{
  int v2; // ecx

  v2 = a1 - 1;
  if ( v2 )
    sub_14042BD70(v2, a2);
  return *a2;
}
