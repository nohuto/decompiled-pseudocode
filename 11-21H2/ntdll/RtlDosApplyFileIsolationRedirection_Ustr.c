/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     RtlDosSearchPath_Ustr @ 0x180043D50 (RtlDosSearchPath_Ustr.c)
 *     LdrpApplyFileNameRedirection @ 0x180044B54 (LdrpApplyFileNameRedirection.c)
 *     LdrpQuerySxSMUIFile @ 0x18007E478 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     sxsisol_RespectDotLocal @ 0x180002A90 (sxsisol_RespectDotLocal.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     RtlGetFullPathName_UstrEx @ 0x180043AB0 (RtlGetFullPathName_UstrEx.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180047984 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFindCharInUnicodeString @ 0x180047A60 (RtlFindCharInUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075290 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800879F8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlAssert @ 0x1800F8990 (RtlAssert.c)
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
  PSIZE_T v12; // rcx
  int v13; // r15d
  NTSTATUS CharInUnicodeString; // eax
  NTSTATUS appended; // ebx
  bool v16; // si
  int v17; // ecx
  _DWORD *v18; // rsi
  _UNICODE_STRING v20; // xmm0
  unsigned __int16 Length; // ax
  unsigned __int16 v22; // cx
  wchar_t *MaximumLength; // rcx
  _UNICODE_STRING *Buffer; // rax
  _QWORD *v25; // rdi
  USHORT v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT NonInclusivePrefixLength[2]; // [rsp+44h] [rbp-BCh] BYREF
  _UNICODE_STRING StringToSearch; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING v30; // [rsp+68h] [rbp-98h] BYREF
  PUNICODE_STRING StringUsed[2]; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING v32; // [rsp+90h] [rbp-70h]
  _UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING v34; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-40h] BYREF
  _UNICODE_STRING StaticStringa; // [rsp+C8h] [rbp-38h] BYREF
  _UNICODE_STRING v37; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t *v38; // [rsp+E8h] [rbp-18h]
  wchar_t *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int64 v41; // [rsp+100h] [rbp+0h]
  _UNICODE_STRING v42[6]; // [rsp+110h] [rbp+10h] BYREF
  _WORD v43[16]; // [rsp+170h] [rbp+70h] BYREF
  char v44; // [rsp+190h] [rbp+90h] BYREF

  *(_QWORD *)&UnicodeString.Length = NewFlags;
  v12 = FileNameSize;
  *(_QWORD *)&v34.Length = FileNameSize;
  v13 = 0;
  *(_DWORD *)&v30.Length = 0;
  v30.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  StaticStringa.Buffer = (wchar_t *)&v44;
  v35 = 0LL;
  v26[0] = 0;
  v29 = 0;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *FileNameSize = 0LL;
  if ( RequiredLength )
    *RequiredLength = 520LL;
  if ( DynamicString )
    *DynamicString = 0LL;
  v43[0] = 0;
  v40 = 32LL;
  v38 = v43;
  v39 = v43;
  v37.Buffer = v43;
  v41 = 32LL;
  *(_DWORD *)&v37.Length = 0x200000;
  if ( !StaticString )
  {
    *(_QWORD *)&v42[2].Length = 2LL;
    *(_QWORD *)&v42[1].Length = &v42[3];
    v42[2].Buffer = (wchar_t *)2;
    v42[1].Buffer = &v42[3].Length;
    v42[0].Buffer = &v42[3].Length;
    v42[3].Length = 0;
    *(_DWORD *)&v42[0].Length = 0x20000;
    goto LABEL_11;
  }
  MaximumLength = (wchar_t *)StaticString->MaximumLength;
  Buffer = (_UNICODE_STRING *)StaticString->Buffer;
  if ( (unsigned __int64)MaximumLength < 2 )
  {
    Buffer = &v42[3];
    *(_QWORD *)&v42[2].Length = 2LL;
    *(_QWORD *)&v42[1].Length = &v42[3];
    LOWORD(MaximumLength) = 2;
    v42[1].Buffer = &v42[3].Length;
    v42[0].Buffer = &v42[3].Length;
    v42[2].Buffer = (wchar_t *)2;
  }
  else
  {
    *(_QWORD *)&v42[1].Length = StaticString->Buffer;
    *(_QWORD *)&v42[2].Length = MaximumLength;
    v42[1].Buffer = &Buffer->Length;
    v42[2].Buffer = MaximumLength;
    v42[0].Buffer = &Buffer->Length;
    if ( !Buffer )
      goto LABEL_60;
  }
  Buffer->Length = 0;
LABEL_60:
  v42[0].MaximumLength = (unsigned __int16)MaximumLength;
  v12 = *(PSIZE_T *)&v34.Length;
  v42[0].Length = 0;
LABEL_11:
  v42[4].Buffer = (wchar_t *)NewName;
  v42[3].Buffer = &StaticString->Length;
  *(_QWORD *)&v42[4].Length = DynamicString;
  LOBYTE(v42[5].Length) = 1;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    appended = -1073741811;
    goto LABEL_33;
  }
  if ( !OriginalName )
  {
    appended = -1073741811;
    goto LABEL_33;
  }
  if ( StaticString )
  {
    if ( DynamicString && !NewName )
      goto LABEL_88;
  }
  else if ( !DynamicString && v12 )
  {
LABEL_88:
    appended = -1073741811;
    goto LABEL_33;
  }
  StringToSearch = *OriginalName;
  if ( Extension )
  {
    if ( Extension->Length )
    {
      CharInUnicodeString = RtlFindCharInUnicodeString(
                              1u,
                              &StringToSearch,
                              (PUNICODE_STRING)&CharSet,
                              NonInclusivePrefixLength);
      appended = CharInUnicodeString;
      if ( CharInUnicodeString < 0 )
      {
        if ( CharInUnicodeString != -1073741275 )
          goto LABEL_33;
        v32 = *Extension;
        *(_UNICODE_STRING *)StringUsed = StringToSearch;
        appended = RtlMultiAppendUnicodeStringBuffer(&v37, 2LL, StringUsed);
        if ( appended < 0 )
          goto LABEL_33;
        StringToSearch = v37;
      }
    }
  }
  v16 = 0;
  StringUsed[0] = 0LL;
  if ( v30.Buffer )
  {
    appended = -1073741811;
  }
  else
  {
    v17 = RtlDetermineDosPathNameType_Ustr(&StringToSearch);
    *(_DWORD *)NonInclusivePrefixLength = v17;
    if ( ((v17 - 1) & 0xFFFFFFFA) != 0 || v17 == 5 )
      goto LABEL_20;
    appended = RtlGetFullPathName_UstrEx(
                 &StringToSearch,
                 &StaticStringa,
                 &v30,
                 StringUsed,
                 0LL,
                 0LL,
                 (RTL_PATH_TYPE *)NonInclusivePrefixLength,
                 0LL);
    if ( appended >= 0 )
    {
      OriginalName = StringUsed[0];
      v20 = *StringUsed[0];
      *(_UNICODE_STRING *)StringUsed = *StringUsed[0];
      if ( *(_DWORD *)NonInclusivePrefixLength == 6 && StringToSearch.Buffer[5] == 58 && StringToSearch.Buffer[6] == 92 )
      {
        StringUsed[1] = (PUNICODE_STRING)((char *)StringUsed[1] + 8);
        StringToSearch.MaximumLength -= 8;
        Length = StringToSearch.Length - 8;
        StringToSearch.Buffer += 4;
        v22 = LOWORD(StringUsed[0]) - 8;
        StringToSearch.Length -= 8;
        WORD1(StringUsed[0]) -= 8;
        LOWORD(StringUsed[0]) -= 8;
        v20 = *(_UNICODE_STRING *)StringUsed;
      }
      else
      {
        Length = StringToSearch.Length;
        v22 = (unsigned __int16)StringUsed[0];
      }
      if ( Length > v22 )
      {
        StringToSearch = v20;
        v16 = OriginalName == &v30;
      }
LABEL_20:
      appended = 0;
      if ( v16 )
        goto LABEL_23;
    }
  }
  if ( v30.Buffer )
  {
    NtdllpFreeStringRoutine(v30.Buffer);
    v30 = 0LL;
  }
LABEL_23:
  if ( appended >= 0 )
  {
    if ( (Flags & 1) != 0 )
    {
      if ( NtCurrentPeb()->ProcessParameters )
      {
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
        {
          appended = sxsisol_RespectDotLocal(&StringToSearch, &v42[0].Length, &v29);
          if ( appended < 0 )
            goto LABEL_33;
        }
      }
      v13 = v29;
    }
    if ( (v13 & 1) != 0 )
    {
      v18 = *(_DWORD **)&UnicodeString.Length;
    }
    else
    {
      LOBYTE(OriginalName) = !StaticString && !DynamicString;
      v18 = *(_DWORD **)&UnicodeString.Length;
      appended = sxsisol_SearchActCtxForDllName(
                   (unsigned int)&StringToSearch,
                   (_DWORD)OriginalName,
                   (unsigned int)&v35,
                   *(_DWORD *)&UnicodeString.Length,
                   (__int64)v42);
      if ( appended < 0 )
        goto LABEL_33;
    }
    if ( !DynamicString && StaticString && v42[0].Buffer != StaticString->Buffer )
    {
      appended = -1073741789;
      goto LABEL_33;
    }
    v25 = *(_QWORD **)&v34.Length;
    if ( *(_QWORD *)&v34.Length )
    {
      appended = RtlFindCharInUnicodeString(1u, v42, &RtlDosPathSeperatorsString, v26);
      if ( appended < 0 )
        goto LABEL_33;
      *v25 = ((unsigned __int64)v26[0] >> 1) + 1;
    }
    appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v42);
    if ( appended >= 0 )
    {
      if ( v18 )
        *v18 = v13;
      appended = 0;
    }
LABEL_33:
    if ( appended >= 0 )
      goto LABEL_41;
  }
  if ( LOBYTE(v42[5].Length) )
  {
    if ( *(_QWORD *)&v42[1].Length && *(wchar_t **)&v42[1].Length != v42[1].Buffer )
    {
      v34.Buffer = *(wchar_t **)&v42[1].Length;
      RtlFreeUnicodeString(&v34);
    }
    if ( v42[1].Buffer )
      *v42[1].Buffer = 0;
  }
  memset(v42, 0, 0x58uLL);
LABEL_41:
  if ( v30.Buffer )
  {
    NtdllpFreeStringRoutine(v30.Buffer);
    v30 = 0LL;
  }
  if ( v38 )
  {
    if ( v38 != v39 )
    {
      UnicodeString.Buffer = v38;
      RtlFreeUnicodeString(&UnicodeString);
    }
    v38 = v39;
    v40 = v41;
  }
  v37.Buffer = v39;
  if ( v39 )
    *v39 = 0;
  v37.MaximumLength = v41;
  v37.Length = 0;
  if ( appended == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B1u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return appended;
}
