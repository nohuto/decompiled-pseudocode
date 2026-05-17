/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5B0
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x1800198D4 (LdrpApplyFileNameRedirection.c)
 *     RtlDosSearchPath_Ustr @ 0x18001A3D0 (RtlDosSearchPath_Ustr.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpQuerySxSMUIFile @ 0x180076384 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019420 (RtlGetFullPathName_UstrEx.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001CF30 (RtlDetermineDosPathNameType_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001CFF8 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindCharInUnicodeString @ 0x18001DE70 (RtlFindCharInUnicodeString.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18006E9E0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800844E8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     sxsisol_RespectDotLocal @ 0x1800EB0B0 (sxsisol_RespectDotLocal.c)
 *     RtlAssert @ 0x1800F9FE0 (RtlAssert.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        unsigned int a1,
        _BYTE *a2,
        __int128 *a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 *v9; // r11
  int CharInUnicodeString; // eax
  int v14; // ebx
  char v15; // di
  int v16; // eax
  int FullPathName_Ustr; // eax
  UNICODE_STRING v18; // xmm0
  unsigned __int16 Length; // cx
  unsigned __int16 v20; // ax
  int v21; // edi
  int v22; // eax
  unsigned __int64 v24; // rcx
  wchar_t *v25; // rax
  int appended; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned __int16 v30[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  UNICODE_STRING v32; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v35[20]; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v36; // [rsp+90h] [rbp-78h] BYREF
  int v37; // [rsp+98h] [rbp-70h] BYREF
  char *v38; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING v39; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING v41; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t *v42; // [rsp+D8h] [rbp-30h]
  wchar_t *v43; // [rsp+E0h] [rbp-28h]
  __int64 v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  int v46; // [rsp+108h] [rbp+0h] BYREF
  wchar_t *v47; // [rsp+110h] [rbp+8h]
  wchar_t *v48; // [rsp+118h] [rbp+10h]
  wchar_t *v49; // [rsp+120h] [rbp+18h]
  __int64 v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  __int16 v52; // [rsp+138h] [rbp+30h] BYREF
  __int64 v53; // [rsp+140h] [rbp+38h]
  _OWORD *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  char v56; // [rsp+158h] [rbp+50h]
  _WORD v57[16]; // [rsp+168h] [rbp+60h] BYREF
  char v58; // [rsp+188h] [rbp+80h] BYREF

  v9 = 0LL;
  *(_QWORD *)v35 = a1;
  v38 = &v58;
  *(_QWORD *)&v35[12] = 0LL;
  v37 = 0x800000;
  v36 = 0LL;
  v30[0] = 0;
  v34 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a9 )
    *a9 = 520LL;
  if ( a5 )
    *a5 = 0LL;
  v57[0] = 0;
  v44 = 32LL;
  v42 = v57;
  v43 = v57;
  v41.Buffer = v57;
  v45 = 32LL;
  *(_DWORD *)&v41.Length = 0x200000;
  if ( a4 )
  {
    v24 = *(unsigned __int16 *)(a4 + 2);
    v25 = *(wchar_t **)(a4 + 8);
    if ( v24 < 2 )
    {
      v25 = (wchar_t *)&v52;
      v24 = 2LL;
    }
    v48 = v25;
    v50 = v24;
    v49 = v25;
    v51 = v24;
    v47 = v25;
    if ( v25 )
      *v25 = 0;
    LOWORD(v46) = 0;
    HIWORD(v46) = v24;
  }
  else
  {
    v50 = 2LL;
    v48 = (wchar_t *)&v52;
    v49 = (wchar_t *)&v52;
    v47 = (wchar_t *)&v52;
    v51 = 2LL;
    v52 = 0;
    v46 = 0x20000;
  }
  v55 = a6;
  v56 = 1;
  v53 = a4;
  v54 = a5;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    goto LABEL_84;
  if ( !a4 )
  {
    if ( a5 || !a8 )
      goto LABEL_15;
LABEL_84:
    v14 = -1073741811;
    goto LABEL_37;
  }
  if ( a5 && !a6 )
    goto LABEL_84;
LABEL_15:
  v32 = *(UNICODE_STRING *)a2;
  if ( a3 )
  {
    if ( *(_WORD *)a3 )
    {
      CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v32, &unk_1801331F0, &v31);
      v9 = 0LL;
      v14 = CharInUnicodeString;
      if ( CharInUnicodeString < 0 )
      {
        if ( CharInUnicodeString != -1073741275 )
          goto LABEL_37;
        v40 = *a3;
        v39 = v32;
        appended = RtlMultiAppendUnicodeStringBuffer(&v41, 2LL, &v39);
        v9 = 0LL;
        v14 = appended;
        if ( appended < 0 )
          goto LABEL_37;
        v32 = v41;
      }
    }
  }
  *(_QWORD *)&UnicodeString_8.Length = 0LL;
  v15 = 0;
  if ( *(_QWORD *)&v35[12] )
  {
    v14 = -1073741811;
  }
  else
  {
    v16 = RtlDetermineDosPathNameType_Ustr(&v32);
    v31 = v16;
    if ( ((v16 - 1) & 0xFFFFFFFA) != 0 || v16 == 5 )
      goto LABEL_25;
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          (__int64)&v32,
                          (__int64)&v37,
                          (__int64)&v35[4],
                          &UnicodeString_8,
                          v9,
                          (__int64)v9,
                          &v31,
                          v9);
    v9 = 0LL;
    v14 = FullPathName_Ustr;
    if ( FullPathName_Ustr >= 0 )
    {
      a2 = *(_BYTE **)&UnicodeString_8.Length;
      v18 = *(UNICODE_STRING *)*(_QWORD *)&UnicodeString_8.Length;
      UnicodeString_8 = *(UNICODE_STRING *)*(_QWORD *)&UnicodeString_8.Length;
      if ( v31 == 6 && v32.Buffer[5] == 58 && v32.Buffer[6] == 92 )
      {
        UnicodeString_8.Buffer += 4;
        v32.MaximumLength -= 8;
        Length = v32.Length - 8;
        v32.Buffer += 4;
        v20 = UnicodeString_8.Length - 8;
        v32.Length -= 8;
        UnicodeString_8.MaximumLength -= 8;
        UnicodeString_8.Length -= 8;
        v18 = UnicodeString_8;
      }
      else
      {
        Length = v32.Length;
        v20 = UnicodeString_8.Length;
      }
      if ( Length > v20 )
      {
        v32 = v18;
        if ( a2 == &v35[4] )
          v15 = 1;
      }
LABEL_25:
      v14 = (int)v9;
      if ( v15 )
        goto LABEL_28;
    }
  }
  if ( *(_QWORD *)&v35[12] )
  {
    NtdllpFreeStringRoutine(*(_QWORD *)&v35[12]);
    v9 = 0LL;
    *(_OWORD *)&v35[4] = 0LL;
  }
LABEL_28:
  if ( v14 >= 0 )
  {
    if ( (v35[0] & 1) == 0
      || (__int64 *)NtCurrentPeb()->ProcessParameters == v9
      || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
      || (v29 = sxsisol_RespectDotLocal(&v32, &v46, &v34), LOWORD(v9) = 0, v14 = v29, v29 >= 0) )
    {
      v21 = v34;
      if ( (v34 & 1) != 0 )
        goto LABEL_80;
      if ( a4 || (LOBYTE(a2) = 1, a5) )
        LOBYTE(a2) = (_BYTE)v9;
      v22 = sxsisol_SearchActCtxForDllName(
              (unsigned int)&v32,
              (_DWORD)a2,
              (unsigned int)&v36,
              (_DWORD)a7,
              (__int64)&v46);
      LOWORD(v9) = 0;
      v14 = v22;
      if ( v22 >= 0 )
      {
LABEL_80:
        if ( !a5 && a4 && v47 != *(wchar_t **)(a4 + 8) )
        {
          v14 = -1073741789;
          goto LABEL_37;
        }
        if ( a8 )
        {
          v28 = RtlFindCharInUnicodeString(1LL, &v46, &RtlDosPathSeperatorsString, v30);
          LOWORD(v9) = 0;
          v14 = v28;
          if ( v28 < 0 )
            goto LABEL_37;
          *a8 = ((unsigned __int64)v30[0] >> 1) + 1;
        }
        v27 = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(&v46);
        LOWORD(v9) = 0;
        v14 = v27;
        if ( v27 >= 0 )
        {
          if ( a7 )
            *a7 = v21;
          v14 = 0;
        }
      }
    }
LABEL_37:
    if ( v14 >= 0 )
      goto LABEL_45;
    goto LABEL_38;
  }
  while ( 1 )
  {
LABEL_38:
    if ( v56 != (_BYTE)v9 )
    {
      if ( v48 && v48 != v49 )
      {
        v39.Buffer = v48;
        RtlFreeUnicodeString(&v39);
        LOWORD(v9) = 0;
      }
      if ( v49 )
        *v49 = (unsigned __int16)v9;
    }
    memset_thunk_772440563353939046(&v46, 0, 0x58uLL);
    LOWORD(v9) = 0;
LABEL_45:
    if ( *(_QWORD *)&v35[12] )
    {
      NtdllpFreeStringRoutine(*(_QWORD *)&v35[12]);
      LOWORD(v9) = 0;
      *(_OWORD *)&v35[4] = 0LL;
    }
    if ( v42 )
    {
      if ( v42 != v43 )
      {
        UnicodeString_8.Buffer = v42;
        RtlFreeUnicodeString(&UnicodeString_8);
        LOWORD(v9) = 0;
      }
      v42 = v43;
      v44 = v45;
    }
    v41.Buffer = v43;
    if ( v43 )
      *v43 = (unsigned __int16)v9;
    v41.MaximumLength = v45;
    v41.Length = (unsigned __int16)v9;
    if ( v14 != -1072365567 )
      break;
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      433LL,
      "Status != STATUS_SXS_SECTION_NOT_FOUND");
    LOWORD(v9) = 0;
    v14 = -1073741595;
  }
  return (unsigned int)v14;
}
