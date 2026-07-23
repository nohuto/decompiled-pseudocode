/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x14080B1E0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     RtlAppendUnicodeToString @ 0x14022A970 (RtlAppendUnicodeToString.c)
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F65DC (CmpRecheckHiveVolumePolicy.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140374584 (CmpNotifyMachineHiveLoaded.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     TmEnableCallbacks @ 0x1403D8690 (TmEnableCallbacks.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpAddToHiveFileList @ 0x1407E5134 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1407E89F8 (CmRmFinalizeRecovery.c)
 *     CmpLinkKeyToHive @ 0x14080BA58 (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x14080BD58 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080C3E0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInterlockedFunction @ 0x14080CAA4 (CmpInterlockedFunction.c)
 *     CmpLoadSystemVersionData @ 0x14080D380 (CmpLoadSystemVersionData.c)
 *     ExpRefreshSystemTime @ 0x14083EDF4 (ExpRefreshSystemTime.c)
 *     PsBootPhaseComplete @ 0x1408546BC (PsBootPhaseComplete.c)
 *     CmpCreatePerfKeys @ 0x14085D550 (CmpCreatePerfKeys.c)
 *     CmpMountPreloadedHives @ 0x1408632EC (CmpMountPreloadedHives.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AF506C (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpFinishSystemHivesLoad(PRKEVENT Event)
{
  char v2; // r12
  __int64 v3; // rcx
  __int16 v4; // r14
  __int64 v5; // rdx
  WCHAR v6; // ax
  __int16 v7; // r14
  struct _KWAIT_BLOCK *WaitBlockArray; // r15
  PVOID *v9; // rbx
  __int64 v10; // rsi
  PPRIVILEGE_SET v11; // rcx
  char *v12; // rdx
  __int64 v13; // r8
  unsigned __int64 *v14; // rdi
  unsigned int v15; // r15d
  unsigned __int64 *v16; // rbx
  char v17; // al
  const WCHAR *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  signed __int64 v27; // rdx
  ULONG_PTR v28; // rtt
  PVOID v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rsi
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  unsigned __int64 v35; // rtt
  const WCHAR *v36; // rdx
  const WCHAR *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rsi
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  unsigned __int64 v42; // rtt
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  char v47; // si
  __int64 v48; // rax
  __int64 v49; // rsi
  signed __int64 v50; // rax
  signed __int64 v51; // rdx
  unsigned __int64 v52; // rtt
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // al
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int j; // ebx
  __int64 v63; // rax
  __int64 v64; // rsi
  signed __int64 v65; // rax
  signed __int64 v66; // rdx
  unsigned __int64 v67; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v70; // rdx
  ULONG_PTR v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned int i; // ebx
  __int64 v75; // rax
  __int64 v76; // rsi
  signed __int64 v77; // rax
  signed __int64 v78; // rdx
  unsigned __int64 v79; // rtt
  char v80; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  _WORD *v82; // [rsp+80h] [rbp-88h]
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-78h]
  PPRIVILEGE_SET Pool; // [rsp+98h] [rbp-70h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v87; // [rsp+D0h] [rbp-38h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v88; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v89[27]; // [rsp+118h] [rbp+10h] BYREF
  _WORD v90[64]; // [rsp+2C8h] [rbp+1C0h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&v88, 0, sizeof(v88));
  v87 = 0LL;
  CmpInitializeThreadInfo((__int64)&v87);
  memset(v89, 0, sizeof(v89));
  BYTE1(NlsMbOemCodePageTag) = 0;
  Destination.Buffer = (wchar_t *)0x800000;
  CmpMountThread = (__int64)KeGetCurrentThread();
  v82 = v90;
  v3 = 0x7FFFLL;
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( !v3 )
      break;
    v6 = aRegistry_1[v5];
    if ( !v6 )
      break;
    --v3;
    v90[v5++] = v6;
    ++v4;
  }
  while ( v3 != 32703 );
  v7 = 2 * v4;
  LOWORD(Destination.Buffer) = v7;
  Privileges = (PPRIVILEGE_SET)CmpAllocatePool(64LL, 336LL, 538987843LL);
  WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
  if ( !Privileges )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  Pool = (PPRIVILEGE_SET)CmpAllocatePool(64LL, 56LL, 538987843LL);
  v9 = (PVOID *)Pool;
  if ( !Pool )
    KeBugCheckEx(0x74u, 2uLL, 6uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v10 = CmpHiveRootSecurityDescriptor();
  *(_QWORD *)&Destination.Length = v10;
  v11 = Pool;
  v12 = (char *)&unk_140C026E8;
  v13 = 7LL;
  do
  {
    *(_QWORD *)&v11->PrivilegeCount = v12;
    v12 += 184;
    v11 = (PPRIVILEGE_SET)((char *)v11 + 8);
    --v13;
  }
  while ( v13 );
  if ( !Event )
  {
    KeWaitForSingleObject(&stru_140C02910, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140C02910, 0, 0);
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v88);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess(&v88);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  v14 = &qword_140C02718;
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, v9, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v80 = 0;
    v15 = 0;
    v16 = &qword_140C02718;
    do
    {
      if ( !*((_BYTE *)v16 - 80) )
      {
        if ( !*((_BYTE *)v16 - 79) )
        {
          v17 = 1;
          v80 = 1;
          goto LABEL_18;
        }
        v18 = (const WCHAR *)*(v16 - 16);
        LOWORD(Destination.Buffer) = v7;
        RtlAppendUnicodeToString((PUNICODE_STRING)&Destination.Buffer, v18);
        RtlAppendUnicodeToString((PUNICODE_STRING)&Destination.Buffer, (PCWSTR)*(v16 - 15));
        CmpLockRegistryExclusive();
        if ( !*(v16 - 14) )
        {
          v20 = *(v16 - 11);
          if ( v20 )
          {
            v22 = CmpLinkHiveToMaster(
                    (__int64)&Destination.Buffer,
                    0LL,
                    v20,
                    *((_BYTE *)v16 - 77),
                    *((_DWORD *)v16 - 24),
                    0,
                    0LL,
                    v10,
                    0LL,
                    0LL,
                    1,
                    v89);
            if ( v22 < 0 )
            {
              if ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v22) )
                KeBugCheckEx(0x73u, 1uLL, v71, v15, (ULONG_PTR)&Destination.Buffer);
              CmpLoadingSystemHivesActive = 0;
              CmpMountThread = 0LL;
              CmpUnlockRegistry(v71, v70, v72, v73);
              for ( i = 0; i < 7; ++i )
              {
                if ( *((_DWORD *)v14 - 17) && !*((_BYTE *)v14 - 80) )
                {
                  if ( !*((_BYTE *)v14 - 79) )
                    KeWaitForSingleObject(v14 - 6, Executive, 0, 0, 0LL);
                  v75 = KeAbPreAcquire((__int64)v14, 0LL);
                  v76 = v75;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
                    ExfAcquirePushLockExclusiveEx(v14, v75, (__int64)v14);
                  if ( v76 )
                    *(_BYTE *)(v76 + 18) = 1;
                  KeSetEvent((PRKEVENT)v14 - 1, 0, 0);
                  CmpNotifyMachineHiveLoaded(i);
                  _m_prefetchw(v14);
                  v77 = *v14;
                  v78 = *v14 - 16;
                  if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v78 = 0LL;
                  if ( (v77 & 2) != 0
                    || (v79 = *v14, v79 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v78, v77)) )
                  {
                    ExfReleasePushLock(v14);
                  }
                  KeAbPostRelease((ULONG_PTR)v14);
                }
                v14 += 23;
              }
              goto LABEL_106;
            }
            v23 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
            v24 = v23;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
              ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v23, (__int64)&CmpHiveListHeadLock);
            if ( v24 )
              *(_BYTE *)(v24 + 18) = 1;
            v25 = (_QWORD *)qword_140D54C70;
            v26 = (_QWORD *)(*(v16 - 11) + 1608);
            if ( *(__int64 **)qword_140D54C70 != &CmpHiveListHead )
              __fastfail(3u);
            *v26 = &CmpHiveListHead;
            v26[1] = v25;
            *v25 = v26;
            qword_140D54C70 = (__int64)v26;
            _m_prefetchw(&CmpHiveListHeadLock);
            v27 = CmpHiveListHeadLock - 16;
            if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v27 = 0LL;
            if ( (CmpHiveListHeadLock & 2) != 0
              || (v28 = CmpHiveListHeadLock,
                  v28 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpHiveListHeadLock,
                           v27,
                           CmpHiveListHeadLock)) )
            {
              ExfReleasePushLock(&CmpHiveListHeadLock);
            }
            KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
            CmpRecheckHiveVolumePolicy(*(v16 - 11));
            if ( *((_BYTE *)v16 - 77) )
            {
              *(_DWORD *)(*(v16 - 11) + 160) |= 0x20u;
              CurrentThread = KeGetCurrentThread();
              *(_QWORD *)(*(v16 - 11) + 4168) = CurrentThread;
              CmpUnlockRegistry(CurrentThread, v19, v20, v21);
              CmpFlushHive(*(v16 - 11), 4u);
              CmpLockRegistryExclusive();
              *(_DWORD *)(*(v16 - 11) + 160) &= ~0x20u;
              *(_QWORD *)(*(v16 - 11) + 4168) = 0LL;
            }
            v29 = CmRmSystem;
            if ( CmRmSystem )
            {
              v19 = *(v16 - 11);
              if ( (*(_DWORD *)(v19 + 160) & 2) == 0 && !*(_QWORD *)(v19 + 4152) )
              {
                ++*((_DWORD *)CmRmSystem + 16);
                *(_QWORD *)(*(v16 - 11) + 4152) = v29;
              }
            }
          }
        }
        v30 = *(v16 - 11);
        if ( v30 )
          CmpAddToHiveFileList(v30);
        *((_BYTE *)v16 - 80) = 1;
        switch ( v15 )
        {
          case 3u:
            if ( !Event )
            {
              CmpMountPreloadedHives();
              CmpInterlockedFunction();
              v38 = KeAbPreAcquire((__int64)v16, 0LL);
              v39 = v38;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
                ExfAcquirePushLockExclusiveEx(v16, v38, (__int64)v16);
              if ( v39 )
                *(_BYTE *)(v39 + 18) = 1;
              KeSetEvent((PRKEVENT)v16 - 1, 0, 0);
              CmpNotifyMachineHiveLoaded(3LL);
              _m_prefetchw(v16);
              v40 = *v16;
              v41 = *v16 - 16;
              if ( (*v16 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v41 = 0LL;
              if ( (v40 & 2) != 0
                || (v42 = *v16, v42 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v41, v40)) )
              {
                ExfReleasePushLock(v16);
              }
              KeAbPostRelease((ULONG_PTR)v16);
              v47 = 1;
              if ( byte_140C02838 && CmFastBoot )
              {
                CmpUnlockRegistry(v44, v43, v45, v46);
                v47 = 0;
                ExpRefreshSystemTime();
                PsBootPhaseComplete();
              }
              CmpLoadSystemVersionData();
              v2 = 1;
              if ( !v47 )
                goto LABEL_15;
            }
            goto LABEL_45;
          case 2u:
            CmpUnlockRegistry(v30, v19, v20, v21);
            if ( !Event )
            {
              v48 = KeAbPreAcquire((__int64)v16, 0LL);
              v49 = v48;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
                ExfAcquirePushLockExclusiveEx(v16, v48, (__int64)v16);
              if ( v49 )
                *(_BYTE *)(v49 + 18) = 1;
              KeSetEvent((PRKEVENT)v16 - 1, 0, 0);
              v2 = 1;
              CmpNotifyMachineHiveLoaded(2LL);
              _m_prefetchw(v16);
              v50 = *v16;
              v51 = *v16 - 16;
              if ( (*v16 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v51 = 0LL;
              if ( (v50 & 2) != 0
                || (v52 = *v16, v52 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v51, v50)) )
              {
                ExfReleasePushLock(v16);
              }
              KeAbPostRelease((ULONG_PTR)v16);
              if ( byte_140C028F0 && CmFastBoot )
              {
                ExpRefreshSystemTime();
                PsBootPhaseComplete();
              }
              CmpSetVersionData();
            }
            CmpCreatePerfKeys();
LABEL_46:
            if ( !Event && !v2 )
            {
              v31 = KeAbPreAcquire((__int64)v16, 0LL);
              v32 = v31;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
                ExfAcquirePushLockExclusiveEx(v16, v31, (__int64)v16);
              v2 = 0;
              if ( v32 )
                *(_BYTE *)(v32 + 18) = 1;
              KeSetEvent((PRKEVENT)v16 - 1, 0, 0);
              CmpNotifyMachineHiveLoaded(v15);
              _m_prefetchw(v16);
              v33 = *v16;
              v34 = *v16 - 16;
              if ( (*v16 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v34 = 0LL;
              if ( (v33 & 2) != 0
                || (v35 = *v16, v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v34, v33)) )
              {
                ExfReleasePushLock(v16);
              }
              KeAbPostRelease((ULONG_PTR)v16);
              goto LABEL_16;
            }
LABEL_15:
            v2 = 0;
LABEL_16:
            v10 = *(_QWORD *)&Destination.Length;
            goto LABEL_17;
          case 1u:
            v36 = L"\\Registry\\Machine\\SAM\\SAM";
            v37 = L"\\Registry\\Machine\\Security\\SAM";
            break;
          case 4u:
            v36 = L"\\Registry\\User\\.Default";
            v37 = L"\\Registry\\User\\S-1-5-18";
            break;
          default:
LABEL_45:
            CmpUnlockRegistry(v30, v19, v20, v21);
            goto LABEL_46;
        }
        CmpLinkKeyToHive(v37, v36);
        goto LABEL_45;
      }
LABEL_17:
      v17 = v80;
LABEL_18:
      ++v15;
      v16 += 23;
    }
    while ( v15 < 7 );
    if ( v17 )
    {
      v9 = (PVOID *)Pool;
      WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
      continue;
    }
    break;
  }
  CmpLockRegistryExclusive();
  CmpSpecialBootCondition = 0;
  if ( CmpShareSystemHives || (v57 = 1, CmVEEnabled != 1) )
    v57 = 0;
  CmpVEEnabled = v57;
  CmpUnlockRegistry(v54, v53, v55, v56);
  if ( Event )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v88);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess(&v88);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry(v59, v58, v60, v61);
    for ( j = 0; j < 7; ++j )
    {
      v63 = KeAbPreAcquire((__int64)v14, 0LL);
      v64 = v63;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
        ExfAcquirePushLockExclusiveEx(v14, v63, (__int64)v14);
      if ( v64 )
        *(_BYTE *)(v64 + 18) = 1;
      KeSetEvent((PRKEVENT)v14 - 1, 0, 0);
      CmpNotifyMachineHiveLoaded(j);
      _m_prefetchw(v14);
      v65 = *v14;
      v66 = *v14 - 16;
      if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v66 = 0LL;
      if ( (v65 & 2) != 0
        || (v67 = *v14, v67 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v66, v65)) )
      {
        ExfReleasePushLock(v14);
      }
      KeAbPostRelease((ULONG_PTR)v14);
      v14 += 23;
    }
    if ( CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    CmpLoadSystemVersionData();
    CmpSetVersionData();
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
    ZwClose(KeyHandle);
LABEL_106:
  CmpSpecialBootCondition = 0;
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
  if ( Event )
    KeSetEvent(Event, 0, 0);
  if ( *(_QWORD *)&Destination.Length )
    ExFreePoolWithTag(*(PVOID *)&Destination.Length, 0);
  CmSiFreeMemory(Privileges);
  CmSiFreeMemory(Pool);
  return CmCleanupThreadInfo((__int64 *)&v87);
}
