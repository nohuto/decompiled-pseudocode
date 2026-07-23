/*
 * XREFs of sub_1403DF3B0 @ 0x1403DF3B0
 * Callers:
 *     sub_140416F1C @ 0x140416F1C (sub_140416F1C.c)
 *     sub_140416F84 @ 0x140416F84 (sub_140416F84.c)
 *     sub_1404170F8 @ 0x1404170F8 (sub_1404170F8.c)
 *     sub_14041718C @ 0x14041718C (sub_14041718C.c)
 *     sub_140417574 @ 0x140417574 (sub_140417574.c)
 *     sub_140417818 @ 0x140417818 (sub_140417818.c)
 *     sub_140417880 @ 0x140417880 (sub_140417880.c)
 *     sub_140417C90 @ 0x140417C90 (sub_140417C90.c)
 *     sub_1404190B0 @ 0x1404190B0 (sub_1404190B0.c)
 *     sub_140419CD4 @ 0x140419CD4 (sub_140419CD4.c)
 *     sub_14041A0D4 @ 0x14041A0D4 (sub_14041A0D4.c)
 *     sub_14041A808 @ 0x14041A808 (sub_14041A808.c)
 *     sub_14041AC58 @ 0x14041AC58 (sub_14041AC58.c)
 *     sub_14041ACC0 @ 0x14041ACC0 (sub_14041ACC0.c)
 *     sub_14041AD40 @ 0x14041AD40 (sub_14041AD40.c)
 *     sub_140502D50 @ 0x140502D50 (sub_140502D50.c)
 * Callees:
 *     sub_140502C58 @ 0x140502C58 (sub_140502C58.c)
 */

__int64 __fastcall sub_1403DF3B0(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return sub_140502C58(a1, *a1, a2);
}
