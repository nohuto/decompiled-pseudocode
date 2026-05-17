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
        int a3,
        int a4,
        _QWORD *a5,
        __int64 a6)
{
  int Length; // eax
  char *Buffer; // r9
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  unsigned int v16; // ebx
  unsigned int v17; // r8d
  int DependentModuleInternal; // ebx
  char *v19; // rdi
  char *StringRoutine; // rax
  signed __int32 v22[6]; // [rsp+8h] [rbp-100h] BYREF
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  void *Src; // [rsp+60h] [rbp-A8h]
  _WORD v28[128]; // [rsp+68h] [rbp-A0h] BYREF

  v25 = a6;
  Src = v28;
  Length = SourceString->Length;
  LODWORD(v26) = 0x1000000;
  v28[0] = 0;
  if ( !(_WORD)Length )
  {
LABEL_28:
    DependentModuleInternal = LdrpLoadDependentModuleInternal((unsigned int)&v26, a2, a3, a4, (__int64)a5, v25);
    if ( DependentModuleInternal >= 0 )
      goto LABEL_30;
    goto LABEL_29;
  }
  Buffer = SourceString->Buffer;
  v12 = Length;
  _InterlockedOr(v22, 0);
  if ( GlobalRtlNlsState == -535 || word_180177690 == -535 )
  {
    RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v23, (_DWORD)Buffer, Length);
    v13 = v23;
  }
  else
  {
    _InterlockedOr(v22, 0);
    v13 = 0;
    if ( word_18017765C )
    {
      while ( 1 )
      {
        v14 = (unsigned __int8)*Buffer;
        --v12;
        ++Buffer;
        if ( *(_WORD *)(qword_1801776E0 + 2 * v14) )
        {
          if ( !v12 )
          {
            v13 += 2;
            goto LABEL_13;
          }
          --v12;
          ++Buffer;
        }
        v13 += 2;
        if ( !v12 )
          goto LABEL_13;
      }
    }
    v13 = 2 * Length;
  }
LABEL_13:
  v15 = v26;
  LOWORD(v16) = WORD1(v26);
  v17 = v13 + (unsigned __int16)v26 + 2;
  if ( v17 <= WORD1(v26) )
  {
    v19 = (char *)Src;
    goto LABEL_27;
  }
  if ( v17 <= 0xFFFE )
  {
    v16 = (v17 + 63) & 0xFFFFFFC0;
    if ( v16 > 0xFFFE )
      v16 = 65534;
    if ( Src == v28 )
    {
      StringRoutine = (char *)NtdllpAllocateStringRoutine(v16);
      v19 = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_20;
      v15 = v26;
      if ( !(_WORD)v26 )
        goto LABEL_25;
      memmove(StringRoutine, Src, (unsigned __int16)v26);
    }
    else
    {
      v19 = (char *)NtdllpReallocateStringRoutine(v16);
      if ( !v19 )
      {
LABEL_20:
        DependentModuleInternal = -1073741801;
        goto LABEL_29;
      }
    }
    v15 = v26;
LABEL_25:
    Src = v19;
    WORD1(v26) = v16;
LABEL_27:
    DestinationString.MaximumLength = v16 - v15;
    DestinationString.Buffer = (wchar_t *)&v19[v15];
    DestinationString.Length = 0;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v26) = DestinationString.Length + v26;
    goto LABEL_28;
  }
  DependentModuleInternal = -1073741562;
LABEL_29:
  *a5 = 0LL;
  **(_DWORD **)(a2 + 40) = DependentModuleInternal;
LABEL_30:
  if ( v28 != Src )
    NtdllpFreeStringRoutine((__int64)Src);
  return (unsigned int)DependentModuleInternal;
}
