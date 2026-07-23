/*
 * XREFs of sub_1403ADC74 @ 0x1403ADC74
 * Callers:
 *     sub_1403ADD44 @ 0x1403ADD44 (sub_1403ADD44.c)
 *     sub_1403AE024 @ 0x1403AE024 (sub_1403AE024.c)
 * Callees:
 *     sub_14023AB60 @ 0x14023AB60 (sub_14023AB60.c)
 *     sub_1403AE024 @ 0x1403AE024 (sub_1403AE024.c)
 */

__int64 __fastcall sub_1403ADC74(
        unsigned __int16 a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6)
{
  if ( !(unsigned __int8)sub_1403AE024() )
    return 0LL;
  sub_14023AB60((unsigned int *)a1, a2, a3, a4, a5, a6, 1);
  return a6;
}
