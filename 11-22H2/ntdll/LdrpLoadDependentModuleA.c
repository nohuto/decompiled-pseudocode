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
        int a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v7; // rcx
  int Length; // eax
  char *Buffer; // r9
  int v12; // edx
  int v13; // ecx
  unsigned __int16 v14; // dx
  unsigned int v15; // edi
  unsigned int v16; // r8d
  char *v17; // r14
  int DependentModuleInternal; // ebx
  __int64 v20; // rax
  char *StringRoutine; // rax
  signed __int32 v22[6]; // [rsp+8h] [rbp-100h] BYREF
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  void *Src; // [rsp+70h] [rbp-98h]
  _WORD v29[128]; // [rsp+78h] [rbp-90h] BYREF

  v7 = a6;
  Src = v29;
  Length = SourceString->Length;
  v25 = a3;
  v26 = a6;
  LODWORD(v27) = 0x1000000;
  v29[0] = 0;
  if ( !(_WORD)Length )
  {
LABEL_9:
    DependentModuleInternal = LdrpLoadDependentModuleInternal((unsigned int)&v27, a2, a3, a4, (__int64)a5, v7);
    if ( DependentModuleInternal >= 0 )
      goto LABEL_10;
    goto LABEL_27;
  }
  Buffer = SourceString->Buffer;
  v12 = Length;
  _InterlockedOr(v22, 0);
  if ( GlobalRtlNlsState != -535 && word_180181750 != -535 )
  {
    _InterlockedOr(v22, 0);
    v13 = 0;
    if ( !word_18018171C )
    {
      v13 = 2 * Length;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v20 = (unsigned __int8)*Buffer;
      --v12;
      ++Buffer;
      if ( *(_WORD *)(qword_1801817A0 + 2 * v20) )
      {
        if ( !v12 )
        {
          v13 += 2;
          goto LABEL_6;
        }
        --v12;
        ++Buffer;
      }
      v13 += 2;
      if ( !v12 )
        goto LABEL_6;
    }
  }
  RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v23, (_DWORD)Buffer, Length);
  v13 = v23;
LABEL_6:
  v14 = v27;
  LOWORD(v15) = WORD1(v27);
  v16 = v13 + (unsigned __int16)v27 + 2;
  if ( v16 <= WORD1(v27) )
  {
    v17 = (char *)Src;
LABEL_8:
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v15 - v14;
    DestinationString.Buffer = (wchar_t *)&v17[v14];
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v27) = DestinationString.Length + v27;
    LODWORD(a3) = v25;
    v7 = v26;
    goto LABEL_9;
  }
  if ( v16 <= 0xFFFE )
  {
    v15 = (v16 + 63) & 0xFFFFFFC0;
    if ( v15 > 0xFFFE )
      v15 = 65534;
    if ( Src == v29 )
    {
      StringRoutine = (char *)NtdllpAllocateStringRoutine(v15, Src);
      v17 = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_26;
      v14 = v27;
      if ( !(_WORD)v27 )
      {
LABEL_32:
        Src = v17;
        WORD1(v27) = v15;
        goto LABEL_8;
      }
      memmove(StringRoutine, Src, (unsigned __int16)v27);
    }
    else
    {
      v17 = (char *)NtdllpReallocateStringRoutine(v15);
      if ( !v17 )
      {
LABEL_26:
        DependentModuleInternal = -1073741801;
        goto LABEL_27;
      }
    }
    v14 = v27;
    goto LABEL_32;
  }
  DependentModuleInternal = -1073741562;
LABEL_27:
  *a5 = 0LL;
  **(_DWORD **)(a2 + 40) = DependentModuleInternal;
LABEL_10:
  if ( v29 != Src )
    NtdllpFreeStringRoutine(Src);
  return (unsigned int)DependentModuleInternal;
}
