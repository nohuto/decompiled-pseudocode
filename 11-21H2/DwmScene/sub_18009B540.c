/*
 * XREFs of sub_18009B540 @ 0x18009B540
 * Callers:
 *     sub_18009AE94 @ 0x18009AE94 (sub_18009AE94.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     sub_180093FA4 @ 0x180093FA4 (sub_180093FA4.c)
 *     sub_18009B450 @ 0x18009B450 (sub_18009B450.c)
 */

__int64 __fastcall sub_18009B540(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  _QWORD *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  _QWORD *v17; // rdx
  int v18; // eax

  v2 = a2[1];
  v4 = *a2;
  v5 = v2 - *a2;
  v6 = a1[1];
  v7 = *a1;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v6 - *a1) >> 4);
  v9 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 4);
  if ( v9 <= v8 )
  {
    v15 = v7 + 48 * v9;
    if ( v4 != v2 )
    {
      v16 = v4 + 24;
      do
      {
        v17 = (_QWORD *)(v16 - 24);
        if ( v7 != v16 - 24 )
        {
          if ( *(_QWORD *)v16 >= 0x10uLL )
            v17 = (_QWORD *)*v17;
          sub_180012190((__int64 *)v7, v17, *(_QWORD *)(v16 - 8));
        }
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v16 + 8);
        *(_DWORD *)(v7 + 36) = *(_DWORD *)(v16 + 12);
        *(_BYTE *)(v7 + 40) = *(_BYTE *)(v16 + 16);
        v18 = *(_DWORD *)(v16 + 20);
        v16 += 48LL;
        *(_DWORD *)(v7 + 44) = v18;
        v7 += 48LL;
      }
      while ( v16 - 24 != v2 );
      v6 = a1[1];
    }
    result = sub_180088D1C(v15, v6);
  }
  else
  {
    if ( v9 > 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - v7) >> 4) )
    {
      sub_18009B450(a1, v9);
      v7 = *a1;
      v8 = 0LL;
    }
    v10 = v4 + 48 * v8;
    if ( v4 != v10 )
    {
      v11 = v7 + 36;
      v12 = v4 - v7;
      do
      {
        v13 = (_QWORD *)(v12 + v11 - 36);
        if ( (_QWORD *)(v11 - 36) != v13 )
        {
          if ( *(_QWORD *)(v12 + v11 - 12) >= 0x10uLL )
            v13 = (_QWORD *)*v13;
          sub_180012190((__int64 *)(v11 - 36), v13, *(_QWORD *)(v12 + v11 - 20));
        }
        *(_DWORD *)(v11 - 4) = *(_DWORD *)(v12 + v11 - 4);
        *(_DWORD *)v11 = *(_DWORD *)(v12 + v11);
        *(_BYTE *)(v11 + 4) = *(_BYTE *)(v12 + v11 + 4);
        *(_DWORD *)(v11 + 8) = *(_DWORD *)(v12 + v11 + 8);
        v11 += 48LL;
      }
      while ( v12 + v11 - 36 != v10 );
    }
    result = sub_180093FA4(v10, v2, a1[1]);
    v15 = result;
  }
  a1[1] = v15;
  return result;
}
