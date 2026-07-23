/*
 * XREFs of sub_140651394 @ 0x140651394
 * Callers:
 *     sub_14064FBF4 @ 0x14064FBF4 (sub_14064FBF4.c)
 *     sub_14064FC7C @ 0x14064FC7C (sub_14064FC7C.c)
 *     sub_1406513D8 @ 0x1406513D8 (sub_1406513D8.c)
 *     sub_14065193C @ 0x14065193C (sub_14065193C.c)
 *     sub_140651D6C @ 0x140651D6C (sub_140651D6C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140651394(__int64 a1, __int64 a2, __int64 a3)
{
  return sub_14042A5E0(a1, a3 << *(_DWORD *)(a1 + 240));
}
