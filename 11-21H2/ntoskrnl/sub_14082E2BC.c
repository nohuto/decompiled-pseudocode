/*
 * XREFs of sub_14082E2BC @ 0x14082E2BC
 * Callers:
 *     sub_14082E228 @ 0x14082E228 (sub_14082E228.c)
 * Callees:
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 */

__int64 __fastcall sub_14082E2BC(unsigned __int16 *a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned __int64 v4; // r12
  unsigned __int16 *v5; // rbx
  __int64 result; // rax
  unsigned __int16 *v7; // r11
  const wchar_t *v8; // rdi
  unsigned int v9; // r13d
  bool v10; // dl
  char v11; // r8
  unsigned __int16 v12; // ax
  char v13; // al
  unsigned int v14; // eax
  unsigned __int16 v15; // ax
  __int64 v16; // r15
  unsigned int v17; // esi
  wchar_t *v18; // r14
  wchar_t *v19; // r8
  unsigned int v20; // edx
  wchar_t v21; // ax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int16 v24; // dx
  __int64 v25; // rcx
  __int64 v26; // rcx
  const wchar_t *v27; // r8
  __int64 v28; // rax
  int v29; // [rsp+40h] [rbp-C0h]
  unsigned int v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  char *v33; // [rsp+68h] [rbp-98h]
  _WORD v34[24]; // [rsp+70h] [rbp-90h]
  _BYTE v35[448]; // [rsp+A0h] [rbp-60h] BYREF

  v31 = 0LL;
  v2 = 0;
  v32 = 0LL;
  if ( (unsigned __int64)(a2 - 2) > 0xFFFD )
    return 3221225485LL;
  v3 = *a1;
  v4 = (unsigned __int64)a1 + a2;
  v33 = (char *)a1 + a2;
  v5 = a1 + 1;
  v30 = v3;
  v29 = 0;
  if ( !v3 )
    return (unsigned int)v2;
  while ( 1 )
  {
    if ( (unsigned __int64)(v5 + 1) > v4 )
      return 3221225485LL;
    result = sub_1402E0AC4(v5, (v4 - (unsigned __int64)v5) >> 1, &v31);
    if ( (int)result < 0 )
      return result;
    v7 = &v5[v31 + 1];
    v8 = v7 + 1;
    if ( (unsigned __int64)(v7 + 1) >= v4 )
      return 3221225485LL;
    v9 = 0;
    v10 = 1;
    if ( *v5 )
    {
      do
      {
        if ( v9 >= 0x40 )
          return 3221225485LL;
        if ( v10 )
        {
          if ( v9 >= 0x40uLL )
            sub_140502A3C();
          v35[v9] = 0;
          v11 = 0;
        }
        else
        {
          v35[v9] *= 16;
          v11 = v35[v9];
        }
        v12 = *v5;
        if ( *v5 == 32 )
        {
          if ( !v10 )
            return 3221225485LL;
        }
        else
        {
          if ( v12 <= 0x2Fu )
            return 3221225485LL;
          if ( v12 > 0x39u )
          {
            if ( v12 <= 0x40u )
              return 3221225485LL;
            if ( v12 <= 0x46u )
            {
              v13 = v12 - 55;
            }
            else
            {
              if ( v12 <= 0x60u || v12 > 0x66u )
                return 3221225485LL;
              v13 = v12 - 87;
            }
          }
          else
          {
            v13 = v12 - 48;
          }
          v35[v9] = v11 + v13;
        }
        v14 = v9 + 1;
        if ( v10 )
          v14 = v9;
        v9 = v14;
        if ( *v5 != 32 )
          v10 = !v10;
        ++v5;
      }
      while ( *v5 );
      if ( !v10 )
        return 3221225485LL;
    }
    v15 = *v7;
    if ( *v7 != 0x8004 && (v15 <= 0x800Bu || v15 > 0x800Eu) )
      return 3221225485LL;
    result = sub_1402E0AC4(v7 + 1, (v4 - (unsigned __int64)v8) >> 1, &v32);
    if ( (int)result < 0 )
      return result;
    v16 = v32;
    v17 = 0;
    v18 = (wchar_t *)&v8[v32];
    v5 = v18 + 1;
    if ( v32 )
    {
      v19 = wcschr(v8, 0x3Bu);
      if ( !v19 )
      {
        v19 = v18;
LABEL_50:
        if ( !v19 )
          goto LABEL_32;
      }
      v20 = 0;
      if ( v8 != v19 )
      {
        do
        {
          v21 = *v8++;
          v22 = v20++;
          *(_WORD *)&v35[128 * (unsigned __int64)v17 + 64 + 2 * v22] = v21;
        }
        while ( v8 != v19 );
        v4 = (unsigned __int64)v33;
      }
      v23 = v20;
      v24 = 2 * v20;
      *(_WORD *)&v35[128 * (unsigned __int64)v17 + 64 + 2 * v23] = 0;
      v25 = 2LL * v17;
      v34[4 * v25] = v24;
      v34[4 * v25 + 1] = v24 + 2;
      *(_QWORD *)&v34[4 * v25 + 4] = &v35[128 * (unsigned __int64)v17 + 64];
      if ( !*v19 || (v27 = v19 + 1, !*v27) )
      {
        ++v17;
        goto LABEL_32;
      }
      v8 = v27;
      v19 = wcschr(v27, 0x3Bu);
      if ( !v19 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( v8[v28] );
        v19 = (wchar_t *)&v8[v28];
      }
      if ( ++v17 < 3 )
        goto LABEL_50;
    }
LABEL_32:
    v26 = v16 != 0 ? v17 : 0;
    if ( !qword_140C1B8F0 )
      break;
    LOBYTE(v26) = 7;
    v2 = sub_14042A5E0(v26, v35);
    if ( v2 >= 0 && ++v29 < v30 )
      continue;
    return (unsigned int)v2;
  }
  return (unsigned int)-1073741637;
}
