/*
 * XREFs of sub_140AF66BC @ 0x140AF66BC
 * Callers:
 *     sub_140AF5C0C @ 0x140AF5C0C (sub_140AF5C0C.c)
 * Callees:
 *     sub_1405A6950 @ 0x1405A6950 (sub_1405A6950.c)
 */

_BOOL8 __fastcall sub_140AF66BC(ULONG_PTR a1)
{
  return qword_140C50710 && !*((_BYTE *)sub_1405A6950(a1) + 14);
}
