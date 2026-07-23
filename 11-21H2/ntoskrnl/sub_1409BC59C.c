/*
 * XREFs of sub_1409BC59C @ 0x1409BC59C
 * Callers:
 *     sub_1405ECB04 @ 0x1405ECB04 (sub_1405ECB04.c)
 * Callees:
 *     sub_1402DFEFC @ 0x1402DFEFC (sub_1402DFEFC.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     sub_1405EC778 @ 0x1405EC778 (sub_1405EC778.c)
 *     sub_1405EC7B4 @ 0x1405EC7B4 (sub_1405EC7B4.c)
 *     sub_1405ECE60 @ 0x1405ECE60 (sub_1405ECE60.c)
 *     sub_1405ECE9C @ 0x1405ECE9C (sub_1405ECE9C.c)
 */

__int64 sub_1409BC59C(wchar_t *Str1, int a2, ...)
{
  unsigned __int16 *v2; // rbx
  int *v3; // r13
  wchar_t *v4; // r14
  wchar_t *v5; // rsi
  unsigned __int16 *v6; // r11
  wchar_t *v7; // r10
  int v8; // r9d
  unsigned __int64 v9; // r15
  char v10; // bp
  unsigned __int16 *v11; // r12
  wchar_t *v12; // rax
  unsigned __int16 *v13; // r9
  wchar_t *v14; // r10
  __int16 v15; // r11
  unsigned __int16 *v16; // rdi
  const WCHAR *v17; // rax
  int v18; // eax
  int v19; // r14d
  wchar_t *i; // r8
  int v21; // ecx
  __int64 v22; // r15
  unsigned __int16 *j; // rcx
  int v24; // eax
  int v25; // edx
  int k; // r12d
  int v27; // r11d
  unsigned __int16 *v28; // r10
  int v29; // eax
  __int64 v30; // r10
  __int64 v31; // rcx
  unsigned __int16 *v32; // r13
  int m; // r9d
  int v34; // eax
  int v35; // r9d
  int v36; // ecx
  int v37; // r12d
  int n; // r10d
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  __int16 v42; // dx
  __int16 v43; // ax
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int16 *v46; // rcx
  __int64 result; // rax
  int v48; // [rsp+40h] [rbp-98h]
  unsigned __int64 v49; // [rsp+48h] [rbp-90h]
  wchar_t *Str2; // [rsp+50h] [rbp-88h]
  int Str2a; // [rsp+50h] [rbp-88h]
  int v52; // [rsp+58h] [rbp-80h]
  unsigned __int16 *v53; // [rsp+60h] [rbp-78h]
  wchar_t *v54; // [rsp+68h] [rbp-70h]
  unsigned __int16 *v55; // [rsp+70h] [rbp-68h]
  unsigned __int16 *v56; // [rsp+78h] [rbp-60h]
  __int64 v57; // [rsp+80h] [rbp-58h]
  int v59; // [rsp+E8h] [rbp+10h]
  unsigned __int16 *v60; // [rsp+F0h] [rbp+18h] BYREF
  va_list va; // [rsp+F0h] [rbp+18h]
  int *v62; // [rsp+F8h] [rbp+20h]
  __int64 v63; // [rsp+100h] [rbp+28h]
  __int64 v64; // [rsp+108h] [rbp+30h]
  va_list va1; // [rsp+110h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v60 = va_arg(va1, unsigned __int16 *);
  v62 = va_arg(va1, int *);
  v63 = va_arg(va1, _QWORD);
  v64 = va_arg(va1, _QWORD);
  v2 = v60;
  v3 = v62;
  v56 = v60;
  v4 = Str1;
  v55 = v60;
  v5 = Str1;
  v6 = v60;
  v7 = &Str1[a2];
  v8 = 0;
  v54 = v7;
  v9 = (unsigned __int64)&v60[*v62];
  v49 = v9;
  if ( a2 > 0 )
  {
    v10 = v63;
    v11 = v60;
    if ( Str1 >= v7 )
    {
LABEL_82:
      v13 = v11;
      v46 = v11;
      if ( v10 )
        goto LABEL_93;
    }
    else
    {
      v53 = v60;
      while ( 1 )
      {
        v12 = sub_1405EC778(v5, (unsigned __int64)v7, v10);
        v16 = v12;
        if ( v12 == v5 )
          break;
        v8 = 0;
        if ( !v10 && (_BYTE)v64 && (*v5 == v15 || v12 > v4 && *(v12 - 1) == v15) )
          goto LABEL_89;
        v17 = L"xl--";
        if ( !v10 )
          v17 = L"xn--";
        Str2 = (wchar_t *)v17;
        v18 = sub_1402DFEFC(v2, (__int64)(v9 - (_QWORD)v2) >> 1, v17, 4uLL, (unsigned __int16 **)va, 0LL, 0);
        v8 = 0;
        if ( v18 < 0 )
        {
LABEL_85:
          result = 3221225507LL;
          goto LABEL_90;
        }
        v2 = v60;
        v19 = 0;
        for ( i = v5; i < v16; ++i )
        {
          v21 = *i;
          if ( (unsigned __int16)v21 >= 0x80u )
          {
            if ( (unsigned __int16)(v21 + 10240) <= 0x3FFu )
              ++i;
          }
          else
          {
            if ( !v10
              && ((_BYTE)v64 != (_BYTE)v8 && !sub_1405ECE60(v21) || (unsigned __int16)v21 < 0x20u || (_WORD)v21 == 127)
              || !(_WORD)v21 )
            {
              goto LABEL_89;
            }
            if ( (unsigned __int64)v2 >= v9 )
              goto LABEL_85;
            if ( !v10 && (unsigned __int16)(v21 - 65) <= 0x19u )
              LOWORD(v21) = v21 + 32;
            *v2++ = v21;
            v60 = v2;
            ++v19;
          }
        }
        v52 = v19;
        v22 = v16 - v5;
        v57 = v22;
        if ( v19 == v22 )
        {
          v2 -= 4;
          for ( j = v11; j < v2; ++j )
            *j = j[4];
          v60 = v2;
        }
        else
        {
          if ( (__int64)(((char *)v54 - (char *)v5) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
          {
            v24 = wcsnicmp(v5, Str2, 4uLL);
            v8 = 0;
            if ( !v24 )
              goto LABEL_89;
          }
          v25 = v8;
          v59 = v8;
          if ( v19 > 0 )
          {
            if ( (unsigned __int64)v2 >= v49 )
              goto LABEL_85;
            *v2++ = 45;
            v60 = v2;
          }
          v48 = 72;
          for ( k = 128; v19 < v22; k = v27 + 1 )
          {
            v27 = 0x7FFFFFF;
            v28 = v5;
            if ( v5 < v16 )
            {
              do
              {
                v29 = sub_1405EC7B4(v28);
                if ( v29 >= k && v29 < v27 )
                  v27 = v29;
                v31 = 4LL;
                if ( v29 < 0x10000 )
                  v31 = 2LL;
                v28 = (unsigned __int16 *)(v31 + v30);
              }
              while ( v28 < v16 );
              v22 = v57;
              v25 = v59;
            }
            v32 = v5;
            for ( m = (v27 - k) * (v19 - v25 + 1) + v8; v32 < v16; v32 = (unsigned __int16 *)((char *)v32 + v45) )
            {
              v34 = sub_1405EC7B4(v32);
              v36 = v35 + 1;
              Str2a = v34;
              if ( v34 >= v27 )
                v36 = v35;
              m = v36;
              if ( v34 == v27 )
              {
                v37 = v36;
                for ( n = 36; ; n += 36 )
                {
                  if ( n > v48 )
                    v39 = n < v48 + 26 ? n - v48 : 26;
                  else
                    v39 = 1;
                  if ( v37 < v39 )
                    break;
                  if ( (unsigned __int64)v2 >= v49 )
                    goto LABEL_84;
                  v40 = (v37 - v39) % (36 - v39);
                  v37 = (v37 - v39) / (36 - v39);
                  v41 = v40 + v39;
                  v42 = 22;
                  if ( v41 <= 25 )
                    v42 = 97;
                  *v2++ = v41 + v42;
                }
                if ( (unsigned __int64)v2 >= v49 )
                {
LABEL_84:
                  v8 = 0;
                  goto LABEL_85;
                }
                v43 = 22;
                if ( v37 <= 25 )
                  v43 = 97;
                *v2++ = v37 + v43;
                v60 = v2;
                v44 = sub_1405ECE9C(m, v19 - v59 + 1, v19 == v52);
                v25 = v59;
                m = 0;
                ++v19;
                v48 = v44;
                v34 = Str2a;
                if ( v27 >= 0x10000 )
                {
                  ++v19;
                  v25 = ++v59;
                }
              }
              else
              {
                v25 = v59;
              }
              v45 = 4LL;
              if ( v34 < 0x10000 )
                v45 = 2LL;
            }
            v8 = m + 1;
          }
          v11 = v53;
          v8 = 0;
        }
        if ( !v10 && (__int64)(((char *)v2 - (char *)v11) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
          goto LABEL_89;
        v7 = v54;
        v9 = v49;
        if ( v16 != v54 )
        {
          if ( (unsigned __int64)v2 >= v49 )
            goto LABEL_85;
          *v2++ = *v16;
          v60 = v2;
          if ( v10 )
          {
            if ( *v16 == 64 )
            {
              v10 = v8;
              v56 = v2;
            }
          }
        }
        v4 = Str1;
        v53 = v2;
        v5 = v16 + 1;
        v11 = v2;
        if ( v16 >= v54 )
        {
          v6 = v55;
          v3 = v62;
          goto LABEL_82;
        }
      }
      if ( v10 || v12 != v14 )
        goto LABEL_88;
      v6 = v55;
      v3 = v62;
    }
    v46 = v13;
    if ( v13 - v56 > 255LL - (*(v2 - 1) != 46) )
    {
LABEL_88:
      v8 = 0;
      goto LABEL_89;
    }
LABEL_93:
    if ( *(v2 - 1) != 64 )
    {
      *v3 = v46 - v6;
      return 0LL;
    }
    goto LABEL_88;
  }
LABEL_89:
  result = 3221227286LL;
LABEL_90:
  *v62 = v8;
  return result;
}
