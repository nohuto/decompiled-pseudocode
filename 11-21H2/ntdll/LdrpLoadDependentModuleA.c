/*
 * XREFs of LdrpLoadDependentModuleA @ 0x18003D360
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 *     LdrpResolveForwarder @ 0x18003F350 (LdrpResolveForwarder.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003D5E0 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     RtlUTF8ToUnicodeN @ 0x18005BF00 (RtlUTF8ToUnicodeN.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     NtdllpReallocateStringRoutine @ 0x1800E0AA4 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModuleA(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  ULONG UTF8StringByteCount; // eax
  char *Buffer; // r9
  ULONG v10; // ecx
  ULONG v11; // edx
  __int64 v12; // rax
  unsigned __int16 Length; // cx
  unsigned int v14; // ebx
  unsigned int v15; // r8d
  int v16; // ebx
  wchar_t *v17; // rdi
  wchar_t *StringRoutine; // rax
  signed __int32 v20[6]; // [rsp+8h] [rbp-100h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+38h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h]
  _UNICODE_STRING OriginalName; // [rsp+58h] [rbp-B0h] BYREF
  _WORD v25[128]; // [rsp+68h] [rbp-A0h] BYREF

  v23 = a6;
  OriginalName.Buffer = v25;
  UTF8StringByteCount = SourceString->Length;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v25[0] = 0;
  if ( !(_WORD)UTF8StringByteCount )
  {
LABEL_28:
    v16 = LdrpLoadDependentModuleInternal(&OriginalName, (__int64)a5, v23);
    if ( v16 >= 0 )
      goto LABEL_30;
    goto LABEL_29;
  }
  Buffer = SourceString->Buffer;
  v10 = UTF8StringByteCount;
  _InterlockedOr(v20, 0);
  if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
    v11 = UnicodeStringActualByteCount;
  }
  else
  {
    _InterlockedOr(v20, 0);
    v11 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( 1 )
      {
        v12 = (unsigned __int8)*Buffer;
        --v10;
        ++Buffer;
        if ( *(_WORD *)(qword_1801776E0 + 2 * v12) )
        {
          if ( !v10 )
          {
            v11 += 2;
            goto LABEL_13;
          }
          --v10;
          ++Buffer;
        }
        v11 += 2;
        if ( !v10 )
          goto LABEL_13;
      }
    }
    v11 = 2 * UTF8StringByteCount;
  }
LABEL_13:
  Length = OriginalName.Length;
  LOWORD(v14) = OriginalName.MaximumLength;
  v15 = v11 + OriginalName.Length + 2;
  if ( v15 <= OriginalName.MaximumLength )
  {
    v17 = OriginalName.Buffer;
    goto LABEL_27;
  }
  if ( v15 <= 0xFFFE )
  {
    v14 = (v15 + 63) & 0xFFFFFFC0;
    if ( v14 > 0xFFFE )
      v14 = 65534;
    if ( OriginalName.Buffer == v25 )
    {
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v14);
      v17 = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_20;
      Length = OriginalName.Length;
      if ( !OriginalName.Length )
        goto LABEL_25;
      memmove(StringRoutine, OriginalName.Buffer, OriginalName.Length);
    }
    else
    {
      v17 = (wchar_t *)NtdllpReallocateStringRoutine(v14);
      if ( !v17 )
      {
LABEL_20:
        v16 = -1073741801;
        goto LABEL_29;
      }
    }
    Length = OriginalName.Length;
LABEL_25:
    OriginalName.Buffer = v17;
    OriginalName.MaximumLength = v14;
LABEL_27:
    DestinationString.MaximumLength = v14 - Length;
    DestinationString.Buffer = (wchar_t *)((char *)v17 + Length);
    DestinationString.Length = 0;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    OriginalName.Length += DestinationString.Length;
    goto LABEL_28;
  }
  v16 = -1073741562;
LABEL_29:
  *a5 = 0LL;
  **(_DWORD **)(a2 + 40) = v16;
LABEL_30:
  if ( v25 != OriginalName.Buffer )
    NtdllpFreeStringRoutine(OriginalName.Buffer);
  return (unsigned int)v16;
}
