/*
 * XREFs of sub_1409BF598 @ 0x1409BF598
 * Callers:
 *     sub_1409BF0F8 @ 0x1409BF0F8 (sub_1409BF0F8.c)
 *     sub_1409BF208 @ 0x1409BF208 (sub_1409BF208.c)
 *     sub_1409BF530 @ 0x1409BF530 (sub_1409BF530.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1409BF598(_DWORD *a1)
{
  return *a1
      && ((a1[1] & 0x3F00) != 0
       || (((unsigned __int8)a1[1] | (unsigned __int8)(a1[1] >> 10)) & 0x30) != 0
       || (a1[1] & 0x40) != 0);
}
