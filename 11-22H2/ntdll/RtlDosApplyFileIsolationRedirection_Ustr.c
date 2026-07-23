/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B790
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x180019AE4 (LdrpApplyFileNameRedirection.c)
 *     RtlDosSearchPath_Ustr @ 0x18001A5B0 (RtlDosSearchPath_Ustr.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpQuerySxSMUIFile @ 0x180075D14 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019630 (RtlGetFullPathName_UstrEx.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001D110 (RtlDetermineDosPathNameType_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001D1D8 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindCharInUnicodeString @ 0x18001E050 (RtlFindCharInUnicodeString.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18006E9E0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180083CE8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     sxsisol_RespectDotLocal @ 0x1800E9D80 (sxsisol_RespectDotLocal.c)
 *     RtlAssert @ 0x1800F8BD0 (RtlAssert.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlDosApplyFileIsolationRedirection_Ustr(
        ULONG Flags,
        PUNICODE_STRING OriginalName,
        PUNICODE_STRING Extension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *NewName,
        PULONG NewFlags,
        PSIZE_T FileNameSize,
        PSIZE_T RequiredLength)
{
  SIZE_T *FilePartPrefixCch; // r11
  NTSTATUS CharInUnicodeString; // eax
  NTSTATUS v14; // ebx
  char v15; // di
  int v16; // eax
  NTSTATUS FullPathName_Ustr; // eax
  _UNICODE_STRING v18; // xmm0
  unsigned __int16 Length; // cx
  unsigned __int16 v20; // ax
  ULONG v21; // edi
  int v22; // eax
  unsigned __int64 MaximumLength; // rcx
  wchar_t *Buffer; // rax
  int appended; // eax
  int v27; // eax
  NTSTATUS v28; // eax
  int v29; // eax
  USHORT v30[2]; // [rsp+48h] [rbp-C0h] BYREF
  USHORT NonInclusivePrefixLength[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  _UNICODE_STRING StringToSearch_8; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING StringUsed_8; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v34; // [rsp+78h] [rbp-90h] BYREF
  ULONG v35; // [rsp+7Ch] [rbp-8Ch]
  _UNICODE_STRING v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  _UNICODE_STRING StaticStringa; // [rsp+98h] [rbp-70h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+A8h] [rbp-60h] BYREF
  _UNICODE_STRING v40; // [rsp+B8h] [rbp-50h]
  _UNICODE_STRING v41; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t *v42; // [rsp+D8h] [rbp-30h]
  wchar_t *v43; // [rsp+E0h] [rbp-28h]
  __int64 v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  _UNICODE_STRING v46; // [rsp+108h] [rbp+0h] BYREF
  wchar_t *v47; // [rsp+118h] [rbp+10h]
  wchar_t *v48; // [rsp+120h] [rbp+18h]
  __int64 v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  __int16 v51; // [rsp+138h] [rbp+30h] BYREF
  PUNICODE_STRING v52; // [rsp+140h] [rbp+38h]
  PUNICODE_STRING v53; // [rsp+148h] [rbp+40h]
  PUNICODE_STRING *v54; // [rsp+150h] [rbp+48h]
  char v55; // [rsp+158h] [rbp+50h]
  _WORD v56[16]; // [rsp+168h] [rbp+60h] BYREF
  char v57; // [rsp+188h] [rbp+80h] BYREF

  FilePartPrefixCch = 0LL;
  v35 = Flags;
  StaticStringa.Buffer = (wchar_t *)&v57;
  *(_DWORD *)&v36.Length = 0;
  v36.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  v37 = 0LL;
  v30[0] = 0;
  v34 = 0;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *FileNameSize = 0LL;
  if ( RequiredLength )
    *RequiredLength = 520LL;
  if ( DynamicString )
    *DynamicString = 0LL;
  v56[0] = 0;
  v44 = 32LL;
  v42 = v56;
  v43 = v56;
  v41.Buffer = v56;
  v45 = 32LL;
  *(_DWORD *)&v41.Length = 0x200000;
  if ( StaticString )
  {
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    if ( MaximumLength < 2 )
    {
      Buffer = (wchar_t *)&v51;
      MaximumLength = 2LL;
    }
    v47 = Buffer;
    v49 = MaximumLength;
    v48 = Buffer;
    v50 = MaximumLength;
    v46.Buffer = Buffer;
    if ( Buffer )
      *Buffer = 0;
    v46.Length = 0;
    v46.MaximumLength = MaximumLength;
  }
  else
  {
    v49 = 2LL;
    v47 = (wchar_t *)&v51;
    v48 = (wchar_t *)&v51;
    v46.Buffer = (wchar_t *)&v51;
    v50 = 2LL;
    v51 = 0;
    *(_DWORD *)&v46.Length = 0x20000;
  }
  v54 = NewName;
  v55 = 1;
  v52 = StaticString;
  v53 = DynamicString;
  if ( (Flags & 0xFFFFFFFE) != 0 || !OriginalName )
    goto LABEL_84;
  if ( !StaticString )
  {
    if ( DynamicString || !FileNameSize )
      goto LABEL_15;
LABEL_84:
    v14 = -1073741811;
    goto LABEL_37;
  }
  if ( DynamicString && !NewName )
    goto LABEL_84;
LABEL_15:
  StringToSearch_8 = *OriginalName;
  if ( Extension )
  {
    if ( Extension->Length )
    {
      CharInUnicodeString = RtlFindCharInUnicodeString(
                              1u,
                              &StringToSearch_8,
                              (PUNICODE_STRING)&CharSet,
                              NonInclusivePrefixLength);
      FilePartPrefixCch = 0LL;
      v14 = CharInUnicodeString;
      if ( CharInUnicodeString < 0 )
      {
        if ( CharInUnicodeString != -1073741275 )
          goto LABEL_37;
        v40 = *Extension;
        UnicodeString = StringToSearch_8;
        appended = RtlMultiAppendUnicodeStringBuffer(&v41, 2LL, &UnicodeString);
        FilePartPrefixCch = 0LL;
        v14 = appended;
        if ( appended < 0 )
          goto LABEL_37;
        StringToSearch_8 = v41;
      }
    }
  }
  *(_QWORD *)&StringUsed_8.Length = 0LL;
  v15 = 0;
  if ( v36.Buffer )
  {
    v14 = -1073741811;
  }
  else
  {
    v16 = RtlDetermineDosPathNameType_Ustr(&StringToSearch_8);
    *(_DWORD *)NonInclusivePrefixLength = v16;
    if ( ((v16 - 1) & 0xFFFFFFFA) != 0 || v16 == 5 )
      goto LABEL_25;
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          &StringToSearch_8,
                          &StaticStringa,
                          &v36,
                          (PUNICODE_STRING *)&StringUsed_8,
                          FilePartPrefixCch,
                          (PBOOLEAN)FilePartPrefixCch,
                          (RTL_PATH_TYPE *)NonInclusivePrefixLength,
                          FilePartPrefixCch);
    FilePartPrefixCch = 0LL;
    v14 = FullPathName_Ustr;
    if ( FullPathName_Ustr >= 0 )
    {
      OriginalName = *(PUNICODE_STRING *)&StringUsed_8.Length;
      v18 = *(_UNICODE_STRING *)*(_QWORD *)&StringUsed_8.Length;
      StringUsed_8 = *(_UNICODE_STRING *)*(_QWORD *)&StringUsed_8.Length;
      if ( *(_DWORD *)NonInclusivePrefixLength == 6
        && StringToSearch_8.Buffer[5] == 58
        && StringToSearch_8.Buffer[6] == 92 )
      {
        StringUsed_8.Buffer += 4;
        StringToSearch_8.MaximumLength -= 8;
        Length = StringToSearch_8.Length - 8;
        StringToSearch_8.Buffer += 4;
        v20 = StringUsed_8.Length - 8;
        StringToSearch_8.Length -= 8;
        StringUsed_8.MaximumLength -= 8;
        StringUsed_8.Length -= 8;
        v18 = StringUsed_8;
      }
      else
      {
        Length = StringToSearch_8.Length;
        v20 = StringUsed_8.Length;
      }
      if ( Length > v20 )
      {
        StringToSearch_8 = v18;
        if ( OriginalName == &v36 )
          v15 = 1;
      }
LABEL_25:
      v14 = (int)FilePartPrefixCch;
      if ( v15 )
        goto LABEL_28;
    }
  }
  if ( v36.Buffer )
  {
    NtdllpFreeStringRoutine(v36.Buffer);
    FilePartPrefixCch = 0LL;
    v36 = 0LL;
  }
LABEL_28:
  if ( v14 >= 0 )
  {
    if ( (v35 & 1) == 0
      || (SIZE_T *)NtCurrentPeb()->ProcessParameters == FilePartPrefixCch
      || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
      || (v29 = sxsisol_RespectDotLocal(&StringToSearch_8, &v46, &v34),
          LOWORD(FilePartPrefixCch) = 0,
          v14 = v29,
          v29 >= 0) )
    {
      v21 = v34;
      if ( (v34 & 1) != 0 )
        goto LABEL_80;
      if ( StaticString || (LOBYTE(OriginalName) = 1, DynamicString) )
        LOBYTE(OriginalName) = (_BYTE)FilePartPrefixCch;
      v22 = sxsisol_SearchActCtxForDllName(
              (unsigned int)&StringToSearch_8,
              (_DWORD)OriginalName,
              (unsigned int)&v37,
              (_DWORD)NewFlags,
              (__int64)&v46);
      LOWORD(FilePartPrefixCch) = 0;
      v14 = v22;
      if ( v22 >= 0 )
      {
LABEL_80:
        if ( !DynamicString && StaticString && v46.Buffer != StaticString->Buffer )
        {
          v14 = -1073741789;
          goto LABEL_37;
        }
        if ( FileNameSize )
        {
          v28 = RtlFindCharInUnicodeString(1u, &v46, &RtlDosPathSeperatorsString, v30);
          LOWORD(FilePartPrefixCch) = 0;
          v14 = v28;
          if ( v28 < 0 )
            goto LABEL_37;
          *FileNameSize = ((unsigned __int64)v30[0] >> 1) + 1;
        }
        v27 = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(&v46);
        LOWORD(FilePartPrefixCch) = 0;
        v14 = v27;
        if ( v27 >= 0 )
        {
          if ( NewFlags )
            *NewFlags = v21;
          v14 = 0;
        }
      }
    }
LABEL_37:
    if ( v14 >= 0 )
      goto LABEL_45;
  }
  if ( v55 != (_BYTE)FilePartPrefixCch )
  {
    if ( v47 && v47 != v48 )
    {
      UnicodeString.Buffer = v47;
      RtlFreeUnicodeString(&UnicodeString);
      LOWORD(FilePartPrefixCch) = 0;
    }
    if ( v48 )
      *v48 = (unsigned __int16)FilePartPrefixCch;
  }
  memset_thunk_772440563353939046(&v46, 0, 0x58uLL);
  LOWORD(FilePartPrefixCch) = 0;
LABEL_45:
  if ( v36.Buffer )
  {
    NtdllpFreeStringRoutine(v36.Buffer);
    LOWORD(FilePartPrefixCch) = 0;
    v36 = 0LL;
  }
  if ( v42 )
  {
    if ( v42 != v43 )
    {
      StringUsed_8.Buffer = v42;
      RtlFreeUnicodeString(&StringUsed_8);
      LOWORD(FilePartPrefixCch) = 0;
    }
    v42 = v43;
    v44 = v45;
  }
  v41.Buffer = v43;
  if ( v43 )
    *v43 = (unsigned __int16)FilePartPrefixCch;
  v41.MaximumLength = v45;
  v41.Length = (unsigned __int16)FilePartPrefixCch;
  if ( v14 == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B1u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return v14;
}
