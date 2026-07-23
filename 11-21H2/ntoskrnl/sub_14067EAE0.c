/*
 * XREFs of sub_14067EAE0 @ 0x14067EAE0
 * Callers:
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_140915410 @ 0x140915410 (sub_140915410.c)
 *     sub_1409154C4 @ 0x1409154C4 (sub_1409154C4.c)
 * Callees:
 *     sub_14067EB38 @ 0x14067EB38 (sub_14067EB38.c)
 */

__int64 __fastcall sub_14067EAE0(__int64 a1, _DWORD *a2)
{
  return sub_14067EB38(
           a2,
           *(_QWORD *)(a1 + 1648)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
