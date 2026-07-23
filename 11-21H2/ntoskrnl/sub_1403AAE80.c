/*
 * XREFs of sub_1403AAE80 @ 0x1403AAE80
 * Callers:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_1403BAA84 @ 0x1403BAA84 (sub_1403BAA84.c)
 *     sub_1403BAC88 @ 0x1403BAC88 (sub_1403BAC88.c)
 *     sub_1403BAD80 @ 0x1403BAD80 (sub_1403BAD80.c)
 *     sub_1403D8A98 @ 0x1403D8A98 (sub_1403D8A98.c)
 *     sub_14050910C @ 0x14050910C (sub_14050910C.c)
 *     sub_14051B254 @ 0x14051B254 (sub_14051B254.c)
 *     sub_1407F8580 @ 0x1407F8580 (sub_1407F8580.c)
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 *     sub_140A536C8 @ 0x140A536C8 (sub_140A536C8.c)
 *     sub_140A550E0 @ 0x140A550E0 (sub_140A550E0.c)
 *     sub_140A62458 @ 0x140A62458 (sub_140A62458.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1403AAE80(_BYTE *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4)
{
  struct _KPRCB *CurrentPrcb; // r10

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*((_BYTE *)CurrentPrcb + 65) )
    return 0;
  if ( a1 )
    *a1 = *((_BYTE *)CurrentPrcb + 64);
  if ( a2 )
    *a2 = *((_BYTE *)CurrentPrcb + 66);
  if ( a3 )
    *a3 = *((_BYTE *)CurrentPrcb + 67);
  if ( a4 )
    *a4 = *((_BYTE *)CurrentPrcb + 141);
  return 1;
}
