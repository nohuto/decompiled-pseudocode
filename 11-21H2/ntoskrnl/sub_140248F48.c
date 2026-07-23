/*
 * XREFs of sub_140248F48 @ 0x140248F48
 * Callers:
 *     sub_14023BE50 @ 0x14023BE50 (sub_14023BE50.c)
 *     sub_1403B1DEC @ 0x1403B1DEC (sub_1403B1DEC.c)
 *     sub_1403C2B24 @ 0x1403C2B24 (sub_1403C2B24.c)
 *     sub_1405B11A0 @ 0x1405B11A0 (sub_1405B11A0.c)
 *     sub_1405B1568 @ 0x1405B1568 (sub_1405B1568.c)
 *     sub_140B524A0 @ 0x140B524A0 (sub_140B524A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140248F48(_QWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_QWORD *)(a2 + 32) )
    return (unsigned int)-(*a1 < *(_QWORD *)(a2 + 24));
  else
    return 1LL;
}
