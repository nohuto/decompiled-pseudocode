/*
 * XREFs of sub_1405B7E7C @ 0x1405B7E7C
 * Callers:
 *     sub_140264720 @ 0x140264720 (sub_140264720.c)
 *     sub_140266158 @ 0x140266158 (sub_140266158.c)
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_1402CA210 @ 0x1402CA210 (sub_1402CA210.c)
 *     sub_140316E90 @ 0x140316E90 (sub_140316E90.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1403C4E98 @ 0x1403C4E98 (sub_1403C4E98.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405B766C @ 0x1405B766C (sub_1405B766C.c)
 *     sub_1405B7EB4 @ 0x1405B7EB4 (sub_1405B7EB4.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     sub_1405B77AC @ 0x1405B77AC (sub_1405B77AC.c)
 *     sub_14065416C @ 0x14065416C (sub_14065416C.c)
 */

__int64 __fastcall sub_1405B7E7C(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  sub_1405B77AC();
  LOBYTE(v2) = KeGetCurrentIrql() < 2u;
  result = sub_14065416C(*a1, v2, a1[1], a1 + 4);
  a1[1] = 0;
  return result;
}
