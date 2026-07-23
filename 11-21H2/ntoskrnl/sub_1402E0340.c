/*
 * XREFs of sub_1402E0340 @ 0x1402E0340
 * Callers:
 *     sub_140698FBC @ 0x140698FBC (sub_140698FBC.c)
 *     sub_1406991C8 @ 0x1406991C8 (sub_1406991C8.c)
 *     sub_140699288 @ 0x140699288 (sub_140699288.c)
 *     sub_1406D068C @ 0x1406D068C (sub_1406D068C.c)
 *     sub_1406DBB10 @ 0x1406DBB10 (sub_1406DBB10.c)
 *     sub_1406DCD40 @ 0x1406DCD40 (sub_1406DCD40.c)
 *     sub_140772B6C @ 0x140772B6C (sub_140772B6C.c)
 *     sub_14077ED0C @ 0x14077ED0C (sub_14077ED0C.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_140788BD4 @ 0x140788BD4 (sub_140788BD4.c)
 *     sub_140788CE0 @ 0x140788CE0 (sub_140788CE0.c)
 *     sub_140788ED4 @ 0x140788ED4 (sub_140788ED4.c)
 *     sub_140789210 @ 0x140789210 (sub_140789210.c)
 *     sub_140789718 @ 0x140789718 (sub_140789718.c)
 *     sub_14083DA50 @ 0x14083DA50 (sub_14083DA50.c)
 *     sub_14083DEC8 @ 0x14083DEC8 (sub_14083DEC8.c)
 *     sub_14083E410 @ 0x14083E410 (sub_14083E410.c)
 *     sub_14083E6C0 @ 0x14083E6C0 (sub_14083E6C0.c)
 *     sub_14084C530 @ 0x14084C530 (sub_14084C530.c)
 *     sub_14085CCD0 @ 0x14085CCD0 (sub_14085CCD0.c)
 *     sub_140942E94 @ 0x140942E94 (sub_140942E94.c)
 *     sub_14094D4C8 @ 0x14094D4C8 (sub_14094D4C8.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 *     sub_140A28700 @ 0x140A28700 (sub_140A28700.c)
 *     sub_140A2D760 @ 0x140A2D760 (sub_140A2D760.c)
 *     sub_140A2DB88 @ 0x140A2DB88 (sub_140A2DB88.c)
 *     sub_140A2F0F0 @ 0x140A2F0F0 (sub_140A2F0F0.c)
 * Callees:
 *     sub_1402E0480 @ 0x1402E0480 (sub_1402E0480.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14055F3E4 @ 0x14055F3E4 (sub_14055F3E4.c)
 */

__int64 __fastcall sub_1402E0340(
        _WORD *a1,
        unsigned __int64 a2,
        const WCHAR *a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        int a6)
{
  int v9; // ebx
  _WORD *v10; // rbp
  unsigned __int64 v11; // rsi
  const WCHAR *v12; // rax
  int v13; // eax
  unsigned __int64 v14; // rcx
  _WORD *v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-30h] BYREF

  v9 = 0;
  if ( (a6 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v16 = a1;
    v10 = a1;
    v17 = a2;
    v11 = a2;
    if ( (a6 & 0x100) != 0 )
    {
      v12 = &word_1404370A0;
      if ( a3 )
        v12 = a3;
      a3 = v12;
    }
    v9 = 0;
    if ( (a6 & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v17 = 0LL;
      v13 = sub_1402E0480(a1, a2, &v17, a3);
      v14 = v17;
      v9 = v13;
      v11 = a2 - v17;
      v17 = a2 - v17;
      v10 = &a1[v14];
      v16 = v10;
      if ( v13 >= 0 )
      {
        if ( (a6 & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)a6, 2 * v11 - 2);
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*a3 )
      {
LABEL_13:
        if ( a4 )
          *a4 = v10;
        if ( a5 )
          *a5 = v11;
        return (unsigned int)v9;
      }
      v9 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a6 & 0x1C00) != 0 && a2 )
    {
      sub_14055F3E4(a1, 2 * a2, a3, &v16, &v17, a6);
      v10 = v16;
      v11 = v17;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_13;
  }
  return (unsigned int)v9;
}
