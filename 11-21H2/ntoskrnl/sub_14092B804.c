/*
 * XREFs of sub_14092B804 @ 0x14092B804
 * Callers:
 *     sub_14092AC5C @ 0x14092AC5C (sub_14092AC5C.c)
 * Callees:
 *     sub_1405406E8 @ 0x1405406E8 (sub_1405406E8.c)
 */

NTSTATUS __fastcall sub_14092B804(REGHANDLE a1, int *a2)
{
  int v2; // eax

  v2 = a2[1];
  if ( (v2 & 2) != 0 )
  {
    sub_1405406E8(a1, 3297);
    v2 = a2[1];
  }
  if ( (v2 & 8) != 0 )
  {
    sub_1405406E8(a1, 3298);
    v2 = a2[1];
  }
  if ( (v2 & 0x4000) != 0 )
  {
    sub_1405406E8(a1, 3294);
    v2 = a2[1];
  }
  if ( (v2 & 0x8000) != 0 )
    sub_1405406E8(a1, 3295);
  if ( *a2 >= 0 )
    sub_1405406E8(a1, 3296);
  return sub_1405406E8(a1, 3293);
}
