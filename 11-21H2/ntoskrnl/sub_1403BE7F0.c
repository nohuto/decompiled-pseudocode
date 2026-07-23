/*
 * XREFs of sub_1403BE7F0 @ 0x1403BE7F0
 * Callers:
 *     sub_14039E230 @ 0x14039E230 (sub_14039E230.c)
 *     sub_1403B3320 @ 0x1403B3320 (sub_1403B3320.c)
 *     sub_1403B4F40 @ 0x1403B4F40 (sub_1403B4F40.c)
 *     sub_1403BD8C8 @ 0x1403BD8C8 (sub_1403BD8C8.c)
 *     sub_1403BE770 @ 0x1403BE770 (sub_1403BE770.c)
 *     sub_1403DF620 @ 0x1403DF620 (sub_1403DF620.c)
 *     sub_140522410 @ 0x140522410 (sub_140522410.c)
 *     sub_140522BA0 @ 0x140522BA0 (sub_140522BA0.c)
 *     sub_140529428 @ 0x140529428 (sub_140529428.c)
 *     sub_14052CA64 @ 0x14052CA64 (sub_14052CA64.c)
 *     sub_14052EC78 @ 0x14052EC78 (sub_14052EC78.c)
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 *     sub_140A64868 @ 0x140A64868 (sub_140A64868.c)
 *     sub_140A64A00 @ 0x140A64A00 (sub_140A64A00.c)
 *     sub_140AFAA68 @ 0x140AFAA68 (sub_140AFAA68.c)
 * Callees:
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 */

__int64 __fastcall sub_1403BE7F0(int a1, __int64 a2, unsigned int a3)
{
  if ( a3 > 1 )
    return 0LL;
  else
    return sub_1403BF3B8(a1, (unsigned __int64)(a2 + 4095) >> 12, a3 == 1, 0, 4);
}
