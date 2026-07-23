/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x180043D50
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlGetFullPathName_UstrEx @ 0x180043AB0 (RtlGetFullPathName_UstrEx.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044304 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180047984 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x18006B4B4 (RtlUnicodeStringCbCopyStringN.c)
 *     RtlUnicodeStringCat @ 0x18006B5A0 (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

NTSTATUS __cdecl RtlDosSearchPath_Ustr(
        ULONG Flags,
        PUNICODE_STRING Path,
        PUNICODE_STRING FileName,
        PUNICODE_STRING DefaultExtension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PCUNICODE_STRING *FullFileNameOut,
        SIZE_T *FilePartPrefixCch,
        SIZE_T *BytesRequired)
{
  char v10; // bl
  unsigned __int64 v12; // rsi
  RTL_PATH_TYPE v13; // eax
  __int64 v14; // rdx
  unsigned __int16 *p_Length; // r11
  unsigned __int64 v16; // rdx
  wchar_t *StringRoutine; // rax
  __int64 v18; // rdx
  int FullPathName_Ustr; // ebx
  _UNICODE_STRING *p_UnicodeString; // rcx
  PUNICODE_STRING *v22; // r9
  _UNICODE_STRING *v23; // r8
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // bx
  wchar_t *v26; // rdx
  wchar_t *v27; // rcx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r13
  _WORD *v36; // rsi
  _WORD *v37; // r12
  _WORD *v38; // rdi
  __int64 v39; // rbx
  bool v40; // zf
  unsigned __int16 v41; // bx
  __int64 v42; // r15
  unsigned __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int64 v45; // rax
  NTSTATUS v46; // eax
  wchar_t *v47; // rdx
  wchar_t *v48; // rcx
  _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  PSIZE_T RequiredLength; // [rsp+68h] [rbp-98h]
  PSIZE_T FileNameSize; // [rsp+70h] [rbp-90h]
  PUNICODE_STRING v53; // [rsp+78h] [rbp-88h]
  PUNICODE_STRING v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  PUNICODE_STRING NewName; // [rsp+90h] [rbp-70h] BYREF
  PUNICODE_STRING v57; // [rsp+98h] [rbp-68h]
  PCUNICODE_STRING *v58; // [rsp+A0h] [rbp-60h]
  PUNICODE_STRING v59; // [rsp+A8h] [rbp-58h]
  _BYTE v60[528]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = Path;
  v10 = Flags;
  v53 = StaticString;
  v12 = 0LL;
  RequiredLength = BytesRequired;
  UnicodeString.Buffer = (wchar_t *)v60;
  v57 = DefaultExtension;
  v59 = DynamicString;
  v58 = FullFileNameOut;
  FileNameSize = FilePartPrefixCch;
  LOWORD(v55) = 0;
  *(_DWORD *)&UnicodeString.Length = 34078720;
  if ( FullFileNameOut )
    *FullFileNameOut = 0LL;
  if ( BytesRequired )
    *BytesRequired = 0LL;
  if ( FilePartPrefixCch )
    *FilePartPrefixCch = 0LL;
  if ( DynamicString )
  {
    *(_DWORD *)&DynamicString->Length = 0;
    DynamicString->Buffer = 0LL;
  }
  if ( (Flags & 0xFFFFFFF8) != 0 || !Path || !FileName || StaticString && DynamicString && !FullFileNameOut )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_27;
  }
  v13 = (unsigned int)RtlDetermineDosPathNameType_Ustr(FileName);
  InputPathType = v13;
  if ( (v10 & 2) != 0 && v13 == RtlPathTypeRelative && FileName->Length >= 4u )
  {
    Buffer = FileName->Buffer;
    if ( *Buffer == 46 )
    {
      if ( Buffer[1] == 92 || Buffer[1] == 47 )
      {
        v13 = RtlPathTypeUnknown;
        InputPathType = RtlPathTypeUnknown;
      }
      else if ( Buffer[1] == 46 && FileName->Length >= 6u && (Buffer[2] == 92 || Buffer[2] == 47) )
      {
        InputPathType = RtlPathTypeUnknown;
        goto LABEL_18;
      }
    }
  }
  if ( v13 == RtlPathTypeRelative )
  {
    if ( (v10 & 1) != 0 )
    {
      NewName = 0LL;
      v46 = RtlDosApplyFileIsolationRedirection_Ustr(
              1u,
              FileName,
              DefaultExtension,
              v53,
              DynamicString,
              &NewName,
              0LL,
              FileNameSize,
              RequiredLength);
      FullPathName_Ustr = v46;
      if ( v46 >= 0 )
      {
        if ( FullFileNameOut )
          *FullFileNameOut = NewName;
LABEL_34:
        FullPathName_Ustr = 0;
        goto LABEL_27;
      }
      if ( v46 != -1072365560 )
        goto LABEL_27;
      p_Length = &v54->Length;
    }
    if ( DefaultExtension )
    {
      Length = DefaultExtension->Length;
      if ( FileName->Length )
      {
        v26 = FileName->Buffer;
        v27 = &v26[(unsigned __int64)FileName->Length >> 1];
        while ( v27 > v26 )
        {
          if ( *--v27 == 47 || *v27 == 92 )
            break;
          if ( *v27 == 46 )
          {
            v57 = 0LL;
            Length = 0;
            break;
          }
        }
      }
    }
    else
    {
      Length = v55;
    }
    if ( *p_Length )
    {
      v28 = *((_QWORD *)p_Length + 1);
      v29 = v28 + 2 * ((unsigned __int64)*p_Length >> 1);
      v30 = v29;
      if ( v29 > v28 )
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
        while ( v31 > v28 );
        p_Length = &v54->Length;
      }
      v32 = (__int64)(v29 - v30) >> 1;
      if ( (_WORD)v32 && *(_WORD *)(v29 - 2) != 92 && *(_WORD *)(v29 - 2) != 47 )
        LOWORD(v32) = v32 + 1;
      v32 = (unsigned __int16)v32;
      if ( (unsigned __int16)v32 <= v12 )
        v32 = v12;
      v12 = 2 * v32;
    }
    v33 = Length;
    v34 = Length + (unsigned __int64)FileName->Length;
    v54 = (PUNICODE_STRING)Length;
    v35 = v34 + v12 + 2;
    if ( v35 <= 0xFFFE )
    {
      v36 = (_WORD *)*((_QWORD *)p_Length + 1);
      v37 = &v36[(unsigned __int64)*p_Length >> 1];
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
          v43 = v41 + FileName->Length + v33;
          if ( UnicodeString.MaximumLength < v43 + 2 )
          {
            if ( (_BYTE *)UnicodeString.Buffer != v60 || v43 > 0xFFFC )
              break;
            UnicodeString.MaximumLength = v35;
            UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v35);
            if ( !UnicodeString.Buffer )
              return -1073741801;
          }
          UnicodeString.Length = 0;
          RtlUnicodeStringCbCopyStringN(&UnicodeString, v36, v42);
          if ( v41 && (_WORD)v42 != v41 )
          {
            UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
            UnicodeString.Length += 2;
          }
          RtlUnicodeStringCat(&UnicodeString, FileName);
          if ( v57 )
            RtlUnicodeStringCat(&UnicodeString, v57);
          if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
            break;
          UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
          if ( (unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, 0LL) )
          {
            v22 = (PUNICODE_STRING *)v58;
            p_UnicodeString = &UnicodeString;
            v23 = v59;
            goto LABEL_33;
          }
          v36 = v38 + 1;
          if ( v38 == v37 )
            v36 = v38;
          if ( v36 >= v37 )
            goto LABEL_26;
          v33 = (unsigned __int64)v54;
        }
        FullPathName_Ustr = -1073741595;
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    goto LABEL_107;
  }
