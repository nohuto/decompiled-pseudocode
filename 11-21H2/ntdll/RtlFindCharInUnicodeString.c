/*
 * XREFs of RtlFindCharInUnicodeString @ 0x180047A60
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180073684 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x18000E3E4 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindCharInUnicodeString(int a1, __int16 *a2, __int64 a3, _WORD *a4)
{
  unsigned int v4; // r10d
  _WORD *v5; // r12
  char v6; // di
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  __int16 v9; // cx
  char *v10; // r15
  unsigned __int16 *v11; // rbx
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r11
  int v14; // r8d
  _BOOL8 v15; // rbp
  __int16 v16; // ax
  int v17; // edi
  __int16 v18; // r9
  int v20; // edi
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // cx
  __int64 v23; // r12
  __int64 v24; // rbp
  signed __int64 v25; // r15
  unsigned __int16 *v26; // rsi
  int v27; // edi
  unsigned __int16 v28; // r8
  unsigned __int16 v29; // r11
  unsigned __int16 v30; // dx
  unsigned __int16 v31; // cx
  __int64 v32; // r12
  int v33; // edi
  unsigned __int16 v34; // r13
  unsigned __int16 v35; // r10
  unsigned __int16 v36; // bp
  unsigned __int16 v37; // r11
  unsigned __int16 v38; // r11
  __int16 v39; // [rsp+20h] [rbp-A8h]
  int v40; // [rsp+24h] [rbp-A4h]
  _BOOL8 v42; // [rsp+30h] [rbp-98h]
  _WORD v43[32]; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0;
  v5 = a4;
  v6 = a1;
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
    v7 = a2[1];
    if ( (v7 & 1) != 0 || (unsigned __int16)*a2 > v7 || v7 == 0xFFFF || !*((_QWORD *)a2 + 1) && (*a2 || v7) )
      return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    if ( (*(_BYTE *)a3 & 1) != 0 )
      return (unsigned int)-1073741811;
    v8 = *(_WORD *)(a3 + 2);
    if ( (v8 & 1) != 0 || *(_WORD *)a3 > v8 || v8 == 0xFFFF || !*(_QWORD *)(a3 + 8) && (*(_WORD *)a3 || v8) )
      return (unsigned int)-1073741811;
  }
  v9 = *a2;
  v10 = *(char **)(a3 + 8);
  v11 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v12 = (unsigned __int16)*a2 >> 1;
  v13 = *(_WORD *)a3 >> 1;
  v14 = v6 & 1;
  v39 = *a2;
  v40 = v14;
  if ( (v6 & 1) != 0 )
    v11 = &v11[v12 - 1];
  v15 = !(v6 & 1);
  v42 = v15;
  if ( (v6 & 4) != 0 )
  {
    if ( v13 > 0x20u )
    {
      if ( v12 )
      {
        v32 = qword_180177700;
        v33 = v6 & 2;
        while ( 1 )
        {
          v34 = NLS_DOWNCASE(v32, *v11);
          v36 = v35;
          if ( v33 )
          {
            do
            {
              if ( v34 == NLS_DOWNCASE(v32, *(_WORD *)&v10[2 * v36]) )
                goto LABEL_77;
              ++v36;
            }
            while ( v36 < v37 );
            if ( v36 == v37 )
              goto LABEL_60;
          }
          else
          {
            do
            {
              if ( v34 == NLS_DOWNCASE(v32, *(_WORD *)&v10[2 * v36]) )
                goto LABEL_60;
              ++v36;
            }
            while ( v36 < v38 );
            if ( v36 != v38 )
              goto LABEL_60;
          }
LABEL_77:
          v11 = &v11[2 * v42 - 1];
          if ( !--v12 )
            goto LABEL_60;
        }
      }
    }
    else
    {
      v23 = qword_180177700;
      if ( v13 )
      {
        v24 = v13;
        v25 = v10 - (char *)v43;
        v26 = v43;
        do
        {
          *v26 = NLS_DOWNCASE(v23, *(unsigned __int16 *)((char *)v26 + v25));
          ++v26;
          --v24;
        }
        while ( v24 );
        v15 = !(v6 & 1);
      }
      if ( v12 )
      {
        v27 = v6 & 2;
        while ( 1 )
        {
          v28 = NLS_DOWNCASE(v23, *v11);
          if ( v27 )
          {
            v30 = v4;
            if ( (unsigned __int16)v4 >= v29 )
            {
LABEL_59:
              if ( v30 == v29 )
                goto LABEL_60;
            }
            else
            {
              while ( v28 != v43[v30] )
              {
                if ( ++v30 >= v29 )
                  goto LABEL_59;
              }
            }
          }
          else
          {
            v31 = v4;
            if ( (unsigned __int16)v4 < v29 )
            {
              while ( v28 != v43[v31] )
              {
                if ( ++v31 >= v29 )
                  goto LABEL_64;
              }
LABEL_60:
              v14 = v40;
              v5 = a4;
              goto LABEL_26;
            }
LABEL_64:
            if ( v31 != v29 )
              goto LABEL_60;
          }
          v11 = &v11[2 * v15 - 1];
          if ( !--v12 )
            goto LABEL_60;
        }
      }
    }
    return (unsigned int)-1073741275;
  }
  if ( v13 == 1 )
  {
    v16 = *(_WORD *)v10;
    v17 = v6 & 2;
    if ( v12 )
    {
      if ( v17 )
      {
        while ( *v11 == v16 )
        {
          v11 = &v11[2 * v15 - 1];
          if ( !--v12 )
            goto LABEL_27;
        }
      }
      else
      {
        while ( *v11 != v16 )
        {
          v11 = &v11[2 * v15 - 1];
          if ( !--v12 )
            goto LABEL_27;
        }
      }
      goto LABEL_28;
    }
    return (unsigned int)-1073741275;
  }
  if ( !v12 )
    return (unsigned int)-1073741275;
  v20 = v6 & 2;
  while ( 1 )
  {
    v21 = *v11;
    v22 = 0;
    if ( !v20 )
      break;
    if ( v13 )
    {
      while ( v21 != *(_WORD *)&v10[2 * v22] )
      {
        if ( ++v22 >= v13 )
          goto LABEL_85;
      }
    }
    else
    {
LABEL_85:
      if ( v22 == v13 )
        goto LABEL_26;
    }
LABEL_40:
    v11 = &v11[2 * v15 - 1];
    if ( !--v12 )
      goto LABEL_26;
  }
  if ( !v13 )
  {
LABEL_39:
    if ( v22 != v13 )
      goto LABEL_26;
    goto LABEL_40;
  }
  while ( v21 != *(_WORD *)&v10[2 * v22] )
  {
    if ( ++v22 >= v13 )
      goto LABEL_39;
  }
LABEL_26:
  v9 = v39;
LABEL_27:
  if ( !v12 )
    return (unsigned int)-1073741275;
LABEL_28:
  v18 = 2 * v12 - 2;
  if ( !v14 )
    v18 = v9 - v18;
  *v5 = v18;
  return v4;
}
