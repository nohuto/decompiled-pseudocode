/*
 * XREFs of sub_1403BD0FC @ 0x1403BD0FC
 * Callers:
 *     sub_1403BD04C @ 0x1403BD04C (sub_1403BD04C.c)
 * Callees:
 *     sub_1403BDD00 @ 0x1403BDD00 (sub_1403BDD00.c)
 *     sub_1403BE4F0 @ 0x1403BE4F0 (sub_1403BE4F0.c)
 *     sub_1403DD284 @ 0x1403DD284 (sub_1403DD284.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403BD0FC(__int64 a1, int a2, int a3)
{
  int v6; // ebx
  __int64 result; // rax
  _QWORD v8[30]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+110h] [rbp+10h] BYREF
  __int128 v10; // [rsp+120h] [rbp+20h]
  __int128 v11; // [rsp+130h] [rbp+30h]
  char v12; // [rsp+170h] [rbp+70h] BYREF
  char v13; // [rsp+178h] [rbp+78h] BYREF
  char v14; // [rsp+180h] [rbp+80h] BYREF
  char v15; // [rsp+188h] [rbp+88h] BYREF

  v14 = 0;
  v12 = 0;
  v15 = 0;
  v13 = 0;
  memset(v8, 0, sizeof(v8));
  v6 = HIDWORD(v8[27]);
  v9 = 0LL;
  v8[25] = &v9;
  v10 = 0LL;
  v8[0] = 0xF000000001LL;
  v11 = 0LL;
  v8[26] = 0x200000030LL;
  LODWORD(v8[27]) = a2;
  if ( byte_140D011A2 )
  {
    v8[15] = sub_14052A9D0;
    HIDWORD(v8[28]) = 16;
    LODWORD(v8[29]) = 0xFFFF;
    if ( !byte_140D011A1 )
      v6 = HIDWORD(v8[27]) | 0x100;
    if ( (unsigned __int8)sub_1403DD284(&v14, &v15, &v12, &v13, v8[0]) )
    {
      if ( v13 == 2 )
      {
        if ( v14 != 6 || v12 != 47 )
          goto LABEL_3;
        LODWORD(v8[29]) = 255;
      }
      if ( v13 == 1 )
      {
        byte_140C4A020 = 1;
        v6 |= 0x400u;
        v8[22] = sub_140372CC0;
      }
    }
  }
  else
  {
    HIDWORD(v8[28]) = 4;
    v8[7] = sub_1403B6250;
    v6 = HIDWORD(v8[27]) | 4;
    LODWORD(v8[29]) = 15;
  }
LABEL_3:
  HIDWORD(v8[29]) = 96;
  v8[1] = sub_1403B3320;
  HIDWORD(v8[27]) = v6 | 0xFB;
  v8[18] = qword_14052AA80;
  LODWORD(v8[28]) = 15;
  v8[2] = sub_1403B4F40;
  *(_QWORD *)&v9 = a1;
  v8[3] = sub_1403B3540;
  v8[4] = sub_1403B6DA0;
  v8[5] = sub_1403B6D40;
  v8[9] = sub_14052AAD0;
  v8[10] = qword_140C54BF0;
  v8[11] = sub_140258A60;
  v8[12] = sub_14021C8B0;
  v8[13] = sub_1403B5D40;
  v8[14] = sub_1403DA710;
  v8[16] = sub_140534EA0;
  v8[17] = sub_140534DC0;
  v8[20] = sub_140231830;
  DWORD2(v9) = a2;
  HIDWORD(v10) = a3;
  result = sub_1403BE4F0(a1, 1024LL);
  if ( (int)result >= 0 )
    return sub_1403BDD00(v8);
  return result;
}
