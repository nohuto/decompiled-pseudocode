/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x180025040
 * Callers:
 *     LdrpReportError @ 0x18000C29C (LdrpReportError.c)
 *     RtlIsApiSetImplemented @ 0x18000C490 (RtlIsApiSetImplemented.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018AA0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x1800191E4 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpLoadDependentModuleA @ 0x180024E80 (LdrpLoadDependentModuleA.c)
 *     RtlGetVersion @ 0x18002F7F0 (RtlGetVersion.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x18006B4C0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlIntegerToUnicodeString @ 0x18006F900 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x1800F8F00 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x180055990 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 Length; // rdx
  char *Buffer; // r9
  ULONG v8; // ebx
  unsigned int v9; // ebx
  NTSTATUS result; // eax
  ULONG UTF8StringByteCount; // edx
  char *v12; // r9
  ULONG v13; // r10d
  WCHAR *v14; // r11
  unsigned __int16 CodePage; // cx
  unsigned __int16 **p_MultiByteTable; // rdi
  unsigned __int16 DBCSCodePage; // ax
  unsigned __int16 *MultiByteTable; // rbx
  unsigned __int16 *DBCSOffsets; // r8
  ULONG v20; // r10d
  ULONG v21; // edi
  ULONG i; // eax
  int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rax
  char *v26; // r9
  wchar_t *StringRoutine; // rax
  __int64 v28; // rax
  signed __int32 v29[8]; // [rsp+0h] [rbp-98h] BYREF
  NTSTATUS v30; // [rsp+30h] [rbp-68h]
  ULONG v31; // [rsp+38h] [rbp-60h]
  ULONG v32; // [rsp+40h] [rbp-58h]
  ULONG v33; // [rsp+44h] [rbp-54h]
  WCHAR *v34; // [rsp+48h] [rbp-50h]
  char *v35; // [rsp+50h] [rbp-48h]
  ULONG UnicodeStringActualByteCount; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v37; // [rsp+B0h] [rbp+18h]
  ULONG v38; // [rsp+B8h] [rbp+20h] BYREF

  v37 = AllocateDestinationString;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v29, 0);
  if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
  {
    if ( (_DWORD)Length )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &v38, Buffer, Length);
      v8 = v38;
    }
    else
    {
      v8 = 0;
      v38 = 0;
    }
    goto LABEL_5;
  }
  _InterlockedOr(v29, 0);
  v8 = 0;
  if ( !GlobalRtlNlsState.DBCSCodePage )
  {
    v8 = 2 * Length;
    v38 = 2 * Length;
    goto LABEL_5;
  }
  if ( !(_DWORD)Length )
    goto LABEL_51;
  while ( 1 )
  {
    Length = (unsigned int)(Length - 1);
    v28 = (unsigned __int8)*Buffer++;
    if ( *(_WORD *)(qword_1801817A0 + 2 * v28) )
      break;
LABEL_48:
    v8 += 2;
    if ( !(_DWORD)Length )
      goto LABEL_51;
  }
  if ( (_DWORD)Length )
  {
    Length = (unsigned int)(Length - 1);
    ++Buffer;
    goto LABEL_48;
  }
  v8 += 2;
LABEL_51:
  v38 = v8;
LABEL_5:
  v9 = v8 + 2;
  UnicodeStringActualByteCount = v9;
  if ( v9 > 0xFFFE )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v9, Length);
    DestinationString->Buffer = StringRoutine;
    if ( StringRoutine )
    {
      DestinationString->MaximumLength = v9;
      result = 0;
    }
    else
    {
      DestinationString->MaximumLength = 0;
      result = -1073741801;
      LOWORD(v9) = 0;
    }
  }
  else
  {
    if ( v9 <= DestinationString->MaximumLength && DestinationString->Buffer )
      result = 0;
    else
      result = -2147483643;
    LOWORD(v9) = DestinationString->MaximumLength;
  }
  v30 = result;
  if ( result >= 0 )
  {
    UTF8StringByteCount = SourceString->Length;
    v12 = SourceString->Buffer;
    v13 = (unsigned __int16)v9;
    v14 = DestinationString->Buffer;
    _InterlockedOr(v29, 0);
    if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
    {
      CodePage = Utf8TableInfo.CodePage;
      p_MultiByteTable = &Utf8TableInfo.MultiByteTable;
      DBCSCodePage = Utf8TableInfo.DBCSCodePage;
      MultiByteTable = Utf8TableInfo.MultiByteTable;
      DBCSOffsets = Utf8TableInfo.DBCSOffsets;
    }
    else
    {
      _InterlockedOr(v29, 0);
      CodePage = GlobalRtlNlsState.CodePage;
      p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
      DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
      MultiByteTable = GlobalRtlNlsState.MultiByteTable;
      DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
    }
    v31 = UTF8StringByteCount;
    v35 = v12;
    v34 = v14;
    if ( CodePage == 0xFDE9 )
    {
      if ( !UTF8StringByteCount )
      {
        v21 = 0;
        UnicodeStringActualByteCount = 0;
        goto LABEL_37;
      }
      RtlUTF8ToUnicodeN(v14, v13, &UnicodeStringActualByteCount, v12, UTF8StringByteCount);
    }
    else
    {
      v20 = v13 >> 1;
      v33 = v20;
      if ( !DBCSCodePage )
      {
        if ( v20 >= UTF8StringByteCount )
          v20 = UTF8StringByteCount;
        v21 = 2 * v20;
        UnicodeStringActualByteCount = 2 * v20;
        for ( i = 0; ; ++i )
        {
          v32 = i;
          if ( i >= v20 )
            break;
          v14[i] = MultiByteTable[(unsigned __int8)v12[i]];
        }
LABEL_37:
        v30 = 0;
        DestinationString->Length = v21;
        DestinationString->Buffer[(unsigned __int64)v21 >> 1] = 0;
        return 0;
      }
      v23 = (int)v14;
      while ( v20 && UTF8StringByteCount )
      {
        v33 = --v20;
        v31 = --UTF8StringByteCount;
        v24 = (unsigned __int8)*v12;
        v25 = DBCSOffsets[v24];
        v34 = v14 + 1;
        if ( (_WORD)v25 )
        {
          if ( !UTF8StringByteCount )
          {
            *v14 = 0;
            LODWORD(v14) = (_DWORD)v14 + 2;
            break;
          }
          v26 = v12 + 1;
          v35 = v26;
          *v14 = DBCSOffsets[(unsigned __int8)*v26 + v25];
          v12 = v26 + 1;
          v31 = --UTF8StringByteCount;
        }
        else
        {
          *v14 = (*p_MultiByteTable)[v24];
          ++v12;
        }
        v35 = v12;
        ++v14;
      }
      UnicodeStringActualByteCount = (_DWORD)v14 - v23;
    }
    v21 = UnicodeStringActualByteCount;
    goto LABEL_37;
  }
  return result;
}
