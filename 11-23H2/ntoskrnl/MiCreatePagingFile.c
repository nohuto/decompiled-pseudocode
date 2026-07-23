/*
 * XREFs of MiCreatePagingFile @ 0x1408333DC
 * Callers:
 *     NtManagePartition @ 0x14075FF60 (NtManagePartition.c)
 *     NtCreatePagingFile @ 0x1408333A0 (NtCreatePagingFile.c)
 * Callees:
 *     RtlLengthSid @ 0x140227B50 (RtlLengthSid.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiReservePageHash @ 0x140395EF8 (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x140395F60 (MiCheckPageFileMapping.c)
 *     MiIncreaseCommitLimits @ 0x140396244 (MiIncreaseCommitLimits.c)
 *     ZwSetInformationFile @ 0x14041B5D0 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x14041E7B0 (ZwSetSecurityObject.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x140639188 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x140639524 (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x14063B26C (MiIssuePageExtendRequest.c)
 *     MiReduceCommitLimits @ 0x140656AAC (MiReduceCommitLimits.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     MiEnablePartitionMappedWrites @ 0x140746D88 (MiEnablePartitionMappedWrites.c)
 *     IopQueryXxxInformation @ 0x14075D47C (IopQueryXxxInformation.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     IoCreateFile @ 0x1407D0950 (IoCreateFile.c)
 *     MiCreatePagefile @ 0x140833D94 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x14083410C (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x140834180 (MiZeroPageFileFirstPage.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140834278 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x140834390 (MiInsertPageFileInList.c)
 *     IoInitializeCrashDump @ 0x14083489C (IoInitializeCrashDump.c)
 *     PiPagePathSetState @ 0x140853F48 (PiPagePathSetState.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     MiDeletePagefile @ 0x140A32AB0 (MiDeletePagefile.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x140A4740C (MiCreateSpecialPurposeMemoryPageFile.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        unsigned __int64 a6)
{
  __int64 QuadPart; // rax
  unsigned __int64 v11; // rbx
  PVOID Pool; // rax
  PVOID v13; // r15
  unsigned __int16 v14; // cx
  int Acl; // r14d
  ULONG v16; // edi
  ULONG v17; // edi
  ACL *v18; // rax
  ACL *v19; // r13
  unsigned int v20; // edi
  struct _FILE_OBJECT *v21; // r12
  unsigned __int64 DeviceType; // rcx
  __int64 v23; // rax
  __int64 Pagefile; // rax
  __int64 v25; // rbx
  int inserted; // esi
  __int64 v28; // r15
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r9
  __int64 v34; // r8
  unsigned int v35; // r11d
  __int64 v36; // rdx
  __int16 v37; // r9
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  __int64 v42; // rbx
  char v43; // al
  bool v44; // zf
  int v45; // eax
  __int64 PageFileSpaceBitmaps; // rax
  int v47; // eax
  HANDLE FileHandle; // [rsp+70h] [rbp-108h] BYREF
  __int64 v49; // [rsp+78h] [rbp-100h]
  LARGE_INTEGER AllocationSize; // [rsp+80h] [rbp-F8h] BYREF
  struct _KTHREAD *v51; // [rsp+88h] [rbp-F0h]
  void *Src[2]; // [rsp+90h] [rbp-E8h] BYREF
  ACL *v53; // [rsp+A0h] [rbp-D8h]
  PVOID v54; // [rsp+A8h] [rbp-D0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-C8h]
  PVOID Object[2]; // [rsp+C0h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-A8h] BYREF
  unsigned __int64 FileInformation; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-90h] BYREF
  unsigned __int64 v60; // [rsp+F0h] [rbp-88h]
  ULONG_PTR v61; // [rsp+F8h] [rbp-80h]
  unsigned __int64 v62; // [rsp+100h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+138h] [rbp-40h] BYREF
  __int64 v65; // [rsp+158h] [rbp-20h]
  unsigned int v66; // [rsp+1A0h] [rbp+28h]

  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  *(_OWORD *)Src = 0LL;
  AllocationSize.QuadPart = 0LL;
  FileInformation = 0LL;
  v59 = 0LL;
  LODWORD(Object[0]) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v65 = 0LL;
  v53 = 0LL;
  if ( (a5 & 0x7FFFFF) != 0 || a5 < 0 && (a5 & 0x42000000) != 0 || (a5 & 0xFF7FFFFF) != 0 && (a5 & 0x800000) != 0 )
    return 3221225714LL;
  if ( a4 )
  {
    if ( !SeSinglePrivilegeCheck(SeCreatePagefilePrivilege, a4) || PsIsCurrentThreadInServerSilo() )
      return 3221225569LL;
    if ( ((unsigned __int8)a1 & 3) != 0 || ((unsigned __int8)a3 & 3) != 0 || ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = a2->QuadPart;
    AllocationSize = *a2;
  }
  else
  {
    QuadPart = a2->QuadPart;
    AllocationSize = *a2;
  }
  if ( (unsigned __int64)QuadPart > 0xFFFFFFFE000LL || QuadPart < 0x100000 )
    return 3221225712LL;
  v60 = *a3;
  v11 = v60;
  if ( v60 > 0xFFFFFFFE000LL || QuadPart > (__int64)v60 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  Pool = MiAllocatePool(256, LOWORD(Src[0]), 0x20206D4Du);
  v13 = Pool;
  P = Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( a4 )
  {
    v14 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0])
      && ((char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1]) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v14 = (unsigned __int16)Src[0];
    }
    memmove(Pool, Src[1], v14);
  }
  else
  {
    memmove(Pool, Src[1], LOWORD(Src[0]));
  }
  Src[1] = v13;
  if ( (a5 & 0x800000) != 0 )
    return MiCreateSpecialPurposeMemoryPageFile(
             a6,
             (unsigned __int64)AllocationSize.QuadPart >> 12,
             (unsigned int)(v60 >> 12),
             Src);
  v49 = 0LL;
  FileHandle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl < 0 )
  {
    v19 = v53;
    goto LABEL_89;
  }
  v16 = RtlLengthSid(SeAliasAdminsSid);
  v17 = RtlLengthSid(SeLocalSystemSid) + 32 + v16;
  v18 = (ACL *)MiAllocatePool(256, v17, 0x6C636144u);
  v19 = v18;
  v53 = v18;
  if ( !v18 )
  {
    Acl = -1073741670;
    goto LABEL_89;
  }
  Acl = RtlCreateAcl(v18, v17, 2u);
  if ( Acl < 0
    || (Acl = RtlpAddKnownAce(v19, 2u, 0, 2032127, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
    || (Acl = RtlpAddKnownAce(v19, 2u, 0, 2032127, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0)
    || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v19, 0), Acl < 0) )
  {
LABEL_89:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_91;
  }
  if ( a5 < 0 )
  {
    v20 = 3;
  }
  else
  {
    v20 = 0;
    if ( (a5 & 0x2000000) != 0 )
      v20 = 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Src;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  FileInformation = (AllocationSize.QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( IoCreateFile(
         &FileHandle,
         0x140003u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         6u,
         2u,
         0,
         0x9008u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x112u) >= 0 )
  {
    Acl = MiEnablePartitionMappedWrites((_QWORD *)a6);
    if ( Acl >= 0 )
    {
      if ( IoStatusBlock.Status < 0 || (Acl = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor), Acl >= 0) )
      {
        ExFreePoolWithTag(v19, 0);
        v19 = 0LL;
        Acl = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 )
        {
          Acl = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
          if ( Acl >= 0 )
          {
            Acl = IoStatusBlock.Status;
            if ( IoStatusBlock.Status >= 0 )
            {
              Object[0] = 0LL;
              Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, Object, 0LL);
              v21 = (struct _FILE_OBJECT *)Object[0];
              if ( Acl >= 0 )
              {
                DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0])->DeviceType;
                if ( (unsigned int)DeviceType <= 0x36 && (v23 = 0x60000000100100LL, _bittest64(&v23, DeviceType)) )
                {
                  Acl = MiCheckPageFileMapping((__int64)v21);
                  if ( Acl >= 0 )
                  {
                    Acl = IopQueryXxxInformation(v21, 4, 8u, 0, (struct _IRP *)&v59, Object, 0);
                    if ( Acl >= 0 )
                    {
                      if ( (v59 & 0x400000000LL) != 0 )
                      {
                        Acl = -1073741468;
                      }
                      else
                      {
                        Acl = PiPagePathSetState(v21);
                        if ( Acl >= 0 )
                        {
                          FsRtlIssueFileNotificationFsctl(v21);
                          if ( (unsigned __int16 *)a6 != MiSystemPartition
                            || (Acl = MiZeroPageFileFirstPage(v21), Acl >= 0) )
                          {
                            Pagefile = MiCreatePagefile(
                                         a6,
                                         (_DWORD)v21,
                                         (_DWORD)FileHandle,
                                         (unsigned __int64)AllocationSize.QuadPart >> 12,
                                         v11 >> 12,
                                         (__int64)Src,
                                         a5,
                                         1);
                            v25 = Pagefile;
                            if ( Pagefile )
                            {
                              inserted = MiInsertPageFileInList(Pagefile);
                              if ( inserted < 0 )
                              {
                                MiDeletePagefile((PVOID)v25);
                                return (unsigned int)inserted;
                              }
                              else
                              {
                                if ( !byte_140C67E40
                                  && (unsigned __int16 *)a6 == MiSystemPartition
                                  && (*(_BYTE *)(v25 + 204) & 0x10) == 0 )
                                {
                                  *(_OWORD *)Object = *(_OWORD *)(v25 + 96);
                                  byte_140C67E40 = IoInitializeCrashDump(FileHandle, Object);
                                }
                                return 0LL;
                              }
                            }
                            return 3221225626LL;
                          }
                          PiPagePathSetState(v21);
                        }
                      }
                    }
                  }
                }
                else
                {
                  Acl = -1073741489;
                }
                goto LABEL_87;
              }
            }
          }
        }
      }
    }
    goto LABEL_89;
  }
  Acl = IoCreateFile(
          &FileHandle,
          0x100002u,
          &ObjectAttributes,
          &IoStatusBlock,
          &AllocationSize,
          6u,
          3u,
          1u,
          0x8008u,
          0LL,
          0,
          CreateFileTypeNone,
          0LL,
          0x112u);
  if ( Acl >= 0 )
  {
    v54 = 0LL;
    Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v54, 0LL);
    v21 = (struct _FILE_OBJECT *)v54;
    if ( Acl < 0 )
      goto LABEL_89;
    v28 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v51 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    v30 = (unsigned __int64 *)(a6 + 1080);
    v31 = KeAbPreAcquire(a6 + 1080, 0LL);
    v32 = v31;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a6 + 1080), 0LL) )
      ExfAcquirePushLockExclusiveEx(v30, v31, (__int64)v30);
    v33 = 0LL;
    if ( v32 )
      *(_BYTE *)(v32 + 18) = 1;
    v34 = *(unsigned int *)(a6 + 17048);
    v35 = 0;
    v66 = 0;
    if ( (_DWORD)v34 )
    {
      while ( 1 )
      {
        v36 = *(_QWORD *)(a6 + 8LL * v35 + 17056);
        v37 = *(_WORD *)(v36 + 204);
        if ( (v37 & 0x840) == 0 && *(_QWORD *)(*(_QWORD *)(v36 + 56) + 40LL) == *((_QWORD *)v54 + 5) )
          break;
        v66 = ++v35;
        if ( v35 >= (unsigned int)v34 )
          goto LABEL_70;
      }
      if ( ((~v37 & 0x10) != 0) == ((v20 & 1) == 0) )
      {
        v28 = *(_QWORD *)(a6 + 8LL * v35 + 17056);
LABEL_70:
        v33 = 0LL;
        goto LABEL_71;
      }
      Acl = -1073741811;
      goto LABEL_79;
    }
LABEL_71:
    if ( !v28 )
    {
      Acl = -1073741275;
      goto LABEL_79;
    }
    v38 = v60 >> 12;
    v39 = (unsigned __int64)AllocationSize.QuadPart >> 12;
    v62 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
    if ( *(_QWORD *)(v28 + 16) > v62 )
    {
      Acl = -1073741584;
    }
    else
    {
      v40 = *(_QWORD *)(v28 + 8);
      if ( v40 > (unsigned int)v38 )
      {
        Acl = -1073741583;
      }
      else
      {
        if ( v40 >= (unsigned int)v38 )
        {
LABEL_75:
          v41 = v62;
          if ( v62 > *(_QWORD *)(v28 + 16) )
          {
            while ( v41 <= *(_QWORD *)v28 )
            {
              if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum(v28, v39) )
                goto LABEL_76;
            }
            MiIssuePageExtendRequest(a6, v41 - *(_QWORD *)v28, 1, v66);
            v47 = Acl;
            if ( *(_QWORD *)(v28 + 16) < v41 )
              v47 = -1073741670;
            Acl = v47;
          }
LABEL_76:
          if ( v20 >= 2 )
            *(_WORD *)(v28 + 204) |= 0x80u;
          goto LABEL_78;
        }
        if ( (*(_BYTE *)(v28 + 204) & 0x10) == 0 )
        {
          v49 = (unsigned int)v38 - v40;
          v45 = MiIncreaseCommitLimits(a6, 0LL, v49, 0, 0LL);
          v33 = 0LL;
          if ( !v45 )
          {
            v42 = 0LL;
            Acl = -1073741583;
            CurrentThread = v51;
LABEL_80:
            v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL);
            if ( (v43 & 2) != 0 && (v43 & 4) == 0 )
              ExfTryToWakePushLock((volatile signed __int64 *)v30);
            KeAbPostRelease((ULONG_PTR)v30);
            v44 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v44
              && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            if ( v42 )
              MiReduceCommitLimits((_QWORD *)a6, 0LL, v42);
            v19 = v53;
            v13 = P;
LABEL_87:
            if ( v21 )
              ObfDereferenceObject(v21);
            goto LABEL_89;
          }
        }
        v61 = 0LL;
        if ( !*(_QWORD *)(v28 + 216) || (v61 = MiReservePageHash(v38)) != 0 )
        {
          PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v38, v40, v34, v33);
          if ( PageFileSpaceBitmaps )
          {
            MiExtendPagingFileMaximum(v28, PageFileSpaceBitmaps, v61);
            if ( (unsigned __int64)(*(_QWORD *)(a6 + 17576) + 100LL) > *(_QWORD *)(a6 + 17816)
              && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0LL) )
            {
              MiReturnCommit(a6, 200LL);
            }
            goto LABEL_75;
          }
        }
        Acl = -1073741670;
      }
    }
LABEL_78:
    CurrentThread = v51;
LABEL_79:
    v42 = v49;
    goto LABEL_80;
  }
  FileHandle = 0LL;
LABEL_91:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)Acl;
}
