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

__int64 __fastcall RtlGetImageFileMachines(__int64 a1, _DWORD *a2)
{
  int Section; // edi
  __int16 v5; // ax
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 v8; // dx
  bool v9; // zf
  unsigned __int16 v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // [rsp+58h] [rbp-130h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-110h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-108h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-100h] BYREF
  _QWORD v23[3]; // [rsp+98h] [rbp-F0h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+100h] [rbp-88h]
  unsigned __int64 v27; // [rsp+108h] [rbp-80h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-70h] BYREF
  _WORD v29[44]; // [rsp+130h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+198h] [rbp+10h] BYREF
  int v31; // [rsp+1A0h] [rbp+18h]
  int v32; // [rsp+1A8h] [rbp+20h]

  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  Handle[0] = 0LL;
  memset(v29, 0, 0x40uLL);
  v23[0] = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  *a2 = 0;
  v24 = 0LL;
  Section = RtlDosPathNameToNtPathName_U_WithStatus(a1, (int)&UnicodeString, 0LL, 0LL);
  if ( Section < 0 )
    goto LABEL_34;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = &UnicodeString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( Section < 0 )
    goto LABEL_34;
  Section = NtCreateSection(Handle, 5LL, 0LL, 0LL, 2, 285212672, FileHandle);
  if ( Section < 0 )
    goto LABEL_34;
  Section = NtQuerySection(Handle[0], 1LL, v29);
  if ( Section < 0 )
    goto LABEL_34;
  v5 = RtlpSetMachineBit(a2, v29[24]);
  if ( (v29[25] & 0x200) != 0 && (v29[25] & 0x100) != 0 && v5 == 332 )
  {
    RtlpSetMachineBit(a2, 452LL);
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
  *(_QWORD *)&v24 = v24 & 0xFFFFFFFFFFFFFF00uLL | 6;
  DWORD2(v24) = v8;
  v31 = ZwMapViewOfSectionEx(Handle[0], -1LL, v23, 0LL, &v20, 0, 2, &v24, 1);
  if ( v31 >= 0 )
  {
    RtlpSetMachineBit(a2, v10);
    NtUnmapViewOfSectionEx(-1LL, v23[0], 0LL);
  }
LABEL_16:
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    Section = ZwMapViewOfSectionEx(Handle[0], -1LL, &v18, 0LL, &v20, 0, 2, 0LL, 0);
    if ( Section >= 0 )
    {
      Section = 0;
      v11 = RtlImageNtHeader(v18);
      v26 = v11;
      v12 = v11 + 264;
      if ( v20 + v18 <= v18 || v12 <= v11 || v11 < v18 || v12 > v20 + v18 )
        goto LABEL_33;
      if ( *(_WORD *)(v11 + 24) == 267 )
        goto LABEL_34;
      v13 = *(unsigned int *)(v11 + 80);
      v32 = v13;
      v14 = (unsigned int)v13;
      if ( v13 > v20 )
        goto LABEL_33;
      v15 = RtlImageDirectoryEntryToData(v18, 1, 0xAu, &v30);
      v27 = v15;
      if ( !v15 )
        goto LABEL_34;
      v16 = v15 + v30;
      if ( v14 + v18 > v18 && v16 > v15 && v15 >= v18 && v16 <= v14 + v18 && *(_DWORD *)v15 == v30 )
      {
        if ( v30 >= 0xD0 && *(_QWORD *)(v15 + 200) )
        {
          *a2 &= ~2u;
          *a2 |= 0x10u;
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
  if ( v18 )
    NtUnmapViewOfSectionEx(-1LL, v18, 0LL);
  if ( Handle[0] )
    NtClose(Handle[0]);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)Section;
}
