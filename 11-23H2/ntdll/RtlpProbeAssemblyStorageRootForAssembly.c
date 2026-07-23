/*
 * XREFs of RtlpProbeAssemblyStorageRootForAssembly @ 0x180075DB4
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180075864 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180008820 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlReleaseRelativeName @ 0x18002E7B0 (RtlReleaseRelativeName.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpProbeAssemblyStorageRootForAssembly(
        __int64 a1,
        const void **a2,
        unsigned __int16 *a3,
        const void *a4,
        __int64 a5,
        __int64 *a6,
        HANDLE *a7)
{
  __int64 v7; // r14
  __int64 v9; // rdx
  _WORD *v10; // rax
  unsigned __int64 v11; // rcx
  SIZE_T v12; // rsi
  WCHAR *v13; // rbx
  _WORD *v14; // r15
  _WORD *v15; // rcx
  unsigned __int16 v16; // r15
  HANDLE ContainingDirectory; // rax
  NTSTATUS v18; // edi
  HANDLE *v19; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  PVOID StringRoutine; // rax
  unsigned __int8 v24; // [rsp+60h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h]
  __int128 v27; // [rsp+78h] [rbp-88h]
  _UNICODE_STRING NtFileName; // [rsp+88h] [rbp-78h] BYREF
  HANDLE *v29; // [rsp+98h] [rbp-68h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+A0h] [rbp-60h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR DosFileName[264]; // [rsp+100h] [rbp+0h] BYREF

  v7 = (__int64)a4;
  BaseAddress = a3;
  v29 = a7;
  v24 = 0;
  FileHandle = 0LL;
  v27 = 0LL;
  NtFileName = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( !a2 || !a3 || !a4 || !a5 || !a6 || !a7 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters\n"
      "SXS:  Flags:               0x%lx\n"
      "SXS:  Root:                %p\n"
      "SXS:  AssemblyDirectory:   %p\n"
      "SXS:  PreAllocatedString:  %p\n"
      "SXS:  DynamicString:       %p\n"
      "SXS:  StringUsed:          %p\n"
      "SXS:  OpenDirectoryHandle: %p\n",
      "RtlpProbeAssemblyStorageRootForAssembly",
      0,
      a2,
      a3,
      a4,
      (const void *)a5,
      a6,
      a7);
    v18 = -1073741811;
    goto LABEL_27;
  }
  v9 = *(unsigned __int16 *)a2;
  if ( (_WORD)v9 )
  {
    v10 = a2[1];
    v11 = (unsigned __int64)(unsigned int)v9 >> 1;
    if ( v10[v11 - 1] != 92 && v10[v11 - 1] != 47 )
    {
      v24 = 1;
      v9 += 2LL;
    }
  }
  v12 = v9 + *a3 + 4LL;
  if ( v12 > 0xFFFE )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n");
    v18 = -1073741562;
    goto LABEL_27;
  }
  if ( v12 > 0x208 )
  {
    *((_QWORD *)&v27 + 1) = NtdllpAllocateStringRoutine((unsigned __int16)v12);
    v13 = (WCHAR *)*((_QWORD *)&v27 + 1);
    if ( !*((_QWORD *)&v27 + 1) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
        (unsigned __int16)v12);
      v18 = -1073741801;
      goto LABEL_31;
    }
  }
  else
  {
    v13 = DosFileName;
    *((_QWORD *)&v27 + 1) = DosFileName;
  }
  memmove(v13, a2[1], *(unsigned __int16 *)a2);
  v14 = (WCHAR *)((char *)v13 + *(unsigned __int16 *)a2);
  if ( v24 )
    *v14++ = 92;
  memmove(v14, *((const void **)BaseAddress + 1), *(unsigned __int16 *)BaseAddress);
  v15 = BaseAddress;
  *(_WORD *)((char *)v14 + *(unsigned __int16 *)BaseAddress) = 0;
  v16 = *(_WORD *)a2 + *v15 + 2 * v24;
  if ( !RtlDosPathNameToRelativeNtPathName_U(v13, &NtFileName, 0LL, &RelativeName) )
  {
    DbgPrintEx(0x33u, 0, "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n", v13);
    v18 = -1073741766;
    goto LABEL_28;
  }
  BaseAddress = NtFileName.Buffer;
  if ( RelativeName.RelativeName.Length )
  {
    ContainingDirectory = RelativeName.ContainingDirectory;
    NtFileName = RelativeName.RelativeName;
  }
  else
  {
    ContainingDirectory = 0LL;
    RelativeName.ContainingDirectory = 0LL;
  }
  ObjectAttributes.RootDirectory = ContainingDirectory;
  ObjectAttributes.ObjectName = &NtFileName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v18 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlReleaseRelativeName(&RelativeName);
  if ( v18 < 0 )
  {
    v21 = (unsigned int)(v18 + 1073741809);
    if ( (unsigned int)v21 <= 0x2B && (v22 = 0x82000000001LL, _bittest64(&v22, v21)) )
      v18 = -1072365564;
    else
      DbgPrintEx(
        0x33u,
        0,
        "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
        v13,
        v18);
  }
  else
  {
    if ( v12 <= *(unsigned __int16 *)(v7 + 2) )
    {
      memmove(*(void **)(v7 + 8), v13, v16);
LABEL_24:
      v19 = v29;
      v18 = 0;
      *a6 = v7;
      *(_DWORD *)(*(_QWORD *)(v7 + 8) + v16) = 92;
      *(_WORD *)*a6 = v16 + 2;
      *v19 = FileHandle;
      FileHandle = 0LL;
      goto LABEL_25;
    }
    if ( v13 != DosFileName )
    {
      *(_QWORD *)(a5 + 8) = v13;
      v13 = 0LL;
      *((_QWORD *)&v27 + 1) = 0LL;
LABEL_50:
      *(_WORD *)(a5 + 2) = v12;
      v7 = a5;
      goto LABEL_24;
    }
    StringRoutine = NtdllpAllocateStringRoutine(v12);
    *(_QWORD *)(a5 + 8) = StringRoutine;
    if ( StringRoutine )
    {
      memmove(StringRoutine, v13, v16);
      goto LABEL_50;
    }
    v18 = -1073741801;
  }
LABEL_25:
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
LABEL_27:
    v13 = (WCHAR *)*((_QWORD *)&v27 + 1);
  }
LABEL_28:
  if ( v13 && v13 != DosFileName )
    NtdllpFreeStringRoutine(v13);
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v18;
}
