/*
 * XREFs of PnpGetObjectProperty @ 0x1406D00E0
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1406C9798 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14074090C (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiUEventCacheObjectProperties @ 0x1407839F0 (PiUEventCacheObjectProperties.c)
 *     IopGetDeviceInterfaces @ 0x1407875E0 (IopGetDeviceInterfaces.c)
 *     PiDmObjectProcessPropertyChange @ 0x14078992C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D4BC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1407CC2C4 (PiDmGetReferencedObjectFromProperty.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x1407DD30C (PnpInitializeInheritedRestrictedSd.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140878E30 (PiDevCfgResolveVariableDeviceProperty.c)
 *     IoGetDeviceDirectory @ 0x140955210 (IoGetDeviceDirectory.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095A7AC (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        ULONG Tag,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        PVOID *a9,
        unsigned int *a10,
        int a11)
{
  PVOID *v11; // rdi
  __int64 v12; // rbp
  int v13; // r12d
  __int64 v15; // r13
  __int64 Pool2; // rax
  int ObjectProperty; // eax
  unsigned int v20; // ebx
  unsigned int v22; // eax
  unsigned int v23; // [rsp+98h] [rbp+10h] BYREF

  v11 = a9;
  LODWORD(v12) = 0;
  v13 = a11;
  v15 = a8;
  v23 = a2;
  *a9 = 0LL;
  while ( 1 )
  {
    if ( a2 > (unsigned int)v12 )
    {
      v12 = a2;
      if ( *v11 )
        ExFreePoolWithTag(*v11, Tag);
      Pool2 = ExAllocatePool2(256LL, v12, Tag);
      *v11 = (PVOID)Pool2;
      if ( !Pool2 )
      {
        v20 = -1073741670;
LABEL_8:
        if ( *v11 )
        {
          ExFreePoolWithTag(*v11, Tag);
          *v11 = 0LL;
        }
        return v20;
      }
    }
    v23 = 0;
    ObjectProperty = PnpGetObjectProperty(PiPnpRtlCtx, a3, a4, a5, a6, a7, v15, (__int64)*v11, v12, (__int64)&v23, v13);
    v20 = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
    a2 = v23;
  }
  if ( ObjectProperty < 0 )
    goto LABEL_8;
  v22 = v23;
  if ( a10 )
    *a10 = v23;
  if ( !v22 )
    goto LABEL_8;
  return v20;
}
