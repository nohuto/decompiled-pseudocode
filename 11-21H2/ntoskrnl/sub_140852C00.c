/*
 * XREFs of sub_140852C00 @ 0x140852C00
 * Callers:
 *     sub_140670488 @ 0x140670488 (sub_140670488.c)
 *     sub_14070EFE4 @ 0x14070EFE4 (sub_14070EFE4.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140852C00(__int128 *a1)
{
  char *v1; // rdx
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r11
  __int64 v6; // r9
  int v7; // r8d
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  char v10; // r10
  _DWORD v12[4]; // [rsp+0h] [rbp-49h]
  __int128 v13; // [rsp+10h] [rbp-39h]
  __int64 v14; // [rsp+20h] [rbp-29h]
  _DWORD v15[3]; // [rsp+30h] [rbp-19h]
  char v16; // [rsp+3Ch] [rbp-Dh] BYREF
  int v17; // [rsp+4Ch] [rbp+3h]
  __m128i si128; // [rsp+50h] [rbp+7h]
  __m128i v19; // [rsp+60h] [rbp+17h]
  __m128i v20; // [rsp+70h] [rbp+27h]
  int v21; // [rsp+80h] [rbp+37h]

  v15[0] = 1;
  v15[1] = 7;
  v15[2] = 9;
  v1 = &v16;
  v2 = 11;
  v3 = 4LL;
  do
  {
    *(_DWORD *)v1 = v2++;
    v1 += 4;
    --v3;
  }
  while ( v3 );
  v4 = 0;
  v5 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140025E70);
  v6 = 0LL;
  v20 = _mm_load_si128((const __m128i *)&xmmword_140025E50);
  v7 = 39;
  v8 = *a1;
  v19 = _mm_load_si128((const __m128i *)&xmmword_140025E60);
  v9 = *((_QWORD *)a1 + 2);
  v13 = v8;
  v17 = 17;
  v21 = 37;
  v12[0] = 11;
  v14 = v9;
  do
  {
    v10 = (*((_QWORD *)&v13 + ((unsigned __int64)(4 * v4) >> 6)) >> ((4 * v4) & 0x3F)) & 3;
    if ( (unsigned int)v5 < 0x15 && v15[v5] == v4 )
    {
      v5 = (unsigned int)(v5 + 1);
    }
    else if ( v10 )
    {
      return 3221225485LL;
    }
    if ( (_DWORD)v6 || v12[v6] != v4 )
    {
      if ( v10 == 3 )
        return 3221225485LL;
    }
    else
    {
      v6 = 1LL;
    }
    ++v4;
  }
  while ( v4 < 0x27 );
  v13 = v8;
  v14 = v9;
  while ( ((*((_QWORD *)&v13 + ((unsigned __int64)(unsigned int)(4 * v7) >> 6)) >> ((4 * v7) & 0x3F)) & 3) == 0 )
  {
    if ( (unsigned int)++v7 >= 0x30 )
      return 0LL;
  }
  return 3221225485LL;
}
