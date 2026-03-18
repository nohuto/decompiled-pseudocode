/*
 * XREFs of IoReportDetectedDevice @ 0x14081EB20
 * Callers:
 *     HalpDriverEntry @ 0x14081E150 (HalpDriverEntry.c)
 * Callees:
 *     PpDevNodeInsertIntoTree @ 0x14024D9D8 (PpDevNodeInsertIntoTree.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     RtlStringCbLengthW @ 0x1402DCD64 (RtlStringCbLengthW.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x1402DEAB0 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoaded @ 0x1402DEADC (PipAreDriversLoaded.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     PpDevNodeRemoveFromTree @ 0x1403A6700 (PpDevNodeRemoveFromTree.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PipAllocateDeviceNode @ 0x1406CFCE0 (PipAllocateDeviceNode.c)
 *     PnpDetermineResourceListSize @ 0x140748D08 (PnpDetermineResourceListSize.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140768024 (PnpCleanupDeviceRegistryValues.c)
 *     _CmCreateDevice @ 0x140768AF8 (_CmCreateDevice.c)
 *     IopDoDeferredSetInterfaceState @ 0x140768F5C (IopDoDeferredSetInterfaceState.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14076ACE4 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDeviceRegistration @ 0x14076B554 (PpDeviceRegistration.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14076E894 (PnpDeviceObjectToDeviceInstance.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     _CmSetDeviceRegProp @ 0x14076FE20 (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpUnicodeStringToWstr @ 0x140779CA0 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     PnpUnicodeStringToWstrFree @ 0x14077BAB8 (PnpUnicodeStringToWstrFree.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     PnpSetRegistryDword @ 0x14081EAC0 (PnpSetRegistryDword.c)
 *     IopIsReportedAlready @ 0x14081EFBC (IopIsReportedAlready.c)
 *     IopGetRootDeviceId @ 0x14081F468 (IopGetRootDeviceId.c)
 *     IopGetOriginalServiceName @ 0x14081F4F4 (IopGetOriginalServiceName.c)
 *     IopDuplicateDetection @ 0x14081F788 (IopDuplicateDetection.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14081FDD8 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140859598 (IopCreateRootEnumeratedDeviceObject.c)
 *     PnpAllocateDeviceInstancePath @ 0x14085C93C (PnpAllocateDeviceInstancePath.c)
 *     IoReportResourceUsageInternal @ 0x140945128 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryRequirementsList @ 0x140946A74 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140946ADC (PnpSetRegistryResourceList.c)
 *     IopCreateLegacyDeviceIds @ 0x140957F9C (IopCreateLegacyDeviceIds.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  PDRIVER_EXTENSION DriverExtension; // r15
  UNICODE_STRING *p_ServiceKeyName; // r15
  PVOID DeviceNode; // rbx
  PDEVICE_OBJECT v13; // rax
  const UNICODE_STRING *v15; // rcx
  NTSTATUS result; // eax
  NTSTATUS appended; // edi
  int v18; // eax
  int v19; // r13d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rbx
  unsigned __int16 Length; // cx
  size_t v23; // r12
  wchar_t *v24; // rax
  signed __int64 v25; // rcx
  __int16 v26; // ax
  _QWORD *v27; // rax
  __int64 v28; // r8
  PIO_RESOURCE_REQUIREMENTS_LIST v29; // r15
  unsigned int v30; // eax
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  __int16 v33; // ax
  struct _DEVICE_OBJECT *v34; // r12
  PVOID v35; // rcx
  int v36; // eax
  __int64 Pool2; // rax
  int DeviceInstancePath; // eax
  NTSTATUS v39; // eax
  int v40; // r8d
  int v41; // edx
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rcx
  int v45; // eax
  wchar_t *v46; // r13
  __int64 v47; // rdx
  PDRIVER_OBJECT v48; // rdi
  ULONG Flags; // eax
  UNICODE_STRING *v50; // rdi
  int LegacyDeviceIds; // eax
  unsigned int v52; // eax
  int v53; // ecx
  unsigned int v54; // edi
  void *v55; // rax
  void *v56; // rsi
  __int64 v57; // r8
  int v58; // edx
  __int64 v59; // rcx
  BOOL *v60; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  __int64 v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+38h] [rbp-C8h]
  int v64; // [rsp+40h] [rbp-C0h]
  char v65; // [rsp+50h] [rbp-B0h] BYREF
  char v66; // [rsp+51h] [rbp-AFh] BYREF
  char v67; // [rsp+52h] [rbp-AEh] BYREF
  char v68; // [rsp+53h] [rbp-ADh]
  _DWORD cbMax[3]; // [rsp+54h] [rbp-ACh] BYREF
  BOOL v70; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h] BYREF
  int v73; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  int v77; // [rsp+A0h] [rbp-60h]
  PDRIVER_OBJECT v78; // [rsp+A8h] [rbp-58h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B0h] [rbp-50h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+B8h] [rbp-48h] BYREF
  size_t pcbLength; // [rsp+C0h] [rbp-40h] BYREF
  PIO_RESOURCE_REQUIREMENTS_LIST v82; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v84; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v85; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t *j; // [rsp+F8h] [rbp-8h]
  PDEVICE_OBJECT *v87; // [rsp+100h] [rbp+0h]
  wchar_t pszDest[200]; // [rsp+110h] [rbp+10h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  v82 = ResourceRequirements;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v87 = DeviceObject;
  DeviceNode = 0LL;
  v78 = DriverObject;
  v66 = 0;
  v13 = *DeviceObject;
  *(_QWORD *)&Destination.Length = 26214400LL;
  psz = 0LL;
  memset(cbMax, 0, sizeof(cbMax));
  pcbLength = 0LL;
  v73 = 0;
  Handle = 0LL;
  v65 = 0;
  v72 = 0LL;
  v70 = 0;
  Destination.Buffer = pszDest;
  KeyHandle = 0LL;
  v68 = 0;
  Object = 0LL;
  P = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  if ( v13 )
  {
    DeviceNode = v13->DeviceObjectExtension->DeviceNode;
    v72 = (__int64)DeviceNode;
    if ( DeviceNode )
      goto LABEL_5;
    return -1073741578;
  }
  if ( (DriverObject->Flags & 4) == 0 )
  {
    v15 = p_ServiceKeyName;
    goto LABEL_4;
  }
  Buffer = p_ServiceKeyName->Buffer;
  for ( i = &Buffer[((unsigned __int64)p_ServiceKeyName->Length >> 1) - 1]; ; --i )
  {
    if ( i == Buffer )
      return -1073741585;
    if ( *i == 92 )
      break;
  }
  *((_QWORD *)&v84 + 1) = i + 1;
  v33 = p_ServiceKeyName->Length - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
  v15 = (const UNICODE_STRING *)&v84;
  LOWORD(v84) = v33;
  WORD1(v84) = v33;
LABEL_4:
  result = IopGetRootDeviceId(v15, &Destination);
  if ( result >= 0 )
  {
LABEL_5:
    appended = PiPnpRtlBeginOperation((__int64 **)&P);
    if ( appended < 0 )
      goto LABEL_35;
    PpDevNodeLockTree(1);
    if ( DeviceNode || (v78->Flags & 4) != 0 )
    {
      v19 = 0;
    }
    else
    {
      v18 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, SlotNumber, &v72);
      v19 = 0;
      appended = v18;
      if ( v18 >= 0 )
        v70 = v72 != 0;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    v21 = v72;
    if ( v72 )
    {
LABEL_21:
      if ( v70 )
      {
        if ( (unsigned int)PipAreDriversLoaded(v21)
          || (*(_DWORD *)(v21 + 396) & 0x6000) != 0
          && ((v52 = *(_DWORD *)(v21 + 404), v52 > 0x1C) || (v53 = 268697602, !_bittest(&v53, v52))) )
        {
          ObfDereferenceObject(*(PVOID *)(v21 + 32));
          appended = -1073741810;
          goto LABEL_59;
        }
        if ( !v28 )
          PipClearDevNodeProblem(v21);
      }
      if ( !*(_QWORD *)&cbMax[1] )
      {
        appended = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v21 + 32), (__int64)&cbMax[1], 983103);
        if ( appended < 0 )
          goto LABEL_59;
      }
    }
    else
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\");
      if ( appended < 0 )
        goto LABEL_35;
      Length = Destination.Length;
      v77 = Destination.Length;
      v23 = (400 - (unsigned __int64)Destination.Length) >> 1;
      v24 = &pszDest[(unsigned __int64)Destination.Length >> 1];
      for ( j = v24; ; v24 = j )
      {
        Destination.Length = Length;
        LODWORD(v62) = v19;
        ppszDestEnd = v24;
        RtlStringCchPrintfExW(v24, v23, &ppszDestEnd, 0LL, 0, L"%04u", v62);
        v25 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - pszDest;
        if ( (_DWORD)v25 == -1 )
          v26 = 400 - Destination.Length;
        else
          v26 = 2 * v25;
        Destination.Length += v26;
        appended = CmCreateDevice(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)Destination.Buffer,
                     983103,
                     (HANDLE *)&cbMax[1],
                     &v65,
                     0);
        if ( appended < 0 )
          goto LABEL_59;
        if ( v65 )
          goto LABEL_20;
        v70 = 0;
        v60 = &v70;
        if ( (unsigned __int8)IopIsReportedAlready(&Destination, *(_QWORD *)&cbMax[1], p_ServiceKeyName, ResourceList) )
          break;
        ZwClose(*(HANDLE *)&cbMax[1]);
        Length = v77;
        ++v19;
      }
      v27 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&Destination, 0x746C6644u);
      Object = v27;
      if ( !v27 )
      {
        appended = -1073741823;
        v21 = 0LL;
        goto LABEL_59;
      }
      v21 = *(_QWORD *)(v27[39] + 40LL);
      v72 = v21;
LABEL_20:
      if ( v21 )
        goto LABEL_21;
      appended = IopCreateRootEnumeratedDeviceObject(&Object);
      if ( appended < 0 )
        goto LABEL_59;
      v34 = (struct _DEVICE_OBJECT *)Object;
      v35 = Object;
      v68 = 1;
      *((_DWORD *)Object + 12) |= 0x1000u;
      v36 = PipAllocateDeviceNode((__int64)v35, (__int64)&v72);
      v21 = v72;
      if ( v36 == -1073740946 || !v72 )
      {
        IoDeleteDevice(v34);
        appended = -1073741670;
        goto LABEL_59;
      }
      if ( (v78->Flags & 4) == 0 )
      {
        Pool2 = ExAllocatePool2(256LL, p_ServiceKeyName->Length, 1215327824LL);
        *(_QWORD *)(v21 + 64) = Pool2;
        if ( !Pool2 )
          goto LABEL_77;
        *(_WORD *)(v21 + 58) = p_ServiceKeyName->Length;
        DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 56), p_ServiceKeyName, 0);
        appended = DeviceInstancePath;
        if ( DeviceInstancePath < 0 )
          goto LABEL_78;
      }
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v21, (unsigned int)Destination.Length + 2);
      appended = DeviceInstancePath;
      if ( DeviceInstancePath < 0 )
        goto LABEL_78;
      v39 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 40), &Destination, 0);
      appended = v39;
      if ( v39 < 0 )
      {
        v40 = v39;
        v41 = 3;
        goto LABEL_86;
      }
      *(_WORD *)(*(_QWORD *)(v21 + 48) + 2 * ((unsigned __int64)*(unsigned __int16 *)(v21 + 40) >> 1)) = 0;
      v73 = 32;
      v45 = CmSetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v21 + 48),
              *(__int64 *)&cbMax[1],
              0xBu,
              4u,
              (__int64)&v73,
              4u,
              0);
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v66 = -1;
      v45 = PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v21 + 48),
              1u,
              *(__int64 *)&cbMax[1],
              0LL,
              (__int64)&DEVPKEY_Device_Reported,
              17,
              (__int64)&v66,
              1u,
              0);
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v45 = PnpUnicodeStringToWstr((__int16 **)&psz, cbMax, &p_ServiceKeyName->Length);
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v46 = (wchar_t *)psz;
      appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
      if ( appended < 0 )
      {
        PnpUnicodeStringToWstrFree(v46, (__int64)p_ServiceKeyName);
        v40 = appended;
        v41 = 19;
LABEL_86:
        PipSetDevNodeProblem(v21, v41, v40);
        goto LABEL_59;
      }
      appended = CmSetDeviceRegProp(
                   *(__int64 *)&PiPnpRtlCtx,
                   *(_QWORD *)(v21 + 48),
                   *(__int64 *)&cbMax[1],
                   5u,
                   1u,
                   (__int64)v46,
                   (int)pcbLength + 2,
                   0);
      PnpUnicodeStringToWstrFree(v46, (__int64)p_ServiceKeyName);
      if ( appended < 0 )
      {
        v42 = appended;
LABEL_81:
        v43 = 19;
LABEL_82:
        v44 = v21;
LABEL_84:
        PipSetDevNodeProblem(v44, v43, v42);
LABEL_59:
        if ( v65 )
        {
          if ( KeyHandle )
            ZwDeleteKey(KeyHandle);
          if ( Handle )
            ZwDeleteKey(Handle);
          if ( *(_QWORD *)&cbMax[1] )
            ZwDeleteKey(*(HANDLE *)&cbMax[1]);
          PnpCleanupDeviceRegistryValues(v21 + 40);
          PpDevNodeRemoveFromTree((_QWORD *)v21);
          IoDeleteDevice(*(PDEVICE_OBJECT *)(v21 + 32));
          ObfDereferenceObject(*(PVOID *)(v21 + 32));
        }
LABEL_35:
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        PpDevNodeUnlockTree(1);
        if ( KeyHandle )
          ZwClose(KeyHandle);
        if ( Handle )
          ZwClose(Handle);
        if ( *(_QWORD *)&cbMax[1] )
          ZwClose(*(HANDLE *)&cbMax[1]);
        if ( P )
          PiPnpRtlEndOperation((PVOID **)P);
        return appended;
      }
      Handle = 0LL;
      v45 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v21 + 48), 19, 0, 983103, 1, (__int64)&Handle, 0LL);
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v45 = PnpSetRegistryDword(Handle, L"DeviceReported");
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v48 = v78;
      Flags = v78->Flags;
      if ( (Flags & 4) == 0 )
      {
        LOBYTE(v47) = 1;
        PpDeviceRegistration((__int64)&Destination, v47, v21 + 56, 1);
        Flags = v48->Flags;
      }
      Destination.Buffer = 0LL;
      v50 = (UNICODE_STRING *)&v84;
      *(_DWORD *)&Destination.Length = 0;
      if ( (Flags & 4) == 0 )
        v50 = p_ServiceKeyName;
      cbMax[0] = 400;
      if ( (int)IopGetOriginalServiceName(v50, pszDest, cbMax) >= 0 && cbMax[0] > 2u )
      {
        WORD1(v85) = 400;
        *((_QWORD *)&v85 + 1) = pszDest;
        LOWORD(v85) = LOWORD(cbMax[0]) - 2;
        v50 = (UNICODE_STRING *)&v85;
      }
      LegacyDeviceIds = IopCreateLegacyDeviceIds(v34, v50, ResourceList);
      appended = LegacyDeviceIds;
      v44 = v21;
      if ( LegacyDeviceIds < 0 )
      {
        v42 = LegacyDeviceIds;
        v43 = 19;
        goto LABEL_84;
      }
      PipSetDevNodeFlags(v21, 17);
      *(_DWORD *)(v21 + 660) = *((_DWORD *)IopRootDeviceNode + 165);
      PipSetDevNodeState(v21, 772);
      PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, v21);
      DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance((__int64)v34, v21 + 40);
      appended = DeviceInstancePath;
      if ( DeviceInstancePath < 0 )
      {
LABEL_78:
        v42 = DeviceInstancePath;
        goto LABEL_79;
      }
      ObfReferenceObject(v34);
    }
    v29 = v82;
    if ( !ResourceList && !v82
      || (v45 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v21 + 48),
                  20,
                  0,
                  983103,
                  1,
                  (__int64)&KeyHandle,
                  0LL),
          appended = v45,
          v45 >= 0)
      && (!ResourceList || (v45 = PnpSetRegistryResourceList(KeyHandle), appended = v45, v45 >= 0))
      && (!v29 || (v45 = PnpSetRegistryRequirementsList(KeyHandle), appended = v45, v45 >= 0)) )
    {
      if ( ResourceAssigned )
      {
        PipSetDevNodeFlags(v21, 256);
        PnpSetRegistryDword(*(HANDLE *)&cbMax[1], L"NoResourceAtInitTime");
        v30 = PnpDetermineResourceListSize(ResourceList);
        IopWriteAllocatedResourcesToRegistry(v21, ResourceList, v30);
      }
      else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
      {
        v54 = PnpDetermineResourceListSize(ResourceList);
        v55 = (void *)ExAllocatePool2(256LL, v54, 1198550608LL);
        v56 = v55;
        if ( !v55 )
        {
LABEL_77:
          v42 = -1073741670;
          appended = -1073741670;
LABEL_79:
          v43 = 3;
          goto LABEL_82;
        }
        memmove(v55, ResourceList, v54);
        pszFormat = *(NTSTRSAFE_PCWSTR *)(v21 + 32);
        v57 = *((_QWORD *)pszFormat + 1);
        v67 = 0;
        appended = IoReportResourceUsageInternal(
                     0,
                     v58,
                     v57,
                     0,
                     (_DWORD)v60,
                     (__int64)pszFormat,
                     (__int64)v56,
                     v63,
                     v64,
                     (__int64)&v67);
        ExFreePoolWithTag(v56, 0x47706E50u);
        if ( appended >= 0 && !v67 )
        {
LABEL_32:
          *(_DWORD *)(v21 + 660) = *(_DWORD *)(*(_QWORD *)(v21 + 16) + 660LL);
          IopDoDeferredSetInterfaceState(v21);
          PipSetDevNodeState(v21, 777);
          if ( v68 )
            PipSetDevNodeFlags(v21, 0x80000000);
          *v87 = *(PDEVICE_OBJECT *)(v21 + 32);
          goto LABEL_35;
        }
        if ( !PipIsDevNodeDNStarted(v21) )
          PipSetDevNodeProblem(v59, 12, appended);
        appended = -1073741800;
      }
      else
      {
        PipSetDevNodeFlags(v21, 256);
      }
      if ( appended < 0 )
        goto LABEL_59;
      goto LABEL_32;
    }
LABEL_80:
    v42 = v45;
    goto LABEL_81;
  }
  return result;
}
