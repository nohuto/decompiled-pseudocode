/*
 * XREFs of punycode_encode @ 0x1800908C0
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x180031CBC (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     FindLabelEnd @ 0x180031940 (FindLabelEnd.c)
 *     _wcsnicmp @ 0x180095820 (_wcsnicmp.c)
 *     RtlStringCopyWorkerW_1 @ 0x1800B09C8 (RtlStringCopyWorkerW_1.c)
 *     ValidateStd3Range @ 0x1800B118A (ValidateStd3Range.c)
 *     GetUTF32 @ 0x18010BA84 (GetUTF32.c)
 *     adapt @ 0x18010BAE4 (adapt.c)
 */

__int64 __fastcall punycode_encode(wchar_t *String1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  int *v6; // r11
  wchar_t *v7; // rbx
  wchar_t *v8; // rbp
  wchar_t *v9; // r9
  wchar_t *v10; // r14
  wchar_t *v11; // r15
  unsigned __int64 v12; // r12
  char v13; // si
  wchar_t *LabelEnd; // rax
  wchar_t *v15; // r9
  unsigned __int64 v16; // r10
  __int16 v17; // r11
  wchar_t *v18; // rdi
  __int64 result; // rax
  const wchar_t *v20; // r15
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // r14d
  wchar_t *v25; // r8
  __int64 i; // r9
  __int64 v27; // rcx
  __int64 v28; // r12
  char *v29; // rdx
  wchar_t *j; // rcx
  __int64 v31; // rdx
  __int64 v32; // r9
  int v33; // r15d
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
  int v44; // r15d
  int k; // r10d
  __int64 v46; // r8
  int v47; // edx
  int v48; // ecx
  __int16 v49; // dx
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
  v7 = a3;
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
  if ( String1 >= v9 )
    goto LABEL_94;
  v57 = a3;
  do
  {
    LabelEnd = FindLabelEnd(v8, (unsigned __int64)v9, v13);
    v18 = LabelEnd;
    if ( LabelEnd == v8 )
    {
      if ( v13 || LabelEnd != v15 )
        goto LABEL_7;
      v6 = v63;
      v11 = a3;
LABEL_97:
      if ( v7 - v10 <= 255LL - (*(v7 - 1) != 46) )
        goto LABEL_98;
      goto LABEL_7;
    }
    if ( !v13 && a6 && (*v8 == v17 || (unsigned __int64)LabelEnd > v16 && *(LabelEnd - 1) == v17) )
      goto LABEL_7;
    v20 = L"xl--";
    if ( !v13 )
      v20 = L"xn--";
    v21 = (__int64)(v12 - (_QWORD)v7) >> 1;
    if ( (unsigned __int64)(v21 - 1) > 0x7FFFFFFE )
    {
      if ( v21 )
        *v7 = 0;
LABEL_92:
      result = 3221225507LL;
      goto LABEL_8;
    }
    v62 = 0LL;
    v22 = RtlStringCopyWorkerW_1((_DWORD)v7, v21, (unsigned int)&v62, (_DWORD)v20, 4LL);
    v23 = (__int64)&v7[v62];
    if ( (int)(v22 + 0x80000000) < 0 || v22 == -2147483643 )
      v7 += v62;
    if ( v22 < 0 )
      goto LABEL_92;
    v24 = 0;
    v25 = v8;
    for ( i = 2LL; v25 < v18; v25 = (wchar_t *)((char *)v25 + i) )
    {
      v27 = *v25;
      if ( (unsigned __int16)v27 >= 0x80u )
      {
        if ( (unsigned __int16)(v27 + 10240) <= 0x3FFu )
          v25 = (wchar_t *)((char *)v25 + i);
      }
      else
      {
        if ( !v13
          && (a6 && !(unsigned __int8)ValidateStd3Range(v27, v23) || (unsigned __int16)v27 < 0x20u || (_WORD)v27 == 127)
          || !(_WORD)v27 )
        {
          goto LABEL_7;
        }
        if ( (unsigned __int64)v7 >= v12 )
          goto LABEL_92;
        if ( !v13 )
        {
          v23 = 25LL;
          if ( (unsigned __int16)(v27 - 65) <= 0x19u )
            LOWORD(v27) = v27 + 32;
        }
        *v7 = v27;
        v7 = (wchar_t *)((char *)v7 + i);
        ++v24;
      }
    }
    v54 = v24;
    v28 = v18 - v8;
    v60 = v28;
    if ( v24 == v28 )
    {
      v29 = (char *)v57;
      v7 -= 4;
      for ( j = v57; j < v7; j = (wchar_t *)((char *)j + i) )
        *j = j[4];
      goto LABEL_80;
    }
    if ( (__int64)(((char *)v58 - (char *)v8) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v8, v20, 4uLL) )
      goto LABEL_7;
    v31 = 0LL;
    v61 = 0;
    if ( v24 > 0 )
    {
      if ( (unsigned __int64)v7 >= v55 )
        goto LABEL_92;
      *v7++ = 45;
    }
    v32 = 0LL;
    LODWORD(v62) = 72;
    v33 = 128;
    if ( v24 < v28 )
    {
      while ( 1 )
      {
        v34 = 0x7FFFFFF;
        v35 = v8;
        if ( v8 < v18 )
        {
          do
          {
            UTF32 = GetUTF32(v35, v31, v25, v32);
            if ( UTF32 >= v33 && UTF32 < v34 )
              v34 = UTF32;
            v38 = 4LL;
            if ( UTF32 < 0x10000 )
              v38 = 2LL;
            v35 = (wchar_t *)(v38 + v37);
          }
          while ( v35 < v18 );
          v28 = v60;
          v31 = v61;
        }
        v39 = v8;
        v40 = (unsigned int)((v34 - v33) * (v24 - v31 + 1) + v32);
        if ( v8 < v18 )
          break;
LABEL_78:
        v32 = (unsigned int)(v40 + 1);
        v33 = v34 + 1;
        if ( v24 >= v28 )
          goto LABEL_79;
      }
      while ( 1 )
      {
        v41 = GetUTF32(v39, v31, v25, v40);
        v43 = v42 + 1;
        v53 = v41;
        if ( v41 >= v34 )
          v43 = v42;
        v40 = v43;
        if ( v41 == v34 )
          break;
        v31 = v61;
LABEL_75:
        v52 = 4LL;
        if ( v41 < 0x10000 )
          v52 = 2LL;
        v39 = (wchar_t *)((char *)v39 + v52);
        if ( v39 >= v18 )
          goto LABEL_78;
      }
      v44 = v43;
      for ( k = 36; ; k += 36 )
      {
        if ( k > (int)v62 )
          v46 = k < (int)v62 + 26 ? (unsigned int)(k - v62) : 26LL;
        else
          v46 = 1LL;
        if ( (unsigned __int64)v7 >= v55 )
          break;
        if ( v44 < (int)v46 )
        {
          v50 = 22;
          if ( v44 <= 25 )
            v50 = 97;
          *v7++ = v44 + v50;
          LOBYTE(v46) = v24 == v54;
          v51 = adapt((unsigned int)v40, v24 - v61 + 1, v46);
          v31 = v61;
          v40 = 0LL;
          ++v24;
          LODWORD(v62) = v51;
          v41 = v53;
          if ( v34 >= 0x10000 )
          {
            ++v24;
            v31 = ++v61;
          }
          goto LABEL_75;
        }
        v47 = (v44 - (int)v46) % (36 - (int)v46);
        v44 = (v44 - (int)v46) / (36 - (int)v46);
        v48 = v47 + v46;
        v49 = 22;
        if ( v48 <= 25 )
          v49 = 97;
        *v7++ = v48 + v49;
      }
      goto LABEL_92;
    }
LABEL_79:
    v29 = (char *)v57;
LABEL_80:
    if ( !v13 && (__int64)(((char *)v7 - v29) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_7;
    v9 = v58;
    v12 = v55;
    if ( v18 == v58 )
      goto LABEL_87;
    if ( (unsigned __int64)v7 >= v55 )
      goto LABEL_92;
    *v7++ = *v18;
    if ( v13 && *v18 == 64 )
    {
      v13 = 0;
      v56 = v7;
      v10 = v7;
    }
    else
    {
LABEL_87:
      v10 = v56;
    }
    v57 = v7;
    v8 = v18 + 1;
  }
  while ( v18 < v58 );
  v6 = v63;
  v11 = a3;
LABEL_94:
  if ( !v13 )
    goto LABEL_97;
LABEL_98:
  if ( *(v7 - 1) != 64 )
  {
    *v6 = v7 - v11;
    return 0LL;
  }
LABEL_7:
  result = 3221227286LL;
LABEL_8:
  *v63 = 0;
  return result;
}
