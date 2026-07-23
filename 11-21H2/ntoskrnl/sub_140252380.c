/*
 * XREFs of sub_140252380 @ 0x140252380
 * Callers:
 *     sub_140251DC0 @ 0x140251DC0 (sub_140251DC0.c)
 *     sub_1403916B0 @ 0x1403916B0 (sub_1403916B0.c)
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B0670 @ 0x1403B0670 (sub_1403B0670.c)
 *     sub_1403B8644 @ 0x1403B8644 (sub_1403B8644.c)
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_140507ED8 @ 0x140507ED8 (sub_140507ED8.c)
 *     sub_1405080D4 @ 0x1405080D4 (sub_1405080D4.c)
 *     sub_140508364 @ 0x140508364 (sub_140508364.c)
 *     sub_140509344 @ 0x140509344 (sub_140509344.c)
 *     sub_14050C264 @ 0x14050C264 (sub_14050C264.c)
 *     sub_14050D048 @ 0x14050D048 (sub_14050D048.c)
 *     sub_1409088D0 @ 0x1409088D0 (sub_1409088D0.c)
 *     sub_140908918 @ 0x140908918 (sub_140908918.c)
 * Callees:
 *     sub_1402523CC @ 0x1402523CC (sub_1402523CC.c)
 */

__int64 __fastcall sub_140252380(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  _DWORD *v4; // rax

  v3 = a1;
  v4 = (_DWORD *)sub_1402523CC(a1, (unsigned int)(a1 + 1));
  if ( !v4 )
    return 3221226021LL;
  *a2 = v4[4];
  a2[1] = v3 + v4[5] - v4[7];
  return 0LL;
}
