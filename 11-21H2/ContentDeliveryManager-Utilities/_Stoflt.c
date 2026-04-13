/*
 * XREFs of _Stoflt @ 0x18000B370
 * Callers:
 *     _Stofx @ 0x180004998 (_Stofx.c)
 *     _Stodx @ 0x180005594 (_Stodx.c)
 *     _Stoldx @ 0x180005BD0 (_Stoldx.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 */

__int64 __fastcall Stoflt(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 **a3, _DWORD *a4, int a5)
{
  unsigned int v5; // r13d
  unsigned __int8 *v7; // rbx
  __int64 v8; // rbp
  int v9; // r15d
  unsigned __int8 v10; // al
  int v11; // edi
  __int64 v12; // r14
  struct lconv *v13; // rax
  unsigned __int8 *v14; // rdx
  unsigned __int8 *v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rax
  bool v18; // zf
  signed int v19; // r10d
  __int64 v20; // r9
  __int64 i; // r8
  unsigned __int8 *v22; // r12
  char v23; // bp
  unsigned __int8 v24; // cl
  int v25; // r14d
  int v26; // edi
  int v27; // eax
  __int64 result; // rax
  unsigned __int8 *v29; // rcx
  unsigned __int8 *v31; // [rsp+28h] [rbp-80h]
  _BYTE v32[48]; // [rsp+30h] [rbp-78h]

  v5 = 0;
  v7 = a2;
  v31 = a1;
  v8 = (unsigned int)(9 * a5);
  if ( (int)v8 > 45 )
    v8 = 45LL;
  *a4 = 0;
  a4[1] = 0;
  v9 = 0;
  v10 = *a2;
  if ( *a2 == 48 )
  {
    v9 = 1;
    do
      v10 = *++v7;
    while ( *v7 == 48 );
  }
  v11 = 0;
  if ( isdigit(v10) )
  {
    v12 = 0LL;
    v9 = 1;
    do
    {
      if ( v12 > (int)v8 )
      {
        ++*a4;
      }
      else
      {
        ++v11;
        v32[v12++] = *v7 - 48;
      }
      ++v7;
    }
    while ( isdigit(*v7) );
  }
  v13 = localeconv();
  v14 = v7 + 1;
  if ( *v7 != *v13->decimal_point )
    v14 = v7;
  v15 = v14;
  if ( !v11 && *v14 == 48 )
  {
    v9 = 1;
    do
    {
      --*a4;
      ++v15;
    }
    while ( *v15 == 48 );
  }
  if ( isdigit(*v15) )
  {
    v16 = v11;
    v9 = 1;
    do
    {
      if ( v16 <= (int)v8 )
      {
        ++v11;
        v32[v16++] = *v15 - 48;
        --*a4;
      }
      ++v15;
    }
    while ( isdigit(*v15) );
  }
  if ( (int)v8 < v11 )
  {
    if ( (char)v32[v8] >= 5 )
      ++v32[(unsigned int)(v8 - 1)];
    ++*a4;
    v11 = v8;
  }
  v17 = v11;
  v18 = v11 == 0;
  if ( v11 > 0 )
  {
    do
    {
      if ( v32[v17 - 1] )
        break;
      ++*a4;
      --v11;
      --v17;
    }
    while ( v17 > 0 );
    v18 = v11 == 0;
  }
  if ( v18 )
  {
    v11 = 1;
    v32[0] = 0;
  }
  if ( v9 )
  {
    v19 = 9
        * (((int)((unsigned __int64)(954437177LL * v11) >> 32) >> 1)
         + 1
         + ((unsigned int)((unsigned __int64)(954437177LL * v11) >> 32) >> 31))
        - v11;
    LOBYTE(v5) = v19 != 9 * (v19 / 9);
    if ( v11 > 0 )
    {
      v20 = v5;
      for ( i = 0LL; i < v11; ++i )
      {
        if ( v19 == 9 * (v19 / 9) )
        {
          ++v5;
          a4[++v20] = (char)v32[i];
        }
        else
        {
          a4[v20] = (char)v32[i] + 10 * a4[v20];
        }
        ++v19;
      }
    }
    if ( ((*v15 - 69) & 0xDF) == 0 )
    {
      v22 = v15;
      v23 = 43;
      v24 = *++v15;
      if ( ((*v15 - 43) & 0xFD) == 0 )
      {
        ++v15;
        v23 = v24;
        v24 = *v15;
      }
      v25 = 0;
      v26 = 0;
      if ( isdigit(v24) )
      {
        v25 = 1;
        do
        {
          if ( v26 < 100000000 )
            v26 = *v15 + 2 * (5 * v26 - 24);
          ++v15;
        }
        while ( isdigit(*v15) );
      }
      v27 = -v26;
      if ( v23 != 45 )
        v27 = v26;
      *a4 += v27;
      if ( !v25 )
        v15 = v22;
    }
  }
  result = v9 != 0 ? v5 : 0;
  if ( a3 )
  {
    v29 = v31;
    if ( v9 )
      v29 = v15;
    *a3 = v29;
  }
  return result;
}
