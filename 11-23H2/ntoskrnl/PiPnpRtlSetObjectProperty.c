/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x140796978
 * Callers:
 *     PiCMSetObjectProperty @ 0x14079C034 (PiCMSetObjectProperty.c)
 *     PiSwPropertySet @ 0x14079CC50 (PiSwPropertySet.c)
 *     PiDqIrpPropertySet @ 0x1408000A4 (PiDqIrpPropertySet.c)
 *     PnpSetDevicePropertyData @ 0x1408668E8 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14086DAE8 (PnpSetDeviceInterfacePropertyData.c)
 *     PiDevCfgSetObjectProperty @ 0x14087B980 (PiDevCfgSetObjectProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB280 (SeAuditingWithTokenForSubcategory.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CC0B0 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 *     _CmSplitDevicePanelId @ 0x14082B8BC (_CmSplitDevicePanelId.c)
 *     _CmUpdateDevicePanelInterface @ 0x140885EF0 (_CmUpdateDevicePanelInterface.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14096F8D4 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x14096F918 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        STRSAFE_PCNZWCH pszSrc,
        unsigned int a9,
        int a10)
{
  unsigned int v11; // r12d
  unsigned int v13; // r15d
  int v14; // ecx
  char *v15; // r9
  unsigned int i; // r10d
  _QWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r13
  int v23; // ebx
  int v24; // esi
  int v25; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r10d
  __int64 (**v36)[2]; // r8
  unsigned int v37; // r9d
  __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  struct _KTHREAD *v46; // rax
  struct _KTHREAD *v47; // rax
  __int64 v48; // r9
  __int64 v49; // r8
  char v50; // [rsp+60h] [rbp-81h]
  char v51; // [rsp+61h] [rbp-80h]
  int v52; // [rsp+64h] [rbp-7Dh] BYREF
  int v53; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v54; // [rsp+6Ch] [rbp-75h] BYREF
  int v55; // [rsp+70h] [rbp-71h] BYREF
  int v56; // [rsp+74h] [rbp-6Dh] BYREF
  unsigned int v57; // [rsp+78h] [rbp-69h]
  __int64 v58; // [rsp+80h] [rbp-61h]
  __int64 v59; // [rsp+88h] [rbp-59h]
  int v60; // [rsp+90h] [rbp-51h]
  int v61; // [rsp+94h] [rbp-4Dh]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-49h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-39h]
  __int128 v64; // [rsp+B0h] [rbp-31h] BYREF
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v59 = a1;
  v11 = 5;
  v58 = a4;
  v63 = a5;
  v61 = 0;
  v13 = 0;
  v60 = 0;
  v52 = 0;
  v56 = 0;
  v54 = 0;
  v57 = 0;
  v53 = 0;
  v55 = 0;
  v51 = 0;
  v50 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  v64 = 0LL;
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
    {
      if ( *(_DWORD *)(a6 + 16) == 256 )
      {
        v44 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v44 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        if ( !v44 )
          return (unsigned int)-1073741790;
      }
    }
    else if ( a3 == 5 )
    {
      v35 = *(_DWORD *)(a6 + 16);
      v36 = &PiPnpRtlContainerReadOnlyProps;
      v37 = 0;
      while ( 1 )
      {
        v38 = (__int64 *)*v36;
        if ( v35 == LODWORD((**v36)[2]) )
        {
          v39 = *(_QWORD *)a6 - *v38;
          if ( *(_QWORD *)a6 == *v38 )
            v39 = *(_QWORD *)(a6 + 8) - v38[1];
          if ( !v39 )
            return (unsigned int)-1073741790;
        }
        ++v37;
        ++v36;
        if ( v37 >= 2 )
        {
          if ( v35 != 105 )
            break;
          v43 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
            v43 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
          if ( v43 || a7 == 7 )
            break;
          return (unsigned int)-1073741811;
        }
      }
    }
LABEL_18:
    v22 = v59;
    v23 = PnpSetObjectProperty(v59, (_DWORD)a2, a3, v63, a6, a7, (__int64)pszSrc, a9, a10);
    v24 = a3 - 1;
    if ( v24 )
    {
      if ( v24 == 2 && v23 >= 0 && *(_DWORD *)(a6 + 16) == 9 )
      {
        v27 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1 )
          v27 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data4;
        if ( !v27 )
          CmUpdateDevicePanelInterface(v22, a2, v58);
      }
      goto LABEL_21;
    }
    v25 = *(_DWORD *)(a6 + 16);
    if ( v25 == 12 )
    {
      v42 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
        v42 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      if ( !v42 && v50 && SeAuditingWithTokenForSubcategory(138, 0LL) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        LOBYTE(v48) = v23 >= 0;
        PiAuditDeviceEnableDisableRequest(&DestinationString, v54, v57, v48);
      }
      goto LABEL_21;
    }
    if ( v25 == 5 )
    {
      v33 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
      if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
        v33 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
      if ( !v33 && v50 && SeAuditingWithTokenForSubcategory(138, 0LL) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        if ( v55 == -536870328 )
        {
          if ( v13 == -536870328 )
            goto LABEL_21;
          v11 = 6;
        }
        else if ( v13 != -536870328 )
        {
          goto LABEL_21;
        }
        LOBYTE(v49) = v23 >= 0;
        PiAuditDeviceOperation(&DestinationString, v11, v49);
      }
    }
LABEL_21:
    if ( v51 )
    {
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v23;
  }
  v14 = *(_DWORD *)(a6 + 16);
  v15 = (char *)&PiPnpRtlDeviceReadOnlyProps;
  for ( i = 0; i < 0x10; ++i )
  {
    v17 = *(_QWORD **)v15;
    if ( v14 == *(_DWORD *)(*(_QWORD *)v15 + 16LL) )
    {
      v28 = *(_QWORD *)a6 - *v17;
      if ( *(_QWORD *)a6 == *v17 )
        v28 = *(_QWORD *)(a6 + 8) - v17[1];
      if ( !v28 )
        return (unsigned int)-1073741790;
    }
    v15 += 8;
  }
  if ( v14 == 12 )
  {
    v20 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    v19 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    v40 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
      v40 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    if ( v40 || pszSrc && a9 == 4 )
      goto LABEL_15;
  }
  else
  {
    if ( v14 == 3 )
    {
      v31 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
        v31 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
      if ( !v31 )
      {
LABEL_92:
        if ( !CmIsRootEnumeratedDevice(a2) )
          return (unsigned int)-1073741790;
        goto LABEL_14;
      }
    }
    if ( v14 == 4 )
    {
      v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
        v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
      if ( !v34 )
        goto LABEL_92;
LABEL_14:
      v19 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      v20 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
LABEL_15:
      v21 = *(_DWORD *)(a6 + 16);
      switch ( v21 )
      {
        case 10:
          v29 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
            v29 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
          if ( !v29 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v51 = 1;
          }
          break;
        case 12:
          v41 = *(_QWORD *)a6 - v20;
          if ( *(_QWORD *)a6 == v20 )
            v41 = *(_QWORD *)(a6 + 8) - v19;
          if ( !v41 )
          {
            v46 = KeGetCurrentThread();
            --v46->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v51 = 1;
            if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
            {
              v50 = 1;
              v52 = 4;
              if ( (int)CmGetDeviceRegProp(v59, (__int64)a2, v58, 11, (__int64)&v56, (__int64)&v54, (__int64)&v52, 0) < 0
                || v52 != 4
                || v56 != 4 )
              {
                v54 = 0;
              }
              v57 = *(_DWORD *)pszSrc;
            }
          }
          break;
        case 5:
          v32 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
          if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
            v32 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
          if ( !v32 )
          {
            v47 = KeGetCurrentThread();
            --v47->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v51 = 1;
            if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
            {
              v52 = 4;
              v50 = 1;
              if ( (int)PnpGetObjectProperty(
                          v59,
                          (__int64)a2,
                          1LL,
                          v58,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstallError,
                          (__int64)&v53,
                          (__int64)&v55,
                          4,
                          (__int64)&v52,
                          0) < 0
                || v52 != 4
                || v53 != 23 )
              {
                v55 = 0;
              }
              if ( a9 == 4 && a7 == 23 )
                v13 = *(_DWORD *)pszSrc;
            }
          }
          break;
      }
      goto LABEL_18;
    }
    if ( v14 != 2 )
      goto LABEL_14;
    v18 = *(_QWORD *)a6 - DEVPKEY_Device_PanelId;
    if ( *(_QWORD *)a6 == DEVPKEY_Device_PanelId )
      v18 = *(_QWORD *)(a6 + 8) + 0x5292C1A216403965LL;
    if ( v18 )
      goto LABEL_14;
    if ( pszSrc
      && a9 >= 2
      && a7 == 18
      && !pszSrc[((unsigned __int64)a9 >> 1) - 1]
      && (int)CmSplitDevicePanelId(pszSrc, &Guid) >= 0
      && (int)PnpGetObjectProperty(
                v59,
                (__int64)a2,
                1LL,
                v58,
                0LL,
                (__int64)&DEVPKEY_Device_ContainerId,
                (__int64)&v53,
                (__int64)&v64,
                16,
                (__int64)&v52,
                0) >= 0
      && v53 == 13
      && v52 == 16 )
    {
      v45 = v64 - *(_QWORD *)&Guid.Data1;
      if ( (_QWORD)v64 == *(_QWORD *)&Guid.Data1 )
        v45 = *((_QWORD *)&v64 + 1) - *(_QWORD *)Guid.Data4;
      if ( !v45 )
        goto LABEL_14;
    }
  }
  return (unsigned int)-1073741811;
}
