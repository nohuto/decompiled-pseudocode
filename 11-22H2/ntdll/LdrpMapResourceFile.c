/*
 * XREFs of LdrpMapResourceFile @ 0x18002EC40
 * Callers:
 *     LdrMapAndVerifyResourceFile @ 0x18002E9C0 (LdrMapAndVerifyResourceFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001AB7C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlReleaseRelativeName @ 0x18002E980 (RtlReleaseRelativeName.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18009F450 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, const WCHAR **a2, char a3, HANDLE *a4, PVOID *a5, ULONG_PTR *a6)
{
  PVOID *v9; // r14
  PIMAGE_NT_HEADERS v10; // rax
  ULONG Win32Protect; // esi
  NTSTATUS v12; // ebx
  PVOID v13; // rdi
  HANDLE ContainingDirectory; // rax
  ULONG_PTR *v15; // rcx
  __int128 v17; // xmm0
  HANDLE SectionHandle; // [rsp+50h] [rbp-69h] BYREF
  PVOID BaseOfImage; // [rsp+58h] [rbp-61h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+60h] [rbp-59h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-51h] BYREF
  PVOID BaseAddress[2]; // [rsp+70h] [rbp-49h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+80h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+110h] [rbp+57h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  BaseOfImage = 0LL;
  ViewSize = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
        if ( !v10 )
        {
LABEL_29:
          v12 = -1073741701;
          goto LABEL_23;
        }
        Win32Protect = v10->OptionalHeader.MajorSubsystemVersion < 6u ? 8 : 2;
        if ( a3 )
        {
          v17 = *(_OWORD *)a2;
          v13 = 0LL;
          RelativeName.ContainingDirectory = 0LL;
          ObjectAttributes.Length = 48;
          *(_OWORD *)BaseAddress = v17;
        }
        else
        {
          v12 = RtlpDosPathNameToRelativeNtPathName_U(2, a2[1], (int)BaseAddress, 0LL, (__int64)&RelativeName);
          if ( v12 < 0 )
          {
LABEL_23:
            if ( FileHandle )
            {
              NtClose(FileHandle);
              FileHandle = 0LL;
            }
            if ( BaseOfImage )
              NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseOfImage);
            return (unsigned int)v12;
          }
          v13 = BaseAddress[1];
          if ( RelativeName.RelativeName.Length )
          {
            ContainingDirectory = RelativeName.ContainingDirectory;
            *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
          }
          else
          {
            ContainingDirectory = 0LL;
            RelativeName.ContainingDirectory = 0LL;
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = ContainingDirectory;
          if ( v13 )
            goto LABEL_10;
        }
        ObjectAttributes.RootDirectory = 0LL;
LABEL_10:
        ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
        if ( v13 )
        {
          RtlReleaseRelativeName(&RelativeName);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
        }
        if ( v12 < 0 )
          goto LABEL_23;
        v12 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, Win32Protect, 0x8000000u, FileHandle);
        if ( v12 < 0 )
          goto LABEL_23;
        SectionOffset.QuadPart = 0LL;
        v12 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseOfImage,
                0LL,
                0LL,
                &SectionOffset,
                &ViewSize,
                ViewShare,
                0,
                Win32Protect);
        if ( SectionHandle )
        {
          NtClose(SectionHandle);
          SectionHandle = 0LL;
        }
        if ( v12 < 0 )
          goto LABEL_23;
        if ( RtlImageNtHeader(BaseOfImage) )
        {
          v15 = a6;
          *v9 = BaseOfImage;
          if ( v15 )
            *v15 = ViewSize;
          if ( a4 )
          {
            *a4 = FileHandle;
          }
          else if ( FileHandle )
          {
            NtClose(FileHandle);
          }
          return (unsigned int)v12;
        }
        goto LABEL_29;
      }
    }
  }
  return 3221225485LL;
}
