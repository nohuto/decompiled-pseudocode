/*
 * XREFs of sub_1800280AC @ 0x1800280AC
 * Callers:
 *     sub_180028068 @ 0x180028068 (sub_180028068.c)
 *     sub_1800293E0 @ 0x1800293E0 (sub_1800293E0.c)
 *     sub_1800390DC @ 0x1800390DC (sub_1800390DC.c)
 *     sub_180054530 @ 0x180054530 (sub_180054530.c)
 *     sub_180055798 @ 0x180055798 (sub_180055798.c)
 *     sub_18006F220 @ 0x18006F220 (sub_18006F220.c)
 *     sub_18008A9B4 @ 0x18008A9B4 (sub_18008A9B4.c)
 *     sub_18008A9CC @ 0x18008A9CC (sub_18008A9CC.c)
 *     sub_18008B448 @ 0x18008B448 (sub_18008B448.c)
 *     sub_18008B880 @ 0x18008B880 (sub_18008B880.c)
 *     sub_18008BE0C @ 0x18008BE0C (sub_18008BE0C.c)
 *     sub_18009BCA0 @ 0x18009BCA0 (sub_18009BCA0.c)
 *     sub_1800E385C @ 0x1800E385C (sub_1800E385C.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_1800280AC(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 80);
  if ( v2 )
    sub_180010574(v2);
  return sub_180029368(a1);
}
