/*
 * XREFs of PipProcessStartPhase3 @ 0x14079BBB4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x140323300 (PnpSetDeviceInstanceStartedEvent.c)
 *     PpvUtilTestStartedPdoStack @ 0x14032331C (PpvUtilTestStartedPdoStack.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x140564BB8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB280 (SeAuditingWithTokenForSubcategory.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1406CF6F0 (RtlGUIDFromString.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     PiProcessQueryDeviceState @ 0x14079347C (PiProcessQueryDeviceState.c)
 *     PnpSetPlugPlayEvent @ 0x1407942E4 (PnpSetPlugPlayEvent.c)
 *     PipSetDevNodeFlags @ 0x1407958BC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797400 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpQueryID @ 0x1407982C8 (PnpQueryID.c)
 *     _CmSetDeviceRegProp @ 0x14079881C (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140798984 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407989E0 (PnpCheckDeviceIdsChanged.c)
 *     PiUpdateDevicePanel @ 0x140798E30 (PiUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079B7B0 (PiDcUpdateDeviceContainerMembership.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14079BAC4 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiCreateDriverSwDevices @ 0x14079C270 (PiCreateDriverSwDevices.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C364 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpGenerateDeviceIdsHash @ 0x14079C748 (PnpGenerateDeviceIdsHash.c)
 *     PiDevCfgProcessDevice @ 0x14087A430 (PiDevCfgProcessDevice.c)
 *     PiAuditDeviceStart @ 0x14096FF8C (PiAuditDeviceStart.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, int a2, __int64 a3)
{
  const wchar_t **v3; // rsi
  int v4; // r14d
  int DeviceState; // ebx
  __int64 v7; // r8
  _QWORD *v8; // r12
  PVOID v9; // rcx
  PVOID v11; // r14
  PVOID v12; // rbx
  struct _KTHREAD *v13; // rax
  char v14; // r15
  const wchar_t *v15; // rdx
  int v16; // eax
  WCHAR *v17; // rbx
  PVOID v18; // r14
  unsigned int v19; // r13d
  int v20; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  int v23; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-19h] BYREF
  int v26; // [rsp+64h] [rbp-15h] BYREF
  int v27; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID v29; // [rsp+70h] [rbp-9h] BYREF
  PVOID P; // [rsp+78h] [rbp-1h] BYREF
  PVOID v31; // [rsp+80h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  char v34; // [rsp+F0h] [rbp+77h] BYREF
  char v35; // [rsp+F8h] [rbp+7Fh]

  v3 = (const wchar_t **)(a1 + 48);
  v4 = a2;
  Handle = 0LL;
  v31 = 0LL;
  if ( (byte_140C0E20B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start, a3, 3, *v3);
  DeviceState = PiPnpRtlBeginOperation((__int64 **)&v31);
  if ( DeviceState >= 0 )
  {
    v8 = *(_QWORD **)(a1 + 32);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) != 0
      || (v29 = 0LL,
          v25 = 0,
          P = 0LL,
          v28 = 0,
          DestinationString = 0LL,
          (int)PnpDeviceObjectToDeviceInstance((__int64)v8, (__int64)&Handle, 131097) < 0) )
    {
LABEL_5:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
      {
        DeviceState = -1073741823;
      }
      else
      {
        if ( v4 )
          PipSetDevNodeFlags(a1, 8);
        PnpQueryAndSaveDeviceNodeCapabilities(a1);
        DeviceState = PiProcessQueryDeviceState(v8);
        PiUpdateDevicePanel(a1, 0LL);
        PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ARRIVAL, *(_QWORD **)(a1 + 32));
        PnpSetDeviceInstanceStartedEvent(a1);
        if ( DeviceState >= 0 )
        {
          PpvUtilTestStartedPdoStack();
          PipSetDevNodeState(a1, 778);
          PnpStartedDeviceNodeDependencyCheck(a1);
          PiCreateDriverSwDevices(a1);
          if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
            PiAuditDeviceStart(a1 + 40);
          DeviceState = 0;
        }
      }
      goto LABEL_12;
    }
    PnpQueryID(a1, 1LL, &P, &v28);
    PnpQueryID(a1, 2LL, &v29, &v25);
    v11 = v29;
    v12 = P;
    PnpGenerateDeviceIdsHash(P, v29, a1 + 684);
    if ( !v12 && !v11 )
    {
LABEL_38:
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)*v3,
        1u,
        (__int64)Handle,
        0LL,
        (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
        7,
        (__int64)&PnpCurrentHardwareConfigurationIndex,
        4u,
        0);
      RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664));
      PipSetDevNodeFlags(a1, 32);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership((__int64)*v3, (__int64)Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      PiUpdateDevicePanel(a1, Handle);
      ZwClose(Handle);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v22, (int)*v3, 1);
      PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, *(_QWORD **)(a1 + 32));
      v4 = a2;
      goto LABEL_5;
    }
    v23 = 0;
    v26 = 0;
    v13 = KeGetCurrentThread();
    v14 = 0;
    v34 = 0;
    v35 = 0;
    --v13->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v15 = *v3;
    v27 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v15,
                (__int64)Handle,
                11,
                (__int64)&v26,
                (__int64)&v23,
                (__int64)&v27,
                0) >= 0
      && v26 == 4
      && v27 == 4 )
    {
      v16 = v23;
      if ( (v23 & 0x20) == 0 || (v23 & 1) != 0 )
        goto LABEL_23;
    }
    else
    {
      v16 = 0;
      v23 = 0;
    }
    v14 = 1;
LABEL_23:
    v17 = (WCHAR *)v29;
    v18 = P;
    v19 = v28;
    if ( (v16 & 0x400) == 0 )
    {
      v20 = 0;
      if ( !P || (v20 = PnpCheckDeviceIdsChanged(a1, Handle, (const WCHAR *)P, v28, 1, &v34), v16 = v23, !v34) )
      {
        if ( v17 )
        {
          v20 = PnpCheckDeviceIdsChanged(a1, Handle, v17, v25, 0, &v34);
          v16 = v23;
        }
      }
      if ( v20 >= 0 && v34 )
      {
        v35 = 1;
        v23 = v16 | 0x400;
        v14 = 1;
      }
    }
    if ( v18 )
    {
      CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, (__int64)*v3, (__int64)Handle, 2u, 7u, (__int64)v18, v19, 0);
      ExFreePoolWithTag(v18, 0);
    }
    if ( v17 )
    {
      CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, (__int64)*v3, (__int64)Handle, 3u, 7u, (__int64)v17, v25, 0);
      ExFreePoolWithTag(v17, 0);
    }
    if ( v35 )
      CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, (__int64)*v3, (__int64)Handle, 0xBu, 4u, (__int64)&v23, 4u, 0);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( v14 && PiDevCfgMode )
      PiDevCfgProcessDevice(a1, Handle, 0LL);
    goto LABEL_38;
  }
LABEL_12:
  v9 = v31;
  if ( v31 )
    PiPnpRtlEndOperation((PVOID **)v31);
  if ( (byte_140C0E20B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer((__int64)v9, (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop, v7, 3, *v3);
  return (unsigned int)DeviceState;
}
