/*
 * XREFs of sub_1406516CC @ 0x1406516CC
 * Callers:
 *     sub_1406500D8 @ 0x1406500D8 (sub_1406500D8.c)
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 *     sub_140651D6C @ 0x140651D6C (sub_140651D6C.c)
 *     sub_14065246C @ 0x14065246C (sub_14065246C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406516CC(__int64 a1, __int64 a2, __int64 a3)
{
  return sub_14042A5E0(a1, a3 << *(_DWORD *)(a1 + 240));
}
