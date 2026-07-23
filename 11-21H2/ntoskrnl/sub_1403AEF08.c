/*
 * XREFs of sub_1403AEF08 @ 0x1403AEF08
 * Callers:
 *     sub_1403AE810 @ 0x1403AE810 (sub_1403AE810.c)
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     sub_1403B8BF8 @ 0x1403B8BF8 (sub_1403B8BF8.c)
 *     sub_1403BAF00 @ 0x1403BAF00 (sub_1403BAF00.c)
 *     sub_1403BB340 @ 0x1403BB340 (sub_1403BB340.c)
 *     sub_1403BB500 @ 0x1403BB500 (sub_1403BB500.c)
 *     sub_14050E088 @ 0x14050E088 (sub_14050E088.c)
 *     sub_14051DB60 @ 0x14051DB60 (sub_14051DB60.c)
 *     sub_140A55474 @ 0x140A55474 (sub_140A55474.c)
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 *     sub_140B4D2C4 @ 0x140B4D2C4 (sub_140B4D2C4.c)
 * Callees:
 *     sub_1403AEF40 @ 0x1403AEF40 (sub_1403AEF40.c)
 */

__int64 __fastcall sub_1403AEF08(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return sub_1403AEF40(a2, a1, a3, a2, a5);
}
