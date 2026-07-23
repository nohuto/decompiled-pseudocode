/*
 * XREFs of sub_1403ADF94 @ 0x1403ADF94
 * Callers:
 *     sub_1403ADD44 @ 0x1403ADD44 (sub_1403ADD44.c)
 *     sub_1403ADE74 @ 0x1403ADE74 (sub_1403ADE74.c)
 *     sub_1403AE024 @ 0x1403AE024 (sub_1403AE024.c)
 *     sub_1405181D0 @ 0x1405181D0 (sub_1405181D0.c)
 * Callees:
 *     sub_14023AB60 @ 0x14023AB60 (sub_14023AB60.c)
 *     sub_1403AE024 @ 0x1403AE024 (sub_1403AE024.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403ADF94(
        unsigned __int16 a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int Size)
{
  if ( (unsigned __int8)sub_1403AE024() )
  {
    sub_14023AB60((unsigned int *)a1, a2, a3, a4, a5, Size, 0);
    return Size;
  }
  else
  {
    memset(a4, 255, Size);
    return 0LL;
  }
}
