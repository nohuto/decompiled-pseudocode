/*
 * XREFs of sub_1406EB3D4 @ 0x1406EB3D4
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 *     sub_140B09F98 @ 0x140B09F98 (sub_140B09F98.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406EB3D4(void *a1)
{
  if ( a1 != (void *)-2LL && a1 != (void *)1 && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
