/*
 * XREFs of RtlGetImageFileMachines @ 0x180083670
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A99C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x18002ECE0 (RtlImageNtHeader.c)
 *     RtlpSetMachineBit @ 0x180083AEC (RtlpSetMachineBit.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A17F0 (NtCreateSection.c)
 *     NtQuerySection @ 0x1800A18D0 (NtQuerySection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A3220 (ZwMapViewOfSectionEx.c)
 *     NtUnmapViewOfSectionEx @ 0x1800A4A20 (NtUnmapViewOfSectionEx.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetImageFileMachines(__int64 a1, _DWORD *a2)
{
  int Section; // edi
  __int16 v5; // ax
  unsigned __int16 v6; // dx
  bool v7; // zf
  unsigned __int16 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v19; // [rsp+58h] [rbp-130h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-110h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-108h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-100h] BYREF
  __int64 v24; // [rsp+98h] [rbp-F0h] BYREF
  unsigned __int64 v25[3]; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+108h] [rbp-80h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v30[48]; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int16 v31; // [rsp+160h] [rbp-28h]
  char v32; // [rsp+163h] [rbp-25h]
  unsigned int v33; // [rsp+198h] [rbp+10h] BYREF
  int v34; // [rsp+1A0h] [rbp+18h]
  int v35; // [rsp+1A8h] [rbp+20h]

  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  Handle[0] = 0LL;
  memset_thunk_772440563353939046(v30, 0, 0x40uLL);
  v26 = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  *a2 = 0;
  Section = RtlpDosPathNameToRelativeNtPathName_U(0, a1, (int)&UnicodeString, 0LL, 0LL);
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
  Section = NtCreateSection(Handle, 5LL, 0LL, 0LL, 2, 285212672, FileHandle);
  if ( Section < 0 )
    goto LABEL_37;
  Section = NtQuerySection(Handle[0], 1LL, v30, 64LL, 0LL);
  if ( Section < 0 )
    goto LABEL_37;
  v5 = RtlpSetMachineBit(a2, v31);
  if ( (v32 & 2) != 0 && (v32 & 1) != 0 && v5 == 332 )
  {
    RtlpSetMachineBit(a2, 452LL);
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
  *(_QWORD *)&v26 = v26 & 0xFFFFFFFFFFFFFF00uLL | 6;
  DWORD2(v26) = v6;
  v34 = ZwMapViewOfSectionEx(Handle[0], -1LL, &v24, 0LL, &v21, 0, 2, &v26, 1);
  if ( v34 >= 0 )
  {
    RtlpSetMachineBit(a2, v8);
    NtUnmapViewOfSectionEx(-1LL, v24, 0LL);
  }
LABEL_11:
  if ( (*(_BYTE *)a2 & 2) == 0 )
    goto LABEL_37;
  Section = ZwMapViewOfSectionEx(Handle[0], -1LL, &v19, 0LL, &v21, 0, 2, 0LL, 0);
  if ( Section < 0 )
    goto LABEL_37;
  Section = 0;
  v9 = RtlImageNtHeader(v19);
  v28 = v9;
  v10 = v9 + 264;
  if ( v21 + v19 <= v19 || v10 <= v9 || v9 < v19 || v10 > v21 + v19 )
    goto LABEL_30;
  if ( *(_WORD *)(v9 + 24) == 267 )
    goto LABEL_37;
  v11 = *(unsigned int *)(v9 + 80);
  v35 = v11;
  v12 = (unsigned int)v11;
  if ( v11 > v21 )
    goto LABEL_30;
  v13 = RtlpImageDirectoryEntryToDataEx(v19, 1, 0xAu, &v33, (__int64 *)v25);
  v14 = v25[0];
  if ( v13 < 0 )
    v14 = 0LL;
  v25[0] = v14;
  if ( v14 )
  {
    v15 = v14 + v33;
    if ( v12 + v19 > v19 && v15 > v14 && v14 >= v19 && v15 <= v12 + v19 && *(_DWORD *)v14 == v33 )
    {
      if ( v33 >= 0xD0 && *(_QWORD *)(v14 + 200) )
      {
        *a2 &= ~2u;
        *a2 |= 0x10u;
      }
      goto LABEL_37;
    }
LABEL_30:
    Section = -1073741701;
  }
LABEL_37:
  if ( v19 )
    NtUnmapViewOfSectionEx(-1LL, v19, 0LL);
  if ( Handle[0] )
    NtClose(Handle[0]);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)Section;
}
