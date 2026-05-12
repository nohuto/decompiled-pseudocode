/*
 * XREFs of StorPortExtendedFunction @ 0x1C000CEF0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterAcquireStartIoLock @ 0x1C000BC24 (RaidAdapterAcquireStartIoLock.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C000CD68 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C000CE60 (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     RaidGetStartIoPerfParams @ 0x1C000F3F0 (RaidGetStartIoPerfParams.c)
 *     StorpRequestTimer @ 0x1C000F4E0 (StorpRequestTimer.c)
 *     StorDelayExecution @ 0x1C000F644 (StorDelayExecution.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C00112B8 (RaidAdapterAcquireInterruptLock.c)
 *     StorpGetActiveNodeCount @ 0x1C001898C (StorpGetActiveNodeCount.c)
 *     StorEtwMiniportEventProxy @ 0x1C0019370 (StorEtwMiniportEventProxy.c)
 *     RaidNtStatusToStorStatus @ 0x1C00194BC (RaidNtStatusToStorStatus.c)
 *     StorpAllocatePool @ 0x1C001E118 (StorpAllocatePool.c)
 *     StorpFreePool @ 0x1C001E294 (StorpFreePool.c)
 *     RaidGetD3ColdInterface @ 0x1C002026C (RaidGetD3ColdInterface.c)
 *     StorpAcquireMSISpinLock @ 0x1C0021E48 (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C0021EC4 (StorpReleaseMSISpinLock.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0024DC8 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidInitializeCryptoEngine @ 0x1C0039F00 (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOpts @ 0x1C003A044 (RaidInitializePerfOpts.c)
 *     RaidInitializeRpmb @ 0x1C003B110 (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B960 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003C4B8 (WPP_SF_d.c)
 *     ExtensionExtendedFuncPost @ 0x1C003E76C (ExtensionExtendedFuncPost.c)
 *     ExtensionExtendedFuncPre @ 0x1C003E7C0 (ExtensionExtendedFuncPre.c)
 *     ExtensionExtendedFuncReplace @ 0x1C003E814 (ExtensionExtendedFuncReplace.c)
 *     ExtensionSendMiniportData @ 0x1C003E868 (ExtensionSendMiniportData.c)
 *     RaMiniportSaveFeatureList @ 0x1C00410A8 (RaMiniportSaveFeatureList.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00411FC (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C0041E2C (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0042078 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0042200 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C0042404 (StorBuildScatterGatherListProxy.c)
 *     StorEtwMiniportLogError @ 0x1C00424D0 (StorEtwMiniportLogError.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0044284 (StorPortpInvokeAcpiMethod.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0044368 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorReset @ 0x1C0044438 (StorReset.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00446A8 (StorpAdapterInitializePoFxPower.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C00449E8 (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C0044A60 (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C0044E84 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0044FDC (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C0045228 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C0045288 (StorpFlushDataBufferMdl.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C00452F0 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C00453C4 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C0045484 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C004570C (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C0045914 (StorpGetDataInSgList.c)
 *     StorpGetDeviceObjects @ 0x1C00459A8 (StorpGetDeviceObjects.c)
 *     StorpGetGroupAffinity @ 0x1C0045C7C (StorpGetGroupAffinity.c)
 *     StorpGetMSIInfo @ 0x1C0045CD8 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C0045DC4 (StorpGetOriginalMdl.c)
 *     StorpGetRequestInfo @ 0x1C0045E44 (StorpGetRequestInfo.c)
 *     StorpGetSystemAddress @ 0x1C00460A0 (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C0046240 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C00463D4 (StorpInitializeWorkItem.c)
 *     StorpLogSystemEvent @ 0x1C0046524 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C0046F7C (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C00470B0 (StorpQueueWorkItem.c)
 *     StorpSetUnitAttributes @ 0x1C0047248 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C00472D0 (StorpUnitInitializePoFxPower.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C0048AF0 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidGetD3ColdCapability @ 0x1C00491BC (RaidGetD3ColdCapability.c)
 *     RaidRegisterPerfStates @ 0x1C0049B50 (RaidRegisterPerfStates.c)
 *     RaValidateMiniportSystemThreadPriority @ 0x1C004DF20 (RaValidateMiniportSystemThreadPriority.c)
 *     RaidCaptureLiveDump @ 0x1C004E240 (RaidCaptureLiveDump.c)
 *     RaidMaskUnmaskPciMsixEntry @ 0x1C004ED34 (RaidMaskUnmaskPciMsixEntry.c)
 *     StorEtwMiniportLogByteStream @ 0x1C005BA78 (StorEtwMiniportLogByteStream.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C005F7A0 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0062378 (StorpTelemetryMiniportEvent.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        unsigned int a1,
        __int64 a2,
        KSPIN_LOCK *a3,
        unsigned __int64 a4,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *a5,
        GUID *a6,
        PHYSICAL_ADDRESS a7,
        PHYSICAL_ADDRESS a8,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // r13d
  __int64 v12; // r15
  unsigned int Pool; // edi
  __int64 Adapter; // r14
  __int64 v15; // r12
  __int64 v16; // rbx
  PDEVICE_OBJECT v18; // rcx
  unsigned int v19; // eax
  unsigned __int32 v20; // r11d
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  struct _KDPC *v23; // rbx
  struct _KDPC *v24; // rbx
  LPGUID v25; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  int v27; // ecx
  unsigned int LockArray_high; // eax
  int v29; // ecx
  struct _KDPC *v30; // rbx
  NTSTATUS LogicalProcessorRelationship; // eax
  KSPIN_LOCK ProcessorHistory; // rcx
  KSPIN_LOCK SystemArgument2; // rcx
  LPGUID v34; // rbx
  LPGUID v35; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v36; // rbx
  LPGUID v37; // rbx
  int v38; // eax
  LARGE_INTEGER *v39; // rbx
  union _LARGE_INTEGER *v40; // rcx
  struct _KDPC *v41; // rbx
  LPGUID v42; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v43; // rsi
  int v44; // r12d
  struct _KDPC *v45; // r13
  int v46; // esi
  char v47; // al
  KIRQL CurrentIrql; // r15
  __int64 Unit; // rax
  __int64 v50; // rsi
  unsigned int v51; // eax
  unsigned int v52; // eax
  struct _KDPC *v53; // r13
  unsigned int v54; // r12d
  int v55; // esi
  __int64 v56; // rsi
  struct _KDPC *v57; // rbx
  unsigned int v58; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v59; // rsi
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  _QWORD *v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rcx
  __int64 v66; // rax
  struct _KDPC *v67; // rbx
  unsigned int v68; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v69; // rsi
  __int64 v70; // rax
  _QWORD *v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rcx
  __int64 v74; // rax
  struct _KDPC *v75; // rbx
  LPGUID v76; // r12
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v77; // r13
  _QWORD *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rbx
  unsigned int v81; // eax
  _QWORD *v82; // rcx
  unsigned int v83; // eax
  unsigned int v84; // ebx
  int v85; // ecx
  int v86; // r8d
  int v87; // r10d
  int v88; // r11d
  unsigned int v89; // ebx
  __int64 QuadPart; // rdi
  __int64 v91; // rax
  unsigned int v92; // r13d
  unsigned int v93; // ebx
  unsigned int v94; // r12d
  KIRQL v95; // al
  __int64 v96; // r10
  unsigned int v97; // ecx
  LPGUID v98; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v99; // rsi
  LPGUID v100; // rbx
  __int64 v101; // rax
  struct _DEVICE_OBJECT *v102; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v103; // r10
  LPGUID v104; // rdx
  __int64 v105; // r11
  KSPIN_LOCK DeferredContext; // rcx
  int v107; // ecx
  LPGUID v108; // rdi
  unsigned int v109; // esi
  KSPIN_LOCK v110; // rbx
  KSPIN_LOCK v111; // rcx
  unsigned int v112; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v113; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v114; // rbx
  LPGUID v115; // rbx
  LPGUID v116; // r8
  KSPIN_LOCK v117; // rdx
  LPGUID v118; // r10
  struct _KDPC *v119; // r11
  unsigned int Data1; // eax
  unsigned int v121; // eax
  int v122; // r10d
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v123; // rbx
  __int64 Timer; // rax
  _BYTE *v125; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v126; // rbx
  char v127; // al
  _BYTE *v128; // rbx
  _DWORD **v129; // rax
  int v130; // ecx
  LPGUID v131; // r13
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v132; // rbx
  _DWORD *v133; // rsi
  int v134; // ecx
  int v135; // ecx
  int v136; // ecx
  int v137; // ecx
  LPGUID v138; // rbx
  union _LARGE_INTEGER *Timeout; // rbx
  PKSPIN_LOCK p_TargetInfoAsUlong; // rdi
  BOOLEAN v141; // r15
  NTSTATUS v142; // eax
  struct _KEVENT *v143; // rbx
  LPGUID v144; // r10
  LPGUID v145; // rbx
  unsigned int v146; // eax
  unsigned int LowPart; // ecx
  char v148; // dl
  int v149; // edi
  int v150; // r12d
  PULONG v151; // r10
  __int64 v152; // r13
  int v153; // ebx
  __int64 v154; // r11
  struct _KDPC_WATCHDOG_INFORMATION *v155; // rsi
  KIRQL v156; // bl
  NTSTATUS DpcWatchdogInformation; // esi
  unsigned __int8 v158; // r10
  unsigned int v159; // eax
  struct _KDPC *v160; // rbx
  KSTART_ROUTINE *StartRoutine; // rbx
  LPGUID StartContext; // r15
  KPRIORITY *v163; // rdi
  PULONG v164; // rsi
  NTSTATUS v165; // eax
  void *v166; // rcx
  NTSTATUS v167; // ebx
  PKSPIN_LOCK v168; // rdi
  unsigned int v169; // ebx
  NTSTATUS v170; // edi
  struct _GROUP_AFFINITY *v171; // rbx
  struct _GROUP_AFFINITY *v172; // rdi
  struct _GROUP_AFFINITY *v173; // rbx
  struct _KDPC *v174; // rbx
  LPGUID v175; // rdi
  __int64 v176; // r12
  PULONG v177; // rsi
  int v178; // eax
  unsigned int v180; // [rsp+54h] [rbp-55h]
  unsigned int v181; // [rsp+54h] [rbp-55h]
  unsigned int v182; // [rsp+54h] [rbp-55h]
  unsigned int v183; // [rsp+54h] [rbp-55h]
  unsigned int v184; // [rsp+54h] [rbp-55h]
  unsigned int v185; // [rsp+54h] [rbp-55h]
  unsigned int v186; // [rsp+54h] [rbp-55h]
  unsigned int v187; // [rsp+54h] [rbp-55h]
  char v188; // [rsp+54h] [rbp-55h]
  unsigned int v189; // [rsp+54h] [rbp-55h]
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  PULONG p_Data1; // [rsp+60h] [rbp-49h]
  void *ThreadHandle; // [rsp+68h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-39h] BYREF
  __int128 v194; // [rsp+A0h] [rbp-9h] BYREF
  struct _KDPC *v196; // [rsp+120h] [rbp+77h] BYREF
  LPGUID v197; // [rsp+128h] [rbp+7Fh]

  v196 = (struct _KDPC *)a3;
  v197 = (LPGUID)a4;
  v11 = a1;
  v12 = a2;
  Object = 0LL;
  Pool = -1056964606;
  Adapter = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !a2 )
    return 3238002694LL;
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids, v11);
    v12 = a2;
  }
  if ( !StorpControl )
  {
    v20 = 0;
LABEL_14:
    v21 = 0x1C0000000uLL;
    switch ( v11 )
    {
      case 0u:
        Pool = StorpAllocatePool(v18, (unsigned int)v196, (unsigned int)v197, a5);
        goto LABEL_611;
      case 1u:
        Pool = StorpFreePool(v18, v196);
        goto LABEL_611;
      case 2u:
        Pool = StorpAllocateMdl(v18, v196, (unsigned int)v197, a5);
        goto LABEL_611;
      case 3u:
        Pool = StorpFreeMdl(v18, v196);
        goto LABEL_611;
      case 4u:
        Pool = StorpBuildMdlForNonPagedPool(v18, v196);
        goto LABEL_611;
      case 5u:
        Pool = StorpGetSystemAddress(v18, v196, 0LL, v197);
        goto LABEL_611;
      case 6u:
        Pool = 0;
        if ( v197 )
        {
          if ( LOBYTE(v196->Number) == 40 )
            v22 = *((_QWORD *)v196[1].DeferredContext + 13);
          else
            v22 = *((_QWORD *)v196->SystemArgument2 + 13);
          *(_QWORD *)&v197->Data1 = v22;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            goto LABEL_268;
          }
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 43LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids);
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 7u:
        Pool = StorpCompleteServiceIrp(v12, v196);
        goto LABEL_611;
      case 8u:
        Pool = StorpGetDeviceObjects(v12, v196, v197, a5);
        goto LABEL_611;
      case 9u:
        Pool = StorBuildScatterGatherListProxy(v12, &v196);
        goto LABEL_611;
      case 0xAu:
        Pool = StorpPutScatterGatherList(v12, v196, (unsigned __int8)v197);
        goto LABEL_611;
      case 0xBu:
        Pool = StorpAcquireMSISpinLock(v12, (unsigned int)v196, v197);
        goto LABEL_611;
      case 0xCu:
        Pool = StorpReleaseMSISpinLock(v12, (unsigned int)v196, (unsigned int)v197);
        goto LABEL_611;
      case 0xDu:
        Pool = StorpGetMSIInfo(v12, (unsigned int)v196, v197);
        goto LABEL_611;
      case 0xEu:
        Pool = RaidInitializePerfOpts(v12, (unsigned __int8)v196, v197);
        goto LABEL_611;
      case 0xFu:
        Pool = RaidGetStartIoPerfParams(v12, v196, v197);
        goto LABEL_611;
      case 0x10u:
        Pool = StorpLogSystemEvent(v12, v196, v197);
        goto LABEL_611;
      case 0x11u:
        if ( v196 )
        {
          KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)v196);
          goto LABEL_45;
        }
        Pool = -1056964602;
        goto LABEL_611;
      case 0x12u:
        v23 = v196;
        if ( v196 )
        {
          LOWORD(v23->TargetInfoAsUlong) = KeQueryActiveGroupCount();
          Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x13u:
        Pool = StorpGetGroupAffinity(v18, (unsigned __int16)v196, v197);
        goto LABEL_611;
      case 0x14u:
        Pool = StorpGetActiveNodeCount(v18, v196);
        goto LABEL_611;
      case 0x15u:
        if ( v197 )
        {
          if ( (unsigned int)v196 <= 0xFFFF )
          {
            KeQueryNodeActiveAffinity((USHORT)v196, (PGROUP_AFFINITY)v197, 0LL);
            Pool = 0;
          }
          else
          {
            Pool = -1056964602;
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x16u:
        v24 = v196;
        if ( v196 )
        {
          v24->TargetInfoAsUlong = KeQueryHighestNodeNumber();
          Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x17u:
        LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                         (PPROCESSOR_NUMBER)v196,
                                         (LOGICAL_PROCESSOR_RELATIONSHIP)v197,
                                         a5,
                                         &a6->Data1);
        if ( LogicalProcessorRelationship == -1073741820 )
          goto LABEL_74;
        if ( LogicalProcessorRelationship == -1073741811 )
          goto LABEL_268;
        goto LABEL_73;
      case 0x18u:
        Pool = StorpAllocateContiguousMemorySpecifyCacheNode(
                 (_DWORD)a9,
                 (_DWORD)v196,
                 (_DWORD)v197,
                 (_DWORD)a5,
                 (__int64)a6,
                 a7.LowPart,
                 a8.LowPart,
                 (__int64)a9);
        goto LABEL_611;
      case 0x19u:
        MmFreeContiguousMemorySpecifyCache(v196, (SIZE_T)v197, (MEMORY_CACHING_TYPE)a5);
        Pool = 0;
        goto LABEL_611;
      case 0x1Au:
        Pool = StorPortpSetPowerSettingNotificationGuids(v12, (unsigned int)v196, v197);
        goto LABEL_611;
      case 0x1Bu:
        Pool = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
                 v12,
                 v196,
                 (PHYSICAL_ADDRESS)a7.QuadPart,
                 a5,
                 (_DWORD)a6,
                 (PHYSICAL_ADDRESS)a7.QuadPart,
                 a8.LowPart,
                 a9);
        goto LABEL_611;
      case 0x1Cu:
        Pool = StorpGetRequestInfo(v18, v196, v197);
        goto LABEL_611;
      case 0x1Du:
        Pool = StorpInitializeWorkItem(v12, v196);
        goto LABEL_611;
      case 0x1Eu:
        Pool = StorpQueueWorkItem(v12, v196, v197, a5);
        goto LABEL_611;
      case 0x1Fu:
        Pool = StorpFreeWorkItem(v12, v196);
        goto LABEL_611;
      case 0x20u:
        Pool = StorpInitializeTimer(v12, v196);
        goto LABEL_611;
      case 0x21u:
        Pool = StorpRequestTimer(v12, (_DWORD)v196, (_DWORD)v197, (_DWORD)a5, (__int64)a6, a7.QuadPart);
        goto LABEL_611;
      case 0x22u:
        Pool = StorpFreeTimer(v12, v196);
        goto LABEL_611;
      case 0x23u:
        InitializeSListHead((PSLIST_HEADER)v196);
        Pool = 0;
        goto LABEL_611;
      case 0x24u:
        v34 = v197;
        *(_QWORD *)&v34->Data1 = ExpInterlockedFlushSList((PSLIST_HEADER)v196);
        Pool = 0;
        goto LABEL_611;
      case 0x25u:
        v35 = v197;
        *(_QWORD *)&v35->Data1 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v196);
        Pool = 0;
        goto LABEL_611;
      case 0x26u:
        v36 = a5;
        *(_QWORD *)&v36->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v196, (PSLIST_ENTRY)v197);
        Pool = 0;
        goto LABEL_611;
      case 0x27u:
        v37 = v197;
        LOWORD(v37->Data1) = ExQueryDepthSList((PSLIST_HEADER)v196);
        Pool = 0;
        goto LABEL_611;
      case 0x28u:
        if ( !v196 || !v197 )
          goto LABEL_268;
        if ( LOBYTE(v196->Number) == 40 )
        {
          ProcessorHistory = v196[1].ProcessorHistory;
        }
        else
        {
          SystemArgument2 = (KSPIN_LOCK)v196->SystemArgument2;
          if ( !SystemArgument2 || *(_DWORD *)SystemArgument2 != 523124044 )
            goto LABEL_90;
          ProcessorHistory = *(_QWORD *)(SystemArgument2 + 176);
        }
        if ( ProcessorHistory )
        {
          Pool = -1056964607;
          if ( (int)IoGetActivityIdIrp(ProcessorHistory, v197) >= 0 )
            Pool = 0;
          goto LABEL_611;
        }
LABEL_90:
        Pool = -1056964607;
        if ( EtwActivityIdControl(3u, v197) >= 0 )
          Pool = 0;
        goto LABEL_611;
      case 0x29u:
        a4 = (unsigned __int64)v196;
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
            goto LABEL_268;
        }
        v38 = *(_DWORD *)(Adapter + 56);
        if ( v38 == -1 )
        {
          Pool = -1056964599;
          goto LABEL_611;
        }
        if ( !a4 || *(_WORD *)a4 != 1 || *(_DWORD *)(a4 + 4) < 4u )
          goto LABEL_268;
        *(_WORD *)(a4 + 2) = v38;
        Pool = v20;
        *(_WORD *)(a4 + 8) = -1;
        *(_BYTE *)(a4 + 10) = -1;
        goto LABEL_611;
      case 0x2Au:
        LOBYTE(a3) = 1;
        Pool = StorpGetOriginalMdl(v18, v196, a3, v197);
        goto LABEL_611;
      case 0x2Bu:
        LOBYTE(a3) = 1;
        Pool = StorpGetSystemAddress(v18, v196, a3, v197);
        goto LABEL_611;
      case 0x2Cu:
        Pool = StorpGetDataInSgList(v12, v196, v197);
        goto LABEL_611;
      case 0x2Eu:
        Pool = StorpSetUnitAttributes(v12, v196, (unsigned int)v197);
        goto LABEL_611;
      case 0x2Fu:
        v39 = (LARGE_INTEGER *)v197;
        v40 = (union _LARGE_INTEGER *)v196;
        if ( !v197 )
          goto LABEL_268;
        if ( v196 )
          *(_QWORD *)&v196->TargetInfoAsUlong = 1LL;
        if ( UseQPCTime )
          *v39 = KeQueryPerformanceCounter(v40);
        else
          v39->QuadPart = KeQueryUnbiasedInterruptTime();
        Pool = 0;
        goto LABEL_611;
      case 0x30u:
        v41 = v196;
        v42 = v197;
        v43 = a5;
        if ( KeGetCurrentIrql() )
        {
          Pool = -1056964600;
        }
        else if ( v41 )
        {
          Pool = StorpUnitInitializePoFxPower(a2, v41, v42, v43);
        }
        else
        {
          Pool = StorpAdapterInitializePoFxPower(a2, v42, v43);
        }
        goto LABEL_611;
      case 0x31u:
        v44 = 0;
        v45 = v196;
        a4 = (unsigned __int64)v197;
        v46 = (int)a6;
        LODWORD(Object) = (_DWORD)a5;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        Pool = v20;
        if ( !a4 )
          goto LABEL_140;
        v47 = *(_BYTE *)(a4 + 2);
        if ( v47 == 40 )
          v16 = *(_QWORD *)(a4 + 96);
        else
          v16 = *(_QWORD *)(a4 + 48);
        if ( !v16 || *(_DWORD *)v16 != 523124044 )
          goto LABEL_609;
        if ( v47 == 40 )
          v44 = *(_DWORD *)(a4 + 24);
        else
          v44 = *(_DWORD *)(a4 + 12);
LABEL_140:
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          goto LABEL_141;
        if ( v46 || !Adapter )
          goto LABEL_609;
        if ( v45 )
        {
          if ( LOWORD(v45->TargetInfoAsUlong) != 1 )
            goto LABEL_609;
          if ( *((_DWORD *)&v45->0 + 1) < 4u )
            goto LABEL_609;
          LOWORD(v180) = v45->DpcListEntry.Next;
          HIWORD(v180) = BYTE2(v45->DpcListEntry.Next);
          Unit = RaidAdapterFindUnit(Adapter, v180);
          v50 = Unit;
          if ( !Unit )
            goto LABEL_609;
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_610;
          }
          if ( (v44 & 0x100800) != 0 )
          {
            if ( RaidUnitCheckAndAcquirePoFx(Unit) )
            {
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v50 + 1736));
              goto LABEL_610;
            }
            if ( !*(_QWORD *)(*(_QWORD *)(v50 + 24) + 4832LL) )
              goto LABEL_610;
          }
          if ( CurrentIrql == 2 || (*(_BYTE *)(v50 + 449) & 1) != 0 || *(char *)(v50 + 448) < 0 )
            v51 = 2;
          else
            v51 = 0;
          v11 = a1;
          Pool = RaidUnitPoFxActivateComponentFromMiniport(v50, (unsigned int)Object, v51);
          if ( v16 )
            *(_BYTE *)(v16 + 16) |= 0x80u;
          goto LABEL_611;
        }
        if ( RuntimePowerDisabled )
        {
          Pool = 0;
          goto LABEL_610;
        }
        if ( *(_QWORD *)(Adapter + 4832) && (v44 & 0x100800) == 0 )
        {
          if ( CurrentIrql == 2 || (*(_BYTE *)(Adapter + 107) & 6) != 0 )
            v52 = 2;
          else
            v52 = 0;
          Pool = RaidAdapterPoFxActivateComponentFromMiniport(Adapter, (unsigned int)Object, v52);
          if ( v16 )
            *(_BYTE *)(v16 + 16) |= 0x80u;
          goto LABEL_610;
        }
        goto LABEL_171;
      case 0x32u:
        v53 = v196;
        a4 = (unsigned __int64)v197;
        v54 = (unsigned int)a5;
        v55 = (int)a6;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        Pool = v20;
        if ( !a4 )
          goto LABEL_181;
        if ( *(_BYTE *)(a4 + 2) == 40 )
          v16 = *(_QWORD *)(a4 + 96);
        else
          v16 = *(_QWORD *)(a4 + 48);
        if ( !v16 || *(_DWORD *)v16 != 523124044 )
          goto LABEL_609;
        if ( *(char *)(v16 + 16) >= 0 )
          goto LABEL_610;
LABEL_181:
        if ( KeGetCurrentIrql() > 2u && !v16 )
        {
          Pool = -1056964600;
          goto LABEL_610;
        }
        if ( v55 || !Adapter )
          goto LABEL_609;
        if ( v53 )
        {
          if ( LOWORD(v53->TargetInfoAsUlong) != 1 )
            goto LABEL_609;
          if ( *((_DWORD *)&v53->0 + 1) < 4u )
            goto LABEL_609;
          LOWORD(v181) = v53->DpcListEntry.Next;
          HIWORD(v181) = BYTE2(v53->DpcListEntry.Next);
          v56 = RaidAdapterFindUnit(Adapter, v181);
          if ( !v56 )
            goto LABEL_609;
          if ( !RuntimePowerDisabled )
          {
            if ( KeGetCurrentIrql() <= 2u )
            {
              Pool = RaidUnitPoFxIdleComponentFromMiniport(v56, v54);
            }
            else
            {
              *(_BYTE *)(v16 + 17) |= 2u;
              Pool = -1056964596;
              *(_DWORD *)(v16 + 748) = v54;
            }
          }
          goto LABEL_610;
        }
        if ( RuntimePowerDisabled )
          goto LABEL_610;
        if ( *(_QWORD *)(Adapter + 4832) )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
            Pool = RaidAdapterPoFxIdleComponentFromMiniport(Adapter, v54);
          }
          else
          {
            *(_BYTE *)(v16 + 17) |= 1u;
            Pool = -1056964596;
            *(_DWORD *)(v16 + 748) = v54;
          }
          goto LABEL_610;
        }
        goto LABEL_171;
      case 0x33u:
        v57 = v196;
        v58 = (unsigned int)v197;
        v59 = a5;
        if ( !Adapter )
        {
          v60 = *(__int64 **)(v12 - 16);
          Adapter = 0LL;
          if ( v60 )
          {
            Adapter = *v60;
            if ( *v60 )
            {
              if ( *(_DWORD *)Adapter )
                Adapter = 0LL;
            }
          }
        }
        if ( KeGetCurrentIrql() > 2u )
        {
          Pool = -1056964600;
          goto LABEL_611;
        }
        if ( !Adapter )
        {
          Pool = -1056964602;
          goto LABEL_611;
        }
        if ( v57 )
        {
          if ( LOWORD(v57->TargetInfoAsUlong) != 1 )
            goto LABEL_268;
          if ( *((_DWORD *)&v57->0 + 1) < 4u )
            goto LABEL_268;
          LOWORD(v182) = v57->DpcListEntry.Next;
          HIWORD(v182) = BYTE2(v57->DpcListEntry.Next);
          v61 = RaidAdapterFindUnit(Adapter, v182);
          v62 = v61;
          if ( !v61 )
            goto LABEL_268;
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_611;
          }
          if ( RaidUnitCheckAndAcquirePoFx(v61) )
          {
            v63 = *(_QWORD **)(v62 + 1744);
            v64 = v63[1];
            if ( v58 + 1 >= *(_DWORD *)(v64 + 8) && v58 + 1 <= *(_DWORD *)(v64 + 8) )
            {
              PoFxSetComponentLatency(*v63, v58, v59);
              Pool = 0;
              goto LABEL_219;
            }
            goto LABEL_218;
          }
          goto LABEL_564;
        }
        if ( RuntimePowerDisabled )
        {
          Pool = 0;
          goto LABEL_611;
        }
        v65 = *(_QWORD **)(Adapter + 4832);
        if ( !v65 )
          goto LABEL_564;
        v66 = v65[1];
        if ( v58 + 1 >= *(_DWORD *)(v66 + 8) && v58 + 1 <= *(_DWORD *)(v66 + 8) )
        {
          PoFxSetComponentLatency(*v65, v58, v59);
          Pool = 0;
          goto LABEL_611;
        }
        goto LABEL_268;
      case 0x34u:
        v67 = v196;
        v68 = (unsigned int)v197;
        v69 = a5;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        if ( KeGetCurrentIrql() > 2u )
        {
          Pool = -1056964600;
          goto LABEL_611;
        }
        if ( !Adapter )
        {
          Pool = -1056964602;
          goto LABEL_611;
        }
        if ( v67 )
        {
          if ( LOWORD(v67->TargetInfoAsUlong) != 1 )
            goto LABEL_268;
          if ( *((_DWORD *)&v67->0 + 1) < 4u )
            goto LABEL_268;
          LOWORD(v183) = v67->DpcListEntry.Next;
          HIWORD(v183) = BYTE2(v67->DpcListEntry.Next);
          v70 = RaidAdapterFindUnit(Adapter, v183);
          v62 = v70;
          if ( !v70 )
            goto LABEL_268;
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_611;
          }
          if ( RaidUnitCheckAndAcquirePoFx(v70) )
          {
            v71 = *(_QWORD **)(v62 + 1744);
            v72 = v71[1];
            if ( v68 + 1 < *(_DWORD *)(v72 + 8) || v68 + 1 > *(_DWORD *)(v72 + 8) )
            {
LABEL_218:
              Pool = -1056964602;
            }
            else
            {
              PoFxSetComponentResidency(*v71, v68, v69);
              Pool = 0;
            }
LABEL_219:
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v62 + 1736));
            goto LABEL_611;
          }
          goto LABEL_564;
        }
        if ( RuntimePowerDisabled )
        {
          Pool = 0;
          goto LABEL_611;
        }
        v73 = *(_QWORD **)(Adapter + 4832);
        if ( !v73 )
          goto LABEL_564;
        v74 = v73[1];
        if ( v68 + 1 >= *(_DWORD *)(v74 + 8) && v68 + 1 <= *(_DWORD *)(v74 + 8) )
        {
          PoFxSetComponentResidency(*v73, v68, v69);
          Pool = 0;
          goto LABEL_611;
        }
        goto LABEL_268;
      case 0x35u:
        v75 = v196;
        v76 = v197;
        v77 = a5;
        v78 = a9;
        p_Data1 = &a6->Data1;
        ThreadHandle = (void *)a7.QuadPart;
        Object = (PVOID)a8.QuadPart;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        if ( KeGetCurrentIrql() > 2u )
        {
          if ( v78 )
            *v78 = 0LL;
          Pool = -1056964600;
          goto LABEL_610;
        }
        if ( !Adapter )
          goto LABEL_609;
        if ( !v75 )
        {
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_610;
          }
          v82 = *(_QWORD **)(Adapter + 4832);
          if ( v82 )
          {
            v83 = PoFxPowerControl(*v82, v76, v77, p_Data1, ThreadHandle, Object, v78);
            Pool = RaidNtStatusToStorStatus(v83);
            goto LABEL_610;
          }
          goto LABEL_171;
        }
        if ( LOWORD(v75->TargetInfoAsUlong) == 1 && *((_DWORD *)&v75->0 + 1) >= 4u )
        {
          LOWORD(v184) = v75->DpcListEntry.Next;
          HIWORD(v184) = BYTE2(v75->DpcListEntry.Next);
          v79 = RaidAdapterFindUnit(Adapter, v184);
          v80 = v79;
          if ( v79 )
          {
            if ( RuntimePowerDisabled )
            {
              Pool = 0;
LABEL_610:
              v11 = a1;
LABEL_611:
              if ( StorpControl )
                ExtensionExtendedFuncPost(v11, Adapter, &v196, a4);
              return Pool;
            }
            if ( RaidUnitCheckAndAcquirePoFx(v79) )
            {
              v81 = PoFxPowerControl(**(_QWORD **)(v80 + 1744), v76, v77, p_Data1, ThreadHandle, Object, v78);
              Pool = RaidNtStatusToStorStatus(v81);
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v80 + 1736));
              goto LABEL_610;
            }
LABEL_171:
            Pool = -1056964601;
            goto LABEL_610;
          }
        }
        goto LABEL_609;
      case 0x36u:
        Pool = StorpFlushDataBufferMdl(v18, v196);
        goto LABEL_611;
      case 0x37u:
        a4 = (unsigned __int64)v196;
        v98 = v197;
        v99 = a5;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        if ( !v99 || !Adapter )
          goto LABEL_268;
        v99->Relationship = v20;
        if ( !a4 )
          goto LABEL_318;
        if ( *(_WORD *)a4 != 1 || *(_DWORD *)(a4 + 4) < 4u )
          goto LABEL_268;
        HIBYTE(v185) = HIBYTE(v20);
        LOWORD(v185) = *(_WORD *)(a4 + 8);
        BYTE2(v185) = *(_BYTE *)(a4 + 10);
        if ( RaidAdapterFindUnit(Adapter, v185) )
        {
          v20 = 0;
LABEL_318:
          if ( *(_QWORD *)&v98->Data1 == 0x481F895FDCAF9C10LL && *(_QWORD *)v98->Data4 == 0x3356F5D2CED492A4LL )
          {
            Pool = v20;
            v99->Relationship = (unsigned __int8)g_InWinPE;
          }
          else if ( *(_QWORD *)&v98->Data1 == 0x444B2B37D52CE820LL && *(_QWORD *)v98->Data4 == 0x7BD091E5920033A6LL )
          {
            Pool = v20;
            v99->Relationship = RelationNumaNode;
          }
          else if ( *(_QWORD *)&v98->Data1 == 0x48E8F89B2B9443ACLL && *(_QWORD *)v98->Data4 == 0x5AFD6EC9B62C92B2LL )
          {
            v99->Relationship = (unsigned __int8)ExIsSoftBoot();
            Pool = 0;
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x38u:
        v25 = v197;
        if ( !v196 || !v197 )
          goto LABEL_268;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v196);
        v25->Data1 = ProcessorIndexFromNumber;
        v27 = 0;
        if ( ProcessorIndexFromNumber == -1 )
          v27 = -1056964602;
        Pool = v27;
        goto LABEL_611;
      case 0x39u:
        v84 = (unsigned int)v197;
        if ( v196 )
          goto LABEL_268;
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_611;
          }
        }
        if ( RuntimePowerDisabled )
        {
          Pool = v20;
          goto LABEL_611;
        }
        if ( !*(_QWORD *)(Adapter + 4832) || *(char *)(Adapter + 107) < 0 )
          goto LABEL_439;
        RaidAdapterPoFxSetDeviceIdleTimeout(Adapter, v84, a3, 0LL);
        if ( !StorEtwLoggingEnabled || (byte_1C00799E2 & 0x10) == 0 )
          goto LABEL_45;
        McTemplateK0pqqq_EtwWriteTransfer(
          v85,
          (unsigned int)&EventAdapterIdleTimeoutSet,
          v86,
          **(_QWORD **)(Adapter + 4832),
          *(_DWORD *)(Adapter + 56),
          v84,
          *(_DWORD *)(Adapter + 4848));
        Pool = 0;
        goto LABEL_611;
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
        goto LABEL_611;
      case 0x3Du:
        if ( v196 )
        {
          Pool = 0;
          v196->Type = g_OSisUpgrade;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x3Eu:
        LOBYTE(v21) = 1;
        Pool = StorAdapterDeviceRegistryKeyProxy(v12, v21, &v196);
        goto LABEL_611;
      case 0x3Fu:
        Pool = StorAdapterDeviceRegistryKeyProxy(v12, 0LL, &v196);
        goto LABEL_611;
      case 0x40u:
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_611;
          }
        }
        if ( (unsigned int)v196 >= 0x14 )
          goto LABEL_268;
        if ( (*(_BYTE *)(Adapter + 584) & 1) == 0 )
          goto LABEL_439;
        *(_DWORD *)(Adapter + 4148) = (_DWORD)v196;
        Pool = v20;
        goto LABEL_611;
      case 0x41u:
        v87 = (int)v197;
        v88 = (int)a5;
        v89 = (unsigned int)a6;
        QuadPart = a7.QuadPart;
        if ( v196 )
        {
          Pool = -1056964602;
          goto LABEL_611;
        }
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_611;
          }
        }
        if ( RuntimePowerDisabled )
        {
          Pool = 0;
          goto LABEL_611;
        }
        v91 = *(_QWORD *)(Adapter + 4832);
        if ( !v91 || *(_BYTE *)(v91 + 28) )
          goto LABEL_439;
        LogicalProcessorRelationship = RaidRegisterPerfStates(
                                         *(_QWORD *)(Adapter + 8),
                                         v87,
                                         v88,
                                         v89,
                                         QuadPart,
                                         *(_QWORD *)v91);
        if ( LogicalProcessorRelationship < 0 )
          goto LABEL_73;
        if ( (unsigned __int8)RaidAdapterCacheOperationalPowerRange(*(_QWORD *)(Adapter + 4832), v89, QuadPart) )
        {
          *(_QWORD *)(*(_QWORD *)(Adapter + 4832) + 48LL) = -1LL;
          *(_QWORD *)(*(_QWORD *)(Adapter + 4832) + 56LL) = -1LL;
          *(_QWORD *)(*(_QWORD *)(Adapter + 4832) + 64LL) = -1LL;
        }
        *(_BYTE *)(*(_QWORD *)(Adapter + 4832) + 28LL) = v89;
        StorpLogRegisterAdapterPerfStates(Adapter, QuadPart);
        Pool = 0;
        goto LABEL_611;
      case 0x42u:
        v92 = (unsigned int)v197;
        v93 = (unsigned int)a5;
        v94 = (unsigned int)a6;
        LODWORD(Object) = a7.LowPart;
        p_Data1 = (PULONG)a8.QuadPart;
        if ( v196 || (_DWORD)a5 )
          goto LABEL_609;
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
            goto LABEL_610;
        }
        if ( RuntimePowerDisabled )
        {
          Pool = v20;
          goto LABEL_610;
        }
        if ( !*(_QWORD *)(Adapter + 4832) )
        {
          Pool = -1056964607;
          goto LABEL_610;
        }
        v95 = KeGetCurrentIrql();
        v96 = *(_QWORD *)(Adapter + 4832);
        v194 = 0LL;
        v97 = *(unsigned __int8 *)(v96 + 28);
        if ( !(_BYTE)v97 || v94 >= v97 )
          goto LABEL_609;
        DWORD2(v194) = (_DWORD)Object;
        LODWORD(v194) = v94;
        if ( v95 >= 2u )
          v93 = 2;
        PoFxIssueComponentPerfStateChange(*(_QWORD *)v96, v93, v92, &v194, p_Data1);
        Pool = 0;
        goto LABEL_610;
      case 0x43u:
        if ( KeGetCurrentIrql() )
          goto LABEL_331;
        v100 = v197;
        Pool = -1056964602;
        a4 = (unsigned __int64)v196;
        if ( !v197 )
          goto LABEL_611;
        LOBYTE(v197->Data1) = 0;
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(a2);
          if ( !Adapter )
            goto LABEL_611;
        }
        if ( a4 )
        {
          if ( *(_WORD *)a4 != 1 )
            goto LABEL_611;
          if ( *(_DWORD *)(a4 + 4) < 4u )
            goto LABEL_611;
          LOWORD(v186) = *(_WORD *)(a4 + 8);
          HIWORD(v186) = *(unsigned __int8 *)(a4 + 10);
          v101 = RaidAdapterFindUnit(Adapter, v186);
          if ( !v101 )
            goto LABEL_611;
          v102 = *(struct _DEVICE_OBJECT **)(v101 + 8);
        }
        else
        {
          v102 = *(struct _DEVICE_OBJECT **)(Adapter + 8);
        }
        if ( v102 )
        {
          Pool = 0;
          p_Data1 = 0LL;
          LogicalProcessorRelationship = RaidGetD3ColdInterface(v102);
          if ( LogicalProcessorRelationship < 0 )
LABEL_73:
            Pool = RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
          else
            LOBYTE(v100->Data1) = RaidGetD3ColdCapability(p_Data1);
        }
        goto LABEL_611;
      case 0x44u:
        if ( v196 )
          goto LABEL_564;
        Pool = RaidInitializeRpmb(v12, v197);
        goto LABEL_611;
      case 0x45u:
        Pool = StorpAllocateHostMemoryBuffer(v12, (int)v196, (int)v197, (int)a5, (int)a6, a7, a8, (__int64)a9, a10, a11);
        goto LABEL_611;
      case 0x46u:
        Pool = StorpFreeHostMemoryBuffer(v12);
        goto LABEL_611;
      case 0x47u:
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_611;
          }
        }
        if ( !*(_BYTE *)(Adapter + 540) )
        {
          Pool = -1056964601;
          goto LABEL_611;
        }
        v108 = v197;
        v109 = (unsigned int)a5;
        if ( !v196 || !v197 )
          goto LABEL_268;
        if ( LOBYTE(v196->Number) == 40 )
        {
          v110 = v196[1].ProcessorHistory;
        }
        else
        {
          v111 = (KSPIN_LOCK)v196->SystemArgument2;
          if ( !v111 || *(_DWORD *)v111 != 523124044 )
            goto LABEL_268;
          v110 = *(_QWORD *)(v111 + 176);
        }
        if ( !v110 )
          goto LABEL_268;
        if ( KeGetCurrentIrql() <= 2u )
        {
          if ( v109 )
          {
            v112 = IoPropagateIrpExtension(v110, v108, v109);
            Pool = RaidNtStatusToStorStatus(v112);
          }
          else
          {
            Pool = 0;
          }
        }
        else
        {
          Pool = -1056964600;
        }
        goto LABEL_611;
      case 0x48u:
        v113 = a5;
        *(_QWORD *)&v113->Relationship = ExInterlockedInsertHeadList(
                                           (PLIST_ENTRY)v196,
                                           (PLIST_ENTRY)v197,
                                           (PKSPIN_LOCK)&a6->Data1);
        Pool = 0;
        goto LABEL_611;
      case 0x49u:
        v114 = a5;
        *(_QWORD *)&v114->Relationship = ExInterlockedInsertTailList(
                                           (PLIST_ENTRY)v196,
                                           (PLIST_ENTRY)v197,
                                           (PKSPIN_LOCK)&a6->Data1);
        Pool = 0;
        goto LABEL_611;
      case 0x4Au:
        v115 = v197;
        *(_QWORD *)&v115->Data1 = ExInterlockedRemoveHeadList((PLIST_ENTRY)v196, (PKSPIN_LOCK)a5);
        Pool = 0;
        goto LABEL_611;
      case 0x4Bu:
        KeInitializeSpinLock((PKSPIN_LOCK)&v196->TargetInfoAsUlong);
        Pool = 0;
        goto LABEL_611;
      case 0x4Cu:
        v103 = a5;
        v104 = v197;
        a4 = (unsigned __int64)a6;
        v105 = *(_QWORD *)(v12 - 16);
        if ( !a5 || !a6 || !a7.QuadPart || !v197 || !v196 )
          goto LABEL_268;
        if ( LOBYTE(v196->Number) == 40 )
          DeferredContext = (KSPIN_LOCK)v196[1].DeferredContext;
        else
          DeferredContext = (KSPIN_LOCK)v196->SystemArgument2;
        if ( v197 == *(LPGUID *)(DeferredContext + 136) || v197 == *(LPGUID *)(DeferredContext + 104) )
        {
          v107 = *(_DWORD *)&v197[2].Data4[4];
          *(_DWORD *)a7.QuadPart = v107;
          if ( (v107 & *(_DWORD *)(v105 + 56)) != 0 )
          {
            Pool = -1056964607;
          }
          else
          {
            *(_QWORD *)&v103->Relationship = v104 + 3;
            *(_DWORD *)a4 = (*(unsigned int *)v104[2].Data4
                           + 4095LL
                           + (unsigned __int64)((*(_DWORD *)&v104[2].Data4[4] + v104[2].Data1) & 0xFFF)) >> 12;
            Pool = 0;
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x4Du:
        a4 = (unsigned __int64)v196;
        if ( v196 )
        {
          if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
            Pool = RaidInitializeCryptoEngine(Adapter, a4);
          else
            Pool = -1056964602;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x4Eu:
        v116 = v197;
        if ( !v196 || !v197 )
          goto LABEL_268;
        if ( LOBYTE(v196->Number) == 40 )
          v117 = (KSPIN_LOCK)v196[1].DeferredContext;
        else
          v117 = (KSPIN_LOCK)v196->SystemArgument2;
        Pool = 0;
        v197->Data1 = **(_DWORD **)(v117 + 784);
        *(_DWORD *)&v116->Data2 = *(_DWORD *)(*(_QWORD *)(v117 + 784) + 4LL);
        *(_DWORD *)v116->Data4 = *(_DWORD *)(*(_QWORD *)(v117 + 784) + 8LL);
        *(_QWORD *)&v116[1].Data1 = *(_QWORD *)(*(_QWORD *)(v117 + 784) + 16LL);
        goto LABEL_611;
      case 0x4Fu:
        v118 = v197;
        v119 = v196;
        if ( !v197 )
          goto LABEL_268;
        Data1 = v197[3].Data1;
        if ( Data1 > 0x1000 )
        {
          Pool = -1056964598;
          goto LABEL_611;
        }
        if ( Data1 )
        {
          if ( !*(_QWORD *)v197[3].Data4 )
            goto LABEL_268;
        }
        else if ( *(_QWORD *)v197[3].Data4 )
        {
          Pool = -1056964602;
          goto LABEL_611;
        }
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          a4 = 0LL;
          goto LABEL_408;
        }
        goto LABEL_45;
      case 0x50u:
        a4 = (unsigned int)v196;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          if ( (*(_BYTE *)(Adapter + 104) & 0x10) != 0 )
          {
            *(_DWORD *)(Adapter + 548) = a4;
            Pool = v20;
          }
          else
          {
            Pool = -1056964601;
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x51u:
        if ( !(_DWORD)v196 )
          goto LABEL_45;
        StorDelayExecution((ULONG)v196);
        Pool = 0;
        goto LABEL_611;
      case 0x52u:
        Pool = StorpAllocateContiguousMemorySpecifyCacheNodeEx(
                 v12,
                 (unsigned __int64)v196,
                 v197,
                 a5,
                 a6,
                 a7.LowPart,
                 a8.LowPart,
                 a9,
                 a10);
        goto LABEL_611;
      case 0x53u:
        Pool = StorpFreeContiguousMemorySpecifyCacheEx(v12, (__int64)v196, (__int64)v197, (unsigned int)a5, (__int64)a6);
        goto LABEL_611;
      case 0x54u:
        a4 = (unsigned int)v196;
        v122 = (int)v197;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          if ( (*(_BYTE *)(Adapter + 104) & 0x10) != 0 )
          {
            *(_DWORD *)(Adapter + 548) = a4;
            Pool = v20;
            *(_DWORD *)(Adapter + 552) = v122;
          }
          else
          {
            Pool = -1056964601;
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x55u:
      case 0x56u:
      case 0x57u:
        Pool = StorEtwMiniportEventProxy(v12, v11, &v196);
        goto LABEL_611;
      case 0x58u:
        Pool = 0;
        v123 = a5;
        Timer = ExAllocateTimer(v196, v197, 4LL);
        *(_QWORD *)&v123->Relationship = Timer;
        if ( !Timer )
          goto LABEL_439;
        goto LABEL_611;
      case 0x59u:
        v125 = (_BYTE *)a7.QuadPart;
        a4 = (unsigned __int64)a6;
        if ( a7.QuadPart )
        {
          Pool = 0;
          *v125 = ExSetTimer(v196, v197, a5, a6);
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x5Au:
        v126 = a5;
        if ( a5 )
        {
          Pool = 0;
          v127 = ExCancelTimer(v196, v197);
          LOBYTE(v126->Relationship) = v127;
          if ( !v127 )
            Pool = -1056964607;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x5Bu:
        v128 = (_BYTE *)a7.QuadPart;
        a4 = (unsigned __int64)a6;
        if ( a7.QuadPart )
        {
          Pool = 0;
          *v128 = ExDeleteTimer(v196, (unsigned __int8)v197, (unsigned __int8)a5, a6);
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x5Cu:
        Pool = -1056964602;
        if ( v196 )
        {
          LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
          v196->TargetInfoAsUlong = LockArray_high;
          v29 = 0;
          if ( LockArray_high == -1 )
            v29 = -1056964602;
          Pool = v29;
        }
        goto LABEL_611;
      case 0x5Du:
        v129 = *(_DWORD ***)(v12 - 16);
        Pool = 0;
        v130 = (int)v196;
        v131 = v197;
        v132 = a5;
        v133 = 0LL;
        if ( !v129 )
          goto LABEL_454;
        v133 = *v129;
        if ( !*v129 )
          goto LABEL_454;
        if ( *v133 )
        {
          v133 = 0LL;
LABEL_454:
          if ( (unsigned int)((_DWORD)v196 - 2) <= 1 )
            goto LABEL_609;
        }
        if ( !a5 )
          goto LABEL_609;
        a5->Relationship = (int)v196;
        v134 = v130 - 1;
        if ( v134 )
        {
          v135 = v134 - 1;
          if ( v135 )
          {
            v136 = v135 - 1;
            if ( v136 )
            {
              v137 = v136 - 1;
              if ( !v137 )
              {
                if ( v131 )
                {
                  KeAcquireInStackQueuedSpinLockForDpc((PKSPIN_LOCK)&v131[4].Data1, (PKLOCK_QUEUE_HANDLE)&v132->8);
                  goto LABEL_610;
                }
                goto LABEL_609;
              }
              if ( v137 != 1 )
                goto LABEL_609;
              if ( KeGetCurrentIrql() >= 2u )
              {
                if ( v131 )
                {
                  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&v131[4].Data1, (PKLOCK_QUEUE_HANDLE)&v132->8);
                  goto LABEL_610;
                }
LABEL_609:
                Pool = -1056964602;
                goto LABEL_610;
              }
            }
            else if ( KeGetCurrentIrql() <= 2u )
            {
              v132->Processor.Reserved[14] = RaidAdapterAcquireInterruptLock(v133);
              goto LABEL_610;
            }
          }
          else if ( KeGetCurrentIrql() <= 2u )
          {
            RaidAdapterAcquireStartIoLock((__int64)v133, (struct _KLOCK_QUEUE_HANDLE *)&v132->8);
            goto LABEL_610;
          }
        }
        else if ( KeGetCurrentIrql() <= 2u )
        {
          if ( v131 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v131[4].Data1, (PKLOCK_QUEUE_HANDLE)&v132->8);
            goto LABEL_610;
          }
          goto LABEL_609;
        }
LABEL_141:
        Pool = -1056964600;
        goto LABEL_610;
      case 0x5Eu:
        v30 = v196;
        if ( v196 )
        {
          v30->TargetInfoAsUlong = KeQueryActiveProcessorCountEx(0xFFFFu);
          Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x5Fu:
        v138 = v197;
        if ( !v196 || !v197 )
          goto LABEL_268;
        Pool = 0;
        LOBYTE(v138->Data1) = KeRemoveQueueDpc(v196);
        goto LABEL_611;
      case 0x60u:
        v118 = v197;
        v119 = v196;
        a4 = (unsigned int)a5;
        if ( !v197 )
          goto LABEL_268;
        v121 = v197[3].Data1;
        if ( v121 > 0x1000 )
        {
          Pool = -1056964598;
          goto LABEL_611;
        }
        if ( v121 )
        {
          if ( !*(_QWORD *)v197[3].Data4 )
            goto LABEL_268;
        }
        else if ( *(_QWORD *)v197[3].Data4 )
        {
          Pool = -1056964602;
          goto LABEL_611;
        }
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
LABEL_408:
          StorpTelemetryMiniportEvent(Adapter, v119, v118, a4);
          Pool = 0;
          goto LABEL_611;
        }
        goto LABEL_45;
      case 0x61u:
        if ( (_DWORD)v196 || !v197 )
          goto LABEL_268;
        Pool = 0;
        LOBYTE(v197->Data1) = StorageD3InModernStandbyEnabled;
        goto LABEL_611;
      case 0x62u:
        a4 = (unsigned __int64)a5;
        if ( !a5 || !a7.QuadPart || !(_DWORD)a6 )
          goto LABEL_268;
        Pool = StorEtwMiniportLogError(v12, (_DWORD)v196, (_DWORD)v197, (_DWORD)a5, (_DWORD)a6, a7.QuadPart);
        goto LABEL_611;
      case 0x63u:
        if ( !v196 )
          goto LABEL_268;
        KeInitializeEvent((PRKEVENT)v196, (EVENT_TYPE)v197, (BOOLEAN)a5);
        Pool = 0;
        goto LABEL_611;
      case 0x64u:
        Timeout = (union _LARGE_INTEGER *)a5;
        p_TargetInfoAsUlong = (PKSPIN_LOCK)&v196->TargetInfoAsUlong;
        v141 = (unsigned __int8)v197;
        if ( !a5 || *(_QWORD *)&a5->Relationship )
          goto LABEL_491;
        if ( KeGetCurrentIrql() > 2u )
          goto LABEL_331;
        if ( !Timeout->QuadPart )
          goto LABEL_493;
LABEL_491:
        if ( KeGetCurrentIrql() > 1u )
        {
          Pool = -1056964600;
          goto LABEL_611;
        }
LABEL_493:
        if ( !p_TargetInfoAsUlong )
          goto LABEL_268;
        v142 = KeWaitForSingleObject(p_TargetInfoAsUlong, Executive, 0, v141, Timeout);
        Pool = -1056964607;
        if ( v142 >= 0 )
          Pool = 0;
        goto LABEL_611;
      case 0x65u:
        v143 = (struct _KEVENT *)v196;
        if ( KeGetCurrentIrql() > 2u )
        {
          Pool = -1056964600;
          goto LABEL_611;
        }
        if ( !v143 )
          goto LABEL_268;
        KeSetEvent(v143, 0, 0);
        Pool = 0;
        goto LABEL_611;
      case 0x66u:
      case 0x72u:
        LogicalProcessorRelationship = StorReset(v12, (unsigned int)v196);
        goto LABEL_73;
      case 0x67u:
        v144 = v197;
        a4 = (unsigned int)v196;
        if ( !v197 || (unsigned int)((_DWORD)v196 - 1) > 5 )
          goto LABEL_268;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          Pool = -1056964607;
          if ( (int)RaMiniportSaveFeatureList(Adapter + 336, (unsigned int)a4, v144) >= 0 )
            Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x68u:
        if ( KeGetCurrentIrql() )
        {
          Pool = -1056964600;
          goto LABEL_611;
        }
        v145 = v197;
        a4 = (unsigned __int64)v196;
        if ( !v197 )
          goto LABEL_268;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(a2)) != 0 )
        {
          if ( a4 && *(_WORD *)a4 == 1 && *(_DWORD *)(a4 + 4) >= 4u )
          {
            LOWORD(v187) = *(_WORD *)(a4 + 8);
            HIWORD(v187) = *(unsigned __int8 *)(a4 + 10);
            v15 = RaidAdapterFindUnit(Adapter, v187);
          }
          v146 = RaidCaptureLiveDump(Adapter, v15, v145);
          Pool = RaidNtStatusToStorStatus(v146);
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x69u:
        LowPart = a8.LowPart;
        v148 = (char)a9;
        v149 = (int)v196;
        v150 = (int)v197;
        a4 = (unsigned int)a5;
        v151 = &a6->Data1;
        v152 = a7.QuadPart;
        v153 = (unsigned __int16)a10;
        v154 = a11;
        LODWORD(Object) = a8.LowPart;
        v188 = (char)a9;
        if ( Adapter )
          goto LABEL_523;
        Adapter = RaidpPortGetAdapter(v12);
        if ( !Adapter )
          goto LABEL_609;
        LowPart = (unsigned int)Object;
        v148 = v188;
LABEL_523:
        if ( !v151 || !v154 || (unsigned __int16)(v153 - 1) > 0x3FFu )
          goto LABEL_609;
        Pool = StorEtwMiniportLogByteStream(Adapter, v149, v150, a4, (__int64)v151, v152, LowPart, v148, v153, v154);
        goto LABEL_610;
      case 0x6Au:
        v155 = (struct _KDPC_WATCHDOG_INFORMATION *)v196;
        if ( !v196 )
          goto LABEL_268;
        if ( KeGetCurrentIrql() >= 2u )
        {
          DpcWatchdogInformation = KeQueryDpcWatchdogInformation(v155);
        }
        else
        {
          v156 = KfRaiseIrql(2u);
          DpcWatchdogInformation = KeQueryDpcWatchdogInformation(v155);
          KeLowerIrql(v156);
        }
        if ( DpcWatchdogInformation > -1073741670 )
        {
          switch ( DpcWatchdogInformation )
          {
            case -1073741637:
              goto LABEL_611;
            case -1073741496:
LABEL_331:
              Pool = -1056964600;
              goto LABEL_611;
            case 0:
LABEL_45:
              Pool = 0;
              goto LABEL_611;
          }
          if ( DpcWatchdogInformation >= 0 )
          {
            Pool = 0;
            goto LABEL_611;
          }
        }
        else
        {
          switch ( DpcWatchdogInformation )
          {
            case -1073741670:
              Pool = -1056964605;
              goto LABEL_611;
            case -2147483643:
LABEL_74:
              Pool = -1056964604;
              goto LABEL_611;
            case -1073741822:
              goto LABEL_611;
            case -1073741811:
              Pool = -1056964602;
              goto LABEL_611;
          }
        }
LABEL_439:
        Pool = -1056964607;
        goto LABEL_611;
      case 0x6Bu:
        if ( !v196 )
          goto LABEL_268;
        Pool = 0;
        v196->TargetInfoAsUlong = StorMinimumTimeInterval;
        goto LABEL_611;
      case 0x6Cu:
        LODWORD(a4) = (_DWORD)v196;
        v158 = (unsigned __int8)v197;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          v159 = RaidMaskUnmaskPciMsixEntry(Adapter, (unsigned int)a4, v158);
          Pool = RaidNtStatusToStorStatus(v159);
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x6Du:
        v160 = v196;
        if ( v196 )
        {
          v160->Type = KeGetCurrentIrql();
          Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x6Eu:
        StartRoutine = (KSTART_ROUTINE *)v196;
        StartContext = v197;
        v163 = (KPRIORITY *)a5;
        v164 = &a6->Data1;
        Object = &a7;
        if ( KeGetCurrentIrql() )
        {
          Pool = -1056964600;
          goto LABEL_611;
        }
        if ( !StartRoutine )
        {
          Pool = -1056964602;
          goto LABEL_611;
        }
        if ( v163 && !(unsigned __int8)RaValidateMiniportSystemThreadPriority((unsigned int)*v163) )
        {
          Pool = -1056964602;
          goto LABEL_611;
        }
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(a2);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_611;
          }
        }
        ThreadHandle = 0LL;
        *(&ObjectAttributes.Length + 1) = 0;
        *(&ObjectAttributes.Attributes + 1) = 0;
        if ( (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(Adapter + 5864), 1u) >= *(_DWORD *)(Adapter + 5860) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(Adapter + 5864));
LABEL_564:
          Pool = -1056964601;
          goto LABEL_611;
        }
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Attributes = 512;
        v165 = PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, StartRoutine, (PVOID)StartContext);
        if ( v165 < 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(Adapter + 5864));
        }
        else
        {
          v166 = ThreadHandle;
          if ( v164 )
            *(_QWORD *)v164 = ThreadHandle;
          if ( v163 )
          {
            Object = 0LL;
            v167 = ObReferenceObjectByHandle(v166, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
            if ( v167 < 0 )
            {
              Pool = RaidNtStatusToStorStatus(0LL);
            }
            else
            {
              KeSetPriorityThread((PKTHREAD)Object, *v163);
              ObfDereferenceObject(Object);
              Pool = RaidNtStatusToStorStatus((unsigned int)v167);
            }
            goto LABEL_611;
          }
        }
        Pool = RaidNtStatusToStorStatus((unsigned int)v165);
        goto LABEL_611;
      case 0x6Fu:
        v168 = (PKSPIN_LOCK)&v196->TargetInfoAsUlong;
        v169 = (unsigned int)v197;
        Object = 0LL;
        if ( KeGetCurrentIrql() )
        {
          Pool = -1056964600;
          goto LABEL_611;
        }
        if ( !(unsigned __int8)RaValidateMiniportSystemThreadPriority(v169) || !v168 )
          goto LABEL_268;
        v170 = ObReferenceObjectByHandle(v168, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
        if ( v170 >= 0 )
        {
          KeSetPriorityThread((PKTHREAD)Object, v169);
          ObfDereferenceObject(Object);
        }
        Pool = RaidNtStatusToStorStatus((unsigned int)v170);
        goto LABEL_611;
      case 0x70u:
        v171 = (struct _GROUP_AFFINITY *)v197;
        v172 = (struct _GROUP_AFFINITY *)a5;
        if ( v197 )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
            KeSetSystemGroupAffinityThread(v171, v172);
            Pool = 0;
          }
          else
          {
            Pool = -1056964600;
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x71u:
        v173 = (struct _GROUP_AFFINITY *)v197;
        if ( v197 )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
            KeRevertToUserGroupAffinityThread(v173);
            Pool = 0;
          }
          else
          {
            Pool = -1056964600;
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_611;
      case 0x73u:
        v174 = v196;
        v175 = v197;
        v176 = (unsigned int)a5;
        v177 = &a6->Data1;
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
            goto LABEL_268;
        }
        if ( !v175 || !(_DWORD)v176 || !v177 )
          goto LABEL_268;
        if ( v174 )
        {
          if ( LOWORD(v174->TargetInfoAsUlong) != 1 || *((_DWORD *)&v174->0 + 1) < 4u )
          {
LABEL_268:
            Pool = -1056964602;
            goto LABEL_611;
          }
          HIBYTE(v189) = HIBYTE(v20);
          LOWORD(v189) = v174->DpcListEntry.Next;
          BYTE2(v189) = BYTE2(v174->DpcListEntry.Next);
          a4 = RaidAdapterFindUnit(Adapter, v189);
          if ( !a4 )
          {
            Pool = -1056964601;
            goto LABEL_611;
          }
        }
        else
        {
          LODWORD(a4) = Adapter;
        }
        v178 = ExtensionSendMiniportData(
                 (_DWORD)v175,
                 2 - (unsigned int)(v174 != 0LL),
                 (_DWORD)a3,
                 a4,
                 v176,
                 (__int64)v177);
        Pool = -1056964607;
        if ( v178 >= 0 )
          Pool = 0;
        goto LABEL_611;
      default:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 80LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids, v11);
        }
        goto LABEL_611;
    }
  }
  Adapter = RaidpPortGetAdapter(v12);
  v19 = ExtensionExtendedFuncReplace(v11, Adapter, &v196);
  v20 = 0;
  Object = 0LL;
  if ( v19 == -1073741822 )
  {
    if ( StorpControl )
    {
      ExtensionExtendedFuncPre(v11, Adapter, &v196);
      v20 = 0;
      Object = 0LL;
    }
    v12 = a2;
    goto LABEL_14;
  }
  return (unsigned int)RaidNtStatusToStorStatus(v19);
}
