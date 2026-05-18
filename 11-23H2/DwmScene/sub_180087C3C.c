/*
 * XREFs of sub_180087C3C @ 0x180087C3C
 * Callers:
 *     sub_18007CD0C @ 0x18007CD0C (sub_18007CD0C.c)
 *     sub_18007D430 @ 0x18007D430 (sub_18007D430.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 * Callees:
 *     sub_1800869BC @ 0x1800869BC (sub_1800869BC.c)
 */

__int64 __fastcall sub_180087C3C(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 128) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 8);
  sub_1800869BC((_QWORD *)(a1 + 144), (_QWORD *)(a2 + 16));
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 40);
  return sub_18007E7DC(a2 + 16);
}
