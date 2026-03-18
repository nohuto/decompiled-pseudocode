/*
 * XREFs of PiProcessNewDeviceNode @ 0x14076E9B8
 * Callers:
 *     PiProcessNewDeviceNodeAsync @ 0x1406E60B0 (PiProcessNewDeviceNodeAsync.c)
 *     PiProcessNewDeviceNodeWorker @ 0x1409478F0 (PiProcessNewDeviceNodeWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     PnpIrpDeviceEnumerated @ 0x1402D2524 (PnpIrpDeviceEnumerated.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1402DE33C (PpMarkDeviceStackExtensionFlag.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140560E60 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x140560EC4 (McTemplateK0pz_EtwWriteTransfer.c)
 *     PpvUtilFailDriver @ 0x14056489C (PpvUtilFailDriver.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406DFC4C (PiBuildDeviceNodeInstancePath.c)
 *     PipGenerateContainerID @ 0x1407452A0 (PipGenerateContainerID.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14074761C (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PiQueryAndAllocateBootResources @ 0x14074856C (PiQueryAndAllocateBootResources.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140749848 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpQueryBusInformation @ 0x1407499A8 (PnpQueryBusInformation.c)
 *     PiQueryResourceRequirements @ 0x140749A80 (PiQueryResourceRequirements.c)
 *     PipClearDevNodeUserFlags @ 0x14074A08C (PipClearDevNodeUserFlags.c)
 *     PnpGetDeviceLocationStrings @ 0x14074ABF0 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryDeviceText @ 0x14074B2C8 (PnpQueryDeviceText.c)
 *     PpIrpQueryCapabilities @ 0x14074B394 (PpIrpQueryCapabilities.c)
 *     PnpQueryInterface @ 0x14074C6C0 (PnpQueryInterface.c)
 *     PnpQueryID @ 0x14074C8DC (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x14074CA14 (PnpIrpQueryID.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x140767220 (PipSetDevNodeUserFlags.c)
 *     PiCreateDeviceInstanceKey @ 0x140768A4C (PiCreateDeviceInstanceKey.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14076ACE4 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiQueryRemovableDeviceOverride @ 0x14076AD40 (PiQueryRemovableDeviceOverride.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14076B030 (PnpIsDeviceInstanceEnabled.c)
 *     PnpInitializeSessionId @ 0x14076B24C (PnpInitializeSessionId.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x14076B308 (PnpInitializeInheritedRestrictedSd.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14076B438 (PpHotSwapUpdateRemovalPolicy.c)
 *     PpDeviceRegistration @ 0x14076B554 (PpDeviceRegistration.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14076BB10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSetPlugPlayEvent @ 0x14076C288 (PnpSetPlugPlayEvent.c)
 *     PnpCheckDeviceIdsChanged @ 0x14076C544 (PnpCheckDeviceIdsChanged.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14076C764 (PiDcUpdateDeviceContainerMembership.c)
 *     PnpClearDeviceTemporaryProperties @ 0x14076DC84 (PnpClearDeviceTemporaryProperties.c)
 *     PiUpdateDevicePanel @ 0x14076E168 (PiUpdateDevicePanel.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 *     PnpSaveDeviceCapabilities @ 0x14076FC68 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x14076FE20 (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpFindAlternateStringData @ 0x1407734D8 (PnpFindAlternateStringData.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     PnpGenerateDeviceIdsHash @ 0x14078D510 (PnpGenerateDeviceIdsHash.c)
 *     KseAddHardwareId @ 0x1407EC8C4 (KseAddHardwareId.c)
 *     PipMakeGloballyUniqueId @ 0x14080E438 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14086358C (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PnpDisableDevice @ 0x140946EF8 (PnpDisableDevice.c)
 *     PnpLogDuplicateDevice @ 0x140947BEC (PnpLogDuplicateDevice.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14094E998 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x14094FC28 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x140950B80 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x140957408 (PnpTraceDockDeviceEnumeration.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(ULONG_PTR MaxDataSize)
{
  __int64 v2; // rcx
  int v3; // r13d
  HANDLE v4; // r12
  struct _DEVICE_OBJECT *v5; // r15
  int v6; // eax
  wchar_t *v7; // rax
  int Capabilities; // ebx
  char v9; // r14
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // eax
  int GloballyUniqueId; // ebx
  WCHAR *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  int v22; // edx
  struct _DEVICE_OBJECT *v23; // rax
  ULONG_PTR v24; // rbx
  int v25; // esi
  struct _KTHREAD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned int v29; // eax
  int v30; // eax
  int v31; // r14d
  int v32; // eax
  PVOID v33; // rsi
  WCHAR *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // rdx
  struct _KTHREAD *v37; // rax
  struct _KTHREAD *v38; // rax
  struct _KTHREAD *v39; // rax
  HANDLE v40; // rsi
  WCHAR *v41; // r12
  PVOID v42; // r13
  int v43; // r14d
  int v44; // eax
  char v45; // bl
  int v46; // eax
  int v47; // r14d
  PVOID v48; // r14
  int AlternateStringData; // eax
  unsigned int v50; // ebx
  int v51; // eax
  unsigned int v52; // ebx
  struct _KTHREAD *v53; // rax
  __int64 v54; // r8
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  PVOID v59; // rcx
  int v61; // edx
  int FailedInstallProblemStatus; // r8d
  struct _KTHREAD *CurrentThread; // rax
  char v64; // al
  _QWORD *v65; // rcx
  PVOID v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned int v71; // eax
  unsigned int v72; // eax
  int v73; // eax
  int v74; // esi
  bool v75; // zf
  int v76; // edx
  int v77; // r8d
  unsigned int v78; // eax
  int v79; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *DeviceNode; // rcx
  unsigned __int16 *v83; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rcx
  _WORD *v85; // rax
  __int64 v86; // rcx
  _WORD *v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  _WORD *v90; // rcx
  __int64 v91; // rcx
  unsigned __int16 *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  _WORD *v96; // rcx
  __int64 v97; // rcx
  int v98; // eax
  int v99; // eax
  int v100; // eax
  unsigned int v101; // edx
  char v102; // al
  int v103; // ecx
  int v104; // ecx
  bool v105; // [rsp+58h] [rbp-B0h]
  _BYTE v106[3]; // [rsp+59h] [rbp-AFh] BYREF
  unsigned int v107; // [rsp+5Ch] [rbp-ACh] BYREF
  int v108; // [rsp+60h] [rbp-A8h] BYREF
  int v109; // [rsp+64h] [rbp-A4h]
  int v110; // [rsp+68h] [rbp-A0h] BYREF
  int v111; // [rsp+6Ch] [rbp-9Ch]
  __int64 v112; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  PVOID v114; // [rsp+80h] [rbp-88h] BYREF
  int v115; // [rsp+88h] [rbp-80h] BYREF
  int v116; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v117; // [rsp+90h] [rbp-78h]
  int v118; // [rsp+94h] [rbp-74h]
  PVOID v119; // [rsp+98h] [rbp-70h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v121; // [rsp+A8h] [rbp-60h] BYREF
  int v122; // [rsp+B0h] [rbp-58h] BYREF
  int v123; // [rsp+B4h] [rbp-54h] BYREF
  PVOID v124; // [rsp+B8h] [rbp-50h] BYREF
  PVOID P; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v126; // [rsp+C8h] [rbp-40h]
  int v127; // [rsp+D0h] [rbp-38h] BYREF
  int v128; // [rsp+D4h] [rbp-34h] BYREF
  __int64 v129; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v130; // [rsp+E0h] [rbp-28h] BYREF
  wchar_t *Str; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t *v132; // [rsp+F0h] [rbp-18h]
  const WCHAR *v133; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v134; // [rsp+100h] [rbp-8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+0h] BYREF
  __int64 v136; // [rsp+118h] [rbp+10h] BYREF
  __int128 v137; // [rsp+120h] [rbp+18h] BYREF
  __int128 v138; // [rsp+130h] [rbp+28h]
  void (__fastcall *v139)(_QWORD, __int64 *); // [rsp+140h] [rbp+38h]
  _DWORD v140[16]; // [rsp+148h] [rbp+40h] BYREF
  GUID Guid; // [rsp+188h] [rbp+80h] BYREF

  SourceString = 0LL;
  memset(v140, 0, sizeof(v140));
  Guid = 0LL;
  v121 = 0LL;
  DestinationString = 0LL;
  v116 = 0;
  v124 = 0LL;
  v134 = 0LL;
  P = 0LL;
  v123 = 0;
  v119 = 0LL;
  v128 = 0;
  v130 = 0LL;
  v133 = 0LL;
  v115 = 0;
  v122 = 0;
  LOBYTE(v108) = 0;
  v114 = 0LL;
  if ( (byte_140C0DD4B & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Start, 0LL, MaxDataSize);
  LOBYTE(v117) = 0;
  v105 = 0;
  v118 = 0;
  v3 = 0;
  v109 = 0;
  v4 = 0LL;
  v5 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v136 = MEMORY[0xFFFFF78000000014];
  v107 = 0;
  LODWORD(v112) = 0;
  v110 = 0;
  v106[0] = 0;
  Handle = 0LL;
  v111 = 0;
  PiPnpRtlBeginOperation(&v134);
  PipClearDevNodeFlags(MaxDataSize, 0x2000000LL);
  Str = 0LL;
  v127 = 0;
  v126 = 0LL;
  v132 = 0LL;
  v6 = PnpQueryID(MaxDataSize, 0, (PVOID *)&Str, &v127);
  if ( v6 < 0 )
  {
    v74 = v6;
    if ( v6 == -1073479624 )
      v74 = -1073741823;
    v109 = v74;
  }
  else
  {
    v126 = Str;
    v7 = wcschr(Str, 0x5Cu);
    *v7 = 0;
    v132 = v7 + 1;
  }
  Capabilities = PpIrpQueryCapabilities((int)v5, v140);
  PipClearDevNodeUserFlags(MaxDataSize, 2);
  v9 = 0;
  if ( Capabilities >= 0 )
  {
    if ( (v140[1] & 0x20000) != 0 )
      PipSetDevNodeUserFlags(MaxDataSize, 2);
    if ( (v140[1] & 0x40) != 0 )
      v9 = 1;
  }
  if ( (v140[1] & 0x20) != 0 )
  {
    if ( *(_DWORD *)(MaxDataSize + 568) == 4 )
      PpProfileCancelTransitioningDock(MaxDataSize);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)(MaxDataSize + 568) = v10;
  v129 = -1LL;
  v139 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  if ( (int)PnpQueryInterface(v5, (ULONG_PTR)&GUID_PNP_EXTENDED_ADDRESS_INTERFACE, 1u, 0x28u, 0LL, (USHORT *)&v137) >= 0 )
  {
    if ( v139 )
    {
      if ( WORD1(v137) == 1 )
      {
        v139(*((_QWORD *)&v137 + 1), &v129);
        if ( *((_QWORD *)&v138 + 1) )
          (*((void (__fastcall **)(_QWORD))&v138 + 1))(*((_QWORD *)&v137 + 1));
      }
    }
  }
  PnpQueryDeviceText(*(_QWORD *)(MaxDataSize + 32), 0, v11, &v124);
  PnpQueryDeviceText(*(_QWORD *)(MaxDataSize + 32), 1, v12, &v130);
  v13 = PnpQueryID(MaxDataSize, 3, &v119, &v128);
  GloballyUniqueId = v13;
  if ( v9 )
  {
    if ( v13 == -1073741637 )
    {
      PipSetDevNodeProblem(MaxDataSize, 9, -1073741637);
      PipSetDevNodeFlags(*(_QWORD *)(MaxDataSize + 16), 0x200000LL);
      PnpSetInvalidIDEvent(*(_QWORD *)(MaxDataSize + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || *(_DWORD *)(MaxDataSize + 404) != 9 )
  {
    v65 = *(_QWORD **)(MaxDataSize + 16);
    if ( v65 != IopRootDeviceNode )
    {
      v15 = (WCHAR *)v119;
      goto LABEL_152;
    }
  }
  v15 = (WCHAR *)v119;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v75 = (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0;
      v109 = GloballyUniqueId;
      if ( v75 || *(_DWORD *)(MaxDataSize + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v76 = 3;
          v77 = -1073741670;
        }
        else
        {
          v77 = GloballyUniqueId;
          v76 = 19;
        }
        PipSetDevNodeProblem(MaxDataSize, v76, v77);
      }
    }
    v18 = PiBuildDeviceNodeInstancePath(MaxDataSize, (__int64)v126, (__int64)v132, (__int64)v15);
    if ( v18 >= 0 )
    {
      if ( (byte_140C0DD4B & 8) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v17, v16, v19, MaxDataSize, *(_QWORD *)(MaxDataSize + 48));
      v18 = PiCreateDeviceInstanceKey(MaxDataSize, &Handle, &v110);
      v20 = 0;
      if ( v18 < 0 )
      {
        PipSetDevNodeProblem(MaxDataSize, 19, v18);
        v3 = v110;
        v4 = Handle;
      }
      else
      {
        v3 = v110;
        v4 = Handle;
        if ( v110 == 1 )
          v20 = 0x20000;
        v111 = v20;
      }
    }
    if ( v18 >= 0 )
      v18 = v109;
    v109 = v18;
    PpMarkDeviceStackExtensionFlag((__int64)v5, 16, 1);
    v21 = *(_DWORD *)(MaxDataSize + 300);
    if ( v21 == 769 )
    {
      v22 = 772;
    }
    else
    {
      if ( v21 != 770 )
        goto LABEL_30;
      v22 = 771;
    }
    PipSetDevNodeState(MaxDataSize, v22);
LABEL_30:
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) != 0 )
    {
      v78 = *(_DWORD *)(MaxDataSize + 404);
      if ( v78 <= 0x13 )
      {
        v79 = 524808;
        if ( _bittest(&v79, v78) )
          goto LABEL_35;
      }
    }
    if ( v3 == 1 )
      break;
    v23 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(MaxDataSize + 40, 1701867088LL);
    v24 = (ULONG_PTR)v23;
    if ( !v23 )
      goto LABEL_33;
    if ( v23 == v5 )
    {
      ObfDereferenceObjectWithTag(v23, 0x65706E50u);
LABEL_33:
      v18 = v109;
      goto LABEL_34;
    }
    if ( !v9 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock((ULONG)v5, (PVOID)v5->Size);
      DriverObject = v5->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
        p_DriverName = &v5->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
          IoAddTriageDumpDataBlock(
            (ULONG)v5->DriverObject->DriverName.Buffer,
            (PVOID)v5->DriverObject->DriverName.Length);
        }
      }
      DeviceNode = (char *)v5->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        v83 = (unsigned __int16 *)(DeviceNode + 40);
        IoAddTriageDumpDataBlock((ULONG)DeviceNode, (PVOID)0x310);
        if ( *v83 )
        {
          IoAddTriageDumpDataBlock((ULONG)v83, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v83 + 1), (PVOID)*v83);
        }
        DeviceObjectExtension = v5->DeviceObjectExtension;
        v85 = DeviceObjectExtension->DeviceNode;
        if ( v85[28] )
        {
          IoAddTriageDumpDataBlock((_DWORD)v85 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)v5->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)v5->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = v5->DeviceObjectExtension;
        }
        v86 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v86 )
        {
          v87 = (_WORD *)(v86 + 56);
          if ( *v87 )
          {
            IoAddTriageDumpDataBlock((ULONG)v87, (PVOID)2);
            v88 = *((_QWORD *)v5->DeviceObjectExtension->DeviceNode + 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v88 + 64), (PVOID)*(unsigned __int16 *)(v88 + 56));
          }
        }
      }
      IoAddTriageDumpDataBlock(v24, (PVOID)*(unsigned __int16 *)(v24 + 2));
      v89 = *(_QWORD *)(v24 + 8);
      if ( v89 )
      {
        IoAddTriageDumpDataBlock(v89, (PVOID)(unsigned int)*(__int16 *)(v89 + 2));
        v90 = (_WORD *)(*(_QWORD *)(v24 + 8) + 56LL);
        if ( *v90 )
        {
          IoAddTriageDumpDataBlock((ULONG)v90, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v24 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v24 + 8) + 56LL));
        }
      }
      v91 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
      if ( v91 )
      {
        v92 = (unsigned __int16 *)(v91 + 40);
        IoAddTriageDumpDataBlock(v91, (PVOID)0x310);
        if ( *v92 )
        {
          IoAddTriageDumpDataBlock((ULONG)v92, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v92 + 1), (PVOID)*v92);
        }
        v93 = *(_QWORD *)(v24 + 312);
        v94 = *(_QWORD *)(v93 + 40);
        if ( *(_WORD *)(v94 + 56) )
        {
          IoAddTriageDumpDataBlock(v94 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL) + 56LL));
          v93 = *(_QWORD *)(v24 + 312);
        }
        v95 = *(_QWORD *)(*(_QWORD *)(v93 + 40) + 16LL);
        if ( v95 )
        {
          v96 = (_WORD *)(v95 + 56);
          if ( *v96 )
          {
            IoAddTriageDumpDataBlock((ULONG)v96, (PVOID)2);
            v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v97 + 64), (PVOID)*(unsigned __int16 *)(v97 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, (ULONG_PTR)v5, v24, 0LL);
    }
    ZwClose(v4);
    v140[1] &= ~0x40u;
    Handle = 0LL;
    v4 = 0LL;
    v9 = 0;
    PipSetDevNodeProblem(MaxDataSize, 42, 0);
    PnpLogDuplicateDevice((PCWSTR)v126, v15);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL) + 16LL) == *(_QWORD *)(MaxDataSize + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v24, 0x65706E50u);
    v65 = *(_QWORD **)(MaxDataSize + 16);
LABEL_152:
    GloballyUniqueId = PipMakeGloballyUniqueId(v65[4], v15, &v114);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    v15 = (WCHAR *)v114;
    v119 = v114;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v4 = Handle;
  if ( Handle && v124 )
  {
    v69 = -1LL;
    do
      ++v69;
    while ( *((_WORD *)v124 + v69) );
    CmSetDeviceRegProp(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      (_DWORD)Handle,
      1,
      1,
      (__int64)v124,
      2 * v69 + 2,
      v111);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v3 = v110;
LABEL_34:
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) != 0 && *(_DWORD *)(MaxDataSize + 404) == 42 )
    PipClearDevNodeProblem(MaxDataSize);
LABEL_35:
  if ( v4 )
  {
    if ( v3 != 1 )
      PnpClearDeviceTemporaryProperties(*(_QWORD *)(MaxDataSize + 48));
    v25 = v111;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 40LL) + 2,
      v111);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v136,
      8,
      v25);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v25);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v25);
  }
  else
  {
    v25 = v111;
  }
  if ( (v140[1] & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || (v98 = *(_DWORD *)(MaxDataSize + 404), v98 != 1) && v98 != 14 )
      PnpDisableDevice(MaxDataSize, 29LL);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) != 0 )
  {
    v99 = *(_DWORD *)(MaxDataSize + 404);
    v109 = v18;
    if ( v99 == 9 )
      goto LABEL_57;
    v109 = v18;
    if ( v99 == 3 )
      goto LABEL_57;
    v109 = v18;
    if ( v99 == 19 )
      goto LABEL_57;
  }
  v26 = KeGetCurrentThread();
  --v26->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v4 = Handle;
  if ( Handle && v130 )
  {
    v68 = -1LL;
    do
      ++v68;
    while ( *((_WORD *)v130 + v68) );
    CmSetDeviceRegProp(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      (_DWORD)Handle,
      14,
      1,
      (__int64)v130,
      2 * v68 + 2,
      v25);
  }
  v3 = v110;
  LOBYTE(v27) = v110 == 1;
  PnpSaveDeviceCapabilities(MaxDataSize, v140, v27);
  if ( v129 != -1 )
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_ExtendedAddress,
      9,
      (__int64)&v129,
      8,
      v25);
  v28 = *(_QWORD *)(MaxDataSize + 48);
  v115 = 4;
  v105 = v3 == 1;
  if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v28, (_DWORD)v4, 11, (__int64)&v122, (__int64)&v107, (__int64)&v115, 0) < 0
    || v122 != 4
    || v115 != 4 )
  {
    v29 = 0;
    v107 = 0;
    v61 = 1;
    goto LABEL_136;
  }
  v29 = v107;
  if ( (v107 & 0x20) != 0 )
  {
    v61 = 18;
    if ( (v107 & 1) != 0 )
      goto LABEL_137;
LABEL_136:
    v105 = 1;
    goto LABEL_137;
  }
  if ( (v107 & 0x40) == 0 )
    goto LABEL_50;
  v61 = 28;
LABEL_137:
  if ( (v140[1] & 0x100) != 0 )
  {
    v70 = *(_QWORD *)(MaxDataSize + 48);
    v107 = v29 | 0x400;
    CmSetDeviceRegProp(PiPnpRtlCtx, v70, (_DWORD)v4, 11, 4, (__int64)&v107, 4, v25);
  }
  else
  {
    if ( v61 == 28 )
    {
      FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(*(_QWORD *)(MaxDataSize + 48), v4);
      v61 = 28;
    }
    else
    {
      FailedInstallProblemStatus = 0;
    }
    PipSetDevNodeProblem(MaxDataSize, v61, FailedInstallProblemStatus);
  }
LABEL_50:
  v30 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(MaxDataSize + 32), MaxDataSize + 40);
  v31 = v18;
  if ( v30 < 0 )
    v31 = v30;
  v109 = v31;
  if ( PnpBootMode )
  {
    *(_DWORD *)(MaxDataSize + 704) |= 0x1000u;
    v118 = 2;
  }
  else
  {
    v32 = (unsigned __int8)v117;
    if ( (v107 & 0x40000) != 0 )
      v32 = 1;
    v117 = v32;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
LABEL_57:
  PnpQueryID(MaxDataSize, 1, &P, &v123);
  v33 = P;
  KseAddHardwareId((PCWSTR)P);
  PnpQueryID(MaxDataSize, 2, &v121, &v116);
  PnpGenerateDeviceIdsHash(v33, v121, MaxDataSize + 684);
  PnpIrpQueryID(*(_QWORD *)(MaxDataSize + 32), 5, &SourceString);
  v34 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v34, 0);
      v34 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(MaxDataSize, v33, v121, (bool *)&v108) >= 0 )
  {
    LOBYTE(v35) = v108;
    goto LABEL_64;
  }
  if ( (v140[1] & 0x20) != 0 || (v140[1] & 0x40000) != 0 || (v140[1] & 0x10) == 0 )
    LOBYTE(v35) = 0;
  else
    v35 = 1LL;
  if ( !v34 )
  {
LABEL_64:
    v36 = 0LL;
    if ( v3 != 1 )
      v36 = (__int64)v4;
    if ( (int)PipGenerateContainerID(MaxDataSize, v36, v35, v34, &v133) >= 0 )
    {
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      v34 = (WCHAR *)v133;
      SourceString = v133;
    }
  }
  if ( !v34
    || (RtlInitUnicodeString(&DestinationString, v34),
        RtlGUIDFromString(&DestinationString, (GUID *)(MaxDataSize + 664)) < 0) )
  {
    *(_OWORD *)(MaxDataSize + 664) = 0LL;
  }
  v37 = KeGetCurrentThread();
  --v37->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(MaxDataSize, 32LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( Handle && SourceString )
  {
    v38 = KeGetCurrentThread();
    --v38->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(MaxDataSize + 48), (int)Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v39 = KeGetCurrentThread();
  --v39->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v40 = Handle;
  v41 = (WCHAR *)v121;
  v42 = P;
  if ( Handle )
  {
    v43 = v123;
    if ( v105 || v110 == 1 )
    {
      v45 = v106[0];
    }
    else
    {
      v44 = PnpCheckDeviceIdsChanged(MaxDataSize, (__int64)Handle, (const WCHAR *)P, v123, 1, (signed __int64)v106);
      v45 = v106[0];
      if ( v44 < 0 )
        v45 = 0;
      v106[0] = v45;
      if ( !v45 )
      {
        v46 = PnpCheckDeviceIdsChanged(MaxDataSize, (__int64)v40, v41, v116, 0, (signed __int64)v106);
        v45 = v106[0];
        if ( v46 < 0 )
          v45 = 0;
      }
    }
    if ( v42 )
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(MaxDataSize + 48), (_DWORD)v40, 2, 7, (__int64)v42, v43, v111);
    v47 = v111;
    if ( v41 )
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(MaxDataSize + 48), (_DWORD)v40, 3, 7, (__int64)v41, v116, v111);
    if ( v45 || (_BYTE)v117 )
    {
      if ( v105 )
      {
        v101 = v107;
        v102 = v112;
      }
      else
      {
        v100 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(MaxDataSize + 48), v40, &v112);
        v101 = v107;
        if ( v100 < 0 )
        {
          v102 = 0;
        }
        else
        {
          v102 = v112;
          v101 = v112 | v107;
          v107 |= v112;
        }
      }
      if ( (v102 & 0x20) != 0 || (v101 & 0x40000) != 0 )
      {
        v107 = v101 & 0xFFFBFFFF;
        CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(MaxDataSize + 48), (_DWORD)v40, 11, 4, (__int64)&v107, 4, v47);
        LOBYTE(v101) = v107;
      }
      if ( (v101 & 0x20) != 0 )
      {
        v105 = 1;
        PipSetDevNodeProblem(MaxDataSize, 18, 0);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v48 = v124;
  if ( v40 )
  {
    v114 = 0LL;
    AlternateStringData = 0;
    LODWORD(v112) = 0;
    v50 = 0;
    if ( v124 )
    {
      v67 = -1LL;
      do
        ++v67;
      while ( *((_WORD *)v124 + v67) );
      v50 = 2 * v67 + 2;
      AlternateStringData = PnpFindAlternateStringData(v124, v50, &v114, &v112);
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v48,
      v50,
      v111);
    if ( (int)PnpGetDeviceLocationStrings(MaxDataSize, &v114, &v112) >= 0 )
    {
      v66 = v114;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v114,
        2 * v112,
        v111);
      ExFreePoolWithTag(v66, 0);
    }
  }
  PnpQueryBusInformation(MaxDataSize);
  v51 = PiDmaGuardProcessNewDeviceNode(MaxDataSize);
  v52 = v109;
  if ( v51 < 0 )
    v52 = v51;
  if ( (v140[1] & 0x4000) == 0
    && ((*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || *(_DWORD *)(MaxDataSize + 404) != 14) )
  {
    if ( v105 )
    {
      v64 = v118;
      if ( v110 == 1 )
        v64 = v118 | 1;
      if ( PiDevCfgMode )
        PiDevCfgProcessDevice(MaxDataSize, (__int64)v40, v64);
    }
    else if ( v40 )
    {
      PpDevCfgProcessDeviceOperations(MaxDataSize, v40);
    }
  }
  PiQueryResourceRequirements(MaxDataSize);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0
    || (v71 = *(_DWORD *)(MaxDataSize + 404), v71 > 0x1D)
    || (v103 = 541606408, !_bittest(&v103, v71)) )
  {
    PnpIsDeviceInstanceEnabled(v40, MaxDataSize + 40, 1);
  }
  if ( v40 )
  {
    PnpInitializeSessionId(MaxDataSize, (__int64)v40, v110 == 1);
    PnpInitializeInheritedRestrictedSd(MaxDataSize, (__int64)v40, v110 == 1);
  }
  PiQueryAndAllocateBootResources(MaxDataSize);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0
    || (v72 = *(_DWORD *)(MaxDataSize + 404), v72 > 0x13)
    || (v104 = 524808, !_bittest(&v104, v72)) )
  {
    v53 = KeGetCurrentThread();
    --v53->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v54) = v110 == 1;
    PnpSaveDeviceCapabilities(MaxDataSize, v140, v54);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpHotSwapUpdateRemovalPolicy(MaxDataSize);
    LOBYTE(v55) = 1;
    v56 = PpDeviceRegistration(MaxDataSize + 40, v55, MaxDataSize + 56, 0);
    if ( v56 < 0 )
      PipSetDevNodeProblem(MaxDataSize, 19, v56);
    v40 = Handle;
    v42 = P;
    v48 = v124;
    v41 = (WCHAR *)v121;
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || (v73 = *(_DWORD *)(MaxDataSize + 404), v73 != 9) && v73 != 3 )
  {
    PnpIrpDeviceEnumerated((int)v5);
    if ( v40 )
      PiUpdateDevicePanel(MaxDataSize, v40);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v57, *(_QWORD *)(MaxDataSize + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v58, *(_QWORD *)(MaxDataSize + 48), 14LL);
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, v5);
    PnpNewDeviceNodeDependencyCheck(MaxDataSize);
  }
  if ( v42 )
    ExFreePoolWithTag(v42, 0);
  if ( v41 )
    ExFreePoolWithTag(v41, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v40 )
    ZwClose(v40);
  if ( v119 )
    ExFreePoolWithTag(v119, 0);
  if ( v130 )
    ExFreePoolWithTag(v130, 0);
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  if ( v126 )
    ExFreePoolWithTag(v126, 0);
  v59 = v134;
  if ( v134 )
    PiPnpRtlEndOperation(v134);
  if ( (byte_140C0DD4B & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (__int64)v59,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Stop,
      0LL,
      MaxDataSize);
  if ( *(_DWORD *)(MaxDataSize + 568) )
    PnpTraceDockDeviceEnumeration(MaxDataSize, v52);
  return v52;
}
