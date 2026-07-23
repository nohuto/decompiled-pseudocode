/*
 * XREFs of sub_140277C50 @ 0x140277C50
 * Callers:
 *     sub_140230F28 @ 0x140230F28 (sub_140230F28.c)
 *     sub_14026E05C @ 0x14026E05C (sub_14026E05C.c)
 *     sub_140276DE4 @ 0x140276DE4 (sub_140276DE4.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     sub_14027CE40 @ 0x14027CE40 (sub_14027CE40.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1402E8240 @ 0x1402E8240 (sub_1402E8240.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 *     sub_1402EB1A0 @ 0x1402EB1A0 (sub_1402EB1A0.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_1403CA414 @ 0x1403CA414 (sub_1403CA414.c)
 *     sub_1403CB284 @ 0x1403CB284 (sub_1403CB284.c)
 *     sub_1403D0BD4 @ 0x1403D0BD4 (sub_1403D0BD4.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_1405898DC @ 0x1405898DC (sub_1405898DC.c)
 *     sub_140595E34 @ 0x140595E34 (sub_140595E34.c)
 *     sub_1405A511C @ 0x1405A511C (sub_1405A511C.c)
 *     sub_1405A5628 @ 0x1405A5628 (sub_1405A5628.c)
 *     sub_1405A5990 @ 0x1405A5990 (sub_1405A5990.c)
 *     sub_1405A5F5C @ 0x1405A5F5C (sub_1405A5F5C.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1405B1530 @ 0x1405B1530 (sub_1405B1530.c)
 *     sub_1405B1568 @ 0x1405B1568 (sub_1405B1568.c)
 *     sub_1405B1D98 @ 0x1405B1D98 (sub_1405B1D98.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140277C50(__int64 a1)
{
  return byte_140C58C66
      && _bittest64(
           (const signed __int64 *)qword_140C58DE0,
           (0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) >> 9);
}
