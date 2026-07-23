/*
 * XREFs of CmFcManagerStartRuntimePhase @ 0x140B3B6E8
 * Callers:
 *     CmFcInitSystem2 @ 0x140B3A224 (CmFcInitSystem2.c)
 * Callees:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14020BC40 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAllocateTimer @ 0x14031E180 (ExAllocateTimer.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x14035CBB8 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x14035CC4C (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x140374D10 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404195A0 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140419640 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x14067FB54 (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 *     CmSiRWLockReleaseExclusive @ 0x140747848 (CmSiRWLockReleaseExclusive.c)
 *     CmSiRWLockAcquireExclusive @ 0x14074787C (CmSiRWLockAcquireExclusive.c)
 *     CmFcpCopySectionState @ 0x1407C726C (CmFcpCopySectionState.c)
 *     RtlIsStateSeparationEnabled @ 0x1407E25A0 (RtlIsStateSeparationEnabled.c)
 *     CmFcpSwapSectionState @ 0x1407EAF1C (CmFcpSwapSectionState.c)
 *     CmFcpInitializeSectionState @ 0x1407EB254 (CmFcpInitializeSectionState.c)
 *     RtlpFcSectionTypeToBufferType @ 0x1407EB2F0 (RtlpFcSectionTypeToBufferType.c)
 *     RtlpFcInitializeDelayedUsageReportBuffer @ 0x1407EB520 (RtlpFcInitializeDelayedUsageReportBuffer.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140810214 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1408102E0 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcpMapSection @ 0x1408103BC (CmFcpMapSection.c)
 *     CmFcpCleanupSectionState @ 0x140810440 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140810460 (CmFcpUnmapSection.c)
 *     RtlGetSwapReferenceIndex @ 0x140810480 (RtlGetSwapReferenceIndex.c)
 *     RtlUpdateSwapReference @ 0x140810658 (RtlUpdateSwapReference.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408106E0 (CmRegisterMachineHiveLoadedNotification.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 CmFcManagerStartRuntimePhase()
{
  __int64 *v0; // rcx
  __int64 v1; // rsi
  char v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rdx
  int SectionFromBuffer; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // r10
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned int i; // edi
  __int64 v19; // r15
  _OWORD *v20; // rbx
  _OWORD *Pool2; // rax
  __int64 v22; // r14
  __int64 v23; // rcx
  __int128 v24; // xmm1
  BOOLEAN IsStateSeparationEnabled; // al
  const WCHAR *v26; // rdx
  __int64 v27; // rbx
  void *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r14
  _DWORD *v31; // rdi
  void *v32; // rax
  __int64 v33; // rbx
  __int64 *v34; // rdi
  __int64 v35; // r14
  __int64 *v36; // rdi
  __int64 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v40[10]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v41[3]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v42[24]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v43[4]; // [rsp+E8h] [rbp-20h] BYREF

  Buffer = 0LL;
  v0 = v41;
  v1 = 3LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  v2 = 0;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (__int64 *)(v3 + 24);
  }
  while ( v4 != 1 );
  DestinationString[0] = 0LL;
  memset(v40, 0, 0x48uLL);
  byte_140C14172 = 1;
  SectionFromBuffer = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                        (__int64)L"O:SYG:SYD:(A;;GR;;;SY)(A;;GR;;;BA)(A;;GR;;;IU)(A;;GR;;;AU)(A;;GR;;;AC)(A;;GR;;;S-1-5-32"
                                  "-1045063015-423899465-3012769174-65638258-1865874412-2349348127-763856749-1075684855)("
                                  "A;;GR;;;S-1-15-3-1024-1045063015-423899465-3012769174-65638258-1865874412-2349348127-7"
                                  "63856749-1075684855)(A;;GR;;;S-1-5-80-2970612574-78537857-698502321-558674196-14516445"
                                  "82)(A;;GR;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-39683"
                                  "01570-1997628692-1435953622)(A;;GR;;;S-1-15-3-1024-1065365936-1281604716-3511738428-16"
                                  "54721687-432734479-3232135806-4053264122-3456934681)(A;;GR;;;S-1-15-3-1024-3153509613-"
                                  "960666767-3724611135-2725662640-12138253-543910227-1950414635-4190290187)",
                        1,
                        (__int64)CmFcSystemManager,
                        0LL);
  if ( SectionFromBuffer >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmSiRWLockAcquireExclusive((unsigned __int64 *)&stru_140C14030);
    RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C14090, (__int64)&Buffer, DestinationString);
    v7 = Buffer;
    v8 = v41;
    v9 = 3LL;
    do
    {
      *v8 = v7;
      v8 += 3;
      --v9;
    }
    while ( v9 );
    v10 = DestinationString[0];
    v11 = *(void **)(DestinationString[0] + 8LL);
    if ( v11 )
    {
      SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                            v11,
                            *(_QWORD *)(DestinationString[0] + 16LL),
                            v7,
                            CmFcSystemManager[0],
                            (__int64)v41);
      if ( SectionFromBuffer < 0 )
        goto LABEL_44;
      CmFcpCopySectionState((__int64)v42, (__int64)v41);
      v7 = Buffer;
    }
    v12 = *(void **)(v10 + 56);
    if ( !v12
      || (SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                                v12,
                                *(_QWORD *)(v10 + 64),
                                v7,
                                CmFcSystemManager[0],
                                (__int64)v43),
          SectionFromBuffer >= 0) )
    {
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C14090, v10);
      DestinationString[0] = 0LL;
      v13 = 0LL;
      do
      {
        v14 = RtlpFcSectionTypeToBufferType(v13);
        SectionFromBuffer = CmFcpMapSection(&v41[3 * v13], &v40[3 * v14]);
        if ( SectionFromBuffer < 0 )
          goto LABEL_49;
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < 3 );
      CmSiRWLockAcquireExclusive((unsigned __int64 *)&RunOnce);
      v15 = 0LL;
      do
      {
        CmFcpSwapSectionState((__int64 *)((char *)&CmFcSystemManager[5] + v15), (_QWORD *)((char *)v41 + v15));
        v15 = v16 + 24;
      }
      while ( v17 != 1 );
      RtlpFcBufferManagerUpdateBuffers(qword_140C14090, Buffer, (__int64)v40);
      memset(v40, 0, 0x48uLL);
      RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, Buffer);
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)&RunOnce);
      SectionFromBuffer = ZwUpdateWnfStateData(
                            &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
                            &Buffer,
                            8u,
                            &CmFcpWnfTypeId,
                            0LL,
                            0,
                            0);
      if ( SectionFromBuffer < 0 )
        goto LABEL_49;
      for ( i = 0; i < 2; ++i )
      {
        v19 = ((unsigned __int8)RtlGetSwapReferenceIndex(qword_140C14150) - 1) & 1;
        v20 = (_OWORD *)CmFcSystemManager[v19 + 43];
        Pool2 = (_OWORD *)ExAllocatePool2(64LL, 0x310uLL, 0x63466D43u);
        v22 = (__int64)Pool2;
        if ( !Pool2 )
          goto LABEL_48;
        if ( v20 )
        {
          v23 = 6LL;
          do
          {
            *Pool2 = *v20;
            Pool2[1] = v20[1];
            Pool2[2] = v20[2];
            Pool2[3] = v20[3];
            Pool2[4] = v20[4];
            Pool2[5] = v20[5];
            Pool2[6] = v20[6];
            Pool2 += 8;
            v24 = v20[7];
            v20 += 8;
            *(Pool2 - 1) = v24;
            --v23;
          }
          while ( v23 );
          *Pool2 = *v20;
        }
        else
        {
          RtlpFcInitializeDelayedUsageReportBuffer(Pool2);
        }
        CmFcSystemManager[v19 + 43] = v22;
        RtlUpdateSwapReference(qword_140C14150, v19);
      }
      qword_140C14208 = ExAllocateTimer(
                          (__int64)CmFcpManagerRetryUsageNotificationsTimerRoutine,
                          (__int64)CmFcSystemManager,
                          8u);
      if ( qword_140C14208 )
      {
        IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
        v26 = L"\\REGISTRY\\MACHINE\\OSDATA";
        if ( !IsStateSeparationEnabled )
          v26 = L"\\REGISTRY\\MACHINE\\SOFTWARE";
        RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v26);
        SectionFromBuffer = CmRegisterMachineHiveLoadedNotification(
                              (__int64)CmFcpManagerSoftwareHiveReady,
                              (__int64)CmFcSystemManager,
                              (const UNICODE_STRING *)&DestinationString[1],
                              &qword_140C14148);
        if ( SectionFromBuffer < 0 )
          goto LABEL_49;
        qword_140C145F0 = ExAllocateTimer((__int64)CmFcpManagerFlushUsageTimerRoutine, (__int64)CmFcSystemManager, 8u);
        if ( qword_140C145F0 )
        {
          qword_140C145F8 = ExAllocateTimer(
                              (__int64)CmFcpManagerPublishUsageTimerRoutine,
                              (__int64)CmFcSystemManager,
                              8u);
          if ( qword_140C145F8 )
          {
            CmSiRWLockAcquireExclusive((unsigned __int64 *)&stru_140C14568);
            v2 = 1;
            v27 = ((unsigned __int8)RtlGetSwapReferenceIndex(qword_140C14388) - 1) & 1;
            v28 = (void *)ExAllocatePool2(64LL, 0x1000uLL, 0x63466D43u);
            v29 = (__int64)v28;
            if ( !v28 )
            {
LABEL_32:
              SectionFromBuffer = -1073741670;
              goto LABEL_47;
            }
            memset(v28, 0, 0x1000uLL);
            *(_DWORD *)(v29 + 28) = 508;
            CmFcSystemManager[v27 + 159] = v29;
            RtlUpdateSwapReference(qword_140C14388, v27);
            v30 = ((_BYTE)v27 - 1) & 1;
            v31 = (_DWORD *)CmFcSystemManager[v30 + 159];
            if ( v31 )
            {
              if ( byte_140C146E8 && v31[4] )
              {
                v32 = (void *)ExAllocatePool2(64LL, 0x1000uLL, 0x63466D43u);
                v33 = (__int64)v32;
                if ( !v32 )
                  goto LABEL_32;
                memmove(v32, v31, 0x1000uLL);
                CmFcpManagerAddBufferIntoPublishListAndSetPublishState((__int64)CmFcSystemManager, v33);
                CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)CmFcSystemManager);
              }
              CmFcSystemManager[v30 + 159] = 0LL;
            }
            if ( _InterlockedExchange(&dword_140C146F0, 1) == 2 )
              CmFcpManagerPublishFeatureUsageData((__int64)CmFcSystemManager, 1);
            if ( (dword_140C146C0 & 2) != 0 )
              CmFcpManagerArmFeatureUsageProviderFlushTimer((__int64)CmFcSystemManager);
            v10 = DestinationString[0];
            SectionFromBuffer = 0;
            goto LABEL_44;
          }
        }
      }
LABEL_48:
      SectionFromBuffer = -1073741670;
LABEL_49:
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140C14030);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_50;
    }
LABEL_44:
    if ( v10 )
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C14090, v10);
    if ( v2 )
LABEL_47:
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140C14568);
    goto LABEL_49;
  }
LABEL_50:
  v34 = v40;
  v35 = 3LL;
  do
  {
    CmFcpUnmapSection((__int64)v34);
    v34 += 3;
    --v35;
  }
  while ( v35 );
  v36 = v41;
  do
  {
    CmFcpCleanupSectionState((__int64)v36);
    v36 += 3;
    --v1;
  }
  while ( v1 );
  return (unsigned int)SectionFromBuffer;
}
