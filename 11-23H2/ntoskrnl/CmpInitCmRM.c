/*
 * XREFs of CmpInitCmRM @ 0x14068571C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1408632EC (CmpMountPreloadedHives.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x14041C950 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x14041CAB0 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x14041D750 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x14041DFD0 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x14041DFF0 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmpQueryNameString @ 0x140684F94 (CmpQueryNameString.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     CmpUuidCreate @ 0x140685EA8 (CmpUuidCreate.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14068C0AC (CmpQueryFileSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1407C7260 (ExpAllocateStringRoutine.c)
 *     CmpStartRMLog @ 0x140872DD8 (CmpStartRMLog.c)
 *     HvMarkBaseBlockDirty @ 0x140874A6C (HvMarkBaseBlockDirty.c)
 *     CmpLogTxrInitEvent @ 0x140A1E7AC (CmpLogTxrInitEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpInitCmRM(ULONG_PTR a1, char a2)
{
  ULONG_PTR v3; // r13
  char v4; // si
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  _QWORD *Pool2; // r14
  struct _ERESOURCE *v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int128 v18; // xmm6
  void *v19; // r12
  __int64 v20; // rcx
  NTSTATUS FileSecurityDescriptor; // esi
  unsigned __int16 Length; // ax
  UNICODE_STRING *p_Source; // rbx
  PSECURITY_DESCRIPTOR v24; // rbx
  __int64 v25; // rax
  struct _CLFS_MGMT_POLICY *v26; // r12
  unsigned int v27; // edx
  size_t v28; // r8
  ULONG v29; // ebx
  const void *v30; // rdx
  HANDLE *v31; // r12
  NTSTATUS v32; // eax
  HANDLE v33; // rcx
  GUID v34; // xmm0
  HANDLE *v35; // rbx
  HANDLE v36; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v38; // rax
  __int64 *v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rax
  PVOID v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  PSECURITY_DESCRIPTOR psdLogFile; // [rsp+28h] [rbp-E0h]
  ULONG fCreateDisposition[2]; // [rsp+30h] [rbp-D8h]
  int v58; // [rsp+68h] [rbp-A0h]
  char v59; // [rsp+6Ch] [rbp-9Ch]
  ULONG CreateOptions; // [rsp+70h] [rbp-98h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-90h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+88h] [rbp-80h] BYREF
  PVOID ClientCookie; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING LogFileName; // [rsp+B8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+C8h] [rbp-40h]
  ULONG_PTR v68; // [rsp+D0h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  PERESOURCE Resource; // [rsp+108h] [rbp+0h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+118h] [rbp+10h] BYREF
  PVOID Object[2]; // [rsp+150h] [rbp+48h] BYREF
  UUID Uuid; // [rsp+160h] [rbp+58h] BYREF
  GUID ResourceManagerGuid; // [rsp+170h] [rbp+68h] BYREF
  __int128 v75; // [rsp+180h] [rbp+78h]

  v68 = a1;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v3 = a1;
  v75 = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  v4 = 0;
  ResourceManagerGuid = 0LL;
  Source.Buffer = 0LL;
  *(_OWORD *)Object = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Uuid = 0LL;
  Destination.Buffer = 0LL;
  memset(&ObjectAttributes, 0, 44);
  pplfoLog = 0LL;
  *(_QWORD *)&LogFileName.Length = 0LL;
  LogFileName.Buffer = 0LL;
  CreateOptions = 0;
  P = 0LL;
  ClientCookie = 0LL;
  memset(&RegistrationData, 0, 52);
  v58 = 0;
  if ( CmpMiniNTBoot )
    return 0LL;
  v5 = qword_140C028D0;
  if ( a1 )
    v5 = a1;
  if ( (*(_DWORD *)(v5 + 160) & 0x8001) != 0 )
    return 0LL;
  v7 = CmpUuidCreate((UUID *)Object);
  if ( v7 < 0 || (v7 = CmpUuidCreate(&Uuid), v7 < 0) )
  {
    *(_DWORD *)(v5 + 4164) = v7;
    *(_DWORD *)(v5 + 4160) = 1;
    CmpLogTxrInitEvent(v6, v5, (unsigned int)v7);
    return (unsigned int)v7;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 136LL, 1834110275LL);
  if ( !Pool2 )
  {
    *(_DWORD *)(v5 + 4160) = 1;
LABEL_69:
    FileSecurityDescriptor = -1073741670;
    *(_DWORD *)(v5 + 4164) = -1073741670;
    CmpLogTxrInitEvent(v8, v5, 3221225626LL);
    return (unsigned int)FileSecurityDescriptor;
  }
  Resource = (PERESOURCE)ExAllocatePool2(64LL, 104LL, 1819430211LL);
  v10 = Resource;
  if ( !Resource )
  {
    ExFreePoolWithTag(Pool2, 0x6D524D43u);
    *(_DWORD *)(v5 + 4160) = 2;
    goto LABEL_69;
  }
  Pool2[11] = 0LL;
  Pool2[3] = Pool2 + 2;
  Pool2[2] = Pool2 + 2;
  Pool2[12] = 0LL;
  *((_DWORD *)Pool2 + 26) = a2 != 0 ? 4 : 0;
  *(_QWORD *)((char *)Pool2 + 108) = 0LL;
  *((_DWORD *)Pool2 + 17) = 0;
  Pool2[9] = 0LL;
  Pool2[16] = v10;
  ExInitializeResourceLite(v10);
  v14 = *(_QWORD *)(v5 + 64);
  if ( *(_DWORD *)(v14 + 164) != 1836346738 )
  {
    v18 = *(_OWORD *)Object;
    *(_DWORD *)(v14 + 164) = 1836346738;
    goto LABEL_83;
  }
  v13 = *((_QWORD *)&v75 + 1);
  v15 = v75;
  v16 = v75 - *(_QWORD *)(v14 + 148);
  if ( (_QWORD)v75 == *(_QWORD *)(v14 + 148) )
    v16 = *((_QWORD *)&v75 + 1) - *(_QWORD *)(v14 + 156);
  if ( !v16 )
  {
    v58 = 1;
    v4 = 1;
    *(UUID *)(v14 + 148) = Uuid;
  }
  v14 = *(_QWORD *)(v5 + 64);
  v17 = v15 - *(_QWORD *)(v14 + 112);
  if ( v15 == *(_QWORD *)(v14 + 112) )
    v17 = v13 - *(_QWORD *)(v14 + 120);
  v18 = *(_OWORD *)Object;
  if ( !v17 )
  {
    v4 = 1;
    *(_OWORD *)(v14 + 112) = *(_OWORD *)Object;
  }
  v12 = *(_QWORD **)(v5 + 64);
  v11 = v15 - v12[16];
  if ( !v11 )
    v11 = v13 - v12[17];
  if ( !v11 )
  {
    v4 = 1;
    *((_OWORD *)v12 + 8) = *((_OWORD *)v12 + 7);
  }
  CreateOptions = 0;
  v59 = a2;
  if ( v4 )
    goto LABEL_86;
  while ( 1 )
  {
    v19 = *(void **)(v5 + 1544);
    FileSecurityDescriptor = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v5 + 64) + 148LL), &GuidString, 1u);
    if ( FileSecurityDescriptor < 0 )
    {
      *(_DWORD *)(v5 + 4160) = 3;
      goto LABEL_113;
    }
    if ( v3 )
    {
      FileSecurityDescriptor = CmpQueryNameString(*(void **)(v3 + 1544), &Source);
      if ( FileSecurityDescriptor < 0 )
      {
        *(_DWORD *)(v5 + 4160) = 4;
        goto LABEL_113;
      }
      Length = Source.Length;
      p_Source = &Source;
    }
    else
    {
      p_Source = (UNICODE_STRING *)&CmpLogPath;
      CreateOptions = 52;
      Length = 64;
    }
    Destination.MaximumLength = GuidString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + Length;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
    if ( !Destination.Buffer )
    {
      FileSecurityDescriptor = -1073741670;
      *(_DWORD *)(v5 + 4160) = 5;
LABEL_113:
      CmpLogTxrInitEvent(v20, v5, (unsigned int)FileSecurityDescriptor);
      if ( ClientCookie )
      {
        ClfsMgmtDeregisterManagedClient(ClientCookie);
        ClientCookie = 0LL;
      }
      if ( pplfoLog )
        ClfsCloseLogFileObject(pplfoLog);
      if ( GuidString.Buffer )
        RtlFreeUnicodeString(&GuidString);
      if ( Source.Buffer )
        RtlFreeUnicodeString(&Source);
      if ( Destination.Buffer )
        RtlFreeUnicodeString(&Destination);
      v53 = (void *)Pool2[6];
      if ( v53 )
        ZwClose(v53);
      v54 = (void *)Pool2[5];
      if ( v54 )
        ObfDereferenceObject(v54);
      v55 = (void *)Pool2[4];
      if ( v55 )
        ZwClose(v55);
      ExFreePoolWithTag(Pool2, 0x6D524D43u);
      ExDeleteResourceLite(Resource);
      ExFreePoolWithTag(Resource, 0);
      *(_DWORD *)(v5 + 4164) = FileSecurityDescriptor;
      return (unsigned int)FileSecurityDescriptor;
    }
    RtlAppendUnicodeStringToString(&Destination, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination, p_Source);
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeStringToString(&Destination, &TmLogExt);
    RtlFreeUnicodeString(&GuidString);
    if ( v3 )
      RtlFreeUnicodeString(&Source);
    FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(v19);
    if ( FileSecurityDescriptor < 0 )
    {
      *(_DWORD *)(v5 + 4160) = 6;
      goto LABEL_113;
    }
    v24 = P;
    FileSecurityDescriptor = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0000000, 7u, P, 3u, 8u, 0, 0x200u, 0LL, 0);
    ExFreePoolWithTag(v24, 0);
    if ( FileSecurityDescriptor >= 0 )
      break;
    if ( v58 )
    {
      *(_DWORD *)(v5 + 4160) = 7;
      goto LABEL_113;
    }
    RtlFreeUnicodeString(&Destination);
    CmpLogTxrInitEvent(v45, v5, (unsigned int)FileSecurityDescriptor);
LABEL_82:
    a2 = v59;
LABEL_83:
    if ( !v3 )
      a2 = 1;
    v58 = 1;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 148LL) = Uuid;
    v59 = a2;
    *(_OWORD *)(*(_QWORD *)(v5 + 64) + 112LL) = v18;
    *(_OWORD *)(*(_QWORD *)(v5 + 64) + 128LL) = v18;
LABEL_86:
    CmpLockRegistry(v12, v11, v14, v13);
    v46 = KeAbPreAcquire(v5 + 72, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 72), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v5 + 72), 0LL, v46, v5 + 72);
    if ( v46 )
      *(_BYTE *)(v46 + 18) = 1;
    v47 = KeAbPreAcquire(v5 + 80, 0LL);
    v48 = v47;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 80), v47, v5 + 80);
    if ( v48 )
      *(_BYTE *)(v48 + 18) = 1;
    HvMarkBaseBlockDirty(v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 80));
    KeAbPostRelease(v5 + 80);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 72));
    KeAbPostRelease(v5 + 72);
    CmpUnlockRegistry(v50, v49, v51, v52, psdLogFile, *(_QWORD *)fCreateDisposition);
    v18 = *(_OWORD *)Object;
    v3 = v68;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  FileSecurityDescriptor = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( FileSecurityDescriptor < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 8;
    goto LABEL_113;
  }
  v25 = ExAllocatePool2(256LL, (unsigned __int16)TmContainerExt + 24LL, 1834110275LL);
  v26 = (struct _CLFS_MGMT_POLICY *)v25;
  if ( !v25 )
  {
    *(_DWORD *)(v5 + 4160) = 9;
    goto LABEL_113;
  }
  v27 = (unsigned __int16)TmContainerExt;
  *(_WORD *)(v25 + 16) = TmContainerExt;
  v28 = v27;
  *(_DWORD *)v25 = 1;
  *(_DWORD *)(v25 + 12) = 9;
  v29 = v27 + 24;
  v30 = off_140C06B68;
  *(_DWORD *)(v25 + 4) = v29;
  memmove((void *)(v25 + 18), v30, v28);
  FileSecurityDescriptor = ClfsMgmtInstallPolicy(pplfoLog, v26, v29);
  ExFreePoolWithTag(v26, 0);
  if ( FileSecurityDescriptor < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 10;
    goto LABEL_113;
  }
  v31 = (HANDLE *)(Pool2 + 4);
  LogFileName.Length = Destination.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination.MaximumLength - CmpClfsLogPrefix.Length;
  ObjectAttributes.RootDirectory = 0LL;
  LogFileName.Buffer = (wchar_t *)((char *)Destination.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v32 = ZwCreateTransactionManager((PHANDLE)Pool2 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions, 0);
  FileSecurityDescriptor = v32;
  if ( v32 == -1073741771 )
  {
    if ( Destination.Buffer )
      RtlFreeUnicodeString(&Destination);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    v12 = ClientCookie;
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( v58 )
      goto LABEL_38;
    goto LABEL_82;
  }
  if ( v32 >= 0 )
    FileSecurityDescriptor = ZwRecoverTransactionManager(*v31);
LABEL_38:
  RtlFreeUnicodeString(&Destination);
  if ( FileSecurityDescriptor < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 11;
    goto LABEL_113;
  }
  if ( pplfoLog )
  {
    ClfsCloseLogFileObject(pplfoLog);
    pplfoLog = 0LL;
  }
  if ( ClientCookie )
  {
    ClfsMgmtDeregisterManagedClient(ClientCookie);
    ClientCookie = 0LL;
  }
  v33 = *v31;
  Object[0] = 0LL;
  FileSecurityDescriptor = ObReferenceObjectByHandle(
                             v33,
                             0xF003Fu,
                             (POBJECT_TYPE)TmTransactionManagerObjectType,
                             0,
                             Object,
                             0LL);
  Pool2[5] = Object[0];
  if ( FileSecurityDescriptor < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 12;
    goto LABEL_113;
  }
  v34 = *(GUID *)(*(_QWORD *)(v5 + 64) + 112LL);
  ObjectAttributes.RootDirectory = 0LL;
  ResourceManagerGuid = v34;
  ObjectAttributes.ObjectName = 0LL;
  v35 = (HANDLE *)(Pool2 + 6);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  FileSecurityDescriptor = ZwCreateResourceManager(
                             (PHANDLE)Pool2 + 6,
                             0x1F007Fu,
                             *v31,
                             &ResourceManagerGuid,
                             &ObjectAttributes,
                             0,
                             0LL);
  if ( FileSecurityDescriptor == -1073741771 )
    FileSecurityDescriptor = ZwOpenResourceManager(
                               (PHANDLE)Pool2 + 6,
                               0x1F007Fu,
                               *v31,
                               &ResourceManagerGuid,
                               &ObjectAttributes);
  if ( FileSecurityDescriptor < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 13;
    goto LABEL_113;
  }
  FileSecurityDescriptor = ZwRecoverResourceManager(*v35);
  if ( FileSecurityDescriptor < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 14;
    goto LABEL_113;
  }
  v36 = *v35;
  Object[0] = 0LL;
  FileSecurityDescriptor = ObReferenceObjectByHandle(
                             v36,
                             0x1F007Fu,
                             (POBJECT_TYPE)TmResourceManagerObjectType,
                             0,
                             Object,
                             0LL);
  Pool2[7] = Object[0];
  if ( FileSecurityDescriptor < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 15;
    goto LABEL_113;
  }
  if ( v3 )
  {
    *(_QWORD *)(v3 + 4152) = Pool2;
    *((_DWORD *)Pool2 + 16) = 1;
    goto LABEL_51;
  }
  CmRmSystem = Pool2;
  v40 = &qword_140C026A8;
  v41 = 7LL;
  while ( 2 )
  {
    v42 = v40[3];
    if ( v42 && (*(_DWORD *)(v42 + 160) & 2) == 0 )
    {
      v43 = CmRmSystem;
      ++*((_DWORD *)CmRmSystem + 16);
      v44 = v40[3];
      goto LABEL_62;
    }
    if ( *v40 && (*(_DWORD *)(*v40 + 160) & 2) == 0 )
    {
      v43 = CmRmSystem;
      ++*((_DWORD *)CmRmSystem + 16);
      v44 = *v40;
LABEL_62:
      *(_QWORD *)(v44 + 4152) = v43;
    }
    v40 += 23;
    if ( --v41 )
      continue;
    break;
  }
  v3 = v68;
  *(_QWORD *)(CmpMasterHive + 4152) = CmRmSystem;
  ++*((_DWORD *)CmRmSystem + 16);
LABEL_51:
  Pool2[10] = v3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  v38 = (_QWORD *)qword_140C13B98;
  if ( *(__int64 **)qword_140C13B98 != &CmpRmListHead )
    __fastfail(3u);
  *Pool2 = &CmpRmListHead;
  Pool2[1] = v38;
  *v38 = Pool2;
  qword_140C13B98 = (__int64)Pool2;
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v59 )
    CmpStartRMLog(Pool2, 0LL);
  return 0LL;
}
