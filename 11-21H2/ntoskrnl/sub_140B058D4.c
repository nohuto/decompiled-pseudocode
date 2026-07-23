/*
 * XREFs of sub_140B058D4 @ 0x140B058D4
 * Callers:
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     sub_1402D9A20 @ 0x1402D9A20 (sub_1402D9A20.c)
 *     sub_140B0593C @ 0x140B0593C (sub_140B0593C.c)
 */

_BOOL8 __fastcall sub_140B058D4(__int64 a1)
{
  return (xmmword_140D06920 & 0x40000000000LL) == 0
      || (xmmword_140D06920 & 0x20000000000LL) != 0 && !(unsigned int)sub_1402D9A20(*(void **)(a1 + 48))
      || !(unsigned int)sub_140B0593C(a1, qword_140D68718) && !(unsigned int)sub_140B0593C(a1, qword_140D68720);
}
