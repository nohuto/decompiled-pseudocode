/*
 * XREFs of RtlGetImageFileMachines @ 0x180083000
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001AB7C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     RtlpSetMachineBit @ 0x18008347C (RtlpSetMachineBit.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenFile @ 0x18009F450 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     NtQuerySection @ 0x18009F810 (NtQuerySection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A1160 (ZwMapViewOfSectionEx.c)
 *     NtUnmapViewOfSectionEx @ 0x1800A2960 (NtUnmapViewOfSectionEx.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlGetImageFileMachines(PCWSTR FileName, PUSHORT FileMachines)
{
  int Section; // edi
  __int16 v5; // ax
  unsigned __int16 v6; // dx
  bool v7; // zf
  unsigned __int16 v8; // r14
  PIMAGE_NT_HEADERS v9; // rax
  PIMAGE_NT_HEADERS v10; // rcx
  ULONG_PTR SizeOfImage; // rax
  __int64 v12; // r14
  NTSTATUS v13; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  PVOID BaseOfImage; // [rsp+58h] [rbp-130h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-120h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-110h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-108h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-100h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v25[3]; // [rsp+A0h] [rbp-E8h] BYREF
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+B8h] [rbp-D0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-B0h] BYREF
  PIMAGE_NT_HEADERS v28; // [rsp+108h] [rbp-80h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-70h] BYREF
  _BYTE SectionInformation[48]; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int16 v31; // [rsp+160h] [rbp-28h]
  char v32; // [rsp+163h] [rbp-25h]
  unsigned int v33; // [rsp+198h] [rbp+10h] BYREF
  NTSTATUS v34; // [rsp+1A0h] [rbp+18h]
  int v35; // [rsp+1A8h] [rbp+20h]

  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  memset_thunk_772440563353939046(SectionInformation, 0, 0x40uLL);
  ExtendedParameters = 0LL;
  BaseAddress = 0LL;
  BaseOfImage = 0LL;
  ViewSize = 0LL;
  *(_DWORD *)FileMachines = 0;
  Section = RtlpDosPathNameToRelativeNtPathName_U(0, FileName, (int)&UnicodeString, 0LL, 0LL);
  if ( Section < 0 )
    goto LABEL_37;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = &UnicodeString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( Section < 0 )
    goto LABEL_37;
  Section = NtCreateSection(&SectionHandle, 5u, 0LL, 0LL, 2u, 0x11000000u, FileHandle);
  if ( Section < 0 )
    goto LABEL_37;
  Section = NtQuerySection(SectionHandle, SectionImageInformation, SectionInformation, 0x40uLL, 0LL);
  if ( Section < 0 )
    goto LABEL_37;
  v5 = RtlpSetMachineBit(FileMachines, v31);
  if ( (v32 & 2) != 0 && (v32 & 1) != 0 && v5 == 332 )
  {
    RtlpSetMachineBit(FileMachines, 452LL);
    RtlpSetMachineBit(v16, 34404LL);
    RtlpSetMachineBit(v17, 43620LL);
    goto LABEL_37;
  }
  v6 = -21916;
  v7 = v5 == -31132;
  if ( v5 != -31132 )
  {
    if ( v5 != -21916 )
      goto LABEL_11;
    v7 = 0;
  }
  if ( !v7 )
    v6 = -31132;
  v8 = v6;
  ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)(*(_QWORD *)&ExtendedParameters.0 & 0xFFFFFFFFFFFFFF00uLL | 6);
  ExtendedParameters.ULong = v6;
  v34 = ZwMapViewOfSectionEx(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &ViewSize,
          0,
          2u,
          &ExtendedParameters,
          1u);
  if ( v34 >= 0 )
  {
    RtlpSetMachineBit(FileMachines, v8);
    NtUnmapViewOfSectionEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0);
  }
LABEL_11:
  if ( (*(_BYTE *)FileMachines & 2) == 0 )
    goto LABEL_37;
  Section = ZwMapViewOfSectionEx(
              SectionHandle,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              &BaseOfImage,
              0LL,
              &ViewSize,
              0,
              2u,
              0LL,
              0);
  if ( Section < 0 )
    goto LABEL_37;
  Section = 0;
  v9 = RtlImageNtHeader(BaseOfImage);
  v28 = v9;
  v10 = v9 + 1;
  if ( (char *)BaseOfImage + ViewSize <= BaseOfImage
    || v10 <= v9
    || v9 < BaseOfImage
    || v10 > (PIMAGE_NT_HEADERS)((char *)BaseOfImage + ViewSize) )
  {
    goto LABEL_30;
  }
  if ( v9->OptionalHeader.Magic == 267 )
    goto LABEL_37;
  SizeOfImage = v9->OptionalHeader.SizeOfImage;
  v35 = SizeOfImage;
  v12 = (unsigned int)SizeOfImage;
  if ( SizeOfImage > ViewSize )
    goto LABEL_30;
  v13 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 0xAu, &v33, v25);
  v14 = v25[0];
  if ( v13 < 0 )
    v14 = 0LL;
  v25[0] = v14;
  if ( v14 )
  {
    v15 = v14 + v33;
    if ( (char *)BaseOfImage + v12 > BaseOfImage
      && v15 > v14
      && v14 >= (unsigned __int64)BaseOfImage
      && v15 <= (unsigned __int64)BaseOfImage + v12
      && *(_DWORD *)v14 == v33 )
    {
      if ( v33 >= 0xD0 && *(_QWORD *)(v14 + 200) )
      {
        *(_DWORD *)FileMachines &= ~2u;
        *(_DWORD *)FileMachines |= 0x10u;
      }
      goto LABEL_37;
    }
LABEL_30:
    Section = -1073741701;
  }
LABEL_37:
  if ( BaseOfImage )
    NtUnmapViewOfSectionEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseOfImage, 0);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return Section;
}
