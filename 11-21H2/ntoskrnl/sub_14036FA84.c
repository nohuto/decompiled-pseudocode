/*
 * XREFs of sub_14036FA84 @ 0x14036FA84
 * Callers:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     sub_1403B91D4 @ 0x1403B91D4 (sub_1403B91D4.c)
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 *     sub_1403BEC78 @ 0x1403BEC78 (sub_1403BEC78.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     HalEnumerateProcessors @ 0x1403DD110 (HalEnumerateProcessors.c)
 *     sub_140508E38 @ 0x140508E38 (sub_140508E38.c)
 *     sub_14050E8C0 @ 0x14050E8C0 (sub_14050E8C0.c)
 *     sub_14050F570 @ 0x14050F570 (sub_14050F570.c)
 *     sub_140822DF0 @ 0x140822DF0 (sub_140822DF0.c)
 *     sub_140844658 @ 0x140844658 (sub_140844658.c)
 *     sub_14085E510 @ 0x14085E510 (sub_14085E510.c)
 *     sub_140863EC8 @ 0x140863EC8 (sub_140863EC8.c)
 *     sub_140908918 @ 0x140908918 (sub_140908918.c)
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 *     sub_140A54BA0 @ 0x140A54BA0 (sub_140A54BA0.c)
 *     sub_140A5B290 @ 0x140A5B290 (sub_140A5B290.c)
 *     sub_140A5B590 @ 0x140A5B590 (sub_140A5B590.c)
 *     sub_140B27364 @ 0x140B27364 (sub_140B27364.c)
 *     sub_140B4D6A0 @ 0x140B4D6A0 (sub_140B4D6A0.c)
 *     sub_140B4D6E0 @ 0x140B4D6E0 (sub_140B4D6E0.c)
 * Callees:
 *     <none>
 */

__int64 sub_14036FA84()
{
  __int64 result; // rax

  if ( !qword_140C54A88 )
    return 1LL;
  result = 2LL;
  if ( *(_DWORD *)(qword_140C54A88 + 224) == 2 )
    return 1LL;
  if ( *(_DWORD *)(qword_140C54A88 + 224) != 3 )
  {
    if ( *(_DWORD *)(qword_140C54A88 + 224) == 4 )
    {
      return 3LL;
    }
    else if ( *(_DWORD *)(qword_140C54A88 + 224) == 6 )
    {
      return 4LL;
    }
    else
    {
      return 4096LL;
    }
  }
  return result;
}
