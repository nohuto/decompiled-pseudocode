/*
 * XREFs of sub_18008D07C @ 0x18008D07C
 * Callers:
 *     sub_18008CF88 @ 0x18008CF88 (sub_18008CF88.c)
 * Callees:
 *     sub_1800105A8 @ 0x1800105A8 (sub_1800105A8.c)
 *     sub_180048440 @ 0x180048440 (sub_180048440.c)
 *     sub_18005524C @ 0x18005524C (sub_18005524C.c)
 *     sub_180085D94 @ 0x180085D94 (sub_180085D94.c)
 *     sub_18008CFB8 @ 0x18008CFB8 (sub_18008CFB8.c)
 *     sub_18008D2E8 @ 0x18008D2E8 (sub_18008D2E8.c)
 *     sub_18008D5F4 @ 0x18008D5F4 (sub_18008D5F4.c)
 *     sub_18008D634 @ 0x18008D634 (sub_18008D634.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_18008D07C(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  double v5; // xmm0_8
  __int64 *v6; // r13
  unsigned int v7; // r12d
  unsigned int v8; // edi
  char v9; // bl
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // esi
  unsigned int v15; // r14d
  int v16; // ebx
  __int16 v17; // r15
  unsigned int v18; // r12d
  __int64 v19; // r13
  unsigned int v20; // ebx
  int v21; // r14d
  __int64 v22; // r8
  __int128 v24; // [rsp+60h] [rbp-79h] BYREF
  __int64 v25; // [rsp+70h] [rbp-69h]
  __int128 v26; // [rsp+78h] [rbp-61h] BYREF
  __int64 v27; // [rsp+88h] [rbp-51h]
  __int128 v28; // [rsp+90h] [rbp-49h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-39h]
  __int128 v30; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-21h]

  v6 = a1;
  v7 = 0;
  sub_18005524C();
  v8 = (int)v5;
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v9 = a5;
  LOBYTE(v10) = a5;
  sub_18008D2E8(v12, v11, v10, (int)v5, (__int64)&v30, (__int64)&v28, (__int64)&v26);
  v14 = (int)v5 + 1;
  v24 = 0LL;
  v25 = 0LL;
  if ( v9 )
  {
    v20 = 1;
    if ( v8 )
    {
      v21 = (int)v5 + 1;
      do
      {
        if ( v20 > 1 )
        {
          a5 = v21 - v14;
          sub_18008D634(&v24, &a5);
        }
        do
        {
          a5 = v21 - v14 + v7;
          sub_18008D634(&v24, &a5);
          a5 = v7 + v21;
          sub_18008D634(&v24, &a5);
          ++v7;
        }
        while ( v7 <= v8 );
        if ( v20 < v8 )
        {
          a5 = v8 + v21;
          sub_18008D634(&v24, &a5);
        }
        ++v20;
        LOWORD(v21) = v14 + v21;
        v7 = 0;
      }
      while ( v20 <= v8 );
    }
  }
  else
  {
    v15 = 1;
    if ( v8 )
    {
      v16 = (int)v5 + 1;
      do
      {
        v17 = v16 - v14;
        if ( v15 > 1 )
        {
          a5 = v8 + v17;
          sub_18008D634(&v24, &a5);
        }
        if ( v14 )
        {
          v18 = v8;
          v19 = v14;
          do
          {
            a5 = v17 + v18;
            sub_18008D634(&v24, &a5);
            a5 = v18 + v16;
            sub_18008D634(&v24, &a5);
            --v18;
            --v19;
          }
          while ( v19 );
        }
        if ( v15 < v8 )
        {
          a5 = v16;
          sub_18008D634(&v24, &a5);
        }
        ++v15;
        LOWORD(v16) = v14 + v16;
      }
      while ( v15 <= v8 );
      v6 = a1;
    }
  }
  sub_18008CFB8(v6, a2, v13, &v30, &v24);
  sub_180048440(*v6, 0LL, v22);
  sub_18008D5F4(&v24);
  sub_1800105A8((__int64)&v26);
  sub_180085D94((__int64)&v28);
  sub_180085D94((__int64)&v30);
  return v6;
}
