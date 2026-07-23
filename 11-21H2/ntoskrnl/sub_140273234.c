/*
 * XREFs of sub_140273234 @ 0x140273234
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_14023608C @ 0x14023608C (sub_14023608C.c)
 *     sub_1402464E0 @ 0x1402464E0 (sub_1402464E0.c)
 *     sub_14024DD20 @ 0x14024DD20 (sub_14024DD20.c)
 *     sub_14025191C @ 0x14025191C (sub_14025191C.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402C2AD0 @ 0x1402C2AD0 (sub_1402C2AD0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1402E851C @ 0x1402E851C (sub_1402E851C.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_140338DB0 @ 0x140338DB0 (sub_140338DB0.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_1403735A0 @ 0x1403735A0 (sub_1403735A0.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 *     sub_14037D5E8 @ 0x14037D5E8 (sub_14037D5E8.c)
 *     sub_1403C49DC @ 0x1403C49DC (sub_1403C49DC.c)
 *     sub_1403C4E98 @ 0x1403C4E98 (sub_1403C4E98.c)
 *     sub_14045BF06 @ 0x14045BF06 (sub_14045BF06.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140273234(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 5LL;
  else
    return *(_BYTE *)(a1 + 35) & 7;
}