LABEL_18:
  LOBYTE(v14) = 1;
  if ( (unsigned __int8)RtlDoesFileExists_UstrEx(FileName, v14) )
  {
    p_UnicodeString = FileName;
LABEL_32:
    v22 = (PUNICODE_STRING *)FullFileNameOut;
    v23 = DynamicString;
LABEL_33:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          p_UnicodeString,
                          v53,
                          v23,
                          v22,
                          FileNameSize,
                          0LL,
                          &InputPathType,
                          RequiredLength);
    if ( FullPathName_Ustr < 0 )
      goto LABEL_27;
    goto LABEL_34;
  }
  if ( DefaultExtension && DefaultExtension->Length )
  {
    if ( (v10 & 4) == 0 )
    {
      if ( FileName->Length )
      {
        v47 = FileName->Buffer;
        v48 = &v47[(unsigned __int64)FileName->Length >> 1];
        while ( v48 > v47 )
        {
          if ( *--v48 == 92 || *v48 == 47 )
            break;
          if ( *v48 == 46 )
            goto LABEL_26;
        }
      }
    }
    v16 = DefaultExtension->Length + FileName->Length + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > UnicodeString.MaximumLength )
      {
        UnicodeString.MaximumLength = DefaultExtension->Length + FileName->Length + 2;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v16);
        UnicodeString.Buffer = StringRoutine;
        if ( !StringRoutine )
          return -1073741801;
      }
      else
      {
        StringRoutine = UnicodeString.Buffer;
      }
      memmove(StringRoutine, FileName->Buffer, FileName->Length);
      memmove(
        &UnicodeString.Buffer[(unsigned __int64)FileName->Length >> 1],
        DefaultExtension->Buffer,
        DefaultExtension->Length);
      LOBYTE(v18) = 1;
      UnicodeString.Buffer[(FileName->Length + (unsigned __int64)DefaultExtension->Length) >> 1] = 0;
      UnicodeString.Length = FileName->Length + DefaultExtension->Length;
      if ( !(unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, v18) )
        goto LABEL_26;
      p_UnicodeString = &UnicodeString;
      goto LABEL_32;
    }
LABEL_107:
    FullPathName_Ustr = -1073741562;
    goto LABEL_27;
  }
LABEL_26:
  FullPathName_Ustr = -1073741809;
LABEL_27:
  if ( UnicodeString.Buffer && (_BYTE *)UnicodeString.Buffer != v60 )
    RtlFreeUnicodeString(&UnicodeString);
  return FullPathName_Ustr;
}
