/*
 * XREFs of LdrpLoadDependentModuleA @ 0x180024E80
 * Callers:
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 *     LdrpMapAndSnapDependency @ 0x180024BA8 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180025040 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x180055990 (RtlUTF8ToUnicodeN.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     NtdllpReallocateStringRoutine @ 0x1800DF3BC (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModuleA(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v7; // rcx
  ULONG UTF8StringByteCount; // eax
  char *Buffer; // r9
  ULONG v11; // edx
  ULONG v12; // ecx
  unsigned __int16 Length; // dx
  unsigned int v14; // edi
  unsigned int v15; // r8d
  wchar_t *v16; // r14
  int v17; // ebx
  __int64 v19; // rax
  wchar_t *StringRoutine; // rax
  signed __int32 v21[6]; // [rsp+8h] [rbp-100h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+38h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h]
  __int64 v25; // [rsp+58h] [rbp-B0h]
  _UNICODE_STRING OriginalName; // [rsp+68h] [rbp-A0h] BYREF
  _WORD v27[128]; // [rsp+78h] [rbp-90h] BYREF

  v7 = a6;
  OriginalName.Buffer = v27;
  UTF8StringByteCount = SourceString->Length;
  v24 = a3;
  v25 = a6;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v27[0] = 0;
  if ( !(_WORD)UTF8StringByteCount )
  {
LABEL_9:
    v17 = LdrpLoadDependentModuleInternal(&OriginalName, (__int64)a5, v7);
    if ( v17 >= 0 )
      goto LABEL_10;
    goto LABEL_27;
  }
  Buffer = SourceString->Buffer;
  v11 = UTF8StringByteCount;
  _InterlockedOr(v21, 0);
  if ( GlobalRtlNlsState.CodePage != 0xFDE9 && CodePageTable.CodePage != 0xFDE9 )
  {
    _InterlockedOr(v21, 0);
    v12 = 0;
    if ( !GlobalRtlNlsState.DBCSCodePage )
    {
      v12 = 2 * UTF8StringByteCount;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v19 = (unsigned __int8)*Buffer;
      --v11;
      ++Buffer;
      if ( *(_WORD *)(qword_1801817A0 + 2 * v19) )
      {
        if ( !v11 )
        {
          v12 += 2;
          goto LABEL_6;
        }
        --v11;
        ++Buffer;
      }
      v12 += 2;
      if ( !v11 )
        goto LABEL_6;
    }
  }
  RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
  v12 = UnicodeStringActualByteCount;
LABEL_6:
  Length = OriginalName.Length;
  LOWORD(v14) = OriginalName.MaximumLength;
  v15 = v12 + OriginalName.Length + 2;
  if ( v15 <= OriginalName.MaximumLength )
  {
    v16 = OriginalName.Buffer;
LABEL_8:
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v14 - Length;
    DestinationString.Buffer = (wchar_t *)((char *)v16 + Length);
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    OriginalName.Length += DestinationString.Length;
    v7 = v25;
    goto LABEL_9;
  }
  if ( v15 <= 0xFFFE )
  {
    v14 = (v15 + 63) & 0xFFFFFFC0;
    if ( v14 > 0xFFFE )
      v14 = 65534;
    if ( OriginalName.Buffer == v27 )
    {
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v14, OriginalName.Buffer);
      v16 = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_26;
      Length = OriginalName.Length;
      if ( !OriginalName.Length )
      {
LABEL_32:
        OriginalName.Buffer = v16;
        OriginalName.MaximumLength = v14;
        goto LABEL_8;
      }
      memmove(StringRoutine, OriginalName.Buffer, OriginalName.Length);
    }
    else
    {
      v16 = (wchar_t *)NtdllpReallocateStringRoutine(v14);
      if ( !v16 )
      {
LABEL_26:
        v17 = -1073741801;
        goto LABEL_27;
      }
    }
    Length = OriginalName.Length;
    goto LABEL_32;
  }
  v17 = -1073741562;
LABEL_27:
  *a5 = 0LL;
  **(_DWORD **)(a2 + 40) = v17;
LABEL_10:
  if ( v27 != OriginalName.Buffer )
    NtdllpFreeStringRoutine(OriginalName.Buffer);
  return (unsigned int)v17;
}
