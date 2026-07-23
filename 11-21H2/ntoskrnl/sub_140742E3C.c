/*
 * XREFs of sub_140742E3C @ 0x140742E3C
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x14041CFA0 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x14041D100 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x14041DD80 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x14041E5E0 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x14041E600 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140742C78 @ 0x140742C78 (sub_140742C78.c)
 *     sub_140742D8C @ 0x140742D8C (sub_140742D8C.c)
 *     sub_1407435A8 @ 0x1407435A8 (sub_1407435A8.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_14080C884 @ 0x14080C884 (sub_14080C884.c)
 *     sub_14091B960 @ 0x14091B960 (sub_14091B960.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_140742E3C(__int64 a1, char a2)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r14
  struct _ERESOURCE *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // rcx
  __int128 v15; // kr00_16
  __int64 v16; // r8
  __int128 v17; // xmm6
  void *v18; // r12
  __int64 v19; // rcx
  int v20; // esi
  UNICODE_STRING *p_Source; // rbx
  PSECURITY_DESCRIPTOR v22; // rbx
  struct _CLFS_MGMT_POLICY *v23; // rax
  struct _CLFS_MGMT_POLICY *v24; // r12
  unsigned int v25; // edx
  size_t v26; // r8
  ULONG v27; // ebx
  const void *v28; // rdx
  NTSTATUS v29; // eax
  void *v30; // rcx
  GUID v31; // xmm0
  HANDLE *v32; // rbx
  HANDLE v33; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v35; // rax
  __int64 *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  PVOID v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  void *v47; // rcx
  void *v48; // rcx
  void *v49; // rcx
  char v50; // [rsp+68h] [rbp-A0h]
  int v51; // [rsp+6Ch] [rbp-9Ch]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+80h] [rbp-88h] BYREF
  PVOID ClientCookie; // [rsp+88h] [rbp-80h] BYREF
  ULONG CreateOptions; // [rsp+90h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING LogFileName; // [rsp+B8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+C8h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-38h] BYREF
  PERESOURCE Resource; // [rsp+100h] [rbp-8h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+108h] [rbp+0h] BYREF
  PVOID Object[2]; // [rsp+148h] [rbp+40h] BYREF
  UUID Uuid; // [rsp+158h] [rbp+50h] BYREF
  GUID ResourceManagerGuid; // [rsp+168h] [rbp+60h] BYREF
  __int128 v66; // [rsp+178h] [rbp+70h]

  v50 = a2;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v66 = 0LL;
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
  v51 = 0;
  if ( byte_140D3B01B )
    return 0LL;
  v5 = qword_140C02770;
  if ( a1 )
    v5 = a1;
  if ( (*(_DWORD *)(v5 + 160) & 0x8001) != 0 )
    return 0LL;
  v7 = sub_1407435A8((UUID *)Object);
  if ( v7 < 0 || (v7 = sub_1407435A8(&Uuid), v7 < 0) )
  {
    *(_DWORD *)(v5 + 4160) = 1;
    *(_DWORD *)(v5 + 4164) = v7;
    sub_14091B960(v6, v5, (unsigned int)v7);
    return (unsigned int)v7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x6D524D43u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v5 + 4160) = 1;
LABEL_69:
    v20 = -1073741670;
    *(_DWORD *)(v5 + 4164) = -1073741670;
    sub_14091B960(v9, v5, 3221225626LL);
    return (unsigned int)v20;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C724D43u);
  v11 = Resource;
  if ( !Resource )
  {
    ExFreePoolWithTag(v10, 0x6D524D43u);
    *(_DWORD *)(v5 + 4160) = 2;
    goto LABEL_69;
  }
  v10[11] = 0LL;
  v10[3] = v10 + 2;
  v10[2] = v10 + 2;
  v10[12] = 0LL;
  *((_DWORD *)v10 + 26) = a2 != 0 ? 4 : 0;
  *(_QWORD *)((char *)v10 + 108) = 0LL;
  *((_DWORD *)v10 + 17) = 0;
  v10[9] = 0LL;
  v10[16] = v11;
  ExInitializeResourceLite(v11);
  v14 = *(char **)(v5 + 64);
  if ( *((_DWORD *)v14 + 41) != 1836346738 )
  {
    v17 = *(_OWORD *)Object;
    *((_DWORD *)v14 + 41) = 1836346738;
    goto LABEL_87;
  }
  v15 = v66;
  v16 = v66 - *(_QWORD *)(v14 + 148);
  if ( (_QWORD)v66 == *(_QWORD *)(v14 + 148) )
    v16 = *((_QWORD *)&v66 + 1) - *(_QWORD *)(v14 + 156);
  if ( !v16 )
  {
    v51 = 1;
    v4 = 1;
    *(UUID *)(v14 + 148) = Uuid;
    v14 = *(char **)(v5 + 64);
  }
  v13 = v15 - *((_QWORD *)v14 + 14);
  if ( (_QWORD)v15 == *((_QWORD *)v14 + 14) )
    v13 = *((_QWORD *)&v15 + 1) - *((_QWORD *)v14 + 15);
  v17 = *(_OWORD *)Object;
  if ( !v13 )
  {
    *((_OWORD *)v14 + 7) = *(_OWORD *)Object;
    v14 = *(char **)(v5 + 64);
    v4 = 1;
  }
  v12 = v15 - *((_QWORD *)v14 + 16);
  if ( !v12 )
    v12 = *((_QWORD *)&v15 + 1) - *((_QWORD *)v14 + 17);
  if ( !v12 )
  {
    v4 = 1;
    *((_OWORD *)v14 + 8) = *((_OWORD *)v14 + 7);
  }
  while ( 1 )
  {
    if ( v4 )
    {
      sub_140AB4370(v14, v12, v13);
      ExAcquirePushLockSharedEx(v5 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(v5 + 80, 0LL);
      sub_1406CA514(v5);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 80);
      sub_1402AFC00(v5 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v5 + 72));
      sub_1402AFC00(v5 + 72);
      sub_140AB4260(v43, v42, v44, v45);
      v17 = *(_OWORD *)Object;
    }
    v18 = *(void **)(v5 + 1544);
    LOBYTE(v13) = 1;
    v20 = sub_1407454A8(*(_QWORD *)(v5 + 64) + 148LL, &UnicodeString, v13);
    if ( v20 < 0 )
    {
      *(_DWORD *)(v5 + 4160) = 3;
      goto LABEL_103;
    }
    if ( a1 )
    {
      v20 = sub_140742C78(*(void **)(a1 + 1544), &Source);
      if ( v20 < 0 )
      {
        *(_DWORD *)(v5 + 4160) = 4;
        goto LABEL_103;
      }
      p_Source = &Source;
    }
    else
    {
      p_Source = (UNICODE_STRING *)&stru_1400020D8;
      CreateOptions = 52;
    }
    Destination.MaximumLength = UnicodeString.Length + stru_140C02F30.Length + stru_140C02F20.Length + p_Source->Length;
    Destination.Buffer = (wchar_t *)sub_1406BE560(Destination.MaximumLength);
    if ( !Destination.Buffer )
    {
      v20 = -1073741670;
      *(_DWORD *)(v5 + 4160) = 5;
LABEL_103:
      sub_14091B960(v19, v5, (unsigned int)v20);
      if ( ClientCookie )
      {
        ClfsMgmtDeregisterManagedClient(ClientCookie);
        ClientCookie = 0LL;
      }
      if ( pplfoLog )
        ClfsCloseLogFileObject(pplfoLog);
      if ( UnicodeString.Buffer )
        RtlFreeUnicodeString(&UnicodeString);
      if ( Source.Buffer )
        RtlFreeUnicodeString(&Source);
      if ( Destination.Buffer )
        RtlFreeUnicodeString(&Destination);
      v47 = (void *)v10[6];
      if ( v47 )
        ZwClose(v47);
      v48 = (void *)v10[5];
      if ( v48 )
        ObfDereferenceObject(v48);
      v49 = (void *)v10[4];
      if ( v49 )
        ZwClose(v49);
      ExFreePoolWithTag(v10, 0x6D524D43u);
      ExDeleteResourceLite(Resource);
      ExFreePoolWithTag(Resource, 0);
      *(_DWORD *)(v5 + 4164) = v20;
      return (unsigned int)v20;
    }
    RtlAppendUnicodeStringToString(&Destination, &stru_140C02F30);
    RtlAppendUnicodeStringToString(&Destination, p_Source);
    RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
    RtlAppendUnicodeStringToString(&Destination, &stru_140C02F20);
    RtlFreeUnicodeString(&UnicodeString);
    if ( a1 )
      RtlFreeUnicodeString(&Source);
    v20 = sub_140742D8C(v18, &P);
    if ( v20 < 0 )
    {
      *(_DWORD *)(v5 + 4160) = 6;
      goto LABEL_103;
    }
    v22 = P;
    v20 = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0000000, 7u, P, 3u, 8u, 0, 0x200u, 0LL, 0);
    ExFreePoolWithTag(v22, 0);
    if ( v20 >= 0 )
      break;
    if ( v51 )
    {
      *(_DWORD *)(v5 + 4160) = 7;
      goto LABEL_103;
    }
    RtlFreeUnicodeString(&Destination);
    sub_14091B960(v46, v5, (unsigned int)v20);
LABEL_87:
    v4 = 1;
    v51 = 1;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 148LL) = Uuid;
    *(_OWORD *)(*(_QWORD *)(v5 + 64) + 112LL) = v17;
    *(_OWORD *)(*(_QWORD *)(v5 + 64) + 128LL) = v17;
    if ( !a1 )
      v50 = 1;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  v20 = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 8;
    goto LABEL_103;
  }
  v23 = (struct _CLFS_MGMT_POLICY *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)word_140C06A70 + 24LL,
                                      0x6D524D43u);
  v24 = v23;
  if ( !v23 )
  {
    *(_DWORD *)(v5 + 4160) = 9;
    goto LABEL_103;
  }
  v25 = (unsigned __int16)word_140C06A70;
  *(_OWORD *)&v23->Version = 0LL;
  v23->PolicyParameters.NewContainerSuffix.NextContainerSuffix = 0LL;
  v26 = v25;
  v27 = v25 + 24;
  v23->PolicyParameters.NewContainerPrefix.PrefixLengthInBytes = v25;
  v28 = off_140C06A78;
  v23->LengthInBytes = v27;
  v23->Version = 1;
  v23->PolicyType = ClfsMgmtPolicyNewContainerExtension;
  memmove((char *)&v23->PolicyParameters + 2, v28, v26);
  v20 = ClfsMgmtInstallPolicy(pplfoLog, v24, v27);
  ExFreePoolWithTag(v24, 0);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 10;
    goto LABEL_103;
  }
  LogFileName.Length = Destination.Length - stru_140C02F30.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination.MaximumLength - stru_140C02F30.Length;
  LogFileName.Buffer = (wchar_t *)((char *)Destination.Buffer + stru_140C02F30.Length);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v29 = ZwCreateTransactionManager((PHANDLE)v10 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions, 0);
  v20 = v29;
  if ( v29 == -1073741771 )
  {
    if ( Destination.Buffer )
      RtlFreeUnicodeString(&Destination);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    v14 = (char *)ClientCookie;
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( v51 )
      goto LABEL_38;
    goto LABEL_87;
  }
  if ( v29 >= 0 )
    v20 = ZwRecoverTransactionManager((HANDLE)v10[4]);
LABEL_38:
  RtlFreeUnicodeString(&Destination);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 11;
    goto LABEL_103;
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
  v30 = (void *)v10[4];
  Object[0] = 0LL;
  v20 = ObReferenceObjectByHandle(v30, 0xF003Fu, (POBJECT_TYPE)TmTransactionManagerObjectType, 0, Object, 0LL);
  v10[5] = Object[0];
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 12;
    goto LABEL_103;
  }
  v31 = *(GUID *)(*(_QWORD *)(v5 + 64) + 112LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  v32 = (HANDLE *)(v10 + 6);
  ResourceManagerGuid = v31;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v20 = ZwCreateResourceManager(
          (PHANDLE)v10 + 6,
          0x1F007Fu,
          (HANDLE)v10[4],
          &ResourceManagerGuid,
          &ObjectAttributes,
          0,
          0LL);
  if ( v20 == -1073741771 )
    v20 = ZwOpenResourceManager((PHANDLE)v10 + 6, 0x1F007Fu, (HANDLE)v10[4], &ResourceManagerGuid, &ObjectAttributes);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 13;
    goto LABEL_103;
  }
  v20 = ZwRecoverResourceManager(*v32);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 14;
    goto LABEL_103;
  }
  v33 = *v32;
  Object[0] = 0LL;
  v20 = ObReferenceObjectByHandle(v33, 0x1F007Fu, (POBJECT_TYPE)TmResourceManagerObjectType, 0, Object, 0LL);
  v10[7] = Object[0];
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 15;
    goto LABEL_103;
  }
  if ( a1 )
  {
    *(_QWORD *)(a1 + 4152) = v10;
    *((_DWORD *)v10 + 16) = 1;
    goto LABEL_51;
  }
  RMKey = v10;
  v37 = &qword_140C02548;
  v38 = 7LL;
  while ( 2 )
  {
    v39 = v37[3];
    if ( v39 && (*(_DWORD *)(v39 + 160) & 2) == 0 )
    {
      v40 = RMKey;
      ++*((_DWORD *)RMKey + 16);
      v41 = v37[3];
      goto LABEL_62;
    }
    if ( *v37 && (*(_DWORD *)(*v37 + 160) & 2) == 0 )
    {
      v40 = RMKey;
      ++*((_DWORD *)RMKey + 16);
      v41 = *v37;
LABEL_62:
      *(_QWORD *)(v41 + 4152) = v40;
    }
    v37 += 23;
    if ( --v38 )
      continue;
    break;
  }
  *(_QWORD *)(qword_140D3CA28 + 4152) = RMKey;
  ++*((_DWORD *)RMKey + 16);
LABEL_51:
  v10[10] = a1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&dword_140C48F20);
  v35 = (_QWORD *)qword_140C48F08;
  if ( *(__int64 **)qword_140C48F08 != &qword_140C48F00 )
    __fastfail(3u);
  *v10 = &qword_140C48F00;
  v10[1] = v35;
  *v35 = v10;
  qword_140C48F08 = (__int64)v10;
  ExReleaseFastMutexUnsafe(&dword_140C48F20);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v50 )
    sub_14080C884(v10, 0LL);
  return 0LL;
}
