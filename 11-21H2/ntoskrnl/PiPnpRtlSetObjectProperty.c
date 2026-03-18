/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x140771524
 * Callers:
 *     PiCMSetObjectProperty @ 0x1406DC724 (PiCMSetObjectProperty.c)
 *     PiDqIrpPropertySet @ 0x14076DD0C (PiDqIrpPropertySet.c)
 *     PiSwPropertySet @ 0x14076E714 (PiSwPropertySet.c)
 *     PiDevCfgSetObjectProperty @ 0x14077139C (PiDevCfgSetObjectProperty.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14080D8A8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x14080DA78 (PnpSetDevicePropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x140778D60 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14095B658 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x14095B69C (PiAuditDeviceOperation.c)
 *     _CmSplitDevicePanelId @ 0x140A295FC (_CmSplitDevicePanelId.c)
 *     _CmUpdateDevicePanelInterface @ 0x140A297B0 (_CmUpdateDevicePanelInterface.c)
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
  int v14; // edx
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
  __int64 v28; // rcx
  int v29; // r10d
  __int64 (**v30)[2]; // r8
  unsigned int v31; // r9d
  __int64 *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  struct _KTHREAD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int DeviceRegProp; // eax
  struct _KTHREAD *v48; // rax
  __int64 v51; // r9
  __int64 v52; // r8
  char v53; // [rsp+60h] [rbp-81h]
  char v54; // [rsp+61h] [rbp-80h]
  int v55; // [rsp+64h] [rbp-7Dh] BYREF
  int v56; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v57; // [rsp+6Ch] [rbp-75h] BYREF
  int v58; // [rsp+70h] [rbp-71h] BYREF
  int v59; // [rsp+74h] [rbp-6Dh] BYREF
  unsigned int v60; // [rsp+78h] [rbp-69h]
  __int64 v61; // [rsp+80h] [rbp-61h]
  __int64 v62; // [rsp+88h] [rbp-59h]
  int v63; // [rsp+90h] [rbp-51h]
  int v64; // [rsp+94h] [rbp-4Dh]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-49h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-39h]
  __int128 v67; // [rsp+B0h] [rbp-31h] BYREF
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v62 = a1;
  v11 = 5;
  v61 = a4;
  v66 = a5;
  v64 = 0;
  v13 = 0;
  v63 = 0;
  v55 = 0;
  v59 = 0;
  v57 = 0;
  v60 = 0;
  v56 = 0;
  v58 = 0;
  v54 = 0;
  v53 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  v67 = 0LL;
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
    {
      if ( *(_DWORD *)(a6 + 16) == 256 )
      {
        v45 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v45 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        if ( !v45 )
          return (unsigned int)-1073741790;
      }
    }
    else if ( a3 == 5 )
    {
      v29 = *(_DWORD *)(a6 + 16);
      v30 = &PiPnpRtlContainerReadOnlyProps;
      v31 = 0;
      while ( 1 )
      {
        v32 = (__int64 *)*v30;
        if ( v29 == LODWORD((**v30)[2]) )
        {
          v40 = *(_QWORD *)a6 - *v32;
          if ( *(_QWORD *)a6 == *v32 )
            v40 = *(_QWORD *)(a6 + 8) - v32[1];
          if ( !v40 )
            return (unsigned int)-1073741790;
        }
        ++v31;
        ++v30;
        if ( v31 >= 2 )
        {
          if ( v29 != 105 )
            break;
          v33 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
            v33 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
          if ( v33 || a7 == 7 )
            break;
          return (unsigned int)-1073741811;
        }
      }
    }
LABEL_18:
    v22 = v62;
    v23 = PnpSetObjectProperty(v62, (_DWORD)a2, a3, v66, a6, a7, (__int64)pszSrc, a9, a10);
    v24 = a3 - 1;
    if ( v24 )
    {
      if ( v24 == 2 && v23 >= 0 && *(_DWORD *)(a6 + 16) == 9 )
      {
        v27 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1 )
          v27 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data4;
        if ( !v27 )
          CmUpdateDevicePanelInterface(v22, a2, v61);
      }
      goto LABEL_21;
    }
    v25 = *(_DWORD *)(a6 + 16);
    if ( v25 == 12 )
    {
      v44 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
        v44 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      if ( !v44 )
      {
        if ( v53 )
        {
          if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
          {
            RtlInitUnicodeString(&DestinationString, a2);
            LOBYTE(v51) = v23 >= 0;
            PiAuditDeviceEnableDisableRequest(&DestinationString, v57, v60, v51);
          }
        }
      }
      goto LABEL_21;
    }
    if ( v25 == 5 )
    {
      v38 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
      if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
        v38 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
      if ( !v38 && v53 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        if ( v58 == -536870328 )
        {
          if ( v13 == -536870328 )
            goto LABEL_21;
          v11 = 6;
        }
        else if ( v13 != -536870328 )
        {
          goto LABEL_21;
        }
        LOBYTE(v52) = v23 >= 0;
        PiAuditDeviceOperation(&DestinationString, v11, v52);
      }
    }
LABEL_21:
    if ( v54 )
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
    v41 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
      v41 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    if ( v41 || pszSrc && a9 == 4 )
      goto LABEL_15;
  }
  else
  {
    if ( v14 == 3 )
    {
      v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
        v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
      if ( !v34 )
      {
LABEL_93:
        if ( !(unsigned __int8)CmIsRootEnumeratedDevice(a2) )
          return (unsigned int)-1073741790;
        goto LABEL_14;
      }
    }
    if ( v14 == 4 )
    {
      v39 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
        v39 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
      if ( !v39 )
        goto LABEL_93;
LABEL_14:
      v19 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      v20 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
LABEL_15:
      v21 = *(_DWORD *)(a6 + 16);
      switch ( v21 )
      {
        case 10:
          v35 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
            v35 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
          if ( !v35 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v54 = 1;
          }
          break;
        case 12:
          v42 = *(_QWORD *)a6 - v20;
          if ( *(_QWORD *)a6 == v20 )
            v42 = *(_QWORD *)(a6 + 8) - v19;
          if ( !v42 )
          {
            v43 = KeGetCurrentThread();
            --v43->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v54 = 1;
            if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
            {
              v53 = 1;
              v55 = 4;
              DeviceRegProp = CmGetDeviceRegProp(
                                v62,
                                (_DWORD)a2,
                                v61,
                                11,
                                (__int64)&v59,
                                (__int64)&v57,
                                (__int64)&v55,
                                0);
              if ( DeviceRegProp < 0 || v55 != 4 || v59 != 4 )
                v57 = 0;
              v60 = *(_DWORD *)pszSrc;
            }
          }
          break;
        case 5:
          v37 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
          if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
            v37 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
          if ( !v37 )
          {
            v48 = KeGetCurrentThread();
            --v48->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v54 = 1;
            if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
            {
              v55 = 4;
              v53 = 1;
              if ( (int)PnpGetObjectProperty(
                          v62,
                          (_DWORD)a2,
                          1,
                          v61,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstallError,
                          (__int64)&v56,
                          (__int64)&v58,
                          4,
                          (__int64)&v55,
                          0) < 0
                || v55 != 4
                || v56 != 23 )
              {
                v58 = 0;
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
                v62,
                (_DWORD)a2,
                1,
                v61,
                0LL,
                (__int64)&DEVPKEY_Device_ContainerId,
                (__int64)&v56,
                (__int64)&v67,
                16,
                (__int64)&v55,
                0) >= 0
      && v56 == 13
      && v55 == 16 )
    {
      v46 = v67 - *(_QWORD *)&Guid.Data1;
      if ( (_QWORD)v67 == *(_QWORD *)&Guid.Data1 )
        v46 = *((_QWORD *)&v67 + 1) - *(_QWORD *)Guid.Data4;
      if ( !v46 )
        goto LABEL_14;
    }
  }
  return (unsigned int)-1073741811;
}
