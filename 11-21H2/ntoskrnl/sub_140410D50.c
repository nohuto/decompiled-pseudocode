/*
 * XREFs of sub_140410D50 @ 0x140410D50
 * Callers:
 *     sub_140410BB8 @ 0x140410BB8 (sub_140410BB8.c)
 * Callees:
 *     sub_140400B2C @ 0x140400B2C (sub_140400B2C.c)
 *     sub_140400C60 @ 0x140400C60 (sub_140400C60.c)
 *     sub_140400F34 @ 0x140400F34 (sub_140400F34.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_14040106C @ 0x14040106C (sub_14040106C.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_1404012B0 @ 0x1404012B0 (sub_1404012B0.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 *     sub_14041660C @ 0x14041660C (sub_14041660C.c)
 *     sub_140416650 @ 0x140416650 (sub_140416650.c)
 *     sub_140416A74 @ 0x140416A74 (sub_140416A74.c)
 *     sub_140416A80 @ 0x140416A80 (sub_140416A80.c)
 */

__int64 __fastcall sub_140410D50(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // ebp
  __int64 v9; // r13
  unsigned int v10; // r15d
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned int v14; // ebx
  int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rbp
  unsigned int v18; // eax
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  _BYTE v24[88]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+20h]
  unsigned int v26; // [rsp+B8h] [rbp+20h]
  __int64 v27; // [rsp+C8h] [rbp+30h]
  __int64 v28; // [rsp+D0h] [rbp+38h]

  v25 = a4;
  v7 = a4;
  memset(v24, 0, 32);
  v9 = (unsigned int)sub_140401368((__int64)a1);
  if ( v7 >= (unsigned int)sub_140400B2C() )
  {
    v7 = sub_140400B2C();
    v25 = v7;
  }
  v10 = 4;
  if ( v7 > 0x141 )
    v10 = 5;
  v11 = (unsigned int)sub_14041660C(v24, (unsigned int)(1 << v10), (unsigned int)v9);
  sub_140416A74(v24, a6, v11);
  v12 = sub_140400F4C();
  v13 = v9 + v9 + v11 + a6;
  v23 = sub_140400F4C();
  v28 = -2 * v9 - v11 + a7;
  sub_14040106C(1, a1, v12, v13, v28);
  sub_140416A80(v24, 0LL, v12, (unsigned int)v9);
  sub_140400F34();
  sub_140416A80(v24, 1LL, v12, (unsigned int)v9);
  v14 = 2;
  if ( (unsigned int)(1 << v10) > 2 )
  {
    do
    {
      v21 = v28;
      v20 = v13;
      sub_1404011D4(a1, v12);
      sub_140416A80(v24, v14++, v12, (unsigned int)v9);
    }
    while ( v14 < 1 << v10 );
    v7 = v25;
  }
  v26 = (v7 - 1) / v10;
  v15 = v10 * v26;
  v16 = sub_140400C60();
  sub_140416650(v24, v16, v12, (unsigned int)v9, v20, v21);
  if ( v26 )
  {
    v27 = v26;
    do
    {
      v17 = v10;
      do
      {
        sub_1404012B0(a1);
        --v17;
      }
      while ( v17 );
      v15 -= v10;
      v18 = sub_140400C60();
      sub_140416650(v24, v18, v23, (unsigned int)v9, v28, v22);
      v22 = v28;
      sub_1404011D4(a1, v12);
      --v27;
    }
    while ( v27 );
  }
  return sub_140400F34();
}
