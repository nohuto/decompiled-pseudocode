/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x18001A5B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019630 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B790 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001D110 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001E298 (RtlDoesFileExists_UstrEx.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x180068334 (RtlUnicodeStringCbCopyStringN.c)
 *     RtlUnicodeStringCat @ 0x180068420 (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_Ustr(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 *a8,
        _QWORD *a9)
{
  char v11; // bl
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int16 *v15; // r11
  unsigned __int64 v16; // rdx
  wchar_t *StringRoutine; // rax
  unsigned int v18; // ebx
  UNICODE_STRING *p_UnicodeString; // rcx
  int FullPathName_Ustr; // eax
  _WORD *v22; // rcx
  unsigned __int16 v23; // bx
  unsigned __int64 v24; // rdx
  _WORD *v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r13
  _WORD *v36; // rsi
  _WORD *v37; // r15
  _WORD *v38; // rdi
  __int64 v39; // rbx
  bool v40; // zf
  unsigned __int16 v41; // bx
  __int64 v42; // r12
  unsigned __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int64 v45; // rax
  int v46; // eax
  unsigned __int64 v47; // rdx
  _WORD *v48; // rcx
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v51; // [rsp+68h] [rbp-98h]
  __int64 *v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  unsigned __int64 v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v57; // [rsp+98h] [rbp-68h]
  _QWORD *v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  _BYTE v60[528]; // [rsp+B0h] [rbp-50h] BYREF

  v57 = a4;
  v54 = (unsigned __int64)a2;
  v11 = a1;
  v12 = 0LL;
  v53 = a5;
  v59 = a6;
  v58 = a7;
  v52 = a8;
  v51 = a9;
  LOWORD(v55) = 0;
  *(_DWORD *)&UnicodeString.Length = 34078720;
  UnicodeString.Buffer = (wchar_t *)v60;
  if ( a7 )
    *a7 = 0LL;
  if ( a9 )
    *a9 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = 0LL;
  }
  if ( (a1 & 0xFFFFFFF8) != 0 || !a2 || !a3 || a5 && a6 && !a7 )
  {
    v18 = -1073741811;
    goto LABEL_27;
  }
  v13 = RtlDetermineDosPathNameType_Ustr(a3);
  v50 = v13;
  if ( (v11 & 2) != 0 && v13 == 5 && *a3 >= 4u )
  {
    v22 = (_WORD *)*((_QWORD *)a3 + 1);
    if ( *v22 == 46 )
    {
      if ( v22[1] == 92 || v22[1] == 47 )
      {
        v13 = 0;
        v50 = 0;
      }
      else if ( v22[1] == 46 && *a3 >= 6u && (v22[2] == 92 || v22[2] == 47) )
      {
        v50 = 0;
        goto LABEL_18;
      }
    }
  }
  if ( v13 == 5 )
  {
    if ( (v11 & 1) != 0 )
    {
      v56 = 0LL;
      v46 = RtlDosApplyFileIsolationRedirection_Ustr(
              1,
              (_DWORD)a3,
              (_DWORD)a4,
              v53,
              a6,
              (__int64)&v56,
              0LL,
              (__int64)v52,
              (__int64)v51);
      v18 = v46;
      if ( v46 >= 0 )
      {
        if ( a7 )
          *a7 = v56;
LABEL_34:
        v18 = 0;
        goto LABEL_27;
      }
      if ( v46 != -1072365560 )
        goto LABEL_27;
      v15 = (unsigned __int16 *)v54;
    }
    if ( a4 )
    {
      v23 = *a4;
      if ( *a3 )
      {
        v24 = *((_QWORD *)a3 + 1);
        v25 = (_WORD *)(v24 + 2 * ((unsigned __int64)*a3 >> 1));
        while ( (unsigned __int64)v25 > v24 )
        {
          if ( *--v25 == 47 || *v25 == 92 )
            break;
          if ( *v25 == 46 )
          {
            v57 = 0LL;
            v23 = 0;
            break;
          }
        }
      }
    }
    else
    {
      v23 = v55;
    }
    v26 = *v15;
    if ( (_WORD)v26 )
    {
      v27 = *((_QWORD *)v15 + 1);
      v28 = v26 >> 1;
      v29 = v27 + 2 * v28;
      v30 = v29;
      if ( v29 > v27 )
      {
        do
        {
          v31 = v30 - 2;
          if ( *(_WORD *)(v30 - 2) == 59 )
          {
            v44 = (__int64)(v29 - v30 + 2) >> 1;
            LOWORD(v45) = v44 - 1;
            if ( (_WORD)v44 != 1 && *(_WORD *)(v29 - 2) != 92 && *(_WORD *)(v29 - 2) != 47 )
              LOWORD(v45) = (__int64)(v29 - v30 + 2) >> 1;
            v45 = (unsigned __int16)v45;
            v29 = v30 - 2;
            if ( (unsigned __int16)v45 <= v12 )
              v45 = v12;
            v12 = v45;
          }
          v30 -= 2LL;
        }
        while ( v31 > v27 );
      }
      v32 = (__int64)(v29 - v30) >> 1;
      if ( (_WORD)v32 && *(_WORD *)(v29 - 2) != 92 && *(_WORD *)(v29 - 2) != 47 )
        LOWORD(v32) = v32 + 1;
      v15 = (unsigned __int16 *)v54;
      v32 = (unsigned __int16)v32;
      if ( (unsigned __int16)v32 <= v12 )
        v32 = v12;
      v12 = 2 * v32;
    }
    else
    {
      v28 = v26 >> 1;
    }
    v33 = v23;
    v34 = v23 + (unsigned __int64)*a3;
    v54 = v23;
    v35 = v34 + v12 + 2;
    if ( v35 <= 0xFFFE )
    {
      v36 = (_WORD *)*((_QWORD *)v15 + 1);
      v37 = &v36[v28];
      if ( v36 < v37 )
      {
        while ( 1 )
        {
          v38 = v36;
          do
          {
            if ( *v38 == 59 )
              break;
            ++v38;
          }
          while ( v38 != v37 );
          v39 = v38 - v36;
          v40 = 2 * (_WORD)v39 == 0;
          v41 = 2 * v39;
          v42 = v41;
          if ( !v40 && *(v38 - 1) != 92 && *(v38 - 1) != 47 )
            v41 += 2;
          v43 = v41 + *a3 + v33;
          if ( UnicodeString.MaximumLength < v43 + 2 )
          {
            if ( (_BYTE *)UnicodeString.Buffer != v60 || v43 > 0xFFFC )
              break;
            UnicodeString.MaximumLength = v35;
            UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v35, v43);
            if ( !UnicodeString.Buffer )
              return (unsigned int)-1073741801;
          }
          UnicodeString.Length = 0;
          RtlUnicodeStringCbCopyStringN(&UnicodeString, v36, v42);
          if ( v41 && (_WORD)v42 != v41 )
          {
            UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
            UnicodeString.Length += 2;
          }
          RtlUnicodeStringCat(&UnicodeString, a3);
          if ( v57 )
            RtlUnicodeStringCat(&UnicodeString, v57);
          if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
            break;
          UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
          if ( (unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, 0LL) )
          {
            FullPathName_Ustr = RtlGetFullPathName_UstrEx((__int64)&UnicodeString, v53, v59, v58, v52, 0LL, &v50, v51);
            goto LABEL_33;
          }
          v36 = v38 + 1;
          if ( v38 == v37 )
            v36 = v38;
          if ( v36 >= v37 )
            goto LABEL_26;
          v33 = v54;
        }
        v18 = -1073741595;
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    goto LABEL_106;
  }
LABEL_18:
  LOBYTE(v14) = 1;
  if ( (unsigned __int8)RtlDoesFileExists_UstrEx(a3, v14) )
  {
    p_UnicodeString = (UNICODE_STRING *)a3;
LABEL_32:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx((__int64)p_UnicodeString, v53, a6, a7, v52, 0LL, &v50, v51);
LABEL_33:
    v18 = FullPathName_Ustr;
    if ( FullPathName_Ustr < 0 )
      goto LABEL_27;
    goto LABEL_34;
  }
  if ( a4 && *a4 )
  {
    if ( (v11 & 4) == 0 )
    {
      if ( *a3 )
      {
        v47 = *((_QWORD *)a3 + 1);
        v48 = (_WORD *)(v47 + 2 * ((unsigned __int64)*a3 >> 1));
        while ( (unsigned __int64)v48 > v47 )
        {
          if ( *--v48 == 92 || *v48 == 47 )
            break;
          if ( *v48 == 46 )
            goto LABEL_26;
        }
      }
    }
    v16 = *a4 + *a3 + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > UnicodeString.MaximumLength )
      {
        UnicodeString.MaximumLength = *a4 + *a3 + 2;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v16, v16);
        UnicodeString.Buffer = StringRoutine;
        if ( !StringRoutine )
          return (unsigned int)-1073741801;
      }
      else
      {
        StringRoutine = UnicodeString.Buffer;
      }
      memmove(StringRoutine, *((const void **)a3 + 1), *a3);
      memmove(&UnicodeString.Buffer[(unsigned __int64)*a3 >> 1], *((const void **)a4 + 1), *a4);
      UnicodeString.Buffer[(*a3 + (unsigned __int64)*a4) >> 1] = 0;
      UnicodeString.Length = *a3 + *a4;
      if ( !(unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, 1LL) )
        goto LABEL_26;
      p_UnicodeString = &UnicodeString;
      goto LABEL_32;
    }
LABEL_106:
    v18 = -1073741562;
    goto LABEL_27;
  }
LABEL_26:
  v18 = -1073741809;
LABEL_27:
  if ( UnicodeString.Buffer && (_BYTE *)UnicodeString.Buffer != v60 )
    RtlFreeUnicodeString(&UnicodeString);
  return v18;
}
