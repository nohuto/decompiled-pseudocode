/*
 * XREFs of punycode_encode @ 0x18008A310
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x18000D648 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     FindLabelEnd @ 0x18000E858 (FindLabelEnd.c)
 *     _wcsnicmp @ 0x180090FF0 (_wcsnicmp.c)
 *     RtlStringCopyWorkerW_1 @ 0x1800AFD46 (RtlStringCopyWorkerW_1.c)
 *     ValidateStd3Range @ 0x1800B0CAA (ValidateStd3Range.c)
 *     GetUTF32 @ 0x18010D0C0 (GetUTF32.c)
 *     adapt @ 0x18010D124 (adapt.c)
 */

__int64 __fastcall punycode_encode(wchar_t *String1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  int *v6; // r12
  wchar_t *j; // rbx
  wchar_t *v8; // rbp
  wchar_t *v9; // r9
  wchar_t *v10; // r11
  wchar_t *v11; // r14
  unsigned __int64 v12; // r15
  char v13; // si
  wchar_t *LabelEnd; // rax
  wchar_t *v15; // r9
  unsigned __int64 v16; // r10
  wchar_t *v17; // rdi
  const wchar_t *v19; // r12
  unsigned __int64 v20; // rdx
  int v21; // eax
  int v22; // r14d
  wchar_t *v23; // r8
  __int64 i; // r9
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // r15
  char *v28; // r8
  wchar_t *v29; // rdx
  wchar_t *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r9
  int v33; // r12d
  int v34; // r11d
  wchar_t *v35; // r10
  int UTF32; // eax
  __int64 v37; // r10
  __int64 v38; // rcx
  wchar_t *v39; // r13
  __int64 v40; // r9
  int v41; // eax
  unsigned int v42; // r9d
  unsigned int v43; // ecx
  int v44; // r12d
  int k; // r10d
  __int64 v46; // r8
  int v47; // r12d
  __int16 v48; // ax
  int v49; // edx
  __int16 v50; // ax
  int v51; // eax
  __int64 v52; // rcx
  int v53; // [rsp+30h] [rbp-88h]
  int v54; // [rsp+34h] [rbp-84h]
  unsigned __int64 v55; // [rsp+38h] [rbp-80h]
  wchar_t *v56; // [rsp+40h] [rbp-78h]
  wchar_t *v57; // [rsp+48h] [rbp-70h]
  wchar_t *v58; // [rsp+50h] [rbp-68h]
  __int64 v60; // [rsp+60h] [rbp-58h]
  unsigned int v61; // [rsp+C8h] [rbp+10h]
  __int64 v62; // [rsp+D0h] [rbp+18h] BYREF
  int *v63; // [rsp+D8h] [rbp+20h]

  v63 = a4;
  v6 = a4;
  j = a3;
  v56 = a3;
  v8 = String1;
  v9 = &String1[a2];
  v58 = v9;
  v10 = a3;
  v11 = a3;
  v12 = (unsigned __int64)&a3[*v6];
  v55 = v12;
  if ( a2 <= 0 )
    goto LABEL_7;
  v13 = a5;
  if ( String1 < v9 )
  {
    v57 = a3;
    while ( 1 )
    {
      LabelEnd = FindLabelEnd(v8, (unsigned __int64)v9, v13);
      v17 = LabelEnd;
      if ( LabelEnd == v8 )
        break;
      if ( !v13 && a6 && (*v8 == 45 || (unsigned __int64)LabelEnd > v16 && *(LabelEnd - 1) == 45) )
        goto LABEL_7;
      v19 = L"xl--";
      if ( !v13 )
        v19 = L"xn--";
      v20 = (__int64)(v12 - (_QWORD)j) >> 1;
      if ( !v20 )
        goto LABEL_92;
      if ( v20 > 0x7FFFFFFF )
      {
        *j = 0;
LABEL_92:
        *v63 = 0;
        return 3221225507LL;
      }
      v62 = 0LL;
      v21 = RtlStringCopyWorkerW_1((_DWORD)j, v20, (unsigned int)&v62, (_DWORD)v19, 4LL);
      if ( (int)(v21 + 0x80000000) < 0 || v21 == -2147483643 )
        j += v62;
      if ( v21 < 0 )
        goto LABEL_92;
      v22 = 0;
      v23 = v8;
      for ( i = 2LL; v23 < v17; v23 = (wchar_t *)((char *)v23 + i) )
      {
        v25 = *v23;
        if ( (unsigned __int16)v25 >= 0x80u )
        {
          if ( (unsigned __int16)(v25 + 10240) <= 0x3FFu )
            v23 = (wchar_t *)((char *)v23 + i);
        }
        else
        {
          if ( v13 )
          {
            v26 = (_WORD)v25 == 0;
          }
          else
          {
            if ( a6 && !(unsigned __int8)ValidateStd3Range(v25) || (unsigned __int16)v25 < 0x20u )
              goto LABEL_7;
            v26 = (_WORD)v25 == 127;
          }
          if ( v26 )
            goto LABEL_7;
          if ( (unsigned __int64)j >= v12 )
            goto LABEL_92;
          if ( !v13 && (unsigned __int16)(v25 - 65) <= 0x19u )
            LOWORD(v25) = v25 + 32;
          *j = v25;
          j = (wchar_t *)((char *)j + i);
          ++v22;
        }
      }
      v54 = v22;
      v27 = v17 - v8;
      v60 = v27;
      if ( v22 == v27 )
      {
        v28 = (char *)v57;
        v29 = j - 4;
        v30 = v57;
        for ( j = v29; v30 < v29; v30 = (wchar_t *)((char *)v30 + i) )
          *v30 = v30[4];
      }
      else
      {
        if ( (__int64)(((char *)v58 - (char *)v8) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v8, v19, 4uLL) )
          goto LABEL_7;
        v31 = 0LL;
        v61 = 0;
        if ( v22 > 0 )
        {
          if ( (unsigned __int64)j >= v55 )
            goto LABEL_92;
          *j++ = 45;
        }
        v32 = 0LL;
        LODWORD(v62) = 72;
        v33 = 128;
        if ( v22 < v27 )
        {
          while ( 1 )
          {
            v34 = 0x7FFFFFF;
            v35 = v8;
            if ( v8 < v17 )
            {
              do
              {
                UTF32 = GetUTF32(v35, v31, v23, v32);
                if ( UTF32 >= v33 && UTF32 < v34 )
                  v34 = UTF32;
                v38 = 4LL;
                if ( UTF32 < 0x10000 )
                  v38 = 2LL;
                v35 = (wchar_t *)(v38 + v37);
              }
              while ( v35 < v17 );
              v27 = v60;
              v31 = v61;
            }
            v39 = v8;
            v40 = (unsigned int)((v34 - v33) * (v22 - v31 + 1) + v32);
            if ( v8 < v17 )
              break;
LABEL_79:
            v32 = (unsigned int)(v40 + 1);
            v33 = v34 + 1;
            if ( v22 >= v27 )
              goto LABEL_80;
          }
          while ( 1 )
          {
            v41 = GetUTF32(v39, v31, v23, v40);
            v43 = v42 + 1;
            v53 = v41;
            if ( v41 >= v34 )
              v43 = v42;
            v40 = v43;
            if ( v41 == v34 )
              break;
            v31 = v61;
LABEL_76:
            v52 = 4LL;
            if ( v41 < 0x10000 )
              v52 = 2LL;
            v39 = (wchar_t *)((char *)v39 + v52);
            if ( v39 >= v17 )
              goto LABEL_79;
          }
          v44 = v43;
          for ( k = 36; ; k += 36 )
          {
            if ( k > (int)v62 )
              v46 = k < (int)v62 + 26 ? (unsigned int)(k - v62) : 26LL;
            else
              v46 = 1LL;
            if ( (unsigned __int64)j >= v55 )
              break;
            if ( v44 < (int)v46 )
            {
              v50 = 22;
              if ( v44 <= 25 )
                v50 = 97;
              *j++ = v44 + v50;
              LOBYTE(v46) = v22 == v54;
              v51 = adapt(v43, v22 - v61 + 1, v46);
              v31 = v61;
              v40 = 0LL;
              ++v22;
              LODWORD(v62) = v51;
              v41 = v53;
              if ( v34 >= 0x10000 )
              {
                ++v22;
                v31 = ++v61;
              }
              goto LABEL_76;
            }
            v47 = v44 - v46;
            v48 = 22;
            v49 = v46 + v47 % (36 - (int)v46);
            if ( v49 <= 25 )
              v48 = 97;
            *j++ = v49 + v48;
            v44 = v47 / (36 - (int)v46);
          }
          goto LABEL_92;
        }
LABEL_80:
        v28 = (char *)v57;
      }
      if ( !v13 && (__int64)(((char *)j - v28) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        goto LABEL_7;
      v9 = v58;
      v12 = v55;
      if ( v17 == v58 )
        goto LABEL_88;
      if ( (unsigned __int64)j >= v55 )
        goto LABEL_92;
      *j++ = *v17;
      if ( v13 && *v17 == 64 )
      {
        v13 = 0;
        v56 = j;
        v10 = j;
      }
      else
      {
LABEL_88:
        v10 = v56;
      }
      v57 = j;
      v8 = v17 + 1;
      if ( v17 >= v58 )
      {
        v6 = v63;
        v11 = a3;
        goto LABEL_95;
      }
    }
    if ( !v13 && LabelEnd == v15 )
    {
      v6 = v63;
      v11 = a3;
      goto LABEL_96;
    }
    goto LABEL_7;
  }
LABEL_95:
  if ( !v13 )
  {
LABEL_96:
    if ( j - v10 > 255LL - (*(j - 1) != 46) )
    {
LABEL_7:
      *v63 = 0;
      return 3221227286LL;
    }
  }
  if ( *(j - 1) == 64 )
    goto LABEL_7;
  *v6 = j - v11;
  return 0LL;
}
