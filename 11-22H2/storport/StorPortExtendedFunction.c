/*
 * XREFs of StorPortExtendedFunction @ 0x1C000B040
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterAcquireStartIoLock @ 0x1C000759C (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0008690 (RaidAdapterAcquireInterruptLock.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorEtwMiniportEventProxy @ 0x1C000AEF0 (StorEtwMiniportEventProxy.c)
 *     StorpRequestTimer @ 0x1C000D7FC (StorpRequestTimer.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidNtStatusToStorStatus @ 0x1C000D988 (RaidNtStatusToStorStatus.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0013920 (StorpTelemetryMiniportEvent.c)
 *     StorpSetUnitAttributes @ 0x1C0013B6C (StorpSetUnitAttributes.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0013D5C (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorpQueueWorkItem @ 0x1C001408C (StorpQueueWorkItem.c)
 *     StorpInitializeWorkItem @ 0x1C0014238 (StorpInitializeWorkItem.c)
 *     StorpFreeWorkItem @ 0x1C00146C0 (StorpFreeWorkItem.c)
 *     StorpAllocatePool @ 0x1C0019F70 (StorpAllocatePool.c)
 *     StorpFreePool @ 0x1C0019FEC (StorpFreePool.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C001A1F8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C001A298 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidGetStartIoPerfParams @ 0x1C001D8A0 (RaidGetStartIoPerfParams.c)
 *     StorpAcquireMSISpinLock @ 0x1C001F4B8 (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C001F534 (StorpReleaseMSISpinLock.c)
 *     RaidGetD3ColdInterface @ 0x1C0020144 (RaidGetD3ColdInterface.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C0020334 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C002124C (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0024A76 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorpGetRequestInfo @ 0x1C0024C80 (StorpGetRequestInfo.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidInitializeCryptoEngine @ 0x1C003B710 (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOpts @ 0x1C003B850 (RaidInitializePerfOpts.c)
 *     RaidInitializeRpmb @ 0x1C003CEF4 (RaidInitializeRpmb.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     ExtensionExtendedFuncPost @ 0x1C0040FFC (ExtensionExtendedFuncPost.c)
 *     ExtensionExtendedFuncPre @ 0x1C0041054 (ExtensionExtendedFuncPre.c)
 *     ExtensionExtendedFuncReplace @ 0x1C00410AC (ExtensionExtendedFuncReplace.c)
 *     ExtensionSendMiniportData @ 0x1C0041104 (ExtensionSendMiniportData.c)
 *     RaMiniportSaveFeatureList @ 0x1C0043B20 (RaMiniportSaveFeatureList.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0043C74 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C00448C8 (RaidAdapterCacheOperationalPowerRange.c)
 *     StorBuildScatterGatherListProxy @ 0x1C0044D68 (StorBuildScatterGatherListProxy.c)
 *     StorDelayExecution @ 0x1C0044DCC (StorDelayExecution.c)
 *     StorEnableRegistryKeyNotification @ 0x1C0044F24 (StorEnableRegistryKeyNotification.c)
 *     StorEtwMiniportLogError @ 0x1C004510C (StorEtwMiniportLogError.c)
 *     StorGetMessageInterruptIDFromProcessorIndex @ 0x1C0045754 (StorGetMessageInterruptIDFromProcessorIndex.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C00471C4 (StorPortpInvokeAcpiMethod.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C00472A8 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorReset @ 0x1C0047378 (StorReset.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C0047B28 (StorpAdapterInitializePoFxPower.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C0047E88 (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C0047F00 (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C004835C (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C00484B4 (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C0048700 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C0048760 (StorpFlushDataBufferMdl.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C00487C8 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C004889C (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C004895C (StorpFreeTimer.c)
 *     StorpGetActiveNodeCount @ 0x1C0048BEC (StorpGetActiveNodeCount.c)
 *     StorpGetDataInSgList @ 0x1C0048C80 (StorpGetDataInSgList.c)
 *     StorpGetDeviceObjects @ 0x1C0048D14 (StorpGetDeviceObjects.c)
 *     StorpGetGroupAffinity @ 0x1C0048FE8 (StorpGetGroupAffinity.c)
 *     StorpGetMSIInfo @ 0x1C0049044 (StorpGetMSIInfo.c)
 *     StorpGetNodeAffinity2 @ 0x1C0049130 (StorpGetNodeAffinity2.c)
 *     StorpGetOriginalMdl @ 0x1C004918C (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C004920C (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C00493AC (StorpInitializeTimer.c)
 *     StorpLogSystemEvent @ 0x1C0049540 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C0049FAC (StorpPutScatterGatherList.c)
 *     StorpUnitInitializePoFxPower @ 0x1C004A0E0 (StorpUnitInitializePoFxPower.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C004BACC (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidGetD3ColdCapability @ 0x1C004C21C (RaidGetD3ColdCapability.c)
 *     RaidRegisterPerfStates @ 0x1C004CBC0 (RaidRegisterPerfStates.c)
 *     RaidCaptureLiveDump @ 0x1C0058518 (RaidCaptureLiveDump.c)
 *     RaidMaskUnmaskPciMsixEntry @ 0x1C005A3C8 (RaidMaskUnmaskPciMsixEntry.c)
 *     StorEtwMiniportLogByteStream @ 0x1C0068AAC (StorEtwMiniportLogByteStream.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C006D3D0 (StorpLogRegisterAdapterPerfStates.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        unsigned int a1,
        __int64 a2,
        KSPIN_LOCK *a3,
        GUID *a4,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *a5,
        PULONG a6,
        PHYSICAL_ADDRESS a7,
        PHYSICAL_ADDRESS a8,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // r12d
  __int64 v12; // r14
  unsigned int Pool; // edi
  __int64 Adapter; // rsi
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned __int32 v21; // r10d
  KSPIN_LOCK DeferredContext; // rcx
  __int64 v23; // rax
  struct _KDPC *v24; // rbx
  struct _KDPC *v25; // rbx
  LPGUID v26; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int LockArray_high; // eax
  struct _KDPC *v29; // rbx
  unsigned int LogicalProcessorRelationship; // eax
  KSPIN_LOCK ProcessorHistory; // rcx
  KSPIN_LOCK SystemArgument2; // rcx
  LPGUID v33; // rbx
  LPGUID v34; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v35; // rbx
  LPGUID v36; // rbx
  struct _KDPC *v37; // r9
  int v38; // eax
  LARGE_INTEGER *v39; // rbx
  struct _KDPC *v40; // rbx
  LPGUID v41; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v42; // r14
  int v43; // r12d
  struct _KDPC *v44; // r15
  LPGUID v45; // r9
  char v46; // al
  KIRQL CurrentIrql; // r13
  __int64 Unit; // rax
  __int64 v49; // r14
  unsigned int v50; // eax
  unsigned int v51; // eax
  struct _KDPC *v52; // r15
  LPGUID v53; // r9
  unsigned int v54; // r12d
  int v55; // r13d
  __int64 v56; // r14
  struct _KDPC *v57; // rbx
  unsigned int v58; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v59; // r15
  __int64 v60; // rax
  __int64 v61; // rbx
  _QWORD *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  struct _KDPC *v65; // rbx
  unsigned int v66; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v67; // r15
  __int64 v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  struct _KDPC *v72; // rbx
  LPGUID v73; // r15
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v74; // r12
  PULONG v75; // r13
  _QWORD *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rbx
  unsigned int v79; // eax
  int v80; // eax
  unsigned int v81; // ebx
  int v82; // r8d
  int v83; // r10d
  int v84; // r11d
  __int64 QuadPart; // rbx
  __int64 v86; // rax
  int D3ColdInterface; // eax
  char v88; // di
  unsigned int v89; // r12d
  unsigned int v90; // ebx
  unsigned int v91; // r15d
  unsigned int LowPart; // r13d
  KIRQL v93; // al
  __int64 v94; // rdx
  struct _KDPC *v95; // r9
  LPGUID v96; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v97; // r15
  char Next; // al
  LPGUID v99; // rbx
  struct _KDPC *v100; // r9
  __int64 v101; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v102; // r10
  LPGUID v103; // rdx
  PULONG v104; // r9
  __int64 v105; // r11
  LPGUID v106; // rdi
  unsigned int v107; // r14d
  KSPIN_LOCK v108; // rbx
  unsigned int v109; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v110; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v111; // rbx
  LPGUID v112; // rbx
  struct _KDPC *v113; // r9
  LPGUID v114; // r8
  KSPIN_LOCK v115; // rdx
  LPGUID v116; // r10
  struct _KDPC *v117; // r11
  unsigned int Data1; // eax
  __int64 v119; // r9
  unsigned int v120; // eax
  int v121; // r9d
  int v122; // r9d
  int v123; // r10d
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v124; // rbx
  __int64 Timer; // rax
  _BYTE *v126; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v127; // rbx
  char v128; // al
  _BYTE *v129; // rbx
  _DWORD **v130; // rax
  LPGUID v131; // r13
  _DWORD *v132; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v133; // r15
  int v134; // ecx
  int v135; // ecx
  int v136; // ecx
  LPGUID v137; // rbx
  LPGUID v138; // r9
  __int64 v139; // rdx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v140; // r9
  LPGUID v141; // r8
  union _LARGE_INTEGER *Timeout; // rbx
  PKSPIN_LOCK p_TargetInfoAsUlong; // rdi
  BOOLEAN v144; // r14
  struct _KEVENT *v145; // rbx
  LPGUID v146; // r10
  unsigned int v147; // r9d
  LPGUID v148; // rbx
  struct _KDPC *v149; // r9
  unsigned int v150; // eax
  int v151; // edi
  int v152; // ebx
  int v153; // r15d
  int v154; // r9d
  PULONG v155; // r10
  __int64 v156; // r12
  __int64 v157; // r11
  unsigned int v158; // r13d
  struct _KDPC_WATCHDOG_INFORMATION *v159; // r14
  KIRQL v160; // bl
  NTSTATUS DpcWatchdogInformation; // r14d
  unsigned int v162; // r9d
  unsigned __int8 v163; // r10
  unsigned int v164; // eax
  struct _KDPC *v165; // rbx
  KSTART_ROUTINE *StartRoutine; // rbx
  LPGUID StartContext; // r15
  KPRIORITY *v168; // rdi
  PULONG v169; // r14
  NTSTATUS v170; // eax
  void *v171; // rcx
  NTSTATUS v172; // ebx
  PKSPIN_LOCK v173; // rdi
  KPRIORITY v174; // ebx
  NTSTATUS v175; // edi
  struct _GROUP_AFFINITY *v176; // rbx
  struct _GROUP_AFFINITY *v177; // rdi
  struct _GROUP_AFFINITY *v178; // rbx
  struct _KDPC *v179; // rbx
  LPGUID v180; // rdi
  __int64 v181; // r15
  PULONG v182; // r12
  char v183; // al
  __int64 v184; // rax
  int v185; // r9d
  int v186; // eax
  int v187; // r10d
  int v188; // r12d
  PULONG v189; // rdi
  __int64 v190; // rbx
  __int64 *v191; // r15
  __int64 v192; // rax
  ULONG v193; // edi
  void *ThreadHandle; // [rsp+50h] [rbp-39h] BYREF
  PVOID Object; // [rsp+58h] [rbp-31h] BYREF
  PHYSICAL_ADDRESS v196; // [rsp+60h] [rbp-29h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  __int64 v199; // [rsp+F8h] [rbp+6Fh]
  struct _KDPC *v200; // [rsp+100h] [rbp+77h] BYREF
  LPGUID v201; // [rsp+108h] [rbp+7Fh]

  v199 = a2;
  v200 = (struct _KDPC *)a3;
  v201 = a4;
  v11 = a1;
  Object = 0LL;
  v12 = a2;
  Pool = -1056964606;
  Adapter = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !a2 )
    return 3238002694LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids, a1);
    v12 = v199;
  }
  if ( !StorpControl )
  {
    v21 = 0;
LABEL_14:
    Object = &v200;
    DeferredContext = 0x1C0000000uLL;
    switch ( v11 )
    {
      case 0u:
        Pool = StorpAllocatePool(0x1C0000000uLL, (unsigned int)v200, (unsigned int)v201, a5);
        goto LABEL_253;
      case 1u:
        Pool = StorpFreePool(0x1C0000000uLL, v200);
        goto LABEL_253;
      case 2u:
        Pool = StorpAllocateMdl(0x1C0000000uLL, v200, (unsigned int)v201, a5);
        goto LABEL_253;
      case 3u:
        Pool = StorpFreeMdl(0x1C0000000uLL, v200);
        goto LABEL_253;
      case 4u:
        Pool = StorpBuildMdlForNonPagedPool(0x1C0000000uLL, v200);
        goto LABEL_253;
      case 5u:
        Pool = StorpGetSystemAddress(0x1C0000000uLL, v200, 0LL, v201);
        goto LABEL_253;
      case 6u:
        DeferredContext = (KSPIN_LOCK)v201;
        Pool = 0;
        if ( v201 )
        {
          if ( LOBYTE(v200->Number) == 40 )
            v23 = *((_QWORD *)v200[1].DeferredContext + 13);
          else
            v23 = *((_QWORD *)v200->SystemArgument2 + 13);
          *(_QWORD *)&v201->Data1 = v23;
        }
        else
        {
          DeferredContext = (KSPIN_LOCK)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            goto LABEL_272;
          }
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 43LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 7u:
        Pool = StorpCompleteServiceIrp(v12, v200);
        goto LABEL_253;
      case 8u:
        Pool = StorpGetDeviceObjects(v12, v200, v201, a5);
        goto LABEL_253;
      case 9u:
        Pool = StorBuildScatterGatherListProxy(v12, &v200);
        goto LABEL_253;
      case 0xAu:
        Pool = StorpPutScatterGatherList(v12, v200, (unsigned __int8)v201);
        goto LABEL_253;
      case 0xBu:
        Pool = StorpAcquireMSISpinLock(v12, (unsigned int)v200, v201);
        goto LABEL_253;
      case 0xCu:
        Pool = StorpReleaseMSISpinLock(v12, (unsigned int)v200, (unsigned int)v201);
        goto LABEL_253;
      case 0xDu:
        Pool = StorpGetMSIInfo(v12, (unsigned int)v200, v201);
        goto LABEL_253;
      case 0xEu:
        Pool = RaidInitializePerfOpts(v12, (unsigned __int8)v200, v201);
        goto LABEL_253;
      case 0xFu:
        Pool = RaidGetStartIoPerfParams(v12, v200, v201);
        goto LABEL_253;
      case 0x10u:
        Pool = StorpLogSystemEvent(v12, v200, v201);
        goto LABEL_253;
      case 0x11u:
        DeferredContext = (KSPIN_LOCK)v200;
        if ( v200 )
        {
          KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)v200);
          goto LABEL_45;
        }
        Pool = -1056964602;
        goto LABEL_253;
      case 0x12u:
        v24 = v200;
        if ( v200 )
        {
          LOWORD(v24->TargetInfoAsUlong) = KeQueryActiveGroupCount();
          Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x13u:
        Pool = StorpGetGroupAffinity(0x1C0000000uLL, (unsigned __int16)v200, v201);
        goto LABEL_253;
      case 0x14u:
        Pool = StorpGetActiveNodeCount(0x1C0000000uLL, v200);
        goto LABEL_253;
      case 0x15u:
        if ( v201 )
        {
          if ( (unsigned int)v200 <= 0xFFFF )
          {
            KeQueryNodeActiveAffinity((USHORT)v200, (PGROUP_AFFINITY)v201, 0LL);
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
        goto LABEL_253;
      case 0x16u:
        v25 = v200;
        if ( v200 )
        {
          v25->TargetInfoAsUlong = KeQueryHighestNodeNumber();
          Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x17u:
        LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                         (PPROCESSOR_NUMBER)v200,
                                         (LOGICAL_PROCESSOR_RELATIONSHIP)v201,
                                         a5,
                                         a6);
        if ( LogicalProcessorRelationship == -1073741820 )
          goto LABEL_74;
        if ( LogicalProcessorRelationship == -1073741811 )
          goto LABEL_272;
        Pool = RaidNtStatusToStorStatus(LogicalProcessorRelationship);
        goto LABEL_253;
      case 0x18u:
        Pool = StorpAllocateContiguousMemorySpecifyCacheNode(
                 (_DWORD)a9,
                 (_DWORD)v200,
                 (_DWORD)v201,
                 (_DWORD)a5,
                 (__int64)a6,
                 a7.LowPart,
                 a8.LowPart,
                 (__int64)a9);
        goto LABEL_253;
      case 0x19u:
        MmFreeContiguousMemorySpecifyCache(v200, (SIZE_T)v201, (MEMORY_CACHING_TYPE)a5);
        Pool = 0;
        goto LABEL_253;
      case 0x1Au:
        Pool = StorPortpSetPowerSettingNotificationGuids(v12, (unsigned int)v200, v201);
        goto LABEL_253;
      case 0x1Bu:
        Pool = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
                 v12,
                 v200,
                 (PHYSICAL_ADDRESS)a7.QuadPart,
                 a5,
                 (_DWORD)a6,
                 (PHYSICAL_ADDRESS)a7.QuadPart,
                 a8.LowPart,
                 a9);
        goto LABEL_253;
      case 0x1Cu:
        Pool = StorpGetRequestInfo(0x1C0000000uLL, v200, v201);
        goto LABEL_253;
      case 0x1Du:
        Pool = StorpInitializeWorkItem(v12, v200);
        goto LABEL_253;
      case 0x1Eu:
        Pool = StorpQueueWorkItem(v12, v200, v201, a5);
        goto LABEL_253;
      case 0x1Fu:
        Pool = StorpFreeWorkItem(v12, v200);
        goto LABEL_253;
      case 0x20u:
        Pool = StorpInitializeTimer(v12, v200);
        goto LABEL_253;
      case 0x21u:
        Pool = StorpRequestTimer(v12, (_DWORD)v200, (_DWORD)v201, (_DWORD)a5, (__int64)a6, a7.QuadPart);
        goto LABEL_253;
      case 0x22u:
        Pool = StorpFreeTimer(v12, v200);
        goto LABEL_253;
      case 0x23u:
        InitializeSListHead((PSLIST_HEADER)v200);
        Pool = 0;
        goto LABEL_253;
      case 0x24u:
        v33 = v201;
        *(_QWORD *)&v33->Data1 = ExpInterlockedFlushSList((PSLIST_HEADER)v200);
        Pool = 0;
        goto LABEL_253;
      case 0x25u:
        v34 = v201;
        *(_QWORD *)&v34->Data1 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v200);
        Pool = 0;
        goto LABEL_253;
      case 0x26u:
        v35 = a5;
        *(_QWORD *)&v35->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v200, (PSLIST_ENTRY)v201);
        Pool = 0;
        goto LABEL_253;
      case 0x27u:
        v36 = v201;
        LOWORD(v36->Data1) = ExQueryDepthSList((PSLIST_HEADER)v200);
        Pool = 0;
        goto LABEL_253;
      case 0x28u:
        if ( !v200 || !v201 )
          goto LABEL_272;
        if ( LOBYTE(v200->Number) == 40 )
        {
          ProcessorHistory = v200[1].ProcessorHistory;
        }
        else
        {
          SystemArgument2 = (KSPIN_LOCK)v200->SystemArgument2;
          if ( !SystemArgument2 || *(_DWORD *)SystemArgument2 != 523124044 )
            goto LABEL_90;
          ProcessorHistory = *(_QWORD *)(SystemArgument2 + 176);
        }
        if ( ProcessorHistory )
        {
          Pool = -1056964607;
          if ( (int)IoGetActivityIdIrp(ProcessorHistory, v201) >= 0 )
            Pool = 0;
          goto LABEL_253;
        }
LABEL_90:
        Pool = -1056964607;
        if ( EtwActivityIdControl(3u, v201) >= 0 )
          Pool = 0;
        goto LABEL_253;
      case 0x29u:
        v37 = v200;
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
            goto LABEL_272;
        }
        v38 = *(_DWORD *)(Adapter + 56);
        if ( v38 == -1 )
        {
          Pool = -1056964599;
        }
        else
        {
          if ( !v37 || LOWORD(v37->TargetInfoAsUlong) != 1 || *((_DWORD *)&v37->0 + 1) < 4u )
            goto LABEL_272;
          v37->Number = v38;
          Pool = v21;
          LOWORD(v37->DpcListEntry.Next) = -1;
          BYTE2(v37->DpcListEntry.Next) = -1;
        }
        goto LABEL_253;
      case 0x2Au:
        LOBYTE(a3) = 1;
        Pool = StorpGetOriginalMdl(0x1C0000000uLL, v200, a3, v201);
        goto LABEL_253;
      case 0x2Bu:
        LOBYTE(a3) = 1;
        Pool = StorpGetSystemAddress(0x1C0000000uLL, v200, a3, v201);
        goto LABEL_253;
      case 0x2Cu:
        Pool = StorpGetDataInSgList(v12, v200, v201);
        goto LABEL_253;
      case 0x2Eu:
        Pool = StorpSetUnitAttributes(v12, v200, (unsigned int)v201);
        goto LABEL_253;
      case 0x2Fu:
        v39 = (LARGE_INTEGER *)v201;
        DeferredContext = (KSPIN_LOCK)v200;
        if ( !v201 )
          goto LABEL_272;
        if ( v200 )
          *(_QWORD *)&v200->TargetInfoAsUlong = 1LL;
        if ( UseQPCTime )
          *v39 = KeQueryPerformanceCounter((PLARGE_INTEGER)DeferredContext);
        else
          v39->QuadPart = KeQueryUnbiasedInterruptTime();
        Pool = 0;
        goto LABEL_253;
      case 0x30u:
        v40 = v200;
        v41 = v201;
        v42 = a5;
        if ( KeGetCurrentIrql() )
        {
          Pool = -1056964600;
        }
        else if ( v40 )
        {
          Pool = StorpUnitInitializePoFxPower(v199, v40, v41, v42);
        }
        else
        {
          Pool = StorpAdapterInitializePoFxPower(v199, v41, v42);
        }
        goto LABEL_253;
      case 0x31u:
        v43 = 0;
        v44 = v200;
        v45 = v201;
        LODWORD(Object) = (_DWORD)a5;
        LODWORD(ThreadHandle) = (_DWORD)a6;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        Pool = v21;
        if ( v45 )
        {
          v46 = BYTE2(v45->Data1);
          if ( v46 == 40 )
            v16 = *(_QWORD *)&v45[6].Data1;
          else
            v16 = *(_QWORD *)&v45[3].Data1;
          if ( !v16 || *(_DWORD *)v16 != 523124044 )
            goto LABEL_297;
          if ( v46 == 40 )
            v43 = *(_DWORD *)v45[1].Data4;
          else
            v43 = *(_DWORD *)&v45->Data4[4];
        }
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          goto LABEL_251;
        if ( (_DWORD)ThreadHandle )
        {
          Pool = -1056964602;
          goto LABEL_252;
        }
        if ( !Adapter )
        {
          Pool = -1056964602;
          goto LABEL_252;
        }
        if ( !v44 )
        {
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_252;
          }
          if ( *(_QWORD *)(Adapter + 4896) && (v43 & 0x100800) == 0 )
          {
            if ( CurrentIrql == 2 || (*(_BYTE *)(Adapter + 107) & 6) != 0 )
              v51 = 2;
            else
              v51 = 0;
            Pool = RaidAdapterPoFxActivateComponentFromMiniport(Adapter, (unsigned int)Object, v51);
            if ( v16 )
              *(_BYTE *)(v16 + 16) |= 0x80u;
            goto LABEL_252;
          }
          goto LABEL_618;
        }
        if ( LOWORD(v44->TargetInfoAsUlong) != 1 )
          goto LABEL_297;
        if ( *((_DWORD *)&v44->0 + 1) < 4u )
          goto LABEL_297;
        LODWORD(ThreadHandle) = 0;
        LOWORD(ThreadHandle) = v44->DpcListEntry.Next;
        BYTE2(ThreadHandle) = BYTE2(v44->DpcListEntry.Next);
        Unit = RaidAdapterFindUnit(Adapter, (unsigned int)ThreadHandle);
        v49 = Unit;
        if ( !Unit )
          goto LABEL_297;
        if ( RuntimePowerDisabled )
        {
          Pool = 0;
          goto LABEL_252;
        }
        if ( (v43 & 0x100800) != 0 )
        {
          if ( RaidUnitCheckAndAcquirePoFx(Unit) )
          {
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v49 + 1784));
            goto LABEL_252;
          }
          if ( !*(_QWORD *)(*(_QWORD *)(v49 + 24) + 4896LL) )
            goto LABEL_252;
        }
        if ( CurrentIrql == 2 || (*(_BYTE *)(v49 + 449) & 1) != 0 || *(char *)(v49 + 448) < 0 )
          v50 = 2;
        else
          v50 = 0;
        v11 = a1;
        Pool = RaidUnitPoFxActivateComponentFromMiniport(v49, (unsigned int)Object, v50);
        if ( v16 )
          *(_BYTE *)(v16 + 16) |= 0x80u;
        goto LABEL_253;
      case 0x32u:
        v52 = v200;
        v53 = v201;
        v54 = (unsigned int)a5;
        v55 = (int)a6;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        Pool = v21;
        if ( v53 )
        {
          if ( BYTE2(v53->Data1) == 40 )
            v16 = *(_QWORD *)&v53[6].Data1;
          else
            v16 = *(_QWORD *)&v53[3].Data1;
          if ( !v16 || *(_DWORD *)v16 != 523124044 )
            goto LABEL_297;
          if ( *(char *)(v16 + 16) >= 0 )
            goto LABEL_252;
        }
        if ( KeGetCurrentIrql() > 2u && !v16 )
          goto LABEL_251;
        if ( v55 )
        {
          Pool = -1056964602;
          goto LABEL_252;
        }
        if ( !Adapter )
        {
          Pool = -1056964602;
          goto LABEL_252;
        }
        if ( v52 )
        {
          if ( LOWORD(v52->TargetInfoAsUlong) != 1 )
            goto LABEL_297;
          if ( *((_DWORD *)&v52->0 + 1) < 4u )
            goto LABEL_297;
          LODWORD(ThreadHandle) = 0;
          LOWORD(ThreadHandle) = v52->DpcListEntry.Next;
          BYTE2(ThreadHandle) = BYTE2(v52->DpcListEntry.Next);
          v56 = RaidAdapterFindUnit(Adapter, (unsigned int)ThreadHandle);
          if ( !v56 )
            goto LABEL_297;
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
          goto LABEL_252;
        }
        if ( RuntimePowerDisabled )
          goto LABEL_252;
        if ( *(_QWORD *)(Adapter + 4896) )
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
          goto LABEL_252;
        }
        goto LABEL_618;
      case 0x33u:
        v57 = v200;
        v58 = (unsigned int)v201;
        v59 = a5;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        if ( KeGetCurrentIrql() > 2u )
        {
          Pool = -1056964600;
          goto LABEL_253;
        }
        if ( !Adapter )
        {
          Pool = -1056964602;
          goto LABEL_253;
        }
        if ( v57 )
        {
          if ( LOWORD(v57->TargetInfoAsUlong) != 1 )
            goto LABEL_272;
          if ( *((_DWORD *)&v57->0 + 1) < 4u )
            goto LABEL_272;
          LODWORD(ThreadHandle) = 0;
          LOWORD(ThreadHandle) = v57->DpcListEntry.Next;
          BYTE2(ThreadHandle) = BYTE2(v57->DpcListEntry.Next);
          v60 = RaidAdapterFindUnit(Adapter, (unsigned int)ThreadHandle);
          v61 = v60;
          if ( !v60 )
            goto LABEL_272;
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_253;
          }
          if ( RaidUnitCheckAndAcquirePoFx(v60) )
          {
            v62 = *(_QWORD **)(v61 + 1792);
            v63 = v62[1];
            if ( v58 + 1 >= *(_DWORD *)(v63 + 8) && v58 + 1 <= *(_DWORD *)(v63 + 8) )
            {
              PoFxSetComponentLatency(*v62, v58, v59);
              Pool = 0;
              goto LABEL_217;
            }
            goto LABEL_216;
          }
          goto LABEL_580;
        }
        if ( RuntimePowerDisabled )
        {
          Pool = 0;
          goto LABEL_253;
        }
        DeferredContext = *(_QWORD *)(Adapter + 4896);
        if ( !DeferredContext )
          goto LABEL_580;
        v64 = *(_QWORD *)(DeferredContext + 8);
        if ( v58 + 1 >= *(_DWORD *)(v64 + 8) && v58 + 1 <= *(_DWORD *)(v64 + 8) )
        {
          PoFxSetComponentLatency(*(_QWORD *)DeferredContext, v58, v59);
          Pool = 0;
          goto LABEL_253;
        }
        goto LABEL_272;
      case 0x34u:
        v65 = v200;
        v66 = (unsigned int)v201;
        v67 = a5;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        if ( KeGetCurrentIrql() > 2u )
        {
          Pool = -1056964600;
          goto LABEL_253;
        }
        if ( !Adapter )
        {
          Pool = -1056964602;
          goto LABEL_253;
        }
        if ( v65 )
        {
          if ( LOWORD(v65->TargetInfoAsUlong) != 1 )
            goto LABEL_272;
          if ( *((_DWORD *)&v65->0 + 1) < 4u )
            goto LABEL_272;
          LODWORD(ThreadHandle) = 0;
          LOWORD(ThreadHandle) = v65->DpcListEntry.Next;
          BYTE2(ThreadHandle) = BYTE2(v65->DpcListEntry.Next);
          v68 = RaidAdapterFindUnit(Adapter, (unsigned int)ThreadHandle);
          v61 = v68;
          if ( !v68 )
            goto LABEL_272;
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_253;
          }
          if ( RaidUnitCheckAndAcquirePoFx(v68) )
          {
            v69 = *(_QWORD **)(v61 + 1792);
            v70 = v69[1];
            if ( v66 + 1 < *(_DWORD *)(v70 + 8) || v66 + 1 > *(_DWORD *)(v70 + 8) )
            {
LABEL_216:
              Pool = -1056964602;
            }
            else
            {
              PoFxSetComponentResidency(*v69, v66, v67);
              Pool = 0;
            }
LABEL_217:
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v61 + 1784));
            goto LABEL_253;
          }
          goto LABEL_580;
        }
        if ( RuntimePowerDisabled )
        {
          Pool = 0;
          goto LABEL_253;
        }
        DeferredContext = *(_QWORD *)(Adapter + 4896);
        if ( !DeferredContext )
          goto LABEL_580;
        v71 = *(_QWORD *)(DeferredContext + 8);
        if ( v66 + 1 >= *(_DWORD *)(v71 + 8) && v66 + 1 <= *(_DWORD *)(v71 + 8) )
        {
          PoFxSetComponentResidency(*(_QWORD *)DeferredContext, v66, v67);
          Pool = 0;
          goto LABEL_253;
        }
        goto LABEL_272;
      case 0x35u:
        v72 = v200;
        v73 = v201;
        v74 = a5;
        v75 = a6;
        v76 = a9;
        v196 = a7;
        Object = (PVOID)a8.QuadPart;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        if ( KeGetCurrentIrql() > 2u )
        {
          if ( v76 )
            *v76 = 0LL;
LABEL_251:
          Pool = -1056964600;
          goto LABEL_252;
        }
        if ( !Adapter )
        {
          Pool = -1056964602;
          goto LABEL_252;
        }
        if ( v72 )
        {
          if ( LOWORD(v72->TargetInfoAsUlong) != 1 )
            goto LABEL_297;
          if ( *((_DWORD *)&v72->0 + 1) < 4u )
            goto LABEL_297;
          LODWORD(ThreadHandle) = 0;
          LOWORD(ThreadHandle) = v72->DpcListEntry.Next;
          BYTE2(ThreadHandle) = BYTE2(v72->DpcListEntry.Next);
          v77 = RaidAdapterFindUnit(Adapter, (unsigned int)ThreadHandle);
          v78 = v77;
          if ( !v77 )
            goto LABEL_297;
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_252;
          }
          if ( RaidUnitCheckAndAcquirePoFx(v77) )
          {
            v79 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    **(_QWORD **)(v78 + 1792),
                    v73,
                    v74,
                    v75,
                    (PHYSICAL_ADDRESS)v196.QuadPart,
                    Object,
                    v76);
            Pool = RaidNtStatusToStorStatus(v79);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v78 + 1784));
            goto LABEL_252;
          }
        }
        else
        {
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_252;
          }
          DeferredContext = *(_QWORD *)(Adapter + 4896);
          if ( DeferredContext )
          {
            v80 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    *(_QWORD *)DeferredContext,
                    v73,
                    v74,
                    v75,
                    (PHYSICAL_ADDRESS)v196.QuadPart,
                    Object,
                    v76);
            goto LABEL_270;
          }
        }
        goto LABEL_618;
      case 0x36u:
        Pool = StorpFlushDataBufferMdl(0x1C0000000uLL, v200);
        goto LABEL_253;
      case 0x37u:
        v95 = v200;
        v96 = v201;
        v97 = a5;
        if ( !Adapter )
          Adapter = RaidpPortGetAdapter(v12);
        if ( !v97 || !Adapter )
          goto LABEL_272;
        v97->Relationship = v21;
        if ( !v95 )
          goto LABEL_326;
        if ( LOWORD(v95->TargetInfoAsUlong) != 1 || *((_DWORD *)&v95->0 + 1) < 4u )
          goto LABEL_272;
        Next = (char)v95->DpcListEntry.Next;
        LODWORD(ThreadHandle) = v21;
        LOBYTE(ThreadHandle) = Next;
        *(_WORD *)((char *)&ThreadHandle + 1) = *(_WORD *)((char *)&v95->DpcListEntry.Next + 1);
        if ( RaidAdapterFindUnit(Adapter, (unsigned int)ThreadHandle) )
        {
          v21 = 0;
LABEL_326:
          if ( *(_QWORD *)&v96->Data1 == 0x481F895FDCAF9C10LL && *(_QWORD *)v96->Data4 == 0x3356F5D2CED492A4LL )
          {
            Pool = v21;
            v97->Relationship = (unsigned __int8)g_InWinPE;
          }
          else if ( *(_QWORD *)&v96->Data1 == 0x444B2B37D52CE820LL && *(_QWORD *)v96->Data4 == 0x7BD091E5920033A6LL )
          {
            Pool = v21;
            v97->Relationship = RelationNumaNode;
          }
          else if ( *(_QWORD *)&v96->Data1 == 0x48E8F89B2B9443ACLL && *(_QWORD *)v96->Data4 == 0x5AFD6EC9B62C92B2LL )
          {
            v97->Relationship = (unsigned __int8)ExIsSoftBoot();
            Pool = 0;
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x38u:
        DeferredContext = (KSPIN_LOCK)v200;
        v26 = v201;
        if ( !v200 || !v201 )
          goto LABEL_272;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v200);
        v26->Data1 = ProcessorIndexFromNumber;
        DeferredContext = 0LL;
        if ( ProcessorIndexFromNumber == -1 )
          DeferredContext = 3238002694LL;
        Pool = DeferredContext;
        goto LABEL_253;
      case 0x39u:
        v81 = (unsigned int)v201;
        if ( v200 )
          goto LABEL_272;
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_253;
          }
        }
        if ( RuntimePowerDisabled )
        {
          Pool = v21;
          goto LABEL_253;
        }
        if ( !*(_QWORD *)(Adapter + 4896) || *(char *)(Adapter + 107) < 0 )
          goto LABEL_447;
        RaidAdapterPoFxSetDeviceIdleTimeout(Adapter, v81, a3, 0LL);
        if ( !StorEtwLoggingEnabled || (byte_1C0092A02 & 0x10) == 0 )
          goto LABEL_45;
        McTemplateK0pqqq_EtwWriteTransfer(
          DeferredContext,
          (unsigned int)&EventAdapterIdleTimeoutSet,
          v82,
          **(_QWORD **)(Adapter + 4896),
          *(_DWORD *)(Adapter + 56),
          v81,
          *(_DWORD *)(Adapter + 4912));
        Pool = 0;
        goto LABEL_253;
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
        goto LABEL_253;
      case 0x3Du:
        DeferredContext = (KSPIN_LOCK)v200;
        if ( v200 )
        {
          Pool = 0;
          v200->Type = g_OSisUpgrade;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x3Eu:
        LOBYTE(a2) = 1;
        Pool = StorAdapterDeviceRegistryKeyProxy(v12, a2, &v200);
        goto LABEL_253;
      case 0x3Fu:
        Pool = StorAdapterDeviceRegistryKeyProxy(v12, 0LL, &v200);
        goto LABEL_253;
      case 0x40u:
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_253;
          }
        }
        DeferredContext = (unsigned int)v200;
        if ( (unsigned int)v200 >= 0x14 )
          goto LABEL_272;
        if ( (*(_BYTE *)(Adapter + 584) & 1) == 0 )
          goto LABEL_447;
        *(_DWORD *)(Adapter + 4212) = (_DWORD)v200;
        Pool = v21;
        goto LABEL_253;
      case 0x41u:
        v83 = (int)v201;
        v84 = (int)a5;
        QuadPart = a7.QuadPart;
        LODWORD(Object) = (_DWORD)a6;
        if ( v200 )
        {
          Pool = -1056964602;
          goto LABEL_253;
        }
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_253;
          }
        }
        if ( RuntimePowerDisabled )
        {
          Pool = 0;
          goto LABEL_253;
        }
        v86 = *(_QWORD *)(Adapter + 4896);
        if ( !v86 || *(_BYTE *)(v86 + 28) )
          goto LABEL_447;
        D3ColdInterface = RaidRegisterPerfStates(
                            *(_QWORD *)(Adapter + 8),
                            v83,
                            v84,
                            (unsigned int)&Object,
                            QuadPart,
                            0LL,
                            *(_QWORD *)v86);
        if ( D3ColdInterface < 0 )
          goto LABEL_502;
        v88 = (char)Object;
        if ( (unsigned __int8)RaidAdapterCacheOperationalPowerRange(
                                *(_QWORD *)(Adapter + 4896),
                                (unsigned int)Object,
                                QuadPart) )
        {
          *(_QWORD *)(*(_QWORD *)(Adapter + 4896) + 48LL) = -1LL;
          *(_QWORD *)(*(_QWORD *)(Adapter + 4896) + 56LL) = -1LL;
          *(_QWORD *)(*(_QWORD *)(Adapter + 4896) + 64LL) = -1LL;
        }
        *(_BYTE *)(*(_QWORD *)(Adapter + 4896) + 28LL) = v88;
        StorpLogRegisterAdapterPerfStates(Adapter, QuadPart);
        Pool = 0;
        goto LABEL_253;
      case 0x42u:
        v89 = (unsigned int)v201;
        v90 = (unsigned int)a5;
        v91 = (unsigned int)a6;
        LowPart = a7.LowPart;
        v196 = a8;
        if ( v200 )
          goto LABEL_297;
        if ( (_DWORD)a5 )
        {
          Pool = -1056964602;
          goto LABEL_252;
        }
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
            goto LABEL_252;
        }
        if ( RuntimePowerDisabled )
        {
          Pool = v21;
          goto LABEL_252;
        }
        if ( !*(_QWORD *)(Adapter + 4896) )
          goto LABEL_312;
        v93 = KeGetCurrentIrql();
        v94 = *(_QWORD *)(Adapter + 4896);
        DeferredContext = *(unsigned __int8 *)(v94 + 28);
        if ( !(_BYTE)DeferredContext || v91 >= (unsigned int)DeferredContext )
          goto LABEL_297;
        if ( _interlockedbittestandset((volatile signed __int32 *)(v94 + 120), 0) )
        {
          Pool = -1056964599;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(Adapter + 4896) + 128LL) = v91;
          *(_DWORD *)(*(_QWORD *)(Adapter + 4896) + 136LL) = LowPart;
          if ( v93 >= 2u )
            v90 = 2;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
            **(_QWORD **)(Adapter + 4896),
            v90,
            v89,
            *(_QWORD *)(Adapter + 4896) + 128LL,
            (PHYSICAL_ADDRESS)v196.QuadPart);
          Pool = 0;
        }
        goto LABEL_252;
      case 0x43u:
        if ( KeGetCurrentIrql() )
          goto LABEL_339;
        v99 = v201;
        Pool = -1056964602;
        v100 = v200;
        if ( !v201 )
          goto LABEL_253;
        LOBYTE(v201->Data1) = 0;
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v199);
          if ( !Adapter )
            goto LABEL_253;
        }
        if ( v100 )
        {
          if ( LOWORD(v100->TargetInfoAsUlong) != 1 )
            goto LABEL_253;
          if ( *((_DWORD *)&v100->0 + 1) < 4u )
            goto LABEL_253;
          LODWORD(ThreadHandle) = 0;
          LOWORD(ThreadHandle) = v100->DpcListEntry.Next;
          BYTE2(ThreadHandle) = BYTE2(v100->DpcListEntry.Next);
          v101 = RaidAdapterFindUnit(Adapter, (unsigned int)ThreadHandle);
          if ( !v101 )
            goto LABEL_253;
          DeferredContext = *(_QWORD *)(v101 + 8);
        }
        else
        {
          DeferredContext = *(_QWORD *)(Adapter + 8);
        }
        if ( DeferredContext )
        {
          Pool = 0;
          v196.QuadPart = 0LL;
          D3ColdInterface = RaidGetD3ColdInterface((PDEVICE_OBJECT)DeferredContext);
          if ( D3ColdInterface < 0 )
LABEL_502:
            Pool = RaidNtStatusToStorStatus((unsigned int)D3ColdInterface);
          else
            LOBYTE(v99->Data1) = ((__int64 (__fastcall *)(_QWORD))RaidGetD3ColdCapability)((PHYSICAL_ADDRESS)v196.QuadPart);
        }
        goto LABEL_253;
      case 0x44u:
        if ( v200 )
          goto LABEL_580;
        Pool = RaidInitializeRpmb(v12, v201);
        goto LABEL_253;
      case 0x45u:
        Pool = StorpAllocateHostMemoryBuffer(v12, (int)v200, (int)v201, (int)a5, (int)a6, a7, a8, (__int64)a9, a10, a11);
        goto LABEL_253;
      case 0x46u:
        Pool = StorpFreeHostMemoryBuffer(v12);
        goto LABEL_253;
      case 0x47u:
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_253;
          }
        }
        if ( !*(_BYTE *)(Adapter + 540) )
        {
          Pool = -1056964601;
          goto LABEL_253;
        }
        v106 = v201;
        v107 = (unsigned int)a5;
        if ( !v200 || !v201 )
          goto LABEL_272;
        if ( LOBYTE(v200->Number) == 40 )
        {
          v108 = v200[1].ProcessorHistory;
        }
        else
        {
          DeferredContext = (KSPIN_LOCK)v200->SystemArgument2;
          if ( !DeferredContext || *(_DWORD *)DeferredContext != 523124044 )
            goto LABEL_272;
          v108 = *(_QWORD *)(DeferredContext + 176);
        }
        if ( !v108 )
          goto LABEL_272;
        if ( KeGetCurrentIrql() <= 2u )
        {
          if ( v107 )
          {
            v109 = IoPropagateIrpExtension(v108, v106, v107);
            Pool = RaidNtStatusToStorStatus(v109);
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
        goto LABEL_253;
      case 0x48u:
        v110 = a5;
        *(_QWORD *)&v110->Relationship = ExInterlockedInsertHeadList(
                                           (PLIST_ENTRY)v200,
                                           (PLIST_ENTRY)v201,
                                           (PKSPIN_LOCK)a6);
        Pool = 0;
        goto LABEL_253;
      case 0x49u:
        v111 = a5;
        *(_QWORD *)&v111->Relationship = ExInterlockedInsertTailList(
                                           (PLIST_ENTRY)v200,
                                           (PLIST_ENTRY)v201,
                                           (PKSPIN_LOCK)a6);
        Pool = 0;
        goto LABEL_253;
      case 0x4Au:
        v112 = v201;
        *(_QWORD *)&v112->Data1 = ExInterlockedRemoveHeadList((PLIST_ENTRY)v200, (PKSPIN_LOCK)a5);
        Pool = 0;
        goto LABEL_253;
      case 0x4Bu:
        KeInitializeSpinLock((PKSPIN_LOCK)&v200->TargetInfoAsUlong);
        Pool = 0;
        goto LABEL_253;
      case 0x4Cu:
        v102 = a5;
        v103 = v201;
        v104 = a6;
        v105 = *(_QWORD *)(v12 - 16);
        if ( !a5 || !a6 || !a7.QuadPart || !v201 || !v200 )
          goto LABEL_272;
        if ( LOBYTE(v200->Number) == 40 )
          DeferredContext = (KSPIN_LOCK)v200[1].DeferredContext;
        else
          DeferredContext = (KSPIN_LOCK)v200->SystemArgument2;
        if ( v201 == *(LPGUID *)(DeferredContext + 136) || v201 == *(LPGUID *)(DeferredContext + 104) )
        {
          DeferredContext = *(unsigned int *)&v201[2].Data4[4];
          *(_DWORD *)a7.QuadPart = DeferredContext;
          if ( ((unsigned int)DeferredContext & *(_DWORD *)(v105 + 56)) != 0 )
          {
            Pool = -1056964607;
          }
          else
          {
            *(_QWORD *)&v102->Relationship = v103 + 3;
            DeferredContext = (*(unsigned int *)v103[2].Data4
                             + 4095LL
                             + (unsigned __int64)((*(_DWORD *)&v103[2].Data4[4] + v103[2].Data1) & 0xFFF)) >> 12;
            *v104 = DeferredContext;
            Pool = 0;
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x4Du:
        v113 = v200;
        if ( v200 )
        {
          if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
            Pool = RaidInitializeCryptoEngine(Adapter, v113);
          else
            Pool = -1056964602;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x4Eu:
        v114 = v201;
        if ( !v200 || !v201 )
          goto LABEL_272;
        if ( LOBYTE(v200->Number) == 40 )
          v115 = (KSPIN_LOCK)v200[1].DeferredContext;
        else
          v115 = (KSPIN_LOCK)v200->SystemArgument2;
        Pool = 0;
        v201->Data1 = **(_DWORD **)(v115 + 784);
        *(_DWORD *)&v114->Data2 = *(_DWORD *)(*(_QWORD *)(v115 + 784) + 4LL);
        *(_DWORD *)v114->Data4 = *(_DWORD *)(*(_QWORD *)(v115 + 784) + 8LL);
        DeferredContext = *(_QWORD *)(*(_QWORD *)(v115 + 784) + 16LL);
        *(_QWORD *)&v114[1].Data1 = DeferredContext;
        goto LABEL_253;
      case 0x4Fu:
        v116 = v201;
        v117 = v200;
        if ( !v201 )
          goto LABEL_272;
        Data1 = v201[3].Data1;
        if ( Data1 > 0x1000 )
        {
          Pool = -1056964598;
          goto LABEL_253;
        }
        if ( Data1 )
        {
          if ( !*(_QWORD *)v201[3].Data4 )
            goto LABEL_272;
        }
        else if ( *(_QWORD *)v201[3].Data4 )
        {
          Pool = -1056964602;
          goto LABEL_253;
        }
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          v119 = 0LL;
          goto LABEL_416;
        }
        goto LABEL_45;
      case 0x50u:
        v121 = (int)v200;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          if ( (*(_BYTE *)(Adapter + 104) & 0x10) != 0 )
          {
            *(_DWORD *)(Adapter + 548) = v121;
            Pool = v21;
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
        goto LABEL_253;
      case 0x51u:
        DeferredContext = (unsigned int)v200;
        if ( !(_DWORD)v200 )
          goto LABEL_45;
        StorDelayExecution((ULONG)v200);
        Pool = 0;
        goto LABEL_253;
      case 0x52u:
        Pool = StorpAllocateContiguousMemorySpecifyCacheNodeEx(
                 v12,
                 (_DWORD)v200,
                 (_DWORD)v201,
                 (_DWORD)a5,
                 (__int64)a6,
                 a7.LowPart,
                 a8.LowPart,
                 (__int64)a9,
                 a10);
        goto LABEL_253;
      case 0x53u:
        Pool = StorpFreeContiguousMemorySpecifyCacheEx(v12, (_DWORD)v200, (_DWORD)v201, (_DWORD)a5, (__int64)a6);
        goto LABEL_253;
      case 0x54u:
        v122 = (int)v200;
        v123 = (int)v201;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          if ( (*(_BYTE *)(Adapter + 104) & 0x10) != 0 )
          {
            *(_DWORD *)(Adapter + 548) = v122;
            Pool = 0;
            *(_DWORD *)(Adapter + 552) = v123;
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
        goto LABEL_253;
      case 0x55u:
      case 0x56u:
      case 0x57u:
        Pool = StorEtwMiniportEventProxy(v12, v11, (__int64 *)&v200);
        goto LABEL_253;
      case 0x58u:
        Pool = 0;
        v124 = a5;
        Timer = ExAllocateTimer(v200, v201, 4LL, a4);
        *(_QWORD *)&v124->Relationship = Timer;
        if ( !Timer )
          goto LABEL_447;
        goto LABEL_253;
      case 0x59u:
        v126 = (_BYTE *)a7.QuadPart;
        DeferredContext = (KSPIN_LOCK)v200;
        if ( a7.QuadPart )
        {
          Pool = 0;
          *v126 = ExSetTimer(v200, v201, a5, a6);
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x5Au:
        v127 = a5;
        DeferredContext = (KSPIN_LOCK)v200;
        if ( a5 )
        {
          Pool = 0;
          v128 = ExCancelTimer(v200, v201);
          LOBYTE(v127->Relationship) = v128;
          if ( !v128 )
            Pool = -1056964607;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x5Bu:
        v129 = (_BYTE *)a7.QuadPart;
        DeferredContext = (KSPIN_LOCK)v200;
        if ( a7.QuadPart )
        {
          Pool = 0;
          *v129 = ExDeleteTimer(v200, (unsigned __int8)v201, (unsigned __int8)a5, a6);
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x5Cu:
        DeferredContext = (KSPIN_LOCK)v200;
        Pool = -1056964602;
        if ( v200 )
        {
          LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
          v200->TargetInfoAsUlong = LockArray_high;
          DeferredContext = 0LL;
          if ( LockArray_high == -1 )
            DeferredContext = 3238002694LL;
          Pool = DeferredContext;
        }
        goto LABEL_253;
      case 0x5Du:
        v130 = *(_DWORD ***)(v12 - 16);
        DeferredContext = (unsigned int)v200;
        Pool = 0;
        v131 = v201;
        v132 = 0LL;
        v133 = a5;
        if ( !v130 )
          goto LABEL_462;
        v132 = *v130;
        if ( !*v130 )
          goto LABEL_462;
        if ( *v132 != 1094997074 )
        {
          v132 = 0LL;
LABEL_462:
          if ( (unsigned int)((_DWORD)v200 - 2) <= 1 )
          {
            Pool = -1056964602;
            goto LABEL_253;
          }
        }
        if ( !a5 )
        {
          Pool = -1056964602;
          goto LABEL_253;
        }
        a5->Relationship = (int)v200;
        v134 = DeferredContext - 1;
        if ( !v134 )
        {
          if ( KeGetCurrentIrql() > 2u )
            goto LABEL_339;
          if ( v131 )
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v131[4].Data1, (PKLOCK_QUEUE_HANDLE)&v133->8);
          else
            Pool = -1056964602;
          goto LABEL_253;
        }
        v135 = v134 - 1;
        if ( !v135 )
        {
          if ( KeGetCurrentIrql() > 2u )
            goto LABEL_339;
          RaidAdapterAcquireStartIoLock((__int64)v132, (struct _KLOCK_QUEUE_HANDLE *)&v133->8);
          goto LABEL_253;
        }
        v136 = v135 - 1;
        if ( !v136 )
        {
          if ( KeGetCurrentIrql() > 2u )
            goto LABEL_339;
          v133->Processor.Reserved[14] = RaidAdapterAcquireInterruptLock((__int64)v132);
          goto LABEL_253;
        }
        DeferredContext = (unsigned int)(v136 - 1);
        if ( !(_DWORD)DeferredContext )
        {
          if ( v131 )
            KeAcquireInStackQueuedSpinLockForDpc((PKSPIN_LOCK)&v131[4].Data1, (PKLOCK_QUEUE_HANDLE)&v133->8);
          else
            Pool = -1056964602;
          goto LABEL_253;
        }
        if ( (_DWORD)DeferredContext != 1 )
        {
          Pool = -1056964602;
          goto LABEL_253;
        }
        if ( KeGetCurrentIrql() >= 2u )
        {
          if ( v131 )
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&v131[4].Data1, (PKLOCK_QUEUE_HANDLE)&v133->8);
          else
            Pool = -1056964602;
          goto LABEL_253;
        }
        goto LABEL_339;
      case 0x5Eu:
        v29 = v200;
        if ( v200 )
        {
          v29->TargetInfoAsUlong = KeQueryActiveProcessorCountEx(0xFFFFu);
          Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x5Fu:
        DeferredContext = (KSPIN_LOCK)v200;
        v137 = v201;
        if ( !v200 || !v201 )
          goto LABEL_272;
        Pool = 0;
        LOBYTE(v137->Data1) = KeRemoveQueueDpc(v200);
        goto LABEL_253;
      case 0x60u:
        v116 = v201;
        v117 = v200;
        v119 = (unsigned int)a5;
        if ( !v201 )
          goto LABEL_272;
        v120 = v201[3].Data1;
        if ( v120 > 0x1000 )
        {
          Pool = -1056964598;
          goto LABEL_253;
        }
        if ( v120 )
        {
          if ( !*(_QWORD *)v201[3].Data4 )
            goto LABEL_272;
        }
        else if ( *(_QWORD *)v201[3].Data4 )
        {
          Pool = -1056964602;
          goto LABEL_253;
        }
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
LABEL_416:
          StorpTelemetryMiniportEvent(Adapter, v117, v116, v119);
          Pool = 0;
          goto LABEL_253;
        }
        goto LABEL_45;
      case 0x61u:
        v138 = v201;
        if ( (_DWORD)v200 || !v201 )
          goto LABEL_272;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          Pool = v21;
          LOBYTE(v138->Data1) = (*(_BYTE *)(Adapter + 120) & 2) != 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x62u:
        DeferredContext = a7.QuadPart;
        if ( !a5 || !a7.QuadPart || !(_DWORD)a6 )
          goto LABEL_272;
        Pool = StorEtwMiniportLogError(v12, (_DWORD)v200, (_DWORD)v201, (_DWORD)a5, (_DWORD)a6, a7.QuadPart);
        goto LABEL_253;
      case 0x63u:
        DeferredContext = (KSPIN_LOCK)v200;
        if ( !v200 )
          goto LABEL_272;
        KeInitializeEvent((PRKEVENT)v200, (EVENT_TYPE)v201, (BOOLEAN)a5);
        Pool = 0;
        goto LABEL_253;
      case 0x64u:
        Timeout = (union _LARGE_INTEGER *)a5;
        p_TargetInfoAsUlong = (PKSPIN_LOCK)&v200->TargetInfoAsUlong;
        v144 = (unsigned __int8)v201;
        if ( !a5 || *(_QWORD *)&a5->Relationship )
          goto LABEL_509;
        if ( KeGetCurrentIrql() > 2u )
          goto LABEL_339;
        if ( !Timeout->QuadPart )
          goto LABEL_511;
LABEL_509:
        if ( KeGetCurrentIrql() > 1u )
        {
          Pool = -1056964600;
          goto LABEL_253;
        }
LABEL_511:
        if ( !p_TargetInfoAsUlong )
          goto LABEL_272;
        DeferredContext = (unsigned int)-(KeWaitForSingleObject(p_TargetInfoAsUlong, Executive, 0, v144, Timeout) != 0);
        Pool = DeferredContext & 0xC1000001;
        goto LABEL_253;
      case 0x65u:
        v145 = (struct _KEVENT *)v200;
        if ( KeGetCurrentIrql() > 2u )
        {
          Pool = -1056964600;
          goto LABEL_253;
        }
        if ( !v145 )
          goto LABEL_272;
        KeSetEvent(v145, 0, 0);
        Pool = 0;
        goto LABEL_253;
      case 0x66u:
        v139 = (unsigned int)v200;
        v140 = 0LL;
        v141 = 0LL;
        goto LABEL_501;
      case 0x67u:
        v146 = v201;
        v147 = (unsigned int)v200;
        if ( !v201 || (unsigned int)((_DWORD)v200 - 1) > 9 )
          goto LABEL_272;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          Pool = -1056964607;
          if ( (int)RaMiniportSaveFeatureList(Adapter + 336, v147, v146) >= 0 )
            Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x68u:
        if ( KeGetCurrentIrql() )
        {
          Pool = -1056964600;
          goto LABEL_253;
        }
        v148 = v201;
        v149 = v200;
        if ( !v201 )
          goto LABEL_272;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v199)) != 0 )
        {
          if ( v149 && LOWORD(v149->TargetInfoAsUlong) == 1 && *((_DWORD *)&v149->0 + 1) >= 4u )
          {
            LODWORD(ThreadHandle) = 0;
            LOWORD(ThreadHandle) = v149->DpcListEntry.Next;
            BYTE2(ThreadHandle) = BYTE2(v149->DpcListEntry.Next);
            v15 = RaidAdapterFindUnit(Adapter, (unsigned int)ThreadHandle);
          }
          v150 = RaidCaptureLiveDump(Adapter, v15, v148);
          Pool = RaidNtStatusToStorStatus(v150);
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x69u:
        v151 = (int)v200;
        DeferredContext = (unsigned int)a9;
        v152 = (unsigned __int16)a10;
        v153 = (int)v201;
        v154 = (int)a5;
        v155 = a6;
        v156 = a7.QuadPart;
        v157 = a11;
        v158 = a8.LowPart;
        LODWORD(Object) = (_DWORD)a9;
        if ( Adapter )
          goto LABEL_539;
        Adapter = RaidpPortGetAdapter(v12);
        if ( !Adapter )
          goto LABEL_297;
        DeferredContext = (unsigned int)Object;
LABEL_539:
        if ( !v155 || !v157 || (unsigned __int16)(v152 - 1) > 0x3FFu )
          goto LABEL_297;
        Pool = StorEtwMiniportLogByteStream(
                 Adapter,
                 v151,
                 v153,
                 v154,
                 (__int64)v155,
                 v156,
                 v158,
                 DeferredContext,
                 v152,
                 v157);
        goto LABEL_252;
      case 0x6Au:
        v159 = (struct _KDPC_WATCHDOG_INFORMATION *)v200;
        if ( !v200 )
          goto LABEL_272;
        if ( KeGetCurrentIrql() >= 2u )
        {
          DpcWatchdogInformation = KeQueryDpcWatchdogInformation(v159);
        }
        else
        {
          v160 = KfRaiseIrql(2u);
          DpcWatchdogInformation = KeQueryDpcWatchdogInformation(v159);
          KeLowerIrql(v160);
        }
        if ( DpcWatchdogInformation > -1073741670 )
        {
          if ( DpcWatchdogInformation != -1073741637 )
          {
            if ( DpcWatchdogInformation == -1073741496 )
            {
LABEL_339:
              Pool = -1056964600;
            }
            else if ( DpcWatchdogInformation )
            {
              if ( DpcWatchdogInformation < 0 )
LABEL_447:
                Pool = -1056964607;
              else
                Pool = 0;
            }
            else
            {
LABEL_45:
              Pool = 0;
            }
          }
          goto LABEL_253;
        }
        switch ( DpcWatchdogInformation )
        {
          case -1073741670:
            Pool = -1056964605;
            break;
          case -2147483643:
            goto LABEL_74;
          case -1073741822:
            break;
          case -1073741811:
LABEL_272:
            Pool = -1056964602;
            break;
          case -1073741789:
LABEL_74:
            Pool = -1056964604;
            break;
          default:
            Pool = -1056964607;
            break;
        }
LABEL_253:
        if ( StorpControl )
          ExtensionExtendedFuncPost(DeferredContext, v11, Adapter, &v200);
        return Pool;
      case 0x6Bu:
        DeferredContext = (KSPIN_LOCK)v200;
        if ( !v200 )
          goto LABEL_272;
        Pool = 0;
        v200->TargetInfoAsUlong = StorMinimumTimeInterval;
        goto LABEL_253;
      case 0x6Cu:
        v162 = (unsigned int)v200;
        v163 = (unsigned __int8)v201;
        if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          v164 = RaidMaskUnmaskPciMsixEntry(Adapter, v162, v163);
          Pool = RaidNtStatusToStorStatus(v164);
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x6Du:
        v165 = v200;
        if ( v200 )
        {
          v165->Type = KeGetCurrentIrql();
          Pool = 0;
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_253;
      case 0x6Eu:
        StartRoutine = (KSTART_ROUTINE *)v200;
        StartContext = v201;
        v168 = (KPRIORITY *)a5;
        v169 = a6;
        if ( KeGetCurrentIrql() )
        {
          Pool = -1056964600;
          goto LABEL_253;
        }
        if ( !StartRoutine )
        {
          Pool = -1056964602;
          goto LABEL_253;
        }
        if ( v168 )
        {
          switch ( *v168 )
          {
            case 7:
            case 8:
            case 12:
            case 13:
            case 14:
            case 15:
            case 18:
              break;
            default:
              goto LABEL_272;
          }
        }
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v199);
          if ( !Adapter )
          {
            Pool = -1056964602;
            goto LABEL_253;
          }
        }
        ThreadHandle = 0LL;
        *(&ObjectAttributes.Length + 1) = 0;
        *(&ObjectAttributes.Attributes + 1) = 0;
        if ( (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(Adapter + 5928), 1u) >= *(_DWORD *)(Adapter + 5924) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(Adapter + 5928));
LABEL_580:
          Pool = -1056964601;
          goto LABEL_253;
        }
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Attributes = 512;
        v170 = PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, StartRoutine, (PVOID)StartContext);
        if ( v170 < 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(Adapter + 5928));
        }
        else
        {
          v171 = ThreadHandle;
          if ( v169 )
            *(_QWORD *)v169 = ThreadHandle;
          if ( v168 )
          {
            Object = 0LL;
            v172 = ObReferenceObjectByHandle(v171, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
            if ( v172 < 0 )
            {
              Pool = RaidNtStatusToStorStatus(0LL);
            }
            else
            {
              KeSetPriorityThread((PKTHREAD)Object, *v168);
              ObfDereferenceObject(Object);
              Pool = RaidNtStatusToStorStatus((unsigned int)v172);
            }
            goto LABEL_253;
          }
        }
        Pool = RaidNtStatusToStorStatus((unsigned int)v170);
        goto LABEL_253;
      case 0x6Fu:
        v173 = (PKSPIN_LOCK)&v200->TargetInfoAsUlong;
        v174 = (int)v201;
        Object = 0LL;
        if ( KeGetCurrentIrql() )
        {
          Pool = -1056964600;
        }
        else
        {
          switch ( v174 )
          {
            case 7:
            case 8:
            case 12:
            case 13:
            case 14:
            case 15:
            case 18:
              if ( !v173 )
                goto LABEL_272;
              v175 = ObReferenceObjectByHandle(v173, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
              if ( v175 >= 0 )
              {
                KeSetPriorityThread((PKTHREAD)Object, v174);
                ObfDereferenceObject(Object);
              }
              Pool = RaidNtStatusToStorStatus((unsigned int)v175);
              break;
            default:
              goto LABEL_272;
          }
        }
        goto LABEL_253;
      case 0x70u:
        v176 = (struct _GROUP_AFFINITY *)v201;
        v177 = (struct _GROUP_AFFINITY *)a5;
        if ( v201 )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
            KeSetSystemGroupAffinityThread(v176, v177);
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
        goto LABEL_253;
      case 0x71u:
        v178 = (struct _GROUP_AFFINITY *)v201;
        if ( v201 )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
            KeRevertToUserGroupAffinityThread(v178);
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
        goto LABEL_253;
      case 0x72u:
        v141 = v201;
        v139 = (unsigned int)v200;
        v140 = a5;
        if ( ((unsigned __int8)v201 & 1) != 0 )
          goto LABEL_272;
LABEL_501:
        D3ColdInterface = StorReset(v12, v139, v141, v140);
        goto LABEL_502;
      case 0x73u:
        v179 = v200;
        v180 = v201;
        v181 = (unsigned int)a5;
        v182 = a6;
        if ( !Adapter )
        {
          Adapter = RaidpPortGetAdapter(v12);
          if ( !Adapter )
            goto LABEL_297;
        }
        if ( !v180 || !(_DWORD)v181 || !v182 )
          goto LABEL_297;
        if ( v179 )
        {
          if ( LOWORD(v179->TargetInfoAsUlong) != 1 || *((_DWORD *)&v179->0 + 1) < 4u )
          {
LABEL_297:
            Pool = -1056964602;
            goto LABEL_252;
          }
          v183 = (char)v179->DpcListEntry.Next;
          LODWORD(ThreadHandle) = v21;
          LOBYTE(ThreadHandle) = v183;
          *(_WORD *)((char *)&ThreadHandle + 1) = *(_WORD *)((char *)&v179->DpcListEntry.Next + 1);
          v184 = RaidAdapterFindUnit(Adapter, (unsigned int)ThreadHandle);
          v185 = v184;
          if ( !v184 )
          {
LABEL_618:
            Pool = -1056964601;
            goto LABEL_252;
          }
        }
        else
        {
          v185 = Adapter;
        }
        v186 = ExtensionSendMiniportData(
                 (_DWORD)v180,
                 2 - (unsigned int)(v179 != 0LL),
                 (_DWORD)a3,
                 v185,
                 v181,
                 (__int64)v182);
        Pool = -1056964607;
        if ( v186 >= 0 )
          Pool = 0;
LABEL_252:
        v11 = a1;
        goto LABEL_253;
      case 0x74u:
        Pool = StorGetMessageInterruptIDFromProcessorIndex(v12, (unsigned int)v200, v201);
        goto LABEL_253;
      case 0x75u:
        Pool = StorpGetNodeAffinity2(0xC0000000, (_DWORD)v200, (_DWORD)v201, (unsigned __int16)a5, (__int64)a6);
        goto LABEL_253;
      case 0x76u:
        if ( EnableRegistryWatch )
          Pool = StorEnableRegistryKeyNotification(v12, v200);
        goto LABEL_253;
      case 0x77u:
        v187 = (int)v201;
        v188 = (int)a5;
        v189 = a6;
        v190 = a7.QuadPart;
        v191 = (__int64 *)a8.QuadPart;
        if ( v200 )
        {
          Pool = -1056964602;
        }
        else if ( Adapter || (Adapter = RaidpPortGetAdapter(v12)) != 0 )
        {
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
          }
          else
          {
            v192 = *(_QWORD *)(Adapter + 4896);
            if ( !v192 || *(_BYTE *)(v192 + 28) )
            {
LABEL_312:
              Pool = -1056964607;
            }
            else
            {
              v80 = RaidRegisterPerfStates(
                      *(_QWORD *)(Adapter + 8),
                      v187,
                      v188,
                      (_DWORD)v189,
                      v190,
                      (__int64)v191,
                      *(_QWORD *)v192);
              if ( v80 < 0 )
              {
LABEL_270:
                Pool = RaidNtStatusToStorStatus((unsigned int)v80);
              }
              else
              {
                if ( v189 )
                  v193 = *v189;
                else
                  v193 = 0;
                if ( (v188 & 0x1000) != 0 )
                  v190 = *v191;
                if ( (unsigned __int8)RaidAdapterCacheOperationalPowerRange(*(_QWORD *)(Adapter + 4896), v193, v190) )
                {
                  *(_QWORD *)(*(_QWORD *)(Adapter + 4896) + 48LL) = -1LL;
                  *(_QWORD *)(*(_QWORD *)(Adapter + 4896) + 56LL) = -1LL;
                  *(_QWORD *)(*(_QWORD *)(Adapter + 4896) + 64LL) = -1LL;
                }
                *(_BYTE *)(*(_QWORD *)(Adapter + 4896) + 28LL) = v193;
                StorpLogRegisterAdapterPerfStates(Adapter, v190);
                Pool = 0;
              }
            }
          }
        }
        else
        {
          Pool = -1056964602;
        }
        goto LABEL_252;
      default:
        DeferredContext = (KSPIN_LOCK)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 80LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids, v11);
        }
        goto LABEL_253;
    }
  }
  Adapter = RaidpPortGetAdapter(v12);
  v19 = ExtensionExtendedFuncReplace(v18, v11, Adapter, &v200);
  v21 = 0;
  Object = 0LL;
  if ( v19 == -1073741822 )
  {
    if ( StorpControl )
    {
      ExtensionExtendedFuncPre(v20, v11, Adapter, &v200);
      v21 = 0;
      Object = 0LL;
    }
    v12 = v199;
    goto LABEL_14;
  }
  return (unsigned int)RaidNtStatusToStorStatus(v19);
}
