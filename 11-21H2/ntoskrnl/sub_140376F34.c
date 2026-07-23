/*
 * XREFs of sub_140376F34 @ 0x140376F34
 * Callers:
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_14032A7D0 @ 0x14032A7D0 (sub_14032A7D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140376F34(int **a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
    *a2 = (*a1)[12];
  return 1LL;
}
