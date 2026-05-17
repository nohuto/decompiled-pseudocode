/*
 * XREFs of punycode_decode @ 0x1800316C8
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x180031550 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     FindLabelEnd @ 0x180031940 (FindLabelEnd.c)
 *     _wcsnicmp @ 0x180095820 (_wcsnicmp.c)
 *     InsertChar @ 0x1800B1164 (InsertChar.c)
 *     ValidateStd3Range @ 0x1800B118A (ValidateStd3Range.c)
 *     adapt @ 0x18010BAE4 (adapt.c)
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
  _BYTE *v8; // r13
  unsigned __int16 *v9; // rbx
  wchar_t *j; // r8
  char *v11; // rbp
  wchar_t *v12; // r14
  unsigned __int16 *v13; // r15
  wchar_t *v14; // rsi
  char v15; // r12
  unsigned __int16 *v16; // r9
  unsigned __int64 LabelEnd; // rax
  unsigned __int16 v18; // r10
  unsigned __int64 v19; // r11
  wchar_t *v20; // rdi
  const wchar_t *v21; // rdx
  unsigned __int16 v22; // ax
  wchar_t *v24; // r9
  unsigned __int16 v25; // r11
  __int64 v26; // r10
  unsigned __int16 v27; // cx
  int v28; // eax
  int v29; // ebp
  int v30; // r15d
  int v31; // r11d
  wchar_t *v32; // r13
  int v33; // r9d
  int v34; // r10d
  __int64 i; // r8
  int v36; // ecx
  int v37; // eax
  __int64 v38; // r11
  __int64 v39; // r11
  __int64 v40; // rax
  __int64 v41; // rbp
  unsigned __int16 *v42; // r10
  int v43; // ecx
  unsigned __int16 v44; // r11
  __int16 v45; // r11
  __int64 v46; // r10
  int v47; // [rsp+20h] [rbp-78h]
  unsigned __int16 *v48; // [rsp+28h] [rbp-70h]
  unsigned __int64 v49; // [rsp+30h] [rbp-68h]
  wchar_t *v50; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v51; // [rsp+40h] [rbp-58h]
  int v52; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v53; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v54; // [rsp+B8h] [rbp+20h]

  v54 = a4;
  v53 = a3;
  v8 = a7;
  v9 = a3;
  j = (wchar_t *)*a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = (char *)&v9[(_QWORD)j];
  v12 = String1;
  v48 = v9;
  v13 = v9;
  v51 = v9;
  v49 = (unsigned __int64)v11;
  v14 = &String1[a2];
  v50 = String1 - 1;
  *a8 = v9 - 1;
  if ( String1 >= v14 )
    return 3221227286LL;
  v15 = a5;
  v16 = v9;
  while ( 1 )
  {
    LOBYTE(j) = v15;
    LabelEnd = FindLabelEnd(v12, v14, j, v16);
    v20 = (wchar_t *)LabelEnd;
    if ( (wchar_t *)LabelEnd == v12 )
      break;
    if ( !v15
      && (a6 && (*v12 == 45 || LabelEnd > v19 && *(_WORD *)(LabelEnd - 2) == 45)
       || (__int64)((LabelEnd - (_QWORD)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v14 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
    {
      v21 = L"xl--";
      if ( !v15 )
        v21 = L"xn--";
      if ( !wcsnicmp(v12, v21, 4uLL) )
      {
        *v8 = 0;
        v12 += 4;
        j = v20 - 1;
        if ( v20 - 1 < v12 )
        {
LABEL_45:
          j = 0LL;
        }
        else
        {
          while ( *j != 45 )
          {
            if ( --j < v12 )
              goto LABEL_45;
          }
        }
        if ( j == v20 - 1 )
          return 3221227286LL;
        if ( j && j > v12 )
        {
          v24 = v12;
          v25 = 128;
          v26 = j - v12;
          while ( v9 < (unsigned __int16 *)v11 )
          {
            if ( v15 )
            {
              v27 = *v24;
              if ( !*v24 )
                return 3221227286LL;
            }
            else
            {
              if ( a6 && !(unsigned __int8)ValidateStd3Range(*v24, 0LL) || *v24 < 0x20u || *v24 == 127 )
                return 3221227286LL;
              v27 = *v24;
            }
            if ( v27 >= v25 )
              return 3221227286LL;
            if ( !v15 && (unsigned __int16)(v27 - 65) <= 0x19u )
              v27 += 32;
            *v9 = v27;
            ++v24;
            v53 = ++v9;
            if ( v24 == j )
              goto LABEL_65;
          }
          return 3221227286LL;
        }
        LODWORD(v26) = 0;
LABEL_65:
        v52 = 0;
        v28 = v26 + 1;
        v29 = 0;
        if ( (int)v26 <= 0 )
          v28 = 0;
        v30 = 128;
        v31 = 72;
        v32 = &v12[v28];
        if ( v32 < v20 )
        {
LABEL_68:
          v33 = 1;
          v34 = v29;
          for ( i = 36LL; v32 < v20; i = (unsigned int)(i + 36) )
          {
            if ( (unsigned __int16)(*v32 - 48) > 9u )
            {
              if ( (unsigned __int16)(*v32 - 97) > 0x19u )
              {
                if ( (unsigned __int16)(*v32 - 65) > 0x19u )
                  return 3221227286LL;
                v36 = *v32 - 65;
              }
              else
              {
                v36 = *v32 - 97;
              }
            }
            else
            {
              v36 = *v32 - 22;
            }
            ++v32;
            if ( v36 < 0 || v36 > (0x7FFFFFF - v29) / v33 )
              break;
            v29 += v33 * v36;
            if ( (int)i > v31 )
            {
              if ( (int)i < v31 + 26 )
                v37 = i - v31;
              else
                v37 = 26;
            }
            else
            {
              v37 = 1;
            }
            if ( v36 < v37 )
            {
              LOBYTE(i) = v34 == 0;
              v47 = adapt((unsigned int)(v29 - v34), (unsigned int)(v9 - v48) - v52 + 1, i);
              v39 = v38 - v52;
              v40 = v29 / (v39 + 1);
              v41 = v29 % (v39 + 1);
              if ( v40 > 0x7FFFFFF - v30 )
                return 3221227286LL;
              v30 += v40;
              if ( (unsigned int)(v30 - 128) > 0x10FF7F || (unsigned int)(v30 - 55296) <= 0x7FF )
                return 3221227286LL;
              if ( v52 <= 0 )
              {
                v42 = &v48[(int)v41];
              }
              else
              {
                v42 = v48;
                v43 = v41;
                if ( (int)v41 > 0 )
                {
                  while ( v42 < v9 )
                  {
                    if ( (unsigned __int16)(*v42 + 10240) <= 0x7FFu )
                      ++v42;
                    --v43;
                    ++v42;
                    if ( v43 <= 0 )
                      goto LABEL_97;
                  }
                  return 3221227286LL;
                }
              }
LABEL_97:
              if ( v30 >= 0x10000 )
              {
                if ( (unsigned __int64)v9 >= v49 - 2 || v42 > v9 )
                  return 3221227286LL;
                InsertChar((unsigned __int16)((v30 - 0x10000) / 1024 - 10240), v42, &v53);
                ++v52;
                v44 = v45 - 9216;
                v42 = (unsigned __int16 *)(v46 + 2);
              }
              else
              {
                if ( (unsigned __int64)v9 >= v49 || v42 > v9 )
                  return 3221227286LL;
                v44 = v30;
              }
              InsertChar(v44, v42, &v53);
              v9 = v53;
              v29 = v41 + 1;
              if ( v32 >= v20 )
                goto LABEL_106;
              v31 = v47;
              goto LABEL_68;
            }
            if ( v33 > 0x7FFFFFF / (36 - v37) )
              return 3221227286LL;
            v33 *= 36 - v37;
          }
          return 3221227286LL;
        }
LABEL_106:
        v8 = a7;
        v11 = (char *)v49;
        v13 = v48;
        goto LABEL_22;
      }
      v18 = 128;
    }
    if ( (__int64)((v11 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) )
      return 3221227286LL;
    for ( j = v12; j < v20; v53 = v9 )
    {
      if ( v15 )
      {
        v22 = *j;
        if ( !*j )
          return 3221227286LL;
      }
      else
      {
        if ( a6 && !(unsigned __int8)ValidateStd3Range(*j, 0LL) || *j < 0x20u || *j == 127 )
          return 3221227286LL;
        v22 = *j;
      }
      if ( v22 >= v18 )
        return 3221227286LL;
      *v9 = v22;
      ++j;
      ++v9;
    }
LABEL_22:
    if ( !v15 && ((__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v13) )
      return 3221227286LL;
    if ( v20 != v14 )
    {
      if ( v9 >= (unsigned __int16 *)v11 )
        return 3221227286LL;
      *v9++ = *v20;
      v53 = v9;
    }
    if ( v15 )
    {
      v15 = 0;
      v50 = v20;
      *a8 = (char *)v9 - (v14 != v20 ? 2 : 0);
      if ( v20 == v14 - 1 )
        return 3221227286LL;
    }
    v12 = v20 + 1;
    v48 = v9;
    v13 = v9;
    v16 = v9;
    if ( v20 >= v14 )
      goto LABEL_28;
  }
  if ( v15 || (wchar_t *)LabelEnd != v14 )
    return 3221227286LL;
LABEL_28:
  if ( v16 != v51 && v14 - v50 <= 256LL - (*(v14 - 1) != 46) )
  {
    *v54 = v16 - v51;
    return 0LL;
  }
  return 3221227286LL;
}
