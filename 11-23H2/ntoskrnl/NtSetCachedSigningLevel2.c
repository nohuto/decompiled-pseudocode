/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x1407FF8A0
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1407FF870 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x1405A7638 (RtlUnicodeStringValidateEx.c)
 *     SepCaptureUnicodeStringArray @ 0x1406D4C80 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetCachedSigningLevel2(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile,
        SE_SET_FILE_CACHE_INFORMATION *CacheInformation)
{
  __int64 v6; // r12
  PHANDLE v7; // rbx
  __int16 v8; // si
  UNICODE_STRING *Pool2; // r15
  char v10; // r13
  char PreviousMode; // r14
  NTSTATUS v12; // ebx
  UNICODE_STRING CatalogDirectoryPath; // xmm0
  __int64 v14; // rbx
  NTSTATUS v15; // eax
  _KPROCESS *Process; // rcx
  char v17; // bl
  char v18; // dl
  size_t v19; // r12
  SE_SET_FILE_CACHE_INFORMATION *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG v23; // edx
  __int64 v24; // rdx
  wchar_t *P; // [rsp+60h] [rbp-68h]
  PCUNICODE_STRING SourceString[2]; // [rsp+68h] [rbp-60h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+88h] [rbp-40h]

  v6 = SourceFileCount;
  v7 = SourceFiles;
  v8 = Flags;
  Pool2 = 0LL;
  v10 = 0;
  SourceString[0] = 0LL;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0x2000) != 0 )
  {
    if ( !qword_140C37A28 )
    {
LABEL_3:
      v12 = -1073741822;
      goto LABEL_76;
    }
    if ( !CacheInformation || !TargetFile )
    {
      v12 = -1073741811;
      goto LABEL_76;
    }
    if ( PreviousMode == 1 )
    {
      if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) != 1 )
      {
LABEL_8:
        v12 = -1073741790;
        goto LABEL_76;
      }
      if ( ((unsigned __int8)CacheInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&CacheInformation->OriginClaimInfo > 0x7FFFFFFF0000LL
        || &CacheInformation->OriginClaimInfo < (SE_FILE_CACHE_CLAIM_INFORMATION *)CacheInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
      CatalogDirectoryPath = CacheInformation->CatalogDirectoryPath;
      *(UNICODE_STRING *)Src = CatalogDirectoryPath;
      v14 = *(_QWORD *)&CatalogDirectoryPath.Length;
      if ( *(_QWORD *)&CatalogDirectoryPath.Length )
      {
        if ( ((__int64)Src[1] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (char *)Src[1] + *(_QWORD *)&CatalogDirectoryPath.Length > (void *)0x7FFFFFFF0000LL
          || (char *)Src[1] + *(_QWORD *)&CatalogDirectoryPath.Length < Src[1] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v29 = *(_QWORD *)&CatalogDirectoryPath.Length;
      if ( !Src[1] || !*(_QWORD *)&CatalogDirectoryPath.Length )
      {
        v12 = -1073741811;
        goto LABEL_76;
      }
      if ( *(_QWORD *)&CatalogDirectoryPath.Length > 0xFFFFuLL )
      {
        v12 = -1073741811;
        goto LABEL_76;
      }
      P = (wchar_t *)ExAllocatePool2(259LL, *(_QWORD *)&CatalogDirectoryPath.Length, 1668499779LL);
      if ( !P )
      {
        v12 = -1073741670;
        goto LABEL_76;
      }
      memmove(P, Src[1], *(size_t *)&CatalogDirectoryPath.Length);
    }
    else
    {
      v14 = *(_QWORD *)&CacheInformation->CatalogDirectoryPath.Length;
      P = CacheInformation->CatalogDirectoryPath.Buffer;
    }
    LOBYTE(Flags) = PreviousMode;
    v15 = ((__int64 (__fastcall *)(_QWORD, HANDLE, __int64, wchar_t *))qword_140C37A28)(
            *(_QWORD *)&Flags,
            TargetFile,
            v14,
            P);
LABEL_28:
    v12 = v15;
    goto LABEL_76;
  }
  if ( !qword_140C37948 )
    goto LABEL_3;
  if ( (InputSigningLevel & 0x30) != 0 )
  {
LABEL_32:
    v12 = -1073741584;
    goto LABEL_76;
  }
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_75;
  if ( (Flags & 6) == 0 && InputSigningLevel )
    goto LABEL_32;
  if ( (Flags & 3) == 3 )
  {
LABEL_37:
    v12 = -1073741585;
    goto LABEL_76;
  }
  if ( PreviousMode == 1 )
  {
    if ( (Flags & 2) != 0 )
      goto LABEL_37;
    v8 = Flags | 1;
    if ( (Flags & 4) == 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 1 )
        goto LABEL_8;
      v10 = (__int64)Process[2].Header.WaitListHead.Flink & 0xF;
      v17 = BYTE1(Process[2].Header.WaitListHead.Flink) & 0xF;
      if ( !qword_140C37980
        || (v18 = (__int64)Process[2].Header.WaitListHead.Flink & 0xF,
            LOBYTE(Process) = BYTE1(Process[2].Header.WaitListHead.Flink) & 0xF,
            !(unsigned int)qword_140C37980(Process, v18)) )
      {
        v10 = v17;
      }
      v7 = SourceFiles;
    }
  }
  else if ( (Flags & 1) != 0 )
  {
    v10 = 15;
  }
  else
  {
    if ( (Flags & 2) == 0 )
      goto LABEL_37;
    v10 = 8;
  }
  v19 = 8 * v6;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, v19, 1668499779LL);
  SourceString[1] = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_76;
  }
  if ( PreviousMode == 1 )
  {
    if ( v19 )
    {
      if ( ((unsigned __int8)v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v7[v19 / 8] > 0x7FFFFFFF0000LL || &v7[v19 / 8] < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v20 = CacheInformation;
    if ( CacheInformation )
    {
      if ( ((unsigned __int8)CacheInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&CacheInformation->OriginClaimInfo > 0x7FFFFFFF0000LL
        || &CacheInformation->OriginClaimInfo < (SE_FILE_CACHE_CLAIM_INFORMATION *)CacheInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v20 = CacheInformation;
  }
  memmove(Pool2, SourceFiles, v19);
  if ( !v20 )
    goto LABEL_70;
  if ( v20->Size < 0x18 )
  {
    v12 = -1073741580;
    goto LABEL_76;
  }
  if ( !v20->CatalogDirectoryPath.Length
    || (LOBYTE(v21) = PreviousMode,
        v12 = SepCaptureUnicodeStringArray((__int64)&v20->CatalogDirectoryPath, 1u, v21, SourceString),
        v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v23), v12 >= 0) )
  {
LABEL_70:
    v24 = SourceFileCount;
    if ( (v8 & 6) == 0 )
    {
LABEL_74:
      LOBYTE(v22) = v10;
      LOBYTE(v21) = InputSigningLevel;
      LOBYTE(v24) = PreviousMode;
      v15 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, ULONG, HANDLE, PCUNICODE_STRING))qword_140C37948)(
              v8 & 0x807,
              v24,
              v21,
              v22,
              Pool2,
              SourceFileCount,
              TargetFile,
              SourceString[0]);
      goto LABEL_28;
    }
    if ( SourceFileCount == 1 )
    {
      if ( TargetFile != *(HANDLE *)&Pool2->Length )
      {
        v12 = -1073741581;
        goto LABEL_76;
      }
      goto LABEL_74;
    }
LABEL_75:
    v12 = -1073741582;
  }
LABEL_76:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x63734943u);
  if ( P && PreviousMode == 1 )
    ExFreePoolWithTag(P, 0x63734943u);
  return v12;
}
