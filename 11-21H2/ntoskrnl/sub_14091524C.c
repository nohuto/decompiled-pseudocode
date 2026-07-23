/*
 * XREFs of sub_14091524C @ 0x14091524C
 * Callers:
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140915410 @ 0x140915410 (sub_140915410.c)
 * Callees:
 *     sub_14067ED10 @ 0x14067ED10 (sub_14067ED10.c)
 */

__int64 __fastcall sub_14091524C(__int64 a1, _DWORD *a2)
{
  return sub_14067ED10(
           (__int64)a2,
           *(_QWORD *)(a1 + 1648)
         + 24LL
         * ((*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))),
           0);
}
