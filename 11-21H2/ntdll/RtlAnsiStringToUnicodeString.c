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
  int Length; // r9d
  char *Buffer; // r10
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // ebx
  NTSTATUS result; // eax
  wchar_t *StringRoutine; // rax
  unsigned int v13; // r9d
  char *v14; // r11
  wchar_t *v15; // r10
  __int16 *v16; // rsi
  unsigned int v17; // edx
  unsigned int v18; // ebx
  __int64 v19; // rsi
  unsigned int v20; // r8d
  int v21; // r14d
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  char *v25; // r11
  signed __int32 v26[8]; // [rsp+0h] [rbp-98h] BYREF
  NTSTATUS v27; // [rsp+30h] [rbp-68h]
  unsigned int v28; // [rsp+38h] [rbp-60h]
  unsigned int v29; // [rsp+40h] [rbp-58h]
  unsigned int v30; // [rsp+44h] [rbp-54h]
  wchar_t *v31; // [rsp+48h] [rbp-50h]
  char *v32; // [rsp+50h] [rbp-48h]
  int v33; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v34; // [rsp+B0h] [rbp+18h]
  int v35; // [rsp+B8h] [rbp+20h] BYREF

  v34 = AllocateDestinationString;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v26, 0);
  if ( GlobalRtlNlsState == -535 || word_180177690 == -535 )
  {
    if ( Length )
    {
      RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v35, (_DWORD)Buffer, Length);
      v8 = v35;
    }
    else
    {
      v8 = 0;
      v35 = 0;
    }
  }
  else
  {
    _InterlockedOr(v26, 0);
    v8 = 0;
    if ( word_18017765C )
    {
      while ( Length )
      {
        --Length;
        v9 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801776E0 + 2 * v9) )
        {
          if ( !Length )
          {
            v8 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v8 += 2;
      }
      v35 = v8;
    }
    else
    {
      v8 = 2 * Length;
      v35 = 2 * Length;
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
    v13 = SourceString->Length;
    v14 = SourceString->Buffer;
    v15 = DestinationString->Buffer;
    _InterlockedOr(v26, 0);
    if ( GlobalRtlNlsState == -535 || word_180177690 == -535 )
    {
      v16 = (__int16 *)&Utf8TableInfo;
    }
    else
    {
      _InterlockedOr(v26, 0);
      v16 = &GlobalRtlNlsState;
    }
    v28 = v13;
    v32 = v14;
    v31 = v15;
    if ( *v16 == -535 )
    {
      if ( !v13 )
      {
        v18 = 0;
        v33 = 0;
LABEL_51:
        v27 = 0;
        DestinationString->Length = v18;
        DestinationString->Buffer[(unsigned __int64)v18 >> 1] = 0;
        return 0;
      }
      RtlUTF8ToUnicodeN((_DWORD)v15, (unsigned __int16)v10, (unsigned int)&v33, (_DWORD)v14, v13);
    }
    else
    {
      v17 = (unsigned __int16)v10 >> 1;
      v30 = v17;
      if ( !v16[6] )
      {
        if ( v17 < v13 )
          v13 = (unsigned __int16)v10 >> 1;
        v18 = 2 * v13;
        v33 = 2 * v13;
        v19 = *((_QWORD *)v16 + 4);
        v20 = 0;
        v29 = 0;
        while ( v20 < v13 )
        {
          v15[v20] = *(_WORD *)(v19 + 2LL * (unsigned __int8)v14[v20]);
          v29 = ++v20;
        }
        goto LABEL_51;
      }
      v21 = (int)v15;
      v22 = *((_QWORD *)v16 + 7);
      while ( v17 && v13 )
      {
        v30 = --v17;
        v28 = --v13;
        v23 = 2LL * (unsigned __int8)*v14;
        v24 = *(unsigned __int16 *)(v23 + v22);
        v31 = v15 + 1;
        if ( (_WORD)v24 )
        {
          if ( !v13 )
          {
            *v15 = 0;
            LODWORD(v15) = (_DWORD)v15 + 2;
            break;
          }
          v25 = v14 + 1;
          v32 = v25;
          *v15 = *(_WORD *)(v22 + 2 * ((unsigned __int8)*v25 + v24));
          v14 = v25 + 1;
          v28 = --v13;
        }
        else
        {
          *v15 = *(_WORD *)(v23 + *((_QWORD *)v16 + 4));
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
