/*
 * XREFs of sub_140651D6C @ 0x140651D6C
 * Callers:
 *     sub_1406515E8 @ 0x1406515E8 (sub_1406515E8.c)
 *     sub_140651824 @ 0x140651824 (sub_140651824.c)
 *     sub_140651C24 @ 0x140651C24 (sub_140651C24.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140651394 @ 0x140651394 (sub_140651394.c)
 *     sub_1406516CC @ 0x1406516CC (sub_1406516CC.c)
 *     sub_140651710 @ 0x140651710 (sub_140651710.c)
 *     sub_140651754 @ 0x140651754 (sub_140651754.c)
 *     sub_140930370 @ 0x140930370 (sub_140930370.c)
 */

__int64 __fastcall sub_140651D6C(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r10
  unsigned int v4; // edx
  const __m128i *v5; // r14
  __int32 v7; // eax
  unsigned int v8; // edi
  int v9; // esi
  char v10; // bp
  __int64 v11; // rdi
  __int64 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // r8
  char v15; // cl
  unsigned int v16; // r9d
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-68h]
  unsigned int v26; // [rsp+24h] [rbp-64h]
  unsigned int v27; // [rsp+28h] [rbp-60h]
  unsigned int v28; // [rsp+2Ch] [rbp-5Ch]
  __int128 v29; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0LL;
  v27 = 0;
  v4 = 0;
  v26 = 0;
  v25 = 0;
  v5 = *(const __m128i **)(*a1 + 264);
  v7 = a2[2];
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v29 = 0LL;
  if ( !v7 )
  {
    sub_140930370(&v29);
    v4 = 0;
    v7 = HIDWORD(v29) ^ DWORD2(v29) ^ DWORD1(v29) ^ v29;
    a2[2] = v7;
    v2 = 0LL;
  }
  if ( v5[27].m128i_i32[2] != v7 )
  {
    v5[27].m128i_i32[2] = v7;
    v10 = 1;
    a2[3] = sub_140651710(v5);
  }
  while ( 2 )
  {
    v28 = v8;
    v11 = (__int64)&v5[27].m128i_i64[1] + 6;
    v12 = v2;
    v13 = v2;
    do
    {
      if ( v4 >= a2[1] )
        break;
      v14 = 18LL * v4;
      v15 = a2[36 * v4 + 20];
      if ( v15 == 5 || v15 == 15 )
      {
        if ( v12 )
          return (unsigned int)-1073741823;
        v16 = v27;
        v12 = v11;
      }
      else
      {
        v16 = v26;
      }
      v17 = a2[2];
      a2[36 * v4 + 23] = 0;
      a2[36 * v4 + 22] = v17;
      *(_QWORD *)&a2[36 * v4 + 24] = *(_QWORD *)&a2[36 * v4 + 14];
      if ( LOBYTE(a2[36 * v4 + 19]) != (_BYTE)v2 )
      {
        if ( v15 )
        {
          *(_BYTE *)v11 = BYTE1(a2[36 * v4 + 20]) != 0 ? 0x80 : 0;
          *(_BYTE *)(v11 + 4) = a2[36 * v4 + 20];
          v18 = *(_QWORD *)&a2[36 * v4 + 14];
          v19 = *(_DWORD *)(*a1 + 236);
          if ( v19 )
            v18 /= (__int64)v19;
          *(_DWORD *)(v11 + 8) = v18 - v16;
          v20 = *(_QWORD *)&a2[2 * v14 + 16];
          v21 = *(_DWORD *)(*a1 + 236);
          if ( v21 )
            v20 /= (__int64)v21;
          *(_DWORD *)(v11 + 12) = v20;
          sub_140651754(v11, (int *)(*a1 + 216));
          v4 = v25;
          LOBYTE(v2) = 0;
        }
        else
        {
          *(_OWORD *)v11 = 0LL;
        }
        v10 = 1;
      }
      ++v4;
      ++v13;
      v11 += 16LL;
      v25 = v4;
    }
    while ( v13 < 4 );
    if ( v10 )
    {
      v9 = sub_1406516CC(*a1, 1LL, v26);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v10 = 0;
    }
    if ( v12 )
    {
      v8 = *(_DWORD *)(v12 + 8);
      v22 = v8 + v27;
      v26 = v8 + v27;
      if ( v28 )
        v8 = v28;
      v27 = v8;
      v23 = sub_140651394(*a1, 1LL, v22);
      v2 = 0LL;
      v9 = v23;
      if ( v23 >= 0 )
      {
        v4 = v25;
        v5[31].m128i_i16[7] = -21931;
        continue;
      }
    }
    break;
  }
  return (unsigned int)v9;
}
