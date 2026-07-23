/*
 * XREFs of sub_14067EA88 @ 0x14067EA88
 * Callers:
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 * Callees:
 *     sub_14067EB38 @ 0x14067EB38 (sub_14067EB38.c)
 */

__int64 __fastcall sub_14067EA88(__int64 a1, _DWORD *a2)
{
  return sub_14067EB38(
           a2,
           *(_QWORD *)(a1 + 1664)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1672) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
