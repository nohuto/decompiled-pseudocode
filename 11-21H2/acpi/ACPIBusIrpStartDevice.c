/*
 * XREFs of ACPIBusIrpStartDevice @ 0x1C0090AA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPIModuleFilterStartResources @ 0x1C004CF18 (ACPIModuleFilterStartResources.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C0057188 (ACPIQueryGedDeviceInterface.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C00A115C (PcisuppAcquirePciInterfaces.c)
 *     AcpiArblibCommitResources @ 0x1C00ABCE8 (AcpiArblibCommitResources.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00B7260 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B7474 (ArbAddMmConfigRangeAsBootReserved.c)
 */

int __fastcall ACPIBusIrpStartDevice(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v2; // r14
  __int64 StartContext; // rbx
  __int64 v6; // rcx
  int result; // eax
  int v8; // eax
  PVOID v9; // rax
  _QWORD *v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rax
  PKSTART_ROUTINE StartRoutine; // [rsp+28h] [rbp-48h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *ThreadHandle; // [rsp+B8h] [rbp+48h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  memset(&ObjectAttributes, 0, 44);
  ThreadHandle = 0LL;
  StartContext = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v6 = *(unsigned int *)(StartContext + 8);
  if ( (v6 & 0x2000000) != 0 )
  {
    result = PcisuppAcquirePciInterfaces(DeviceObject);
    if ( result < 0 )
      return result;
    if ( !*(_QWORD *)(StartContext + 296) )
    {
      KeInitializeEvent((PRKEVENT)(StartContext + 248), SynchronizationEvent, 0);
      KeInitializeEvent((PRKEVENT)(StartContext + 272), SynchronizationEvent, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = PsCreateSystemThread(
                 &ThreadHandle,
                 0,
                 &ObjectAttributes,
                 0LL,
                 0LL,
                 (PKSTART_ROUTINE)PciRootBusBiosMethodDispatcherOnResume,
                 (PVOID)StartContext);
      if ( result < 0 )
        return result;
      Object = 0LL;
      ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(StartContext + 296) = Object;
      ZwClose(ThreadHandle);
    }
  }
  if ( _bittest64((const signed __int64 *)(StartContext + 1000), 0x26u) )
  {
    v8 = ACPIQueryGedDeviceInterface((_QWORD *)StartContext);
    if ( v8 < 0 )
    {
      v6 = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(StartRoutine) = v8;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          8u,
          0x3Cu,
          (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
          StartRoutine);
      }
    }
  }
  if ( _bittest64((const signed __int64 *)(StartContext + 8), 0x25u) && *(_BYTE *)(StartContext + 184) )
  {
    ACPIModuleFilterStartResources(v6, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    v9 = *(PVOID *)(v2 + 8);
    v10 = (_QWORD *)(StartContext + 192);
    Object = v9;
    v11 = 0;
    while ( 1 )
    {
      v12 = *v10;
      result = AcpiArblibCommitResources(*v10, v9);
      if ( result < 0 )
        break;
      if ( *(_DWORD *)(v12 + 168) == 3 )
      {
        result = ArbAddInaccessibleAllocationRange(v12 + 136, *(_QWORD *)(v12 + 176));
        if ( result < 0 )
          break;
        result = ArbAddMmConfigRangeAsBootReserved(v12 + 136, *(_QWORD *)(v12 + 176));
        if ( result < 0 )
          break;
      }
      v13 = *v10;
      ++v11;
      ++v10;
      *(_BYTE *)(v13 + 130) = 1;
      if ( v11 >= 3 )
        goto LABEL_4;
      v9 = Object;
    }
  }
  else
  {
LABEL_4:
    result = ACPIInitStartDevice(
               (ULONG_PTR)DeviceObject,
               v2,
               (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIBusIrpStartDeviceCompletion,
               a2,
               a2);
    if ( result >= 0 )
      return 259;
  }
  return result;
}
