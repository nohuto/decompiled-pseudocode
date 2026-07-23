/*
 * XREFs of IoGetDeviceProperty @ 0x140792EB0
 * Callers:
 *     PoStoreRequester @ 0x14032CD64 (PoStoreRequester.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x1405129B8 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     PiRebalanceOptOut @ 0x140564E30 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x140580E40 (KseDsCallbackHookAddDevice.c)
 *     PiControlGetPropertyData @ 0x140792C60 (PiControlGetPropertyData.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     IoGetDmaAdapter @ 0x140829B90 (IoGetDmaAdapter.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140845C24 (SshpGenerateDeviceFriendlyName.c)
 *     SshpGenerateDeviceVerboseDescription @ 0x140845E1C (SshpGenerateDeviceVerboseDescription.c)
 *     PopGenerateDeviceFriendlyName @ 0x14084A464 (PopGenerateDeviceFriendlyName.c)
 *     ArbQueryConflict @ 0x1409363D0 (ArbQueryConflict.c)
 *     ArbShareDriverExclusive @ 0x14093695C (ArbShareDriverExclusive.c)
 *     IopIsPciRootBus @ 0x140959F50 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140983344 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x140987B50 (PopWakeSourceGetDeviceProperty.c)
 *     PopDiagQueryDevicePropertyString @ 0x14098C138 (PopDiagQueryDevicePropertyString.c)
 *     IoWMISuggestInstanceName @ 0x1409DF2B0 (IoWMISuggestInstanceName.c)
 *     VfIsPCIBus @ 0x140AC7E74 (VfIsPCIBus.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     PpvUtilFailDriver @ 0x140564C04 (PpvUtilFailDriver.c)
 *     _CmGetDeviceRegProp @ 0x1406CD50C (_CmGetDeviceRegProp.c)
 *     ObQueryNameStringMode @ 0x14075BD04 (ObQueryNameStringMode.c)
 *     PnpDetermineResourceListSize @ 0x1407906DC (PnpDetermineResourceListSize.c)
 *     PiGetDeviceRegProperty @ 0x140793418 (PiGetDeviceRegProperty.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140793634 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PpIrpQueryCapabilities @ 0x14079BE48 (PpIrpQueryCapabilities.c)
 *     PnpBusTypeGuidGet @ 0x1407E9BC4 (PnpBusTypeGuidGet.c)
 *     PiGetDeviceRegistryProperty @ 0x140954DC8 (PiGetDeviceRegistryProperty.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  __int16 v5; // bx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebx
  unsigned __int16 *DeviceNode; // rsi
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // r15d
  NTSTATUS DeviceRegProperty; // ebx
  bool v17; // zf
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  __int64 Pool2; // rax
  const void **v25; // rdi
  int NameStringMode; // eax
  int v27; // eax
  ULONG v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  _DWORD *v33; // rcx
  _DWORD *v34; // rbx
  size_t v35; // rdi
  unsigned int v36; // eax
  size_t v37; // r15
  unsigned int v38; // ebx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  _DWORD *v44; // rcx
  ULONG v45; // eax
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  ULONG *v48; // rdx
  ULONG v49; // eax
  unsigned int v50; // [rsp+40h] [rbp-61h] BYREF
  int v51; // [rsp+44h] [rbp-5Dh] BYREF
  int v52; // [rsp+48h] [rbp-59h] BYREF
  char *v53; // [rsp+50h] [rbp-51h]
  __int128 v54; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v55[16]; // [rsp+70h] [rbp-31h] BYREF

  v5 = DeviceProperty;
  v53 = (char *)DeviceObject;
  v54 = 0LL;
  memset(v55, 0, sizeof(v55));
  v11 = v5 & 0xFFF;
  v52 = 0;
  v51 = 0;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = (unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v11 != 18 && (v11 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v11 <= 0xB )
  {
    if ( v11 != 11 )
    {
      if ( v11 > 5 )
      {
        v29 = v11 - 6;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v46 = v30 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( v47 )
              {
                if ( v47 != 1 )
                  return -1073741584;
                v15 = 14;
              }
              else
              {
                v15 = 13;
              }
            }
            else
            {
              v15 = 12;
            }
          }
          else
          {
            v15 = 10;
          }
        }
        else
        {
          v15 = 9;
        }
      }
      else
      {
        if ( v11 != 5 )
        {
          if ( v11 )
          {
            v13 = v11 - 1;
            if ( !v13 )
            {
              v14 = 7;
              v15 = 2;
              goto LABEL_11;
            }
            v42 = v13 - 1;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( !v43 )
              {
                *ResultLength = BufferLength;
                return PiGetDeviceRegistryProperty(
                         (_DWORD)DeviceObject,
                         0,
                         v9,
                         v10,
                         (__int64)PropertyBuffer,
                         (__int64)ResultLength);
              }
              if ( v43 == 1 )
              {
                v44 = (_DWORD *)*((_QWORD *)DeviceNode + 69);
                if ( v44 )
                {
                  v45 = PnpDetermineResourceListSize(v44);
                  *ResultLength = v45;
                  if ( v45 > BufferLength )
                    return -1073741789;
                  memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v45);
                  return 0;
                }
                return 0;
              }
              return -1073741584;
            }
            v14 = 7;
            v15 = 3;
          }
          else
          {
            v14 = 1;
            v15 = 1;
          }
LABEL_11:
          if ( *((_QWORD *)DeviceNode + 6) )
          {
            *ResultLength = BufferLength;
            DeviceRegProperty = PiGetDeviceRegProperty(
                                  *((_QWORD *)DeviceNode + 6),
                                  0,
                                  v14,
                                  v15,
                                  PropertyBuffer,
                                  ResultLength);
            v17 = DeviceRegProperty == -1073741275;
            goto LABEL_13;
          }
          return -1073741808;
        }
        v15 = 8;
      }
LABEL_38:
      v14 = 1;
      goto LABEL_11;
    }
    v50 = BufferLength + 16;
    Pool2 = ExAllocatePool2(256LL, BufferLength + 16, 1869181008LL);
    v25 = (const void **)Pool2;
    if ( !Pool2 )
      return -1073741670;
    NameStringMode = ObQueryNameStringMode(v53, Pool2, v50, ResultLength, 0);
    DeviceRegProperty = NameStringMode;
    if ( NameStringMode == -1073741820 )
    {
      DeviceRegProperty = -1073741789;
    }
    else if ( NameStringMode >= 0 )
    {
      v27 = *(unsigned __int16 *)v25;
      if ( (_WORD)v27 )
      {
        v28 = v27 + 2;
        *ResultLength = v28;
        if ( v28 > BufferLength )
        {
          DeviceRegProperty = -1073741789;
        }
        else
        {
          memmove(PropertyBuffer, v25[1], *(unsigned __int16 *)v25);
          *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v25) = 0;
        }
      }
      else
      {
        *ResultLength = 0;
      }
      goto LABEL_34;
    }
    *ResultLength -= 16;
LABEL_34:
    ExFreePoolWithTag(v25, 0);
    return DeviceRegProperty;
  }
  v15 = 17;
  if ( v11 <= 0x11 )
  {
    if ( v11 == 17 )
    {
      v14 = 4;
      goto LABEL_11;
    }
    v19 = v11 - 12;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v38 = v21 - 1;
          if ( !v38 )
          {
            v15 = 23;
            goto LABEL_38;
          }
          if ( v38 != 1 )
            return -1073741584;
          if ( (int)PpIrpQueryCapabilities(DeviceObject, v55) < 0 )
            return -1073741772;
          v40 = v55[2];
          if ( v55[2] == -1 )
            return -1073741772;
          *ResultLength = 4;
          if ( BufferLength >= 4 )
          {
            *(_DWORD *)PropertyBuffer = v40;
            return 0;
          }
        }
        else
        {
          if ( *((int *)DeviceNode + 115) < 0 )
            return -1073741772;
          *ResultLength = 4;
          if ( BufferLength >= 4 )
          {
            v39 = *((_DWORD *)DeviceNode + 115);
LABEL_58:
            *(_DWORD *)PropertyBuffer = v39;
            return 0;
          }
        }
      }
      else
      {
        if ( *((_DWORD *)DeviceNode + 114) == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength >= 4 )
        {
          v39 = *((_DWORD *)DeviceNode + 114);
          goto LABEL_58;
        }
      }
    }
    else
    {
      DeviceRegProperty = PnpBusTypeGuidGet(DeviceNode[232], &v54);
      if ( DeviceRegProperty < 0 )
        return DeviceRegProperty;
      *ResultLength = 16;
      if ( BufferLength >= 0x10 )
      {
        *(_OWORD *)PropertyBuffer = v54;
        return DeviceRegProperty;
      }
    }
    return -1073741789;
  }
  v22 = v11 - 18;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( !v23 )
    {
      *ResultLength = 4;
      if ( BufferLength >= 4 )
      {
        PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 1LL, PropertyBuffer);
        return 0;
      }
      return -1073741789;
    }
    v31 = v23 - 1;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        if ( v32 != 1 )
          return -1073741584;
        v15 = 37;
        goto LABEL_38;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v33 = (_DWORD *)*((_QWORD *)DeviceNode + 52);
      if ( !v33 || (v34 = (_DWORD *)*((_QWORD *)DeviceNode + 53)) == 0LL )
      {
        *ResultLength = 0;
        DeviceRegProperty = 0;
        goto LABEL_48;
      }
      v35 = (unsigned int)PnpDetermineResourceListSize(v33);
      v36 = PnpDetermineResourceListSize(v34);
      v37 = v36;
      *ResultLength = v36 + v35;
      if ( v36 + (unsigned int)v35 > BufferLength )
        goto LABEL_47;
      memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v35);
      memmove((char *)PropertyBuffer + v35, *((const void **)DeviceNode + 53), v37);
    }
    else
    {
      ExAcquireFastMutex(&PiResourceListLock);
      v48 = (ULONG *)*((_QWORD *)DeviceNode + 55);
      if ( v48 )
      {
        v49 = *v48;
        *ResultLength = *v48;
        if ( v49 > BufferLength )
        {
LABEL_47:
          DeviceRegProperty = -1073741789;
LABEL_48:
          ExReleaseFastMutex(&PiResourceListLock);
          return DeviceRegProperty;
        }
        memmove(PropertyBuffer, v48, *v48);
      }
      else
      {
        *ResultLength = 0;
      }
    }
    DeviceRegProperty = 0;
    goto LABEL_48;
  }
  if ( DeviceNode == IopRootDeviceNode )
  {
    v41 = 0;
    DeviceRegProperty = 0;
LABEL_77:
    *ResultLength = 4;
    if ( BufferLength >= 4 )
    {
      *(_DWORD *)PropertyBuffer = v41;
      return DeviceRegProperty;
    }
    return -1073741789;
  }
  if ( !*((_QWORD *)DeviceNode + 6) )
    return -1073741808;
  while ( 1 )
  {
    v50 = 4;
    DeviceRegProperty = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *((_QWORD *)DeviceNode + 6),
                          0LL,
                          11,
                          (__int64)&v51,
                          (__int64)&v52,
                          (__int64)&v50,
                          0);
    if ( DeviceRegProperty < 0 || v51 != 4 || v50 != 4 )
      break;
    if ( (v52 & 0x20) != 0 )
    {
      v41 = 1;
    }
    else if ( (v52 & 0x40) != 0 )
    {
      v41 = 2;
    }
    else
    {
      v41 = (v52 & 0x400) != 0 ? 3 : 0;
    }
    DeviceNode = (unsigned __int16 *)*((_QWORD *)DeviceNode + 2);
    if ( v41 || DeviceNode == IopRootDeviceNode )
      goto LABEL_77;
  }
  v41 = 2;
  if ( DeviceRegProperty >= 0 )
    goto LABEL_77;
  if ( DeviceRegProperty == -1073741275 )
    return -1073741772;
  v17 = DeviceRegProperty == -1073741810;
LABEL_13:
  if ( v17 )
    return -1073741772;
  return DeviceRegProperty;
}
