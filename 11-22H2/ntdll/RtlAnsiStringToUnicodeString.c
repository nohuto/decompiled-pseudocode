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
  int v8; // ebx
  unsigned int v9; // ebx
  NTSTATUS result; // eax
  unsigned int v11; // edx
  char *v12; // r9
  unsigned int v13; // r10d
  wchar_t *v14; // r11
  __int16 v15; // cx
  __int64 *v16; // rdi
  __int16 v17; // ax
  __int64 v18; // rbx
  __int64 v19; // r8
  unsigned int v20; // r10d
  unsigned int v21; // edi
  unsigned int i; // eax
  int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rax
  char *v26; // r9
  wchar_t *StringRoutine; // rax
  __int64 v28; // rax
  signed __int32 v29[8]; // [rsp+0h] [rbp-98h] BYREF
  NTSTATUS v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+38h] [rbp-60h]
  unsigned int v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+44h] [rbp-54h]
  wchar_t *v34; // [rsp+48h] [rbp-50h]
  char *v35; // [rsp+50h] [rbp-48h]
  int v36; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h] BYREF

  v37 = AllocateDestinationString;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v29, 0);
  if ( GlobalRtlNlsState == -535 || word_180181750 == -535 )
  {
    if ( (_DWORD)Length )
    {
      RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v38, (_DWORD)Buffer, Length);
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
  if ( !word_18018171C )
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
  v36 = v9;
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
    v11 = SourceString->Length;
    v12 = SourceString->Buffer;
    v13 = (unsigned __int16)v9;
    v14 = DestinationString->Buffer;
    _InterlockedOr(v29, 0);
    if ( GlobalRtlNlsState == -535 || word_180181750 == -535 )
    {
      v15 = Utf8TableInfo;
      v16 = (__int64 *)&xmmword_1801816C0;
      v17 = WORD6(Utf8TableInfo);
      v18 = xmmword_1801816C0;
      v19 = qword_1801816D8;
    }
    else
    {
      _InterlockedOr(v29, 0);
      v15 = GlobalRtlNlsState;
      v16 = &qword_180181730;
      v17 = word_18018171C;
      v18 = qword_180181730;
      v19 = qword_180181748;
    }
    v31 = v11;
    v35 = v12;
    v34 = v14;
    if ( v15 == -535 )
    {
      if ( !v11 )
      {
        v21 = 0;
        v36 = 0;
        goto LABEL_37;
      }
      RtlUTF8ToUnicodeN((_DWORD)v14, v13, (unsigned int)&v36, (_DWORD)v12, v11);
    }
    else
    {
      v20 = v13 >> 1;
      v33 = v20;
      if ( !v17 )
      {
        if ( v20 >= v11 )
          v20 = v11;
        v21 = 2 * v20;
        v36 = 2 * v20;
        for ( i = 0; ; ++i )
        {
          v32 = i;
          if ( i >= v20 )
            break;
          v14[i] = *(_WORD *)(v18 + 2LL * (unsigned __int8)v12[i]);
        }
LABEL_37:
        v30 = 0;
        DestinationString->Length = v21;
        DestinationString->Buffer[(unsigned __int64)v21 >> 1] = 0;
        return 0;
      }
      v23 = (int)v14;
      while ( v20 && v11 )
      {
        v33 = --v20;
        v31 = --v11;
        v24 = 2LL * (unsigned __int8)*v12;
        v25 = *(unsigned __int16 *)(v24 + v19);
        v34 = v14 + 1;
        if ( (_WORD)v25 )
        {
          if ( !v11 )
          {
            *v14 = 0;
            LODWORD(v14) = (_DWORD)v14 + 2;
            break;
          }
          v26 = v12 + 1;
          v35 = v26;
          *v14 = *(_WORD *)(v19 + 2 * ((unsigned __int8)*v26 + v25));
          v12 = v26 + 1;
          v31 = --v11;
        }
        else
        {
          *v14 = *(_WORD *)(v24 + *v16);
          ++v12;
        }
        v35 = v12;
        ++v14;
      }
      v36 = (_DWORD)v14 - v23;
    }
    v21 = v36;
    goto LABEL_37;
  }
  return result;
}
