/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x18003D5E0
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18000DDE0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpLoadDependentModuleA @ 0x18003D360 (LdrpLoadDependentModuleA.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlIsApiSetImplemented @ 0x180048760 (RtlIsApiSetImplemented.c)
 *     RtlGetVersion @ 0x18004ED20 (RtlGetVersion.c)
 *     RtlIntegerToUnicodeString @ 0x180074000 (RtlIntegerToUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1800741A0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrpReportError @ 0x18007E00C (LdrpReportError.c)
 *     RtlInt64ToUnicodeString @ 0x1800F8CC0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x18005BF00 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG UTF8StringByteCount; // r9d
  char *Buffer; // r10
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // ebx
  NTSTATUS result; // eax
  wchar_t *StringRoutine; // rax
  ULONG Length; // r9d
  char *v14; // r11
  WCHAR *v15; // r10
  _CPTABLEINFO *v16; // rsi
  unsigned int v17; // edx
  ULONG v18; // ebx
  wchar_t *MultiByteTable; // rsi
  ULONG v20; // r8d
  int v21; // r14d
  wchar_t *DBCSOffsets; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  char *v25; // r11
  signed __int32 v26[8]; // [rsp+0h] [rbp-98h] BYREF
  NTSTATUS v27; // [rsp+30h] [rbp-68h]
  ULONG v28; // [rsp+38h] [rbp-60h]
  ULONG v29; // [rsp+40h] [rbp-58h]
  unsigned int v30; // [rsp+44h] [rbp-54h]
  WCHAR *v31; // [rsp+48h] [rbp-50h]
  char *v32; // [rsp+50h] [rbp-48h]
  ULONG v33; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v34; // [rsp+B0h] [rbp+18h]
  ULONG UnicodeStringActualByteCount; // [rsp+B8h] [rbp+20h] BYREF

  v34 = AllocateDestinationString;
  UTF8StringByteCount = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v26, 0);
  if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
  {
    if ( UTF8StringByteCount )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
      v8 = UnicodeStringActualByteCount;
    }
    else
    {
      v8 = 0;
      UnicodeStringActualByteCount = 0;
    }
  }
  else
  {
    _InterlockedOr(v26, 0);
    v8 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( UTF8StringByteCount )
      {
        --UTF8StringByteCount;
        v9 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801776E0 + 2 * v9) )
        {
          if ( !UTF8StringByteCount )
          {
            v8 += 2;
            break;
          }
          --UTF8StringByteCount;
          ++Buffer;
        }
        v8 += 2;
      }
      UnicodeStringActualByteCount = v8;
    }
    else
    {
      v8 = 2 * UTF8StringByteCount;
      UnicodeStringActualByteCount = 2 * UTF8StringByteCount;
    }
  }
  v10 = v8 + 2;
  v33 = v8 + 2;
  if ( (unsigned int)(v8 + 2) > 0xFFFE )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v10);
    DestinationString->Buffer = StringRoutine;
    if ( StringRoutine )
    {
      DestinationString->MaximumLength = v10;
      result = 0;
    }
    else
    {
      DestinationString->MaximumLength = 0;
      result = -1073741801;
      LOWORD(v10) = 0;
    }
  }
  else
  {
    if ( v10 > DestinationString->MaximumLength || (result = 0, !DestinationString->Buffer) )
      result = -2147483643;
    LOWORD(v10) = DestinationString->MaximumLength;
  }
  v27 = result;
  if ( result >= 0 )
  {
    Length = SourceString->Length;
    v14 = SourceString->Buffer;
    v15 = DestinationString->Buffer;
    _InterlockedOr(v26, 0);
    if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
    {
      v16 = &Utf8TableInfo;
    }
    else
    {
      _InterlockedOr(v26, 0);
      v16 = &GlobalRtlNlsState;
    }
    v28 = Length;
    v32 = v14;
    v31 = v15;
    if ( v16->CodePage == 0xFDE9 )
    {
      if ( !Length )
      {
        v18 = 0;
        v33 = 0;
LABEL_51:
        v27 = 0;
        DestinationString->Length = v18;
        DestinationString->Buffer[(unsigned __int64)v18 >> 1] = 0;
        return 0;
      }
      RtlUTF8ToUnicodeN(v15, (unsigned __int16)v10, &v33, v14, Length);
    }
    else
    {
      v17 = (unsigned __int16)v10 >> 1;
      v30 = v17;
      if ( !v16->DBCSCodePage )
      {
        if ( v17 < Length )
          Length = (unsigned __int16)v10 >> 1;
        v18 = 2 * Length;
        v33 = 2 * Length;
        MultiByteTable = v16->MultiByteTable;
        v20 = 0;
        v29 = 0;
        while ( v20 < Length )
        {
          v15[v20] = MultiByteTable[(unsigned __int8)v14[v20]];
          v29 = ++v20;
        }
        goto LABEL_51;
      }
      v21 = (int)v15;
      DBCSOffsets = v16->DBCSOffsets;
      while ( v17 && Length )
      {
        v30 = --v17;
        v28 = --Length;
        v23 = (unsigned __int8)*v14;
        v24 = DBCSOffsets[v23];
        v31 = v15 + 1;
        if ( (_WORD)v24 )
        {
          if ( !Length )
          {
            *v15 = 0;
            LODWORD(v15) = (_DWORD)v15 + 2;
            break;
          }
          v25 = v14 + 1;
          v32 = v25;
          *v15 = DBCSOffsets[(unsigned __int8)*v25 + v24];
          v14 = v25 + 1;
          v28 = --Length;
        }
        else
        {
          *v15 = v16->MultiByteTable[v23];
          ++v14;
        }
        v32 = v14;
        ++v15;
      }
      v33 = (_DWORD)v15 - v21;
    }
    v18 = v33;
    goto LABEL_51;
  }
  return result;
}
