/*
 * XREFs of sub_14084AA8C @ 0x14084AA8C
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 *     sub_14084AA50 @ 0x14084AA50 (sub_14084AA50.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 *     sub_1403CF824 @ 0x1403CF824 (sub_1403CF824.c)
 *     sub_1403CF8BC @ 0x1403CF8BC (sub_1403CF8BC.c)
 *     sub_1403CF934 @ 0x1403CF934 (sub_1403CF934.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14059BEE8 @ 0x14059BEE8 (sub_14059BEE8.c)
 *     sub_14059BFB0 @ 0x14059BFB0 (sub_14059BFB0.c)
 *     sub_14059C99C @ 0x14059C99C (sub_14059C99C.c)
 *     sub_1405B3268 @ 0x1405B3268 (sub_1405B3268.c)
 *     IoCreateFile @ 0x1406CAD00 (IoCreateFile.c)
 *     IoQueryVolumeInformation @ 0x1406E8DF0 (IoQueryVolumeInformation.c)
 *     sub_1406F9808 @ 0x1406F9808 (sub_1406F9808.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     sub_14081C234 @ 0x14081C234 (sub_14081C234.c)
 *     sub_14084B418 @ 0x14084B418 (sub_14084B418.c)
 *     NaptrDnsRecordConvert_2 @ 0x14084B698 (NaptrDnsRecordConvert_2.c)
 *     sub_14084BA14 @ 0x14084BA14 (sub_14084BA14.c)
 *     sub_14084BA88 @ 0x14084BA88 (sub_14084BA88.c)
 *     sub_14084BB80 @ 0x14084BB80 (sub_14084BB80.c)
 *     sub_14084BDD8 @ 0x14084BDD8 (sub_14084BDD8.c)
 *     sub_14085E448 @ 0x14085E448 (sub_14085E448.c)
 *     sub_140945F80 @ 0x140945F80 (sub_140945F80.c)
 *     sub_14096E2E0 @ 0x14096E2E0 (sub_14096E2E0.c)
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14084AA8C(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        PVOID Object)
{
  __int64 QuadPart; // rax
  unsigned __int64 v11; // rbx
  PVOID v12; // rax
  PVOID v13; // r13
  __int64 v14; // r14
  unsigned __int16 v15; // cx
  int Status; // r15d
  ULONG v17; // edi
  ULONG v18; // edi
  ACL *v19; // rax
  unsigned int v20; // edi
  ULONG_PTR *v21; // r14
  struct _FILE_OBJECT *v22; // r13
  unsigned __int64 DeviceType; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // edi
  __int64 v30; // r12
  unsigned int v31; // r9d
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int16 v34; // r8
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  ULONG_PTR v39; // rdi
  __int64 v40; // rax
  int v41; // eax
  HANDLE FileHandle; // [rsp+70h] [rbp-118h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+78h] [rbp-110h] BYREF
  __int64 v44; // [rsp+80h] [rbp-108h]
  void *Src[2]; // [rsp+88h] [rbp-100h] BYREF
  unsigned int v46; // [rsp+98h] [rbp-F0h]
  PVOID P; // [rsp+A0h] [rbp-E8h]
  PACL Acl; // [rsp+A8h] [rbp-E0h]
  ULONG ReturnedLength; // [rsp+B0h] [rbp-D8h] BYREF
  PVOID v50; // [rsp+B8h] [rbp-D0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-C8h] BYREF
  unsigned __int64 FileInformation; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 FsInformation; // [rsp+D8h] [rbp-B0h] BYREF
  unsigned __int64 v54; // [rsp+E0h] [rbp-A8h]
  ULONG_PTR v55; // [rsp+E8h] [rbp-A0h]
  unsigned __int64 v56; // [rsp+F0h] [rbp-98h]
  ULONG_PTR BugCheckParameter2; // [rsp+F8h] [rbp-90h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-80h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+138h] [rbp-50h] BYREF
  __int64 v61; // [rsp+158h] [rbp-30h]
  __int128 v62; // [rsp+160h] [rbp-28h] BYREF

  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  *(_OWORD *)Src = 0LL;
  AllocationSize.QuadPart = 0LL;
  FileInformation = 0LL;
  FsInformation = 0LL;
  ReturnedLength = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v61 = 0LL;
  Acl = 0LL;
  if ( Object != &StartContext && a5
    || (a5 & 0x7FFFFF) != 0
    || a5 < 0 && (a5 & 0x42000000) != 0
    || (a5 & 0xFF7FFFFF) != 0 && (a5 & 0x800000) != 0 )
  {
    return 3221225714LL;
  }
  if ( a4 )
  {
    if ( !SeSinglePrivilegeCheck(stru_140D3CCF0, a4) || PsIsCurrentThreadInServerSilo() )
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
  v54 = *a3;
  v11 = v54;
  if ( v54 > 0xFFFFFFFE000LL || QuadPart > (__int64)v54 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  v12 = sub_1402828F0(256, LOWORD(Src[0]), 0x20206D4Du);
  v13 = v12;
  P = v12;
  v14 = 0LL;
  if ( !v12 )
    return 3221225626LL;
  if ( a4 )
  {
    v15 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0])
      && ((char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1]) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v15 = (unsigned __int16)Src[0];
    }
    memmove(v12, Src[1], v15);
  }
  else
  {
    memmove(v12, Src[1], LOWORD(Src[0]));
  }
  Src[1] = v13;
  if ( (a5 & 0x800000) != 0 )
    return sub_14096E2E0(Object, (unsigned __int64)AllocationSize.QuadPart >> 12, (unsigned int)(v54 >> 12), Src);
  v44 = 0LL;
  FileHandle = 0LL;
  Status = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Status < 0 )
    goto LABEL_85;
  v17 = RtlLengthSid(SidToCheck);
  v18 = RtlLengthSid(Group) + 32 + v17;
  v19 = (ACL *)sub_1402828F0(256, v18, 0x6C636144u);
  Acl = v19;
  if ( !v19 )
  {
    Status = -1073741670;
    goto LABEL_85;
  }
  Status = RtlCreateAcl(v19, v18, 2u);
  if ( Status < 0
    || (Status = RtlAddAccessAllowedAce(Acl, 2u, 0x1F01FFu, SidToCheck), Status < 0)
    || (Status = RtlAddAccessAllowedAce(Acl, 2u, 0x1F01FFu, Group), Status < 0)
    || (Status = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0), Status < 0) )
  {
LABEL_85:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_87;
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
    v21 = (ULONG_PTR *)Object;
    Status = sub_1406F9808(Object);
    if ( Status >= 0 )
    {
      if ( IoStatusBlock.Status < 0 || (Status = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor), Status >= 0) )
      {
        ExFreePoolWithTag(Acl, 0);
        Acl = 0LL;
        Status = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 )
        {
          Status = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
          if ( Status >= 0 )
          {
            Status = IoStatusBlock.Status;
            if ( IoStatusBlock.Status >= 0 )
            {
              Object = 0LL;
              Status = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
              v22 = (struct _FILE_OBJECT *)Object;
              if ( Status >= 0 )
              {
                DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object)->DeviceType;
                if ( (unsigned int)DeviceType <= 0x36 && (v24 = 0x60000000100100LL, _bittest64(&v24, DeviceType)) )
                {
                  Status = sub_1403CF8BC((__int64)v22);
                  if ( Status >= 0 )
                  {
                    Status = IoQueryVolumeInformation(v22, FileFsDeviceInformation, 8u, &FsInformation, &ReturnedLength);
                    if ( Status >= 0 )
                    {
                      if ( (FsInformation & 0x400000000LL) != 0 )
                      {
                        Status = -1073741468;
                      }
                      else
                      {
                        Status = sub_14084BB80(v22);
                        if ( Status >= 0 )
                        {
                          sub_14081C234(v22, v25, (__int128 *)qword_140012A70);
                          if ( v21 != &StartContext || (Status = sub_14084BA88(v22), Status >= 0) )
                          {
                            v26 = NaptrDnsRecordConvert_2(
                                    (_DWORD)v21,
                                    (_DWORD)v22,
                                    (_DWORD)FileHandle,
                                    (unsigned __int64)AllocationSize.QuadPart >> 12,
                                    v11 >> 12,
                                    (__int64)Src,
                                    a5,
                                    1);
                            v27 = v26;
                            if ( v26 )
                            {
                              v28 = sub_14084B418(v26);
                              if ( v28 < 0 )
                              {
                                sub_14096F074((PVOID)v27);
                                return (unsigned int)v28;
                              }
                              else
                              {
                                if ( v21 == &StartContext )
                                {
                                  if ( (*(_BYTE *)(v27 + 204) & 0xF) == 0 && (dword_140D321C0 & 3) != 0 )
                                    sub_14085E448();
                                  if ( !byte_140C529C0 && (*(_BYTE *)(v27 + 204) & 0x10) == 0 )
                                  {
                                    v62 = *(_OWORD *)(v27 + 96);
                                    byte_140C529C0 = sub_14084BDD8(FileHandle, &v62);
                                  }
                                }
                                return 0LL;
                              }
                            }
                            return 3221225626LL;
                          }
                          sub_140945F80(v22);
                        }
                      }
                    }
                  }
                }
                else
                {
                  Status = -1073741489;
                }
                goto LABEL_82;
              }
LABEL_84:
              v13 = P;
              goto LABEL_85;
            }
          }
        }
      }
    }
    goto LABEL_85;
  }
  Status = IoCreateFile(
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
  if ( Status >= 0 )
  {
    v50 = 0LL;
    Status = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v50, 0LL);
    v22 = (struct _FILE_OBJECT *)v50;
    if ( Status < 0 )
      goto LABEL_84;
    v30 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    BugCheckParameter2 = (ULONG_PTR)Object + 1064;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 1064, 0LL);
    v31 = *((_DWORD *)Object + 4182);
    v32 = 0;
    v46 = 0;
    if ( v31 )
    {
      while ( 1 )
      {
        v33 = *((_QWORD *)Object + v32 + 2092);
        v34 = *(_WORD *)(v33 + 204);
        if ( (v34 & 0x840) == 0 && *(_QWORD *)(*(_QWORD *)(v33 + 56) + 40LL) == *((_QWORD *)v50 + 5) )
          break;
        v46 = ++v32;
        if ( v32 >= v31 )
          goto LABEL_70;
      }
      if ( ((~v34 & 0x10) != 0) != ((v20 & 1) == 0) )
      {
        Status = -1073741811;
        goto LABEL_78;
      }
      v30 = *((_QWORD *)Object + v32 + 2092);
    }
LABEL_70:
    if ( !v30 )
    {
      Status = -1073741275;
      goto LABEL_78;
    }
    v35 = v54 >> 12;
    v36 = (unsigned __int64)AllocationSize.QuadPart >> 12;
    v56 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
    if ( *(_QWORD *)(v30 + 16) > v56 )
    {
      Status = -1073741584;
    }
    else
    {
      v37 = *(_QWORD *)(v30 + 8);
      if ( v37 > (unsigned int)v35 )
      {
        Status = -1073741583;
      }
      else
      {
        if ( v37 >= (unsigned int)v35 )
        {
LABEL_74:
          v38 = v56;
          if ( v56 > *(_QWORD *)(v30 + 16) )
          {
            while ( v38 <= *(_QWORD *)v30 )
            {
              if ( (unsigned int)sub_14059BEE8(v30, v36) )
                goto LABEL_75;
            }
            sub_14059C99C((__int64)Object, v38 - *(_QWORD *)v30, 1, v46);
            v41 = Status;
            if ( *(_QWORD *)(v30 + 16) < v38 )
              v41 = -1073741670;
            Status = v41;
          }
LABEL_75:
          if ( v20 >= 2 )
            *(_WORD *)(v30 + 204) |= 0x80u;
          goto LABEL_77;
        }
        if ( (*(_BYTE *)(v30 + 204) & 0x10) == 0 )
        {
          v44 = (unsigned int)v35 - v37;
          if ( !(unsigned int)sub_1403CF51C((__int64)Object, 0LL, v44, 0, 0LL) )
          {
            v14 = 0LL;
            Status = -1073741583;
            goto LABEL_78;
          }
        }
        v55 = 0LL;
        if ( !*(_QWORD *)(v30 + 216) || (v55 = sub_1403CF824(v35)) != 0 )
        {
          v40 = sub_14084BA14((unsigned int)v35);
          if ( v40 )
          {
            sub_14059BFB0(v30, v40, v55);
            if ( (unsigned __int64)(*((_QWORD *)Object + 2157) + 100LL) > *((_QWORD *)Object + 2187)
              && (unsigned int)sub_14032A4B0((__int64)Object, 0xC8uLL, 0) )
            {
              sub_14028CE10((__int64)Object, 200LL);
            }
            goto LABEL_74;
          }
        }
        Status = -1073741670;
      }
    }
LABEL_77:
    v14 = v44;
LABEL_78:
    v39 = BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v39);
    sub_1402AFC00(v39);
    sub_1403CF934((__int64)CurrentThread);
    if ( v14 )
      sub_1405B3268(Object, 0LL, v14);
LABEL_82:
    if ( v22 )
      ObfDereferenceObject(v22);
    goto LABEL_84;
  }
  FileHandle = 0LL;
LABEL_87:
  if ( Acl )
    ExFreePoolWithTag(Acl, 0);
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)Status;
}
