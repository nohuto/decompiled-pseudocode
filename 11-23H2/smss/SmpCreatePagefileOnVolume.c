/*
 * XREFs of SmpCreatePagefileOnVolume @ 0x14000C86C
 * Callers:
 *     SmpCreatePagefileFromDescriptor @ 0x14000A18C (SmpCreatePagefileFromDescriptor.c)
 * Callees:
 *     SmpTrimPagingFileExtents @ 0x14000A7D0 (SmpTrimPagingFileExtents.c)
 *     SmpCheckHybridPriority @ 0x14000AD48 (SmpCheckHybridPriority.c)
 *     SmpCreatePagingFile @ 0x14000AE70 (SmpCreatePagingFile.c)
 *     SmpGetPagingFileSize @ 0x14000AF88 (SmpGetPagingFileSize.c)
 *     SmpDeletePagingFile @ 0x140016FE8 (SmpDeletePagingFile.c)
 */

__int64 __fastcall SmpCreatePagefileOnVolume(__int64 a1, __int64 a2, int a3)
{
  bool v3; // r12
  UNICODE_STRING *v6; // r15
  NTSTATUS v7; // ecx
  int PagingFileSize; // eax
  __int64 v9; // r14
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r9
  bool v15; // zf
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  int v18; // r13d
  unsigned __int64 v19; // rax
  int v20; // eax
  int PagingFile; // ecx
  int v22; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r13
  bool v29; // cc
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+40h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+48h] BYREF
  int v40; // [rsp+C0h] [rbp+50h]

  v40 = a3;
  v38 = 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1 + 92) & 4) != 0 )
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) = *(_WORD *)(a2 + 28);
  ObjectAttributes.RootDirectory = 0LL;
  v6 = (UNICODE_STRING *)(a1 + 16);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 16);
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u);
  if ( v7 < 0 )
  {
    v9 = v38;
    v24 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v24 + 2] = 2198;
    SmpGlobalLog[2 * v24 + 3] = v7;
    *(_QWORD *)&SmpGlobalLog[2 * v24 + 4] = v6;
  }
  else
  {
    PagingFileSize = SmpGetPagingFileSize(FileHandle, (__int64)v6, &v38);
    v9 = v38;
    if ( PagingFileSize >= 0 )
      v3 = v38 != 0;
    SmpTrimPagingFileExtents(FileHandle, (__int64)v6);
    NtClose(FileHandle);
  }
  v10 = *(_QWORD *)(a2 + 32) + v9;
  v11 = v10;
  v12 = v10;
  v13 = v10;
  v14 = v10;
  if ( v10 > *(_QWORD *)(a2 + 40) )
  {
    v10 = *(_QWORD *)(a2 + 40);
    v11 = v10;
    v12 = v10;
    v13 = v10;
    v14 = v10;
  }
  v15 = (*(_BYTE *)(a1 + 92) & 2) == 0;
  v16 = *(_QWORD *)(a1 + 56);
  v17 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 72) = v16;
  *(_QWORD *)(a1 + 80) = v17;
  if ( v15 )
  {
    v18 = v40;
    if ( v16 > v11 )
    {
      if ( !v40 )
        return 3221225599LL;
      *(_QWORD *)(a1 + 72) = v10;
    }
    v19 = v17;
    if ( v17 > *(_QWORD *)(a2 + 40) )
      v19 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 80) = v19;
    goto LABEL_14;
  }
  v25 = *(_QWORD *)(a2 + 40) >> 3;
  v26 = v16;
  v27 = v12 >> 2;
  if ( SmpMemorySize >= v11 >> 2 )
    v27 = SmpMemorySize;
  v28 = v13 >> 1;
  v29 = v27 <= v11 >> 1;
  v30 = *(_QWORD *)(a2 + 40) >> 3;
  if ( v29 )
    v28 = v27;
  if ( v28 <= v25 )
    v30 = v28;
  v18 = v40;
  v31 = v30;
  if ( v16 <= v30 )
    goto LABEL_47;
  if ( !v40 )
    return 3221225599LL;
  if ( (*(_BYTE *)(a1 + 92) & 8) != 0 )
  {
    v32 = v14 >> 5;
    if ( v32 > 0x40000000 )
      v32 = 0x40000000LL;
    if ( v16 <= v10 - v32 || (v31 = v30, v16 == *(_QWORD *)(a1 + 48)) )
    {
      v31 = v10 - v32;
      if ( v25 < v10 - v32 )
        v25 = v10 - v32;
    }
  }
  v26 = v16;
  if ( v16 <= v31 )
  {
LABEL_47:
    if ( v26 <= v31 )
      goto LABEL_49;
    goto LABEL_48;
  }
  v26 = *(_QWORD *)(a1 + 48);
  if ( v16 > v26 )
  {
    *(_QWORD *)(a1 + 72) = v26;
    goto LABEL_47;
  }
LABEL_48:
  *(_QWORD *)(a1 + 72) = v31;
LABEL_49:
  if ( *(_QWORD *)(a1 + 64) > v25 )
    *(_QWORD *)(a1 + 80) = v25;
LABEL_14:
  *(_DWORD *)(a1 + 88) = 0;
  v20 = *(_DWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
    v20 = 0x40000000;
  *(_DWORD *)(a1 + 88) = v20;
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0
    && SmpCheckHybridPriority(*(_DWORD *)(a2 + 20), &v38, 0LL) >= 0
    && (v38 & 0xFFFFFFF0) == 0 )
  {
    *(_DWORD *)(a1 + 88) |= ((unsigned int)v38 | 0x10) << 26;
  }
  if ( (*(_BYTE *)(a2 + 16) & 0x40) != 0 )
    *(_DWORD *)(a1 + 88) |= 0x1000000u;
  while ( 1 )
  {
    PagingFile = SmpCreatePagingFile(
                   v6,
                   *(union _LARGE_INTEGER *)(a1 + 72),
                   *(union _LARGE_INTEGER *)(a1 + 80),
                   *(_DWORD *)(a1 + 88));
    if ( PagingFile >= 0 )
      break;
    if ( !v18 )
      goto LABEL_26;
    v33 = *(_QWORD *)(a1 + 72);
    if ( v33 <= 0x1000000 )
      goto LABEL_26;
    v34 = 0x1000000LL;
    if ( v33 >> 4 > 0x1000000 )
      v34 = v33 >> 4;
    v35 = v33 - v34;
    *(_QWORD *)(a1 + 72) = v35;
    if ( v35 < 0x1000000 )
      *(_QWORD *)(a1 + 72) = 0x1000000LL;
  }
  *(_DWORD *)(a1 + 92) |= 1u;
  v22 = *(_DWORD *)(a2 + 16) | 0x10;
  *(_DWORD *)(a2 + 16) = v22;
  if ( (*(_DWORD *)(a1 + 88) & 0x40000000) != 0 )
    *(_DWORD *)(a2 + 16) = v22 | 0x20;
  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    ++SmpNumberOfManagedPagefilesCreated;
  ++SmpNumberOfPagefilesCreated;
LABEL_26:
  if ( (*(_BYTE *)(a1 + 92) & 1) != 0 )
    return (unsigned int)PagingFile;
  if ( v3 && (int)SmpDeletePagingFile(v6) >= 0 )
    *(_QWORD *)(a2 + 32) = v10;
  return 3221225599LL;
}
