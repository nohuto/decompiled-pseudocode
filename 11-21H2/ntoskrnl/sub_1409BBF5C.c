/*
 * XREFs of sub_1409BBF5C @ 0x1409BBF5C
 * Callers:
 *     sub_1405EC854 @ 0x1405EC854 (sub_1405EC854.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     sub_1405EC778 @ 0x1405EC778 (sub_1405EC778.c)
 *     sub_1405EC82C @ 0x1405EC82C (sub_1405EC82C.c)
 *     sub_1405ECE60 @ 0x1405ECE60 (sub_1405ECE60.c)
 *     sub_1405ECE9C @ 0x1405ECE9C (sub_1405ECE9C.c)
 */

__int64 __fastcall sub_1409BBF5C(
        wchar_t *Str1,
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
  __int64 v10; // r8
  unsigned __int16 *v11; // rbp
  wchar_t *v12; // r14
  unsigned __int16 *v13; // r15
  wchar_t *v14; // rsi
  char v15; // r12
  wchar_t *v16; // rax
  unsigned __int16 *v17; // r9
  unsigned __int16 v18; // r10
  unsigned __int64 v19; // r11
  wchar_t *v20; // rdi
  const wchar_t *v21; // rdx
  wchar_t *v22; // r8
  wchar_t *v23; // r9
  unsigned __int16 v24; // r11
  __int64 v25; // r10
  unsigned __int16 v26; // cx
  int v27; // eax
  int v28; // ebp
  int v29; // r15d
  int v30; // r11d
  wchar_t *v31; // r13
  int v32; // r9d
  int v33; // r10d
  int i; // r8d
  int v35; // ecx
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
  wchar_t *j; // r8
  unsigned __int16 v48; // ax
  bool v49; // zf
  int v51; // [rsp+28h] [rbp-70h]
  unsigned __int16 *v52; // [rsp+30h] [rbp-68h]
  unsigned __int64 v53; // [rsp+38h] [rbp-60h]
  wchar_t *v54; // [rsp+40h] [rbp-58h]
  unsigned __int16 *v55; // [rsp+48h] [rbp-50h]
  int v56; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v57; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v58; // [rsp+B8h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v8 = a7;
  v9 = a3;
  v10 = *a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = &v9[v10];
  v12 = Str1;
  v52 = v9;
  v13 = v9;
  v55 = v9;
  v53 = (unsigned __int64)v11;
  v14 = &Str1[a2];
  v54 = Str1 - 1;
  *a8 = v9 - 1;
  if ( Str1 >= v14 )
    return 3221227286LL;
  v15 = a5;
  while ( 1 )
  {
    v16 = sub_1405EC778(v12, (unsigned __int64)v14, v15);
    v20 = v16;
    if ( v16 == v12 )
      break;
    if ( !v15
      && (a6 && (*v12 == 45 || (unsigned __int64)v16 > v19 && *(v16 - 1) == 45)
       || (__int64)(((char *)v16 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126) )
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
        v22 = v20 - 1;
        if ( v20 - 1 < v12 )
        {
LABEL_18:
          v22 = 0LL;
        }
        else
        {
          while ( *v22 != 45 )
          {
            if ( --v22 < v12 )
              goto LABEL_18;
          }
        }
        if ( v22 == v20 - 1 )
          return 3221227286LL;
        if ( v22 && v22 > v12 )
        {
          v23 = v12;
          v24 = 128;
          v25 = v22 - v12;
          while ( v9 < v11 )
          {
            if ( v15 )
            {
              v26 = *v23;
              if ( !*v23 )
                return 3221227286LL;
            }
            else
            {
              if ( a6 && !sub_1405ECE60(*v23) || *v23 < 0x20u || *v23 == 127 )
                return 3221227286LL;
              v26 = *v23;
            }
            if ( v26 >= v24 )
              return 3221227286LL;
            if ( !v15 && (unsigned __int16)(v26 - 65) <= 0x19u )
              v26 += 32;
            *v9 = v26;
            ++v23;
            v57 = ++v9;
            if ( v23 == v22 )
              goto LABEL_38;
          }
          return 3221227286LL;
        }
        LODWORD(v25) = 0;
LABEL_38:
        v56 = 0;
        v27 = v25 + 1;
        v28 = 0;
        if ( (int)v25 <= 0 )
          v27 = 0;
        v29 = 128;
        v30 = 72;
        v31 = &v12[v27];
        if ( v31 < v20 )
        {
LABEL_41:
          v32 = 1;
          v33 = v28;
          for ( i = 36; v31 < v20; i += 36 )
          {
            v35 = *v31;
            if ( (unsigned __int16)(v35 - 48) > 9u )
            {
              if ( (unsigned __int16)(v35 - 97) > 0x19u )
              {
                if ( (unsigned __int16)(v35 - 65) > 0x19u )
                  return 3221227286LL;
                v36 = v35 - 65;
              }
              else
              {
                v36 = v35 - 97;
              }
            }
            else
            {
              v36 = v35 - 22;
            }
            ++v31;
            if ( v36 < 0 || v36 > (0x7FFFFFF - v28) / v32 )
              break;
            v28 += v32 * v36;
            if ( i > v30 )
            {
              if ( i < v30 + 26 )
                v37 = i - v30;
              else
                v37 = 26;
            }
            else
            {
              v37 = 1;
            }
            if ( v36 < v37 )
            {
              v51 = sub_1405ECE9C(v28 - v33, (unsigned int)(v9 - v52) - v56 + 1, v33 == 0);
              v39 = v38 - v56;
              v40 = v28 / (v39 + 1);
              v41 = v28 % (v39 + 1);
              if ( v40 > 0x7FFFFFF - v29 )
                return 3221227286LL;
              v29 += v40;
              if ( (unsigned int)(v29 - 128) > 0x10FF7F || (unsigned int)(v29 - 55296) <= 0x7FF )
                return 3221227286LL;
              if ( v56 <= 0 )
              {
                v42 = &v52[(int)v41];
              }
              else
              {
                v42 = v52;
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
                      goto LABEL_70;
                  }
                  return 3221227286LL;
                }
              }
LABEL_70:
              if ( v29 >= 0x10000 )
              {
                if ( (unsigned __int64)v9 >= v53 - 2 || v42 > v9 )
                  return 3221227286LL;
                sub_1405EC82C((v29 - 0x10000) / 1024 - 10240, v42, &v57);
                ++v56;
                v44 = v45 - 9216;
                v42 = (unsigned __int16 *)(v46 + 2);
              }
              else
              {
                if ( (unsigned __int64)v9 >= v53 || v42 > v9 )
                  return 3221227286LL;
                v44 = v29;
              }
              sub_1405EC82C(v44, v42, &v57);
              v9 = v57;
              v28 = v41 + 1;
              if ( v31 >= v20 )
                goto LABEL_79;
              v30 = v51;
              goto LABEL_41;
            }
            if ( v32 > 0x7FFFFFF / (36 - v37) )
              return 3221227286LL;
            v32 *= 36 - v37;
          }
          return 3221227286LL;
        }
LABEL_79:
        v8 = a7;
        v11 = (unsigned __int16 *)v53;
        v13 = v52;
        goto LABEL_80;
      }
      v18 = 128;
    }
    if ( (__int64)(((char *)v11 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) )
      return 3221227286LL;
    for ( j = v12; j < v20; v57 = v9 )
    {
      if ( v15 )
      {
        v48 = *j;
        v49 = *j == 0;
      }
      else
      {
        if ( a6 && !sub_1405ECE60(*j) )
          return 3221227286LL;
        v48 = *j;
        if ( *j < 0x20u )
          return 3221227286LL;
        v49 = v48 == 127;
      }
      if ( v49 || v48 >= v18 )
        return 3221227286LL;
      *v9 = v48;
      ++j;
      ++v9;
    }
LABEL_80:
    if ( !v15 && ((__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v13) )
      return 3221227286LL;
    if ( v20 != v14 )
    {
      if ( v9 >= v11 )
        return 3221227286LL;
      *v9++ = *v20;
      v57 = v9;
    }
    if ( v15 )
    {
      v15 = 0;
      v54 = v20;
      *a8 = (char *)v9 - (v14 != v20 ? 2 : 0);
      if ( v20 == v14 - 1 )
        return 3221227286LL;
    }
    v12 = v20 + 1;
    v52 = v9;
    v13 = v9;
    v17 = v9;
    if ( v20 >= v14 )
      goto LABEL_105;
  }
  if ( v15 || v16 != v14 )
    return 3221227286LL;
LABEL_105:
  if ( v17 != v55 && v14 - v54 <= 256LL - (*(v14 - 1) != 46) )
  {
    *v58 = v17 - v55;
    return 0LL;
  }
  return 3221227286LL;
}
