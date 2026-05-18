/*
 * XREFs of sub_1800908F8 @ 0x1800908F8
 * Callers:
 *     sub_18008F5A4 @ 0x18008F5A4 (sub_18008F5A4.c)
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 *     sub_1800907FC @ 0x1800907FC (sub_1800907FC.c)
 *     sub_1800908D4 @ 0x1800908D4 (sub_1800908D4.c)
 *     sub_1800909C8 @ 0x1800909C8 (sub_1800909C8.c)
 *     sub_180092E0C @ 0x180092E0C (sub_180092E0C.c)
 *     sub_180092F68 @ 0x180092F68 (sub_180092F68.c)
 *     sub_18009341C @ 0x18009341C (sub_18009341C.c)
 *     sub_180093640 @ 0x180093640 (sub_180093640.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800908F8(__int64 a1, unsigned __int16 a2)
{
  return *(_WORD *)(a1 + 2LL * a2 + 128) != 0xFFFF;
}
