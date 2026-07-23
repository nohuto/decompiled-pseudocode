/*
 * XREFs of sub_1403A9E4C @ 0x1403A9E4C
 * Callers:
 *     sub_1403A985C @ 0x1403A985C (sub_1403A985C.c)
 *     sub_1403A9A4C @ 0x1403A9A4C (sub_1403A9A4C.c)
 *     sub_1403A9A80 @ 0x1403A9A80 (sub_1403A9A80.c)
 *     sub_1403CE3FC @ 0x1403CE3FC (sub_1403CE3FC.c)
 *     sub_14064F0C0 @ 0x14064F0C0 (sub_14064F0C0.c)
 *     sub_140B563A4 @ 0x140B563A4 (sub_140B563A4.c)
 *     sub_140B565BC @ 0x140B565BC (sub_140B565BC.c)
 *     sub_140B5678C @ 0x140B5678C (sub_140B5678C.c)
 *     sub_140B568E8 @ 0x140B568E8 (sub_140B568E8.c)
 *     sub_140B56A6C @ 0x140B56A6C (sub_140B56A6C.c)
 *     sub_140B56B94 @ 0x140B56B94 (sub_140B56B94.c)
 *     sub_140B56C04 @ 0x140B56C04 (sub_140B56C04.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1403A9E4C(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
