/*
 * XREFs of sub_1402053BC @ 0x1402053BC
 * Callers:
 *     sub_140205030 @ 0x140205030 (sub_140205030.c)
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 *     sub_14064A444 @ 0x14064A444 (sub_14064A444.c)
 *     sub_140672284 @ 0x140672284 (sub_140672284.c)
 * Callees:
 *     sub_140253C50 @ 0x140253C50 (sub_140253C50.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall sub_1402053BC(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return sub_140253C50();
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
