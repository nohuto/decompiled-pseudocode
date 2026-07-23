/*
 * XREFs of sub_140A2C08C @ 0x140A2C08C
 * Callers:
 *     sub_140A2AAB0 @ 0x140A2AAB0 (sub_140A2AAB0.c)
 *     sub_140A2B388 @ 0x140A2B388 (sub_140A2B388.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406D0858 @ 0x1406D0858 (sub_1406D0858.c)
 *     sub_140A2A7B4 @ 0x140A2A7B4 (sub_140A2A7B4.c)
 */

__int64 __fastcall sub_140A2C08C(wchar_t *Str1, wchar_t *a2, wchar_t *a3, _WORD *a4, unsigned int a5, unsigned int *a6)
{
  wchar_t *v6; // rax
  wchar_t *v7; // r15
  unsigned int v8; // r12d
  _WORD *v9; // rbx
  int v10; // r14d
  unsigned int v11; // r13d
  const wchar_t *v12; // rsi
  const wchar_t *v13; // rdi
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rax
  const wchar_t *i; // rdi
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rax
  int v26; // edi
  unsigned int v27; // r14d
  _WORD *v29; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v30; // [rsp+28h] [rbp-10h]
  wchar_t *Str1a; // [rsp+80h] [rbp+48h]
  wchar_t *v32; // [rsp+88h] [rbp+50h]
  wchar_t *Str2; // [rsp+90h] [rbp+58h]
  unsigned int v34; // [rsp+98h] [rbp+60h] BYREF

  Str2 = a3;
  v32 = a2;
  Str1a = Str1;
  v6 = Str1;
  v7 = a2;
  v29 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( a4 && a5 >= 2 )
  {
    v11 = a5;
    v9 = a4;
    v29 = a4;
    *a4 = 0;
  }
  while ( 1 )
  {
    v12 = sub_140A2A7B4(v6, v7, a3);
    v30 = v12;
    v13 = Str1a;
    if ( *Str1a )
    {
      do
      {
        if ( v12 && !wcsicmp(v13, v12) )
          break;
        if ( wcsicmp(v13, Str2) )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v13[v14] );
          v10 += 2 * v14 + 2;
          v15 = 2 * v14 + 2;
          if ( v9 )
          {
            v34 = v11;
            if ( sub_1406D0858(v9, &v34, v13, &v29) )
            {
              v9 = v29;
            }
            else
            {
              v9 = 0LL;
              v29 = 0LL;
              v8 = -1073741789;
            }
            v11 -= v15;
          }
          v12 = v30;
        }
        v16 = -1LL;
        do
          ++v16;
        while ( v13[v16] );
        v13 += v16 + 1;
      }
      while ( *v13 );
      v7 = v32;
    }
    Str1a = (wchar_t *)v13;
    if ( *v13 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v13[v17] );
      Str1a = (wchar_t *)&v13[v17 + 1];
    }
    if ( v7 )
    {
      for ( i = v7; *i; i += v21 + 1 )
      {
        if ( v12 && !wcsicmp(i, v12) )
          break;
        v19 = -1LL;
        do
          ++v19;
        while ( i[v19] );
        v10 += 2 * v19 + 2;
        v20 = 2 * v19 + 2;
        if ( v9 )
        {
          v34 = v11;
          if ( sub_1406D0858(v9, &v34, i, &v29) )
          {
            v9 = v29;
          }
          else
          {
            v9 = 0LL;
            v29 = 0LL;
            v8 = -1073741789;
          }
          v11 -= v20;
        }
        v21 = -1LL;
        do
          ++v21;
        while ( i[v21] );
        v12 = v30;
      }
      v7 = (wchar_t *)i;
      v32 = (wchar_t *)i;
      if ( *i )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( i[v22] );
        v7 = (wchar_t *)&i[v22 + 1];
        v32 = v7;
      }
    }
    if ( !v12 )
      break;
    v23 = wcsicmp(v12, Str2);
    a3 = Str2;
    v24 = v23 == 0;
    v6 = Str1a;
    if ( !v24 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( v12[v25] );
      a3 = Str2;
      v10 += 2 * v25 + 2;
      v26 = 2 * v25 + 2;
      v6 = Str1a;
      if ( v9 )
      {
        v34 = v11;
        if ( sub_1406D0858(v9, &v34, v12, &v29) )
        {
          v9 = v29;
        }
        else
        {
          v9 = 0LL;
          v8 = -1073741789;
          v29 = 0LL;
        }
        v6 = Str1a;
        v11 -= v26;
        a3 = Str2;
      }
    }
  }
  if ( v10 )
  {
    v27 = v10 + 2;
    *a6 = v27;
    if ( !v9 || a5 < v27 )
      return (unsigned int)-1073741789;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v8;
}
