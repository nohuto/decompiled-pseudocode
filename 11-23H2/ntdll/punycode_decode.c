/*
 * XREFs of punycode_decode @ 0x18000E5D8
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x18000E460 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     FindLabelEnd @ 0x18000E858 (FindLabelEnd.c)
 *     _wcsnicmp @ 0x180090FF0 (_wcsnicmp.c)
 *     InsertChar @ 0x1800B0C84 (InsertChar.c)
 *     ValidateStd3Range @ 0x1800B0CAA (ValidateStd3Range.c)
 *     adapt @ 0x18010D124 (adapt.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *String1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v8; // rax
  unsigned __int16 *v9; // rbx
  wchar_t *j; // r8
  wchar_t *v11; // rdi
  char *v12; // r13
  wchar_t *v13; // r14
  unsigned __int16 *v14; // r15
  wchar_t *v15; // rbp
  char v16; // r12
  unsigned __int16 *v17; // r9
  unsigned __int64 LabelEnd; // rax
  unsigned __int16 v19; // r10
  unsigned __int64 v20; // r11
  wchar_t *v21; // rsi
  unsigned __int64 v22; // rdi
  const wchar_t *v23; // rdx
  unsigned __int16 v24; // ax
  wchar_t *v26; // r9
  unsigned __int16 v27; // r11
  __int64 v28; // r10
  unsigned __int16 v29; // cx
  int v30; // eax
  int v31; // edi
  int v32; // r13d
  int v33; // r11d
  wchar_t *v34; // r15
  int v35; // r9d
  int v36; // r10d
  __int64 i; // r8
  int v38; // ecx
  int v39; // eax
  __int64 v40; // r11
  __int64 v41; // r11
  __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int16 *v44; // r11
  int v45; // ecx
  unsigned __int16 v46; // ax
  int v47; // r10d
  __int64 v48; // r11
  int v49; // [rsp+20h] [rbp-78h]
  unsigned __int16 *v50; // [rsp+28h] [rbp-70h]
  unsigned __int64 v51; // [rsp+30h] [rbp-68h]
  wchar_t *v52; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v55; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v56; // [rsp+B8h] [rbp+20h]

  v56 = a4;
  v55 = a3;
  v8 = a7;
  v9 = a3;
  j = (wchar_t *)*a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = String1 - 1;
  v12 = (char *)&v9[(_QWORD)j];
  v13 = String1;
  v52 = String1 - 1;
  v14 = v9;
  v50 = v9;
  v53 = v9;
  v15 = &String1[a2];
  v51 = (unsigned __int64)v12;
  *a8 = v9 - 1;
  if ( String1 >= v15 )
    return 3221227286LL;
  v16 = a5;
  v17 = v9;
  while ( 1 )
  {
    LOBYTE(j) = v16;
    LabelEnd = FindLabelEnd(v13, v15, j, v17);
    v21 = (wchar_t *)LabelEnd;
    if ( (wchar_t *)LabelEnd == v13 )
      break;
    if ( v16 )
    {
      v22 = LabelEnd - (_QWORD)v13;
    }
    else
    {
      if ( a6 && (*v13 == 45 || LabelEnd > v20 && *(_WORD *)(LabelEnd - 2) == 45) )
        return 3221227286LL;
      v22 = LabelEnd - (_QWORD)v13;
      if ( (__int64)((LabelEnd - (_QWORD)v13) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        return 3221227286LL;
    }
    if ( (__int64)(((char *)v15 - (char *)v13) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
    {
      v23 = L"xl--";
      if ( !v16 )
        v23 = L"xn--";
      if ( !wcsnicmp(v13, v23, 4uLL) )
      {
        v13 += 4;
        *a7 = 0;
        j = v21 - 1;
        if ( v21 - 1 < v13 )
        {
LABEL_47:
          j = 0LL;
        }
        else
        {
          while ( *j != 45 )
          {
            if ( --j < v13 )
              goto LABEL_47;
          }
        }
        if ( j == v21 - 1 )
          return 3221227286LL;
        if ( j && j > v13 )
        {
          v26 = v13;
          v27 = 128;
          v28 = j - v13;
          while ( v9 < (unsigned __int16 *)v12 )
          {
            if ( v16 )
            {
              v29 = *v26;
              if ( !*v26 )
                return 3221227286LL;
            }
            else
            {
              if ( a6 && !(unsigned __int8)ValidateStd3Range(*v26) || *v26 < 0x20u || *v26 == 127 )
                return 3221227286LL;
              v29 = *v26;
            }
            if ( v29 >= v27 )
              return 3221227286LL;
            if ( !v16 && (unsigned __int16)(v29 - 65) <= 0x19u )
              v29 += 32;
            *v9 = v29;
            ++v26;
            v55 = ++v9;
            if ( v26 == j )
              goto LABEL_67;
          }
          return 3221227286LL;
        }
        LODWORD(v28) = 0;
LABEL_67:
        v54 = 0;
        v30 = v28 + 1;
        v31 = 0;
        if ( (int)v28 <= 0 )
          v30 = 0;
        v32 = 128;
        v33 = 72;
        v34 = &v13[v30];
        if ( v34 < v21 )
        {
LABEL_70:
          v35 = 1;
          v36 = v31;
          for ( i = 36LL; v34 < v21; i = (unsigned int)(i + 36) )
          {
            if ( (unsigned __int16)(*v34 - 48) > 9u )
            {
              if ( (unsigned __int16)(*v34 - 97) > 0x19u )
              {
                if ( (unsigned __int16)(*v34 - 65) > 0x19u )
                  return 3221227286LL;
                v38 = *v34 - 65;
              }
              else
              {
                v38 = *v34 - 97;
              }
            }
            else
            {
              v38 = *v34 - 22;
            }
            ++v34;
            if ( v38 < 0 || v38 > (0x7FFFFFF - v31) / v35 )
              break;
            v31 += v35 * v38;
            if ( (int)i > v33 )
            {
              if ( (int)i < v33 + 26 )
                v39 = i - v33;
              else
                v39 = 26;
            }
            else
            {
              v39 = 1;
            }
            if ( v38 < v39 )
            {
              LOBYTE(i) = v36 == 0;
              v49 = adapt((unsigned int)(v31 - v36), (unsigned int)(v9 - v50) - v54 + 1, i);
              v41 = v40 - v54 + 1;
              v42 = v31 / v41;
              if ( v42 > 0x7FFFFFF - v32 )
                return 3221227286LL;
              v32 += v42;
              v43 = v31 % v41;
              if ( (unsigned int)(v32 - 128) > 0x10FF7F || (unsigned int)(v32 - 55296) <= 0x7FF )
                return 3221227286LL;
              if ( v54 <= 0 )
              {
                v44 = &v50[(int)v43];
              }
              else
              {
                v44 = v50;
                v45 = v43;
                if ( (int)v43 > 0 )
                {
                  while ( v44 < v9 )
                  {
                    if ( (unsigned __int16)(*v44 + 10240) <= 0x7FFu )
                      ++v44;
                    --v45;
                    ++v44;
                    if ( v45 <= 0 )
                      goto LABEL_99;
                  }
                  return 3221227286LL;
                }
              }
LABEL_99:
              if ( v32 >= 0x10000 )
              {
                if ( (unsigned __int64)v9 >= v51 - 2 || v44 > v9 )
                  return 3221227286LL;
                InsertChar((unsigned __int16)((v32 - 0x10000) / 1024 - 10240), v44, &v55);
                ++v54;
                v46 = v47 % 1024 - 9216;
                v44 = (unsigned __int16 *)(v48 + 2);
              }
              else
              {
                if ( (unsigned __int64)v9 >= v51 || v44 > v9 )
                  return 3221227286LL;
                v46 = v32;
              }
              InsertChar(v46, v44, &v55);
              v9 = v55;
              v31 = v43 + 1;
              if ( v34 >= v21 )
                goto LABEL_108;
              v33 = v49;
              goto LABEL_70;
            }
            if ( v35 > 0x7FFFFFF / (36 - v39) )
              return 3221227286LL;
            v35 *= 36 - v39;
          }
          return 3221227286LL;
        }
LABEL_108:
        v12 = (char *)v51;
        v14 = v50;
        goto LABEL_22;
      }
      v19 = 128;
    }
    if ( (__int64)((v12 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(v22 & 0xFFFFFFFFFFFFFFFEuLL) )
      return 3221227286LL;
    for ( j = v13; j < v21; v55 = v9 )
    {
      if ( v16 )
      {
        v24 = *j;
        if ( !*j )
          return 3221227286LL;
      }
      else
      {
        if ( a6 && !(unsigned __int8)ValidateStd3Range(*j) || *j < 0x20u || *j == 127 )
          return 3221227286LL;
        v24 = *j;
      }
      if ( v24 >= v19 )
        return 3221227286LL;
      *v9 = v24;
      ++j;
      ++v9;
    }
LABEL_22:
    if ( !v16 && ((__int64)(((char *)v21 - (char *)v13) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v14) )
      return 3221227286LL;
    if ( v21 != v15 )
    {
      if ( v9 >= (unsigned __int16 *)v12 )
        return 3221227286LL;
      *v9++ = *v21;
      v55 = v9;
    }
    if ( v16 )
    {
      v16 = 0;
      v52 = v21;
      v11 = v21;
      *a8 = (char *)v9 - (v15 != v21 ? 2 : 0);
      if ( v21 == v15 - 1 )
        return 3221227286LL;
    }
    else
    {
      v11 = v52;
    }
    v13 = v21 + 1;
    v50 = v9;
    v14 = v9;
    v17 = v9;
    if ( v21 >= v15 )
      goto LABEL_29;
  }
  if ( v16 || (wchar_t *)LabelEnd != v15 )
    return 3221227286LL;
LABEL_29:
  if ( v17 != v53 && v15 - v11 <= 256LL - (*(v15 - 1) != 46) )
  {
    *v56 = v9 - v53;
    return 0LL;
  }
  return 3221227286LL;
}
