/*
 * XREFs of RtlpResolveAssemblyStorageMapEntry @ 0x180075864
 * Callers:
 *     RtlGetAssemblyStorageRoot @ 0x180075180 (RtlGetAssemblyStorageRoot.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180008820 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlReleaseRelativeName @ 0x18002E7B0 (RtlReleaseRelativeName.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180075C94 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075DB4 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083BA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     wcsrchr @ 0x1800953B0 (wcsrchr.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpResolveAssemblyStorageMapEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r14
  NTSTATUS v8; // ebx
  wchar_t *Buffer; // r12
  __int64 v11; // rdx
  char *v12; // r9
  char *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int *v19; // rax
  unsigned __int64 v20; // r12
  int v21; // ecx
  int inserted; // eax
  const wchar_t *v23; // rsi
  wchar_t *v24; // rax
  unsigned __int16 v25; // bx
  void **v26; // rcx
  HANDLE ContainingDirectory; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-D8h]
  char v33; // [rsp+40h] [rbp-C0h]
  int *v34; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t *v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  PVOID StringRoutine; // [rsp+68h] [rbp-98h]
  unsigned int *v39; // [rsp+70h] [rbp-90h]
  unsigned int *v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h]
  unsigned int *v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v44; // [rsp+A0h] [rbp-60h]
  char v45; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v46; // [rsp+B0h] [rbp-50h]
  char v47; // [rsp+B8h] [rbp-48h]
  _WORD v48[4]; // [rsp+C0h] [rbp-40h] BYREF
  char *v49; // [rsp+C8h] [rbp-38h]
  _UNICODE_STRING NtFileName; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-20h]
  int v52; // [rsp+E8h] [rbp-18h] BYREF
  char *v53; // [rsp+F0h] [rbp-10h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+F8h] [rbp-8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v57[544]; // [rsp+160h] [rbp+60h] BYREF
  char v58; // [rsp+380h] [rbp+280h] BYREF

  v5 = a3;
  v51 = a5;
  v33 = 0;
  FileHandle = 0LL;
  v8 = 0;
  v36 = 0LL;
  Buffer = 0LL;
  v52 = 34078720;
  v53 = &v58;
  v37 = 0;
  StringRoutine = 0LL;
  *(_DWORD *)&NtFileName.Length = 0;
  NtFileName.Buffer = 0LL;
  v39 = 0LL;
  if ( !a1 )
  {
    v30 = 0;
    goto LABEL_68;
  }
  if ( !a2 || !(_DWORD)v5 || (unsigned int)v5 > *(_DWORD *)(a1 + 4) )
  {
    v30 = *(_DWORD *)(a1 + 4);
LABEL_68:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters\n"
      "SXS:   Map                : %p\n"
      "SXS:   Data               : %p\n"
      "SXS:   AssemblyRosterIndex: 0x%lx\n"
      "SXS:   Map->AssemblyCount : 0x%lx\n",
      "RtlpResolveAssemblyStorageMapEntry",
      (const void *)a1,
      a2,
      v5,
      v30);
    v8 = -1073741811;
    goto LABEL_26;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) )
    return (unsigned int)v8;
  _mm_lfence();
  v11 = a2[6];
  v12 = (char *)a2 + *(unsigned int *)((char *)&a2[6 * v5 + 4] + *(unsigned int *)((char *)a2 + v11 + 12));
  v13 = (char *)a2 + *(unsigned int *)((char *)a2 + v11 + 16);
  v14 = *((_DWORD *)v12 + 20);
  if ( v14 > 0xFFFE )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: Assembly directory name stored in assembly information too long (%lu bytes) - ACTIVATION_CONTEXT_DATA at %p\n",
      v14,
      a2);
    v8 = -1073741562;
    goto LABEL_26;
  }
  if ( (v12[4] & 0x10) == 0 )
  {
    v34 = 0LL;
    v48[0] = *((_WORD *)v12 + 40);
    v48[1] = v48[0];
    v15 = *((unsigned int *)v12 + 21);
    v40 = a2;
    v49 = &v13[v15];
    LODWORD(v41) = v5;
    v44 = v57;
    v42 = 0LL;
    v43 = 34996224;
    v45 = 0;
    v47 = 0;
    v46 = 0LL;
    RtlpAssemblyStorageMapResolutionDefaultCallback(1LL, &v40, a5);
    if ( v47 )
    {
      v8 = -1073741536;
    }
    else
    {
      if ( !v45 )
      {
        v17 = v46;
        v18 = 0LL;
        v19 = v42;
        v39 = v42;
        v33 = 1;
        if ( v46 )
        {
          while ( 1 )
          {
            LOWORD(v42) = 0;
            v40 = v19;
            v44 = v57;
            v41 = v18;
            v43 = 34996224;
            RtlpAssemblyStorageMapResolutionDefaultCallback(2LL, &v40, v51);
            if ( (_BYTE)v42 )
            {
              v8 = -1073741536;
              goto LABEL_25;
            }
            if ( BYTE1(v42) )
            {
              if ( !(_WORD)v43 )
                goto LABEL_62;
              v17 = v18 + 1;
              v20 = v18 + 1;
            }
            else
            {
              v20 = v18 + 1;
            }
            if ( (_WORD)v43 )
            {
              v21 = (int)FileHandle;
              if ( FileHandle )
              {
                NtClose(FileHandle);
                FileHandle = 0LL;
              }
              v8 = RtlpProbeAssemblyStorageRootForAssembly(
                     v21,
                     (unsigned int)&v43,
                     (unsigned int)v48,
                     (unsigned int)&v52,
                     (__int64)&v37,
                     (__int64)&v34,
                     (__int64)&FileHandle);
              if ( v8 >= 0 )
              {
                Buffer = 0LL;
                goto LABEL_20;
              }
              if ( v8 != -1072365564 )
              {
                OpenOptions[0] = v8;
                DbgPrintEx(
                  0x33u,
                  0,
                  "SXS: Attempt to probe assembly storage root %wZ for assembly directory %wZ failed with status = 0x%08lx\n",
                  &v43,
                  v48,
                  *(_QWORD *)OpenOptions);
                goto LABEL_25;
              }
            }
            v18 = v20;
            if ( v20 >= v17 )
              break;
            v19 = v39;
          }
          Buffer = v36;
        }
LABEL_20:
        if ( v18 == v17 )
        {
LABEL_62:
          DbgPrintEx(
            0x33u,
            0,
            "SXS: Unable to resolve storage root for assembly directory %wZ in %Iu tries\n",
            v48,
            v18);
          v8 = -1072365564;
LABEL_25:
          v40 = v39;
          RtlpAssemblyStorageMapResolutionDefaultCallback(4LL, &v40, v51);
          Buffer = v36;
          goto LABEL_26;
        }
LABEL_21:
        if ( !FileHandle )
        {
          if ( !RtlDosPathNameToRelativeNtPathName_U(*((PCWSTR *)v34 + 1), &NtFileName, 0LL, &RelativeName) )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
              *((const wchar_t **)v34 + 1));
            v8 = -1073741766;
            goto LABEL_24;
          }
          Buffer = NtFileName.Buffer;
          v36 = NtFileName.Buffer;
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
          v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
          RtlReleaseRelativeName(&RelativeName);
          if ( v8 < 0 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
              *((const wchar_t **)v34 + 1),
              v8);
            goto LABEL_24;
          }
        }
        inserted = RtlpInsertAssemblyStorageMapEntry(a1, (unsigned int)v5, v34, &FileHandle);
        v8 = inserted;
        if ( inserted < 0 )
          DbgPrintEx(
            0x33u,
            0,
            "SXS: Storage resolution failed to insert entry to storage map; Status = 0x%08lx\n",
            inserted);
        else
          v8 = 0;
LABEL_24:
        if ( !v33 )
          goto LABEL_26;
        goto LABEL_25;
      }
      v28 = RtlpProbeAssemblyStorageRootForAssembly(
              v16,
              (unsigned int)&v43,
              (unsigned int)v48,
              (unsigned int)&v52,
              (__int64)&v37,
              (__int64)&v34,
              (__int64)&FileHandle);
      v8 = v28;
      if ( v28 >= 0 )
      {
        v29 = RtlpInsertAssemblyStorageMapEntry(a1, (unsigned int)v5, &v43, &FileHandle);
        v8 = v29;
        if ( v29 >= 0 )
          v8 = 0;
        else
          DbgPrintEx(
            0x33u,
            0,
            "SXS: Attempt to insert well known storage root into assembly storage map assembly roster index %lu failed; S"
            "tatus = 0x%08lx\n",
            v5,
            v29);
      }
      else
      {
        ShareAccess[0] = v28;
        DbgPrintEx(
          0x33u,
          0,
          "SXS: Attempt to probe known root of assembly storage (\"%wZ\") failed; Status = 0x%08lx\n",
          &v43,
          *(_QWORD *)ShareAccess);
      }
    }
LABEL_26:
    if ( StringRoutine )
      NtdllpFreeStringRoutine(StringRoutine);
    goto LABEL_28;
  }
  v34 = &v52;
  v23 = (const wchar_t *)&v13[*((unsigned int *)v12 + 6)];
  if ( !v23 )
    return (unsigned int)-1073741595;
  v24 = wcsrchr(v23, 0x5Cu);
  if ( !v24 )
  {
    v8 = -1073741595;
    goto LABEL_26;
  }
  v25 = 2 * (v24 - v23 + 2);
  if ( v25 <= 0x208u )
  {
    v26 = (void **)v34;
LABEL_38:
    memmove(v26[1], v23, v25 - 2LL);
    *(_WORD *)(*((_QWORD *)v34 + 1) + 2 * ((unsigned __int64)v25 >> 1) - 2) = 0;
    *(_WORD *)v34 = v25 - 2;
    goto LABEL_21;
  }
  HIWORD(v37) = 2 * (v24 - v23 + 2);
  StringRoutine = NtdllpAllocateStringRoutine(v25);
  if ( StringRoutine )
  {
    v26 = (void **)&v37;
    v34 = &v37;
    goto LABEL_38;
  }
  v8 = -1073741801;
LABEL_28:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  return (unsigned int)v8;
}
