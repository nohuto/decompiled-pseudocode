/*
 * XREFs of RtlGetImageFileMachines @ 0x1800A30A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlImageNtHeader @ 0x18004F1A0 (RtlImageNtHeader.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x18007EDC0 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlImageDirectoryEntryToData @ 0x1800864D0 (RtlImageDirectoryEntryToData.c)
 *     RtlpSetMachineBit @ 0x1800A3604 (RtlpSetMachineBit.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenFile @ 0x1800A46D0 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     NtQuerySection @ 0x1800A4A90 (NtQuerySection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A63C0 (ZwMapViewOfSectionEx.c)
 *     NtUnmapViewOfSectionEx @ 0x1800A7B60 (NtUnmapViewOfSectionEx.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

NTSTATUS __cdecl RtlGetImageFileMachines(PCWSTR FileName, PUSHORT FileMachines)
{
  int Section; // edi
  __int16 v5; // ax
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 v8; // dx
  bool v9; // zf
  unsigned __int16 v10; // r14
  PIMAGE_NT_HEADERS v11; // rax
  PIMAGE_NT_HEADERS v12; // rcx
  ULONG_PTR SizeOfImage; // rax
  __int64 v14; // r14
  _QWORD *v15; // rax
  char *v16; // rcx
  PVOID BaseOfImage; // [rsp+58h] [rbp-130h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-120h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-110h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-108h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+88h] [rbp-100h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp-F0h] BYREF
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+B0h] [rbp-D8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-B8h] BYREF
  PIMAGE_NT_HEADERS v26; // [rsp+100h] [rbp-88h]
  _QWORD *v27; // [rsp+108h] [rbp-80h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-70h] BYREF
  _WORD SectionInformation[44]; // [rsp+130h] [rbp-58h] BYREF
  ULONG Size; // [rsp+198h] [rbp+10h] BYREF
  NTSTATUS v31; // [rsp+1A0h] [rbp+18h]
  int v32; // [rsp+1A8h] [rbp+20h]

  NtFileName = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  memset(SectionInformation, 0, 0x40uLL);
  BaseAddress = 0LL;
  BaseOfImage = 0LL;
  ViewSize = 0LL;
  *(_DWORD *)FileMachines = 0;
  ExtendedParameters = 0LL;
  Section = RtlDosPathNameToNtPathName_U_WithStatus(FileName, &NtFileName, 0LL, 0LL);
  if ( Section < 0 )
    goto LABEL_34;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = &NtFileName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( Section < 0 )
    goto LABEL_34;
  Section = NtCreateSection(&SectionHandle, 5u, 0LL, 0LL, 2u, 0x11000000u, FileHandle);
  if ( Section < 0 )
    goto LABEL_34;
  Section = NtQuerySection(SectionHandle, SectionImageInformation, SectionInformation, 0x40uLL, 0LL);
  if ( Section < 0 )
    goto LABEL_34;
  v5 = RtlpSetMachineBit(FileMachines, SectionInformation[24]);
  if ( (SectionInformation[25] & 0x200) != 0 && (SectionInformation[25] & 0x100) != 0 && v5 == 332 )
  {
    RtlpSetMachineBit(FileMachines, 452LL);
    RtlpSetMachineBit(v6, 34404LL);
    RtlpSetMachineBit(v7, 43620LL);
    goto LABEL_34;
  }
  v8 = -21916;
  v9 = v5 == -31132;
  if ( v5 != -31132 )
  {
    if ( v5 != -21916 )
      goto LABEL_16;
    v9 = 0;
  }
  if ( !v9 )
    v8 = -31132;
  v10 = v8;
  ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)(*(_QWORD *)&ExtendedParameters.0 & 0xFFFFFFFFFFFFFF00uLL | 6);
  ExtendedParameters.ULong = v8;
  v31 = ZwMapViewOfSectionEx(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &ViewSize,
          0,
          2u,
          &ExtendedParameters,
          1u);
  if ( v31 >= 0 )
  {
    RtlpSetMachineBit(FileMachines, v10);
    NtUnmapViewOfSectionEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0);
  }
LABEL_16:
  if ( (*(_BYTE *)FileMachines & 2) != 0 )
  {
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
    if ( Section >= 0 )
    {
      Section = 0;
      v11 = RtlImageNtHeader(BaseOfImage);
      v26 = v11;
      v12 = v11 + 1;
      if ( (char *)BaseOfImage + ViewSize <= BaseOfImage
        || v12 <= v11
        || v11 < BaseOfImage
        || v12 > (PIMAGE_NT_HEADERS)((char *)BaseOfImage + ViewSize) )
      {
        goto LABEL_33;
      }
      if ( v11->OptionalHeader.Magic == 267 )
        goto LABEL_34;
      SizeOfImage = v11->OptionalHeader.SizeOfImage;
      v32 = SizeOfImage;
      v14 = (unsigned int)SizeOfImage;
      if ( SizeOfImage > ViewSize )
        goto LABEL_33;
      v15 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
      v27 = v15;
      if ( !v15 )
        goto LABEL_34;
      v16 = (char *)v15 + Size;
      if ( (char *)BaseOfImage + v14 > BaseOfImage
        && v16 > (char *)v15
        && v15 >= BaseOfImage
        && v16 <= (char *)BaseOfImage + v14
        && *(_DWORD *)v15 == Size )
      {
        if ( Size >= 0xD0 && v15[25] )
        {
          *(_DWORD *)FileMachines &= ~2u;
          *(_DWORD *)FileMachines |= 0x10u;
        }
      }
      else
      {
LABEL_33:
        Section = -1073741701;
      }
    }
  }
LABEL_34:
  if ( BaseOfImage )
    NtUnmapViewOfSectionEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseOfImage, 0);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( NtFileName.Buffer )
    RtlFreeUnicodeString(&NtFileName);
  return Section;
}
