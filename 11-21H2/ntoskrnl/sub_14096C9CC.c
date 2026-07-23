/*
 * XREFs of sub_14096C9CC @ 0x14096C9CC
 * Callers:
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14096C9CC(int *a1, int **a2)
{
  int *v2; // r8
  int v3; // eax

  v2 = *a2;
  v3 = **a2;
  if ( v3 == -1073741818 )
  {
    if ( (unsigned int)v2[6] < 3 )
      goto LABEL_6;
    v3 = v2[12];
  }
  if ( v3 == -1073741819 )
    v3 = -1073741592;
LABEL_6:
  *a1 = v3;
  return 1LL;
}
