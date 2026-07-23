/*
 * XREFs of sub_140A2EF0C @ 0x140A2EF0C
 * Callers:
 *     sub_1407880F0 @ 0x1407880F0 (sub_1407880F0.c)
 *     sub_1407881D0 @ 0x1407881D0 (sub_1407881D0.c)
 *     sub_140789110 @ 0x140789110 (sub_140789110.c)
 *     sub_140A30A20 @ 0x140A30A20 (sub_140A30A20.c)
 * Callees:
 *     sub_1407829F8 @ 0x1407829F8 (sub_1407829F8.c)
 *     sub_140782BB0 @ 0x140782BB0 (sub_140782BB0.c)
 *     sub_140A2F428 @ 0x140A2F428 (sub_140A2F428.c)
 */

__int64 __fastcall sub_140A2EF0C(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7,
        int a8)
{
  unsigned int *v8; // rsi
  int v9; // r14d
  int v10; // r15d
  int v12; // ebx
  __int64 v13; // r12
  unsigned int v14; // r13d
  int v15; // eax
  __int64 v16; // r15
  __int64 *v17; // rax
  __int64 *v18; // r14
  int v19; // eax
  __int64 v20; // r8
  int v21; // ecx
  unsigned int v22; // eax
  void *v24[3]; // [rsp+40h] [rbp-18h] BYREF
  int v25; // [rsp+A0h] [rbp+48h] BYREF
  int v26; // [rsp+A8h] [rbp+50h]
  __int64 v27; // [rsp+B0h] [rbp+58h]
  __int64 v28; // [rsp+B8h] [rbp+60h]

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v8 = a7;
  v9 = a4;
  v10 = a3;
  v24[0] = 0LL;
  v12 = 0;
  v25 = 0;
  *a7 = 0;
  v13 = 0LL;
  v14 = 0;
  if ( a1[6] )
  {
    v13 = a1[6];
    v15 = sub_1407829F8(a1, v13, a2, v24);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v12 = sub_140A2F428(*a1, v24[0], v10, v9, a5, a6, (__int64)v8, a8);
    }
    else if ( v15 == -1073740697 )
    {
      v12 = -1073741766;
    }
  }
  else
  {
    v16 = a5;
    v17 = a1 + 2;
    v18 = (__int64 *)a1[2];
    while ( v18 != v17 )
    {
      v13 = (__int64)v18;
      v19 = sub_1407829F8(a1, (__int64)v18, a2, v24);
      v12 = v19;
      if ( v19 == -1073740697 )
      {
        v12 = 0;
      }
      else
      {
        if ( v19 < 0 )
          break;
        v12 = sub_140A2F428(*a1, v24[0], v27, v28, v16 + 2LL * v14, a6 - v14, (__int64)&v25, a8);
        sub_140782BB0((__int64)a1, (__int64)v18, v20, v24[0]);
        v21 = v25;
        v24[0] = 0LL;
        if ( v25 )
          v21 = --v25;
        if ( v16 && v21 + v14 < a6 )
          v14 += v21;
        *v8 += v21;
        if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741789 )
          break;
      }
      v18 = (__int64 *)*v18;
      v17 = a1 + 2;
      a2 = v26;
    }
    v22 = *v8 + 1;
    *v8 = v22;
    if ( v12 >= 0 )
    {
      if ( v16 && v22 <= a6 )
        *(_WORD *)(v16 + 2LL * (v22 - 1)) = 0;
      else
        v12 = -1073741789;
    }
  }
  if ( v24[0] )
    sub_140782BB0((__int64)a1, v13, a3, v24[0]);
  return (unsigned int)v12;
}
