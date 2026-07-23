/*
 * XREFs of PiProcessNewDeviceNode @ 0x140795938
 * Callers:
 *     PiProcessNewDeviceNodeAsync @ 0x1407E2778 (PiProcessNewDeviceNodeAsync.c)
 *     PiProcessNewDeviceNodeWorker @ 0x140959690 (PiProcessNewDeviceNodeWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140321E74 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x140369128 (PnpIrpDeviceEnumerated.c)
 *     IoAddTriageDumpDataBlock @ 0x14038849C (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     wcschr @ 0x1403DBAF0 (wcschr.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1405617C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x140561824 (McTemplateK0pz_EtwWriteTransfer.c)
 *     McTemplateK0zzzzz_EtwWriteTransfer @ 0x140561A30 (McTemplateK0zzzzz_EtwWriteTransfer.c)
 *     PpvUtilFailDriver @ 0x140565224 (PpvUtilFailDriver.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1406CF6F0 (RtlGUIDFromString.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14078E7D8 (PiBuildDeviceNodeInstancePath.c)
 *     PiQueryAndAllocateBootResources @ 0x14078FC14 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140790534 (PiQueryResourceRequirements.c)
 *     PipSetDevNodeUserFlags @ 0x1407908AC (PipSetDevNodeUserFlags.c)
 *     PnpFindAlternateStringData @ 0x1407933B4 (PnpFindAlternateStringData.c)
 *     PipClearDevNodeUserFlags @ 0x1407935D0 (PipClearDevNodeUserFlags.c)
 *     PnpSetPlugPlayEvent @ 0x1407942E4 (PnpSetPlugPlayEvent.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140795568 (PnpClearDeviceTemporaryProperties.c)
 *     PipSetDevNodeFlags @ 0x1407958BC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797400 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x14079824C (PipClearDevNodeFlags.c)
 *     PnpQueryID @ 0x1407982C8 (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x1407983BC (PnpIrpQueryID.c)
 *     PnpQueryDeviceText @ 0x140798598 (PnpQueryDeviceText.c)
 *     PnpSaveDeviceCapabilities @ 0x140798664 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x14079881C (_CmSetDeviceRegProp.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407989E0 (PnpCheckDeviceIdsChanged.c)
 *     PiUpdateDevicePanel @ 0x140798E30 (PiUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079B7B0 (PiDcUpdateDeviceContainerMembership.c)
 *     PpIrpQueryCapabilities @ 0x14079BB28 (PpIrpQueryCapabilities.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14079C400 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGenerateDeviceIdsHash @ 0x14079C748 (PnpGenerateDeviceIdsHash.c)
 *     PiQueryRemovableDeviceOverride @ 0x1407C1460 (PiQueryRemovableDeviceOverride.c)
 *     PpDeviceRegistration @ 0x1407CF834 (PpDeviceRegistration.c)
 *     PiCreateDeviceInstanceKey @ 0x1407D78C8 (PiCreateDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D8BB4 (PnpIsDeviceInstanceEnabled.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1407D9220 (PpDevCfgProcessDeviceOperations.c)
 *     PnpQueryBusInformation @ 0x1407DBBE4 (PnpQueryBusInformation.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x1407DD30C (PnpInitializeInheritedRestrictedSd.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1407DE244 (PpHotSwapUpdateRemovalPolicy.c)
 *     PnpInitializeSessionId @ 0x1407E0B50 (PnpInitializeSessionId.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407E2018 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407FCD80 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpGetDeviceLocationStrings @ 0x1407FCED8 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryInterface @ 0x1407FD510 (PnpQueryInterface.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140801500 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PipClearDevNodeProblem @ 0x1408693DC (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x14086952C (PipSetDevNodeProblem.c)
 *     PipMakeGloballyUniqueId @ 0x140870C60 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgProcessDevice @ 0x14087A430 (PiDevCfgProcessDevice.c)
 *     PnpDisableDevice @ 0x140958B18 (PnpDisableDevice.c)
 *     PnpLogDuplicateDevice @ 0x1409599A4 (PnpLogDuplicateDevice.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x140962A88 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x140963D18 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x140964A48 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x14096BE64 (PnpTraceDockDeviceEnumeration.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(__int64 MaxDataSize)
{
  __int64 v2; // rcx
  ULONG_PTR v3; // r13
  int v4; // eax
  wchar_t *v5; // rax
  int Capabilities; // ebx
  char v7; // r15
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // eax
  int GloballyUniqueId; // ebx
  WCHAR *v13; // r14
  _DWORD *v14; // r12
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r8
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int *v24; // rsi
  _QWORD *v25; // rax
  ULONG_PTR v26; // rbx
  _DWORD *v27; // r15
  int *v28; // rbx
  HANDLE v29; // r14
  unsigned int v30; // r12d
  int v31; // esi
  int v32; // ebx
  struct _KTHREAD *v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned int v36; // eax
  int v37; // eax
  int v38; // r15d
  PVOID v39; // rsi
  WCHAR *v40; // rbx
  char v41; // r8
  __int64 v42; // rdx
  struct _KTHREAD *v43; // rax
  struct _KTHREAD *v44; // rax
  struct _KTHREAD *v45; // rax
  HANDLE v46; // rsi
  PVOID v47; // r15
  PVOID v48; // r12
  int v49; // r14d
  int v50; // eax
  char v51; // bl
  int v52; // eax
  int v53; // r14d
  __int64 v54; // rdx
  PVOID v55; // r14
  int AlternateStringData; // eax
  unsigned int v57; // ebx
  int DeviceLocationStrings; // eax
  PVOID v59; // rbx
  int v60; // eax
  unsigned int v61; // ebx
  __int64 v62; // r8
  __int64 v63; // r8
  struct _KTHREAD *v64; // rax
  __int64 v65; // r8
  __int64 v66; // rdx
  int v67; // eax
  unsigned int *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  PVOID v71; // rcx
  _QWORD *v73; // rcx
  PVOID v74; // rsi
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 FailedInstallProblemStatus; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rdx
  unsigned int v84; // eax
  bool v85; // zf
  __int64 v86; // rdx
  __int64 v87; // r8
  int v88; // eax
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rcx
  _WORD *v93; // rcx
  __int64 v94; // rcx
  unsigned __int16 *v95; // rdi
  _WORD *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  _WORD *v100; // rcx
  __int64 v101; // rcx
  unsigned __int16 *v102; // rdi
  _WORD *v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rcx
  int v106; // eax
  int v107; // eax
  int v108; // edx
  char v109; // al
  int v110; // ecx
  bool v111; // [rsp+58h] [rbp-B0h]
  _BYTE v112[3]; // [rsp+59h] [rbp-AFh] BYREF
  unsigned int v113; // [rsp+5Ch] [rbp-ACh] BYREF
  int v114; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v115; // [rsp+64h] [rbp-A4h]
  unsigned int v116; // [rsp+68h] [rbp-A0h] BYREF
  int v117; // [rsp+6Ch] [rbp-9Ch]
  __int64 v118; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v119; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  _DWORD *v121; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  int v123; // [rsp+98h] [rbp-70h] BYREF
  int v124; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v125; // [rsp+A0h] [rbp-68h]
  int v126; // [rsp+A4h] [rbp-64h]
  wchar_t *Str; // [rsp+A8h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v129; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v130; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v131; // [rsp+C8h] [rbp-40h]
  HANDLE v132; // [rsp+D0h] [rbp-38h]
  int v133; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v134; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v135; // [rsp+E8h] [rbp-20h] BYREF
  int v136; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v137; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v138; // [rsp+100h] [rbp-8h] BYREF
  const WCHAR *v139; // [rsp+108h] [rbp+0h] BYREF
  PVOID v140; // [rsp+110h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp+10h] BYREF
  __int64 v142; // [rsp+128h] [rbp+20h] BYREF
  __int128 v143; // [rsp+130h] [rbp+28h] BYREF
  __int128 v144; // [rsp+140h] [rbp+38h]
  void (__fastcall *v145)(_QWORD, __int64 *); // [rsp+150h] [rbp+48h]
  _DWORD v146[16]; // [rsp+158h] [rbp+50h] BYREF
  GUID Guid; // [rsp+198h] [rbp+90h] BYREF

  SourceString = 0LL;
  memset(v146, 0, sizeof(v146));
  Guid = 0LL;
  v130 = 0LL;
  DestinationString = 0LL;
  v124 = 0;
  v134 = 0LL;
  v140 = 0LL;
  v135 = 0LL;
  v136 = 0;
  v129 = 0LL;
  LODWORD(v119) = 0;
  v138 = 0LL;
  v139 = 0LL;
  v123 = 0;
  v133 = 0;
  LOBYTE(v114) = 0;
  P = 0LL;
  if ( (byte_140C0E20B & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Start, 0LL, MaxDataSize);
  LOBYTE(v125) = 0;
  v111 = 0;
  v126 = 0;
  v118 = 0LL;
  v3 = *(_QWORD *)(MaxDataSize + 32);
  v142 = MEMORY[0xFFFFF78000000014];
  v115 = 0;
  v116 = 0;
  v132 = 0LL;
  Handle = 0LL;
  v113 = 0;
  v112[0] = 0;
  v117 = 0;
  PiPnpRtlBeginOperation((__int64 **)&v140);
  PipClearDevNodeFlags(MaxDataSize, 0x2000000LL);
  Str = 0LL;
  LODWORD(v121) = 0;
  v4 = PnpQueryID(MaxDataSize, 0LL, &Str, &v121);
  if ( v4 < 0 )
  {
    v131 = 0LL;
    Str = 0LL;
    LODWORD(v118) = -1073741823;
    if ( v4 != -1073479624 )
      LODWORD(v118) = v4;
  }
  else
  {
    v131 = Str;
    v5 = wcschr(Str, 0x5Cu);
    *v5 = 0;
    Str = v5 + 1;
  }
  Capabilities = PpIrpQueryCapabilities(v3, v146);
  PipClearDevNodeUserFlags(MaxDataSize, 2);
  v7 = 0;
  if ( Capabilities >= 0 )
  {
    if ( (v146[1] & 0x20000) != 0 )
      PipSetDevNodeUserFlags(MaxDataSize, 2);
    if ( (v146[1] & 0x40) != 0 )
      v7 = 1;
  }
  if ( (v146[1] & 0x20) != 0 )
  {
    if ( *(_DWORD *)(MaxDataSize + 568) == 4 )
      PpProfileCancelTransitioningDock(MaxDataSize);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(MaxDataSize + 568) = v8;
  v137 = -1LL;
  v145 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  if ( (int)PnpQueryInterface((PVOID)v3, 0LL, &v143) >= 0 )
  {
    if ( v145 )
    {
      if ( WORD1(v143) == 1 )
      {
        v145(*((_QWORD *)&v143 + 1), &v137);
        if ( *((_QWORD *)&v144 + 1) )
          (*((void (__fastcall **)(_QWORD))&v144 + 1))(*((_QWORD *)&v143 + 1));
      }
    }
  }
  PnpQueryDeviceText(*(_QWORD *)(MaxDataSize + 32), 0LL, v9, &v134);
  PnpQueryDeviceText(*(_QWORD *)(MaxDataSize + 32), 1LL, v10, &v138);
  v11 = PnpQueryID(MaxDataSize, 3LL, &v129, &v119);
  GloballyUniqueId = v11;
  if ( v7 )
  {
    if ( v11 == -1073741637 )
    {
      PipSetDevNodeProblem(MaxDataSize, 9LL, 3221225659LL);
      PipSetDevNodeFlags(*(_QWORD *)(MaxDataSize + 16), 0x200000);
      PnpSetInvalidIDEvent(*(_QWORD *)(MaxDataSize + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || *(_DWORD *)(MaxDataSize + 404) != 9 )
  {
    v73 = *(_QWORD **)(MaxDataSize + 16);
    if ( v73 != IopRootDeviceNode )
    {
      v74 = v129;
      GloballyUniqueId = PipMakeGloballyUniqueId(v73[4], v129, &P);
      if ( v74 )
        ExFreePoolWithTag(v74, 0);
      v13 = (WCHAR *)P;
      v129 = P;
      goto LABEL_17;
    }
  }
  v13 = (WCHAR *)v129;
LABEL_17:
  v14 = (_DWORD *)(MaxDataSize + 396);
  v15 = (_DWORD *)(MaxDataSize + 396);
  v121 = (_DWORD *)(MaxDataSize + 396);
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v85 = (*v15 & 0x2000) == 0;
      LODWORD(v118) = GloballyUniqueId;
      if ( v85 || (v14 = v15, *(_DWORD *)(MaxDataSize + 404) != 9) )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v86 = 3LL;
          v87 = 3221225626LL;
        }
        else
        {
          v87 = (unsigned int)GloballyUniqueId;
          v86 = 19LL;
        }
        PipSetDevNodeProblem(MaxDataSize, v86, v87);
        v14 = v15;
      }
    }
    v18 = PiBuildDeviceNodeInstancePath(MaxDataSize, (__int64)v131, (__int64)Str, (__int64)v13);
    if ( v18 >= 0 )
    {
      if ( (byte_140C0E20B & 8) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v17, v16, v19, MaxDataSize, *(_QWORD *)(MaxDataSize + 48));
      v20 = PiCreateDeviceInstanceKey(MaxDataSize, &Handle, &v116);
      v18 = v20;
      if ( v20 < 0 )
      {
        PipSetDevNodeProblem(MaxDataSize, 19LL, (unsigned int)v20);
        v115 = v116;
        v132 = Handle;
      }
      else
      {
        v115 = v116;
        v21 = 0;
        if ( v116 == 1 )
          v21 = 0x20000;
        v132 = Handle;
        v117 = v21;
      }
    }
    if ( v18 >= 0 )
      v18 = v118;
    LODWORD(v118) = v18;
    PpMarkDeviceStackExtensionFlag(v3, 16, 1);
    v22 = *(_DWORD *)(MaxDataSize + 300);
    if ( v22 == 769 )
    {
      v23 = 772;
    }
    else
    {
      if ( v22 != 770 )
        goto LABEL_31;
      v23 = 771;
    }
    PipSetDevNodeState(MaxDataSize, v23);
LABEL_31:
    v24 = (int *)(MaxDataSize + 404);
    if ( (*v14 & 0x2000) != 0 )
    {
      v88 = *v24;
      v28 = (int *)(MaxDataSize + 404);
      v119 = (unsigned int *)(MaxDataSize + 404);
      if ( v88 == 9
        || (v119 = (unsigned int *)(MaxDataSize + 404), v88 == 3)
        || (v119 = (unsigned int *)(MaxDataSize + 404), v88 == 19) )
      {
        v27 = v121;
        goto LABEL_35;
      }
    }
    if ( v115 == 1 )
      break;
    v25 = PnpDeviceObjectFromDeviceInstanceWithTag(MaxDataSize + 40, 0x65706E50u);
    v26 = (ULONG_PTR)v25;
    if ( !v25 )
      goto LABEL_34;
    if ( v25 == (_QWORD *)v3 )
    {
      ObfDereferenceObjectWithTag(v25, 0x65706E50u);
      goto LABEL_34;
    }
    if ( !v7 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock(v3, (PVOID)*(unsigned __int16 *)(v3 + 2));
      v92 = *(_QWORD *)(v3 + 8);
      if ( v92 )
      {
        IoAddTriageDumpDataBlock(v92, (PVOID)(unsigned int)*(__int16 *)(v92 + 2));
        v93 = (_WORD *)(*(_QWORD *)(v3 + 8) + 56LL);
        if ( *v93 )
        {
          IoAddTriageDumpDataBlock((ULONG)v93, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v3 + 8) + 56LL));
        }
      }
      v94 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
      if ( v94 )
      {
        v95 = (unsigned __int16 *)(v94 + 40);
        IoAddTriageDumpDataBlock(v94, (PVOID)0x388);
        if ( *v95 )
        {
          IoAddTriageDumpDataBlock((ULONG)v95, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v95 + 1), (PVOID)*v95);
        }
        v96 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 56LL);
        if ( *v96 )
        {
          IoAddTriageDumpDataBlock((ULONG)v96, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 56LL));
        }
        v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 16LL);
        if ( v97 && *(_WORD *)(v97 + 56) )
        {
          IoAddTriageDumpDataBlock(v97 + 56, (PVOID)2);
          v98 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v98 + 64), (PVOID)*(unsigned __int16 *)(v98 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v26, (PVOID)*(unsigned __int16 *)(v26 + 2));
      v99 = *(_QWORD *)(v26 + 8);
      if ( v99 )
      {
        IoAddTriageDumpDataBlock(v99, (PVOID)(unsigned int)*(__int16 *)(v99 + 2));
        v100 = (_WORD *)(*(_QWORD *)(v26 + 8) + 56LL);
        if ( *v100 )
        {
          IoAddTriageDumpDataBlock((ULONG)v100, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v26 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v26 + 8) + 56LL));
        }
      }
      v101 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
      if ( v101 )
      {
        v102 = (unsigned __int16 *)(v101 + 40);
        IoAddTriageDumpDataBlock(v101, (PVOID)0x388);
        if ( *v102 )
        {
          IoAddTriageDumpDataBlock((ULONG)v102, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v102 + 1), (PVOID)*v102);
        }
        v103 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 56LL);
        if ( *v103 )
        {
          IoAddTriageDumpDataBlock((ULONG)v103, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 56LL));
        }
        v104 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 16LL);
        if ( v104 && *(_WORD *)(v104 + 56) )
        {
          IoAddTriageDumpDataBlock(v104 + 56, (PVOID)2);
          v105 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v105 + 64), (PVOID)*(unsigned __int16 *)(v105 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v3, v26, 0LL);
    }
    ZwClose(v132);
    v146[1] &= ~0x40u;
    v132 = 0LL;
    Handle = 0LL;
    v7 = 0;
    PipSetDevNodeProblem(MaxDataSize, 42LL, 0LL);
    v89 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
    PnpLogDuplicateDevice((PCWSTR)v131, v13);
    if ( (byte_140C0E20B & 0x20) != 0 )
      McTemplateK0zzzzz_EtwWriteTransfer(
        *(_QWORD *)(v89 + 16),
        v90,
        v91,
        (const wchar_t *)v131,
        Str,
        v13,
        *(const wchar_t **)(*(_QWORD *)(v89 + 16) + 48LL),
        *(const wchar_t **)(*(_QWORD *)(MaxDataSize + 16) + 48LL));
    if ( *(_QWORD *)(v89 + 16) == *(_QWORD *)(MaxDataSize + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v26, 0x65706E50u);
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 32LL), v13, &P);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    v13 = (WCHAR *)P;
    v15 = v121;
    v129 = P;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v132 = Handle;
  if ( Handle && v134 )
  {
    v82 = -1LL;
    do
      ++v82;
    while ( *((_WORD *)v134 + v82) );
    CmSetDeviceRegProp(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      (_DWORD)Handle,
      1,
      1,
      (__int64)v134,
      2 * v82 + 2,
      v117);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v115 = v116;
LABEL_34:
  v27 = v121;
  v28 = (int *)(MaxDataSize + 404);
  v119 = (unsigned int *)(MaxDataSize + 404);
  if ( (*v121 & 0x2000) != 0 )
  {
    v85 = *v24 == 42;
    v119 = (unsigned int *)(MaxDataSize + 404);
    if ( v85 )
    {
      PipClearDevNodeProblem(MaxDataSize);
      v119 = (unsigned int *)(MaxDataSize + 404);
    }
  }
LABEL_35:
  v29 = v132;
  v30 = v115;
  if ( v132 )
  {
    if ( v115 != 1 )
      PnpClearDeviceTemporaryProperties(*(_QWORD *)(MaxDataSize + 48));
    v31 = v117;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 40LL) + 2,
      v117);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v142,
      8,
      v31);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v31);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v31);
  }
  else
  {
    v31 = v117;
  }
  if ( (v146[1] & 0x4000) != 0 && ((*v27 & 0x2000) == 0 || *v28 != 1 && *v28 != 14) )
    PnpDisableDevice(MaxDataSize, 29LL);
  if ( (*v27 & 0x2000) == 0 )
  {
    v32 = v118;
    goto LABEL_42;
  }
  v106 = *v28;
  v32 = v118;
  v115 = v118;
  if ( v106 != 9 )
  {
    v115 = v118;
    if ( v106 != 3 )
    {
      v115 = v118;
      if ( v106 != 19 )
      {
LABEL_42:
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        v29 = Handle;
        if ( Handle && v138 )
        {
          v77 = -1LL;
          do
            ++v77;
          while ( *((_WORD *)v138 + v77) );
          CmSetDeviceRegProp(
            PiPnpRtlCtx,
            *(_QWORD *)(MaxDataSize + 48),
            (_DWORD)Handle,
            14,
            1,
            (__int64)v138,
            2 * v77 + 2,
            v31);
        }
        v30 = v116;
        LOBYTE(v34) = v116 == 1;
        PnpSaveDeviceCapabilities(MaxDataSize, v146, v34);
        if ( v137 != -1 )
          PnpSetObjectProperty(
            PiPnpRtlCtx,
            *(_QWORD *)(MaxDataSize + 48),
            1,
            0LL,
            (__int64)&DEVPKEY_Device_ExtendedAddress,
            9,
            (__int64)&v137,
            8,
            v31);
        v35 = *(_QWORD *)(MaxDataSize + 48);
        v123 = 4;
        v111 = v30 == 1;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v35,
                    (__int64)v29,
                    11,
                    (__int64)&v133,
                    (__int64)&v113,
                    (__int64)&v123,
                    0) >= 0
          && v133 == 4
          && v123 == 4 )
        {
          v36 = v113;
          if ( (v113 & 0x20) == 0 )
          {
            if ( (v113 & 0x40) == 0 )
            {
LABEL_51:
              v37 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(MaxDataSize + 32), MaxDataSize + 40);
              v38 = v32;
              if ( v37 < 0 )
                v38 = v37;
              v115 = v38;
              if ( PnpBootMode )
              {
                *(_DWORD *)(MaxDataSize + 704) |= 0x1000u;
                v126 = 2;
              }
              else
              {
                v76 = (unsigned __int8)v125;
                if ( (v113 & 0x40000) != 0 )
                  v76 = 1;
                v125 = v76;
              }
              ExReleaseResourceLite(&PnpRegistryDeviceResource);
              KeLeaveCriticalRegion();
              goto LABEL_56;
            }
            v78 = 28LL;
LABEL_150:
            if ( (v146[1] & 0x100) != 0 )
            {
              v83 = *(_QWORD *)(MaxDataSize + 48);
              v113 = v36 | 0x400;
              CmSetDeviceRegProp(PiPnpRtlCtx, v83, (_DWORD)v29, 11, 4, (__int64)&v113, 4, v31);
            }
            else
            {
              if ( (_DWORD)v78 == 28 )
              {
                FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(
                                                             *(_QWORD *)(MaxDataSize + 48),
                                                             v29);
                v78 = 28LL;
              }
              else
              {
                FailedInstallProblemStatus = 0LL;
              }
              PipSetDevNodeProblem(MaxDataSize, v78, FailedInstallProblemStatus);
            }
            goto LABEL_51;
          }
          v78 = 18LL;
          if ( (v113 & 1) != 0 )
            goto LABEL_150;
        }
        else
        {
          v36 = 0;
          v113 = 0;
          v78 = 1LL;
        }
        v111 = 1;
        goto LABEL_150;
      }
    }
  }
LABEL_56:
  PnpQueryID(MaxDataSize, 1LL, &v135, &v136);
  v39 = v135;
  KseAddHardwareId((PCWSTR)v135);
  PnpQueryID(MaxDataSize, 2LL, &v130, &v124);
  PnpGenerateDeviceIdsHash(v39, v130, MaxDataSize + 684);
  PnpIrpQueryID(*(_QWORD *)(MaxDataSize + 32), 5LL, &SourceString);
  v40 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v40, 0);
      v40 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(MaxDataSize, v39, v130, &v114) >= 0 )
  {
    v41 = v114;
    goto LABEL_63;
  }
  v41 = (v146[1] & 0x20) == 0 && (v146[1] & 0x40000) == 0 && (v146[1] & 0x10) != 0;
  if ( !v40 )
  {
LABEL_63:
    v42 = 0LL;
    if ( v30 != 1 )
      v42 = (__int64)v29;
    if ( (int)PipGenerateContainerID(MaxDataSize, v42, v41, v40, &v139) >= 0 )
    {
      if ( v40 )
        ExFreePoolWithTag(v40, 0);
      v40 = (WCHAR *)v139;
      SourceString = v139;
    }
  }
  if ( !v40
    || (RtlInitUnicodeString(&DestinationString, v40),
        RtlGUIDFromString(&DestinationString, (GUID *)(MaxDataSize + 664)) < 0) )
  {
    *(_OWORD *)(MaxDataSize + 664) = 0LL;
  }
  v43 = KeGetCurrentThread();
  --v43->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(MaxDataSize, 32);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( Handle && SourceString )
  {
    v44 = KeGetCurrentThread();
    --v44->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(MaxDataSize + 48), Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v45 = KeGetCurrentThread();
  --v45->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v46 = Handle;
  v47 = v130;
  v48 = v135;
  if ( Handle )
  {
    v49 = v136;
    if ( v111 || v116 == 1 )
    {
      v51 = v112[0];
    }
    else
    {
      v50 = PnpCheckDeviceIdsChanged(MaxDataSize, (_DWORD)Handle, (_DWORD)v135, v136, 1, (__int64)v112);
      v51 = v112[0];
      if ( v50 < 0 )
        v51 = 0;
      v112[0] = v51;
      if ( !v51 )
      {
        v52 = PnpCheckDeviceIdsChanged(MaxDataSize, (_DWORD)v46, (_DWORD)v47, v124, 0, (__int64)v112);
        v51 = v112[0];
        if ( v52 < 0 )
          v51 = 0;
      }
    }
    if ( v48 )
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(MaxDataSize + 48), (_DWORD)v46, 2, 7, (__int64)v48, v49, v117);
    v53 = v117;
    if ( v47 )
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(MaxDataSize + 48), (_DWORD)v46, 3, 7, (__int64)v47, v124, v117);
    if ( v51 || (_BYTE)v125 )
    {
      if ( v111 )
      {
        v108 = v113;
        v109 = BYTE4(v118);
      }
      else
      {
        v107 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(MaxDataSize + 48), v46, (char *)&v118 + 4);
        v108 = v113;
        if ( v107 < 0 )
        {
          v109 = 0;
        }
        else
        {
          v109 = BYTE4(v118);
          v108 = HIDWORD(v118) | v113;
          v113 |= HIDWORD(v118);
        }
      }
      if ( (v109 & 0x20) != 0 || (v108 & 0x40000) != 0 )
      {
        v113 = v108 & 0xFFFBFFFF;
        CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(MaxDataSize + 48), (_DWORD)v46, 11, 4, (__int64)&v113, 4, v53);
        LOBYTE(v108) = v113;
      }
      if ( (v108 & 0x20) != 0 )
      {
        v111 = 1;
        PipSetDevNodeProblem(MaxDataSize, 18LL, 0LL);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v55 = v134;
  if ( v46 )
  {
    P = 0LL;
    AlternateStringData = 0;
    HIDWORD(v118) = 0;
    v57 = 0;
    if ( v134 )
    {
      v75 = -1LL;
      do
        ++v75;
      while ( *((_WORD *)v134 + v75) );
      v57 = 2 * v75 + 2;
      AlternateStringData = PnpFindAlternateStringData(v134, v57, &P, (_DWORD *)&v118 + 1);
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v55,
      v57,
      v117);
    DeviceLocationStrings = PnpGetDeviceLocationStrings(MaxDataSize, &P, (char *)&v118 + 4);
    v54 = 0LL;
    if ( DeviceLocationStrings >= 0 )
    {
      v59 = P;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)P,
        2 * HIDWORD(v118),
        v117);
      ExFreePoolWithTag(v59, 0);
    }
  }
  PnpQueryBusInformation(MaxDataSize, v54);
  v60 = PiDmaGuardProcessNewDeviceNode(MaxDataSize);
  v61 = v115;
  if ( v60 < 0 )
    v61 = v60;
  if ( (v146[1] & 0x4000) == 0 && ((*v121 & 0x2000) == 0 || *v119 != 14) )
  {
    if ( v111 )
    {
      v81 = v126;
      if ( v116 == 1 )
        v81 = v126 | 1;
      if ( PiDevCfgMode )
        PiDevCfgProcessDevice(MaxDataSize, v46, v81);
    }
    else if ( v46 )
    {
      PpDevCfgProcessDeviceOperations(MaxDataSize, v46);
    }
  }
  PiQueryResourceRequirements(MaxDataSize);
  if ( (*v121 & 0x2000) == 0 || (v84 = *v119, *v119 != 22) && (v84 > 0x1D || (v110 = 537412104, !_bittest(&v110, v84))) )
    PnpIsDeviceInstanceEnabled(v46, MaxDataSize + 40, 1LL);
  if ( v46 )
  {
    LOBYTE(v62) = v116 == 1;
    PnpInitializeSessionId(MaxDataSize, v46, v62);
    LOBYTE(v63) = v116 == 1;
    PnpInitializeInheritedRestrictedSd(MaxDataSize, v46, v63);
  }
  PiQueryAndAllocateBootResources(MaxDataSize);
  if ( (*v121 & 0x2000) == 0 || (v68 = v119, *v119 != 9) && ((*v119 - 3) & 0xFFFFFFEF) != 0 )
  {
    v64 = KeGetCurrentThread();
    --v64->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v65) = v116 == 1;
    PnpSaveDeviceCapabilities(MaxDataSize, v146, v65);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpHotSwapUpdateRemovalPolicy(MaxDataSize);
    LOBYTE(v66) = 1;
    v67 = PpDeviceRegistration(MaxDataSize + 40, v66, MaxDataSize + 56, 0LL);
    if ( v67 < 0 )
      PipSetDevNodeProblem(MaxDataSize, 19LL, (unsigned int)v67);
    v68 = v119;
    v46 = Handle;
    v48 = v135;
    v55 = v134;
    v47 = v130;
  }
  if ( (*v121 & 0x2000) == 0 || *v68 != 9 && *v68 != 3 )
  {
    PnpIrpDeviceEnumerated(v3);
    if ( v46 )
      PiUpdateDevicePanel(MaxDataSize, v46);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v69, *(_QWORD *)(MaxDataSize + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v70, *(_QWORD *)(MaxDataSize + 48), 14LL);
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, (_QWORD *)v3);
    PnpNewDeviceNodeDependencyCheck(MaxDataSize);
  }
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v46 )
    ZwClose(v46);
  if ( v129 )
    ExFreePoolWithTag(v129, 0);
  if ( v138 )
    ExFreePoolWithTag(v138, 0);
  if ( v55 )
    ExFreePoolWithTag(v55, 0);
  if ( v131 )
    ExFreePoolWithTag(v131, 0);
  v71 = v140;
  if ( v140 )
    PiPnpRtlEndOperation((PVOID **)v140);
  if ( (byte_140C0E20B & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (__int64)v71,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Stop,
      0LL,
      MaxDataSize);
  if ( *(_DWORD *)(MaxDataSize + 568) )
    PnpTraceDockDeviceEnumeration(MaxDataSize, v61);
  return v61;
}
