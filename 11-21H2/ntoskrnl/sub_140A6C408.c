/*
 * XREFs of sub_140A6C408 @ 0x140A6C408
 * Callers:
 *     sub_1409C03F8 @ 0x1409C03F8 (sub_1409C03F8.c)
 *     sub_140A6BF28 @ 0x140A6BF28 (sub_140A6BF28.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140A6C408(int a1, __int16 a2, _DWORD *a3, int *a4)
{
  int v4; // eax
  int v6; // r9d
  int v7; // ecx

  v4 = 4;
  if ( a2 == -31132 || a2 == -21916 )
  {
    v6 = 8;
  }
  else
  {
    if ( a2 != 332 )
      return 0;
    v6 = 4;
  }
  v7 = a1 & 0xFC000;
  if ( v7 == 114688 )
  {
    *a3 = a2 != -21916 ? 0xFFFFFFFA : 0;
    v4 = 8;
    goto LABEL_16;
  }
  if ( v7 == 180224 )
    goto LABEL_14;
  if ( v7 != 245760 )
  {
    if ( v7 != 278528 && v7 != 376832 && v7 != 491520 )
      return 0;
LABEL_14:
    *a3 = 0;
    v4 = v6;
    goto LABEL_16;
  }
  *a3 = 0;
LABEL_16:
  *a4 = v4;
  return 1;
}
