/*
 * XREFs of RtlpProbeAssemblyStorageRootForAssembly @ 0x1800680C0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068A78 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x180050860 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800676C0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenFile @ 0x1800A46D0 (NtOpenFile.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpProbeAssemblyStorageRootForAssembly(
        __int64 a1,
        const void **a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        HANDLE *a7)
{
  unsigned int v10; // edx
  __int64 v11; // r8
  _WORD *v12; // rax
  unsigned __int64 v13; // rcx
  SIZE_T v14; // r15
  WCHAR *v15; // rbx
  _WORD *v16; // r14
  _WORD *v17; // rcx
  unsigned __int16 v18; // r14
  HANDLE ContainingDirectory; // rax
  NTSTATUS v20; // edi
  HANDLE *v21; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  PVOID StringRoutine; // rax
  unsigned __int8 v26; // [rsp+60h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+78h] [rbp-88h]
  _UNICODE_STRING NtFileName; // [rsp+88h] [rbp-78h] BYREF
  HANDLE *v31; // [rsp+98h] [rbp-68h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+A0h] [rbp-60h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR DosFileName[264]; // [rsp+100h] [rbp+0h] BYREF

  BaseAddress = a3;
  v31 = a7;
  v26 = 0;
  FileHandle = 0LL;
  v29 = 0LL;
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
      (const void *)a4,
      (const void *)a5,
      a6,
      a7);
    v20 = -1073741811;
    goto LABEL_27;
  }
  v10 = *(unsigned __int16 *)a2;
  v11 = v10;
  if ( (_WORD)v10 )
  {
    v12 = a2[1];
    v13 = (unsigned __int64)v10 >> 1;
    if ( v12[v13 - 1] != 92 && v12[v13 - 1] != 47 )
    {
      v26 = 1;
      v11 = v10 + 2LL;
    }
  }
  v14 = v11 + *a3 + 4LL;
  if ( v14 > 0xFFFE )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n");
    v20 = -1073741562;
    goto LABEL_27;
  }
  if ( v14 > 0x208 )
  {
    *((_QWORD *)&v29 + 1) = NtdllpAllocateStringRoutine((unsigned __int16)v14);
    v15 = (WCHAR *)*((_QWORD *)&v29 + 1);
    if ( !*((_QWORD *)&v29 + 1) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
        (unsigned __int16)v14);
      v20 = -1073741801;
      goto LABEL_31;
    }
    LOWORD(v10) = *(_WORD *)a2;
  }
  else
  {
    v15 = DosFileName;
    *((_QWORD *)&v29 + 1) = DosFileName;
  }
  memmove(v15, a2[1], (unsigned __int16)v10);
  v16 = (WCHAR *)((char *)v15 + *(unsigned __int16 *)a2);
  if ( v26 )
    *v16++ = 92;
  memmove(v16, *((const void **)BaseAddress + 1), *(unsigned __int16 *)BaseAddress);
  v17 = BaseAddress;
  *(_WORD *)((char *)v16 + *(unsigned __int16 *)BaseAddress) = 0;
  v18 = *(_WORD *)a2 + *v17 + 2 * v26;
  if ( !RtlDosPathNameToRelativeNtPathName_U(v15, &NtFileName, 0LL, &RelativeName) )
  {
    DbgPrintEx(0x33u, 0, "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n", v15);
    v20 = -1073741766;
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
  v20 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlReleaseRelativeName(&RelativeName);
  if ( v20 < 0 )
  {
    v23 = (unsigned int)(v20 + 1073741809);
    if ( (unsigned int)v23 <= 0x2B && (v24 = 0x82000000001LL, _bittest64(&v24, v23)) )
      v20 = -1072365564;
    else
      DbgPrintEx(
        0x33u,
        0,
        "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
        v15,
        v20);
  }
  else
  {
    if ( v14 <= *(unsigned __int16 *)(a4 + 2) )
    {
      memmove(*(void **)(a4 + 8), v15, v18);
LABEL_24:
      v21 = v31;
      v20 = 0;
      *a6 = a4;
      *(_DWORD *)(*(_QWORD *)(a4 + 8) + v18) = 92;
      *(_WORD *)*a6 = v18 + 2;
      *v21 = FileHandle;
      FileHandle = 0LL;
      goto LABEL_25;
    }
    if ( v15 != DosFileName )
    {
      *(_QWORD *)(a5 + 8) = v15;
      v15 = 0LL;
      *((_QWORD *)&v29 + 1) = 0LL;
LABEL_51:
      *(_WORD *)(a5 + 2) = v14;
      a4 = a5;
      goto LABEL_24;
    }
    StringRoutine = NtdllpAllocateStringRoutine(v14);
    *(_QWORD *)(a5 + 8) = StringRoutine;
    if ( StringRoutine )
    {
      memmove(StringRoutine, v15, v18);
      goto LABEL_51;
    }
    v20 = -1073741801;
  }
LABEL_25:
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
LABEL_27:
    v15 = (WCHAR *)*((_QWORD *)&v29 + 1);
  }
LABEL_28:
  if ( v15 && v15 != DosFileName )
    NtdllpFreeStringRoutine(v15);
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v20;
}
