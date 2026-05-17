/*
 * XREFs of RtlFindCharInUnicodeString @ 0x18001DE70
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001CFF8 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x1800743E4 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindCharInUnicodeString(int a1, __int16 *a2, __int64 a3, _WORD *a4)
{
  unsigned int v4; // r10d
  char v5; // si
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  __int16 v8; // cx
  char *v9; // r12
  unsigned __int16 *v10; // rdi
  unsigned __int16 v11; // r11
  unsigned __int16 v12; // bx
  int v13; // r8d
  _BOOL8 v14; // rbp
  __int16 v15; // ax
  int v16; // esi
  __int16 v17; // r11
  int v19; // esi
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // cx
  __int64 v22; // r13
  __int64 v23; // rbp
  signed __int64 v24; // r12
  _WORD *v25; // r14
  int v26; // esi
  __int16 v27; // r8
  unsigned __int16 i; // dx
  unsigned __int16 v29; // cx
  __int64 v30; // r13
  int v31; // esi
  __int16 v32; // ax
  unsigned __int16 v33; // r10
  unsigned __int16 v34; // bp
  __int16 v35; // r14
  __int16 v36; // r15
  int v37; // [rsp+24h] [rbp-A4h]
  __int16 v38; // [rsp+28h] [rbp-A0h]
  _WORD *v39; // [rsp+30h] [rbp-98h]
  _BOOL8 v40; // [rsp+38h] [rbp-90h]
  _WORD v41[32]; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0;
  v39 = a4;
  v5 = a1;
  if ( a4 )
    *a4 = 0;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  if ( a2 )
  {
    if ( (*(_BYTE *)a2 & 1) != 0 )
      return (unsigned int)-1073741811;
    v6 = a2[1];
    if ( (v6 & 1) != 0 || (unsigned __int16)*a2 > v6 || v6 == 0xFFFF || !*((_QWORD *)a2 + 1) && (*a2 || v6) )
      return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    if ( (*(_BYTE *)a3 & 1) != 0 )
      return (unsigned int)-1073741811;
    v7 = *(_WORD *)(a3 + 2);
    if ( (v7 & 1) != 0 || *(_WORD *)a3 > v7 || v7 == 0xFFFF || !*(_QWORD *)(a3 + 8) && (*(_WORD *)a3 || v7) )
      return (unsigned int)-1073741811;
  }
  v8 = *a2;
  v9 = *(char **)(a3 + 8);
  v10 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v11 = (unsigned __int16)*a2 >> 1;
  v12 = *(_WORD *)a3 >> 1;
  v13 = v5 & 1;
  v38 = *a2;
  v37 = v13;
  if ( (v5 & 1) != 0 )
    v10 = &v10[v11 - 1];
  v14 = !(v5 & 1);
  v40 = v14;
  if ( (v5 & 4) == 0 )
  {
    if ( v12 != 1 )
    {
      if ( v11 )
      {
        v19 = v5 & 2;
        while ( 1 )
        {
          v20 = *v10;
          v21 = 0;
          if ( v19 )
          {
            if ( v12 )
            {
              do
              {
                if ( v20 == *(_WORD *)&v9[2 * v21] )
                  break;
                ++v21;
              }
              while ( v21 < v12 );
            }
            if ( v21 == v12 )
              goto LABEL_26;
          }
          else
          {
            if ( v12 )
            {
              do
              {
                if ( v20 == *(_WORD *)&v9[2 * v21] )
                  break;
                ++v21;
              }
              while ( v21 < v12 );
            }
            if ( v21 != v12 )
              goto LABEL_26;
          }
          v10 = &v10[2 * v14 - 1];
          if ( !--v11 )
            goto LABEL_26;
        }
      }
      return (unsigned int)-1073741275;
    }
    v15 = *(_WORD *)v9;
    v16 = v5 & 2;
    if ( !v11 )
      return (unsigned int)-1073741275;
    if ( v16 )
    {
      while ( *v10 == v15 )
      {
        v10 = &v10[2 * v14 - 1];
        if ( !--v11 )
          return (unsigned int)-1073741275;
      }
    }
    else
    {
      while ( *v10 != v15 )
      {
        v10 = &v10[2 * v14 - 1];
        if ( !--v11 )
          return (unsigned int)-1073741275;
      }
    }
LABEL_28:
    v17 = 2 * v11 - 2;
    if ( !v13 )
      v17 = v8 - v17;
    *a4 = v17;
    return v4;
  }
  if ( v12 <= 0x20u )
  {
    v22 = qword_180184810;
    if ( v12 )
    {
      v23 = v12;
      v24 = v9 - (char *)v41;
      v25 = v41;
      do
      {
        *v25 = NLS_DOWNCASE(v22, *(unsigned __int16 *)((char *)v25 + v24));
        ++v25;
        --v23;
      }
      while ( v23 );
      v14 = !(v5 & 1);
    }
    if ( v11 )
    {
      v26 = v5 & 2;
      while ( 1 )
      {
        v27 = NLS_DOWNCASE(v22, *v10);
        if ( v26 )
        {
          for ( i = v4; i < v12; ++i )
          {
            if ( v27 == v41[i] )
              break;
          }
          if ( i == v12 )
            goto LABEL_59;
        }
        else
        {
          v29 = v4;
          if ( (unsigned __int16)v4 < v12 )
          {
            do
            {
              if ( v27 == v41[v29] )
                break;
              ++v29;
            }
            while ( v29 < v12 );
            v14 = v40;
          }
          if ( v29 != v12 )
            goto LABEL_59;
        }
        v10 = &v10[2 * v14 - 1];
        if ( v11 == 1 )
          return (unsigned int)-1073741275;
      }
    }
    return (unsigned int)-1073741275;
  }
  if ( !v11 )
    return (unsigned int)-1073741275;
  v30 = qword_180184810;
  v31 = v5 & 2;
  while ( 1 )
  {
    v32 = NLS_DOWNCASE(v30, *v10);
    v34 = v33;
    if ( !v31 )
      break;
    v35 = v32;
    do
    {
      if ( v35 == (unsigned __int16)NLS_DOWNCASE(v30, *(unsigned __int16 *)&v9[2 * v34]) )
        break;
      ++v34;
    }
    while ( v34 < v12 );
    if ( v34 == v12 )
      goto LABEL_59;
LABEL_79:
    v10 = &v10[2 * v40 - 1];
    if ( v11 == 1 )
      return (unsigned int)-1073741275;
  }
  v36 = v32;
  do
  {
    if ( v36 == (unsigned __int16)NLS_DOWNCASE(v30, *(unsigned __int16 *)&v9[2 * v34]) )
      break;
    ++v34;
  }
  while ( v34 < v12 );
  if ( v34 == v12 )
    goto LABEL_79;
LABEL_59:
  v13 = v37;
  a4 = v39;
LABEL_26:
  if ( v11 )
  {
    v8 = v38;
    goto LABEL_28;
  }
  return (unsigned int)-1073741275;
}
