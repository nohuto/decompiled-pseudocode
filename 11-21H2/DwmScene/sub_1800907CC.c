/*
 * XREFs of sub_1800907CC @ 0x1800907CC
 * Callers:
 *     sub_18008F5A4 @ 0x18008F5A4 (sub_18008F5A4.c)
 *     sub_1800907FC @ 0x1800907FC (sub_1800907FC.c)
 *     sub_1800909C8 @ 0x1800909C8 (sub_1800909C8.c)
 *     sub_180091194 @ 0x180091194 (sub_180091194.c)
 *     sub_180092984 @ 0x180092984 (sub_180092984.c)
 *     sub_180092E0C @ 0x180092E0C (sub_180092E0C.c)
 *     sub_180092F68 @ 0x180092F68 (sub_180092F68.c)
 *     sub_18009341C @ 0x18009341C (sub_18009341C.c)
 *     sub_180093640 @ 0x180093640 (sub_180093640.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800907CC(__int64 a1, unsigned __int16 a2)
{
  return *(_QWORD *)(a1 + 56) + 56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
}
