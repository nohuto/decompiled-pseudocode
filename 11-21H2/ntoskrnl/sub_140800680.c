/*
 * XREFs of sub_140800680 @ 0x140800680
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140800A38 @ 0x140800A38 (sub_140800A38.c)
 *     sub_140800BAC @ 0x140800BAC (sub_140800BAC.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_14099D244 @ 0x14099D244 (sub_14099D244.c)
 */

__int64 __fastcall sub_140800680(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  int v5; // edi
  int v6; // r8d
  int v7; // eax
  int v8; // r8d
  int v10; // eax
  __int16 v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF

  v11 = 0;
  v15 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  v5 = sub_140812B74(a1, &qword_14000F188, &v13);
  if ( v5 < 0 )
    goto LABEL_10;
  v12 = 16;
  v5 = sub_140812D44(v13, 587202563, v6, (unsigned int)&v16, (__int64)&v12);
  if ( v5 >= 0 )
  {
    v7 = sub_140812B74(a1, &v16, &v14);
    v3 = v14;
    v5 = v7;
    if ( v7 >= 0 )
    {
      v5 = sub_140800A38(v14, 1LL, &v15, 0LL);
      if ( v5 >= 0 )
      {
        if ( (HIDWORD(v15) & 0xF0000000) == 0x10000000
          && (HIDWORD(v15) & 0xF00000) == 0x200000
          && (HIDWORD(v15) & 0xFFFFF) == 4 )
        {
          v12 = 2;
          v5 = sub_140812D44(v3, 637534211, v8, (unsigned int)&v11, (__int64)&v12);
          if ( v5 < 0 || !(_BYTE)v11 )
            v5 = sub_140800BAC(v3, v13);
          goto LABEL_10;
        }
        v5 = -1073741275;
      }
    }
    if ( v3 )
    {
      sub_140812D00(v3);
      v3 = 0LL;
      v14 = 0LL;
    }
  }
  if ( !byte_140C4E508 )
  {
    v10 = sub_14099D244(a1, v13, &v14);
    v3 = v14;
    v5 = v10;
  }
  if ( v5 >= 0 )
    v5 = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( v13 )
    sub_140812D00(v13);
  if ( v5 < 0 )
  {
    if ( !v3 )
      return (unsigned int)v5;
LABEL_27:
    sub_140812D00(v3);
    return (unsigned int)v5;
  }
  if ( !a2 )
    goto LABEL_27;
  *a2 = v3;
  return (unsigned int)v5;
}
