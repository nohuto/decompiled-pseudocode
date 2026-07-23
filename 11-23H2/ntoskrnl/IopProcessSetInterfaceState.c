/*
 * XREFs of IopProcessSetInterfaceState @ 0x1407938C4
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x1407913C4 (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x140793850 (IoSetDeviceInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041C9B0 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14041D7B0 (ZwOpenSymbolicLinkObject.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406C9EF0 (_CmGetDeviceInterfaceClassGuid.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D3F74 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406D42E4 (PnpUnicodeStringToWstr.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407882A4 (PiDmAddCacheReferenceForObject.c)
 *     IoGetDeviceProperty @ 0x140792B90 (IoGetDeviceProperty.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140793DAC (IopBuildGlobalSymbolicLinkString.c)
 *     PnpSetDeviceClassChange @ 0x140794214 (PnpSetDeviceClassChange.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407974E4 (_PnpObjectRaisePropertyChangeEvent.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C24C8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDeferSetInterfaceState @ 0x140871FD0 (PiDeferSetInterfaceState.c)
 *     PipCanEnableInterfaces @ 0x140872650 (PipCanEnableInterfaces.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140874038 (PiRemoveDeferredSetInterfaceState.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(__int64 a1, char a2, char a3)
{
  WCHAR *v4; // r12
  void *v5; // r14
  ULONG_PTR v6; // rdi
  struct _DEVICE_OBJECT *v7; // r13
  _WORD *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  int DeviceInterfaceClassGuid; // ebx
  __int64 Pool2; // rax
  int ObjectProperty; // eax
  struct _DEVICE_OBJECT *v14; // rax
  __int64 p_DeviceObjectExtension; // r9
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  PVOID DeviceNode; // r8
  char v18; // dl
  NTSTATUS DeviceProperty; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v21; // rcx
  GUID *v22; // rcx
  struct _KTHREAD *v24; // rax
  ULONG_PTR v25; // rcx
  void *v26; // rcx
  __int16 v28; // [rsp+69h] [rbp-9Fh]
  ULONG BufferLength; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v31; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-90h] BYREF
  _WORD *v33; // [rsp+80h] [rbp-88h] BYREF
  int v34; // [rsp+88h] [rbp-80h] BYREF
  WCHAR *v35; // [rsp+90h] [rbp-78h]
  struct _DEVICE_OBJECT *v36; // [rsp+98h] [rbp-70h]
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+F0h] [rbp-18h] BYREF
  GUID v41; // [rsp+100h] [rbp-8h] BYREF

  BufferLength = 0;
  BugCheckParameter2 = 0LL;
  v4 = 0LL;
  LODWORD(v31) = 0;
  v5 = 0LL;
  v34 = 0;
  v6 = 0LL;
  v33 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v28 = 0;
  LinkTarget = 0LL;
  UnicodeString = 0LL;
  v41 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
  {
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_42;
  }
  v9 = PnpUnicodeStringToWstr(&v33, 0LL, (unsigned __int16 *)a1);
  v8 = v33;
  DeviceInterfaceClassGuid = v9;
  if ( v9 < 0 )
    goto LABEL_42;
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(v10, (__int64)v33, &v41);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_42;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString(a1, &UnicodeString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_42;
  Pool2 = ExAllocatePool2(256LL, 400LL, 538996816LL);
  v35 = (WCHAR *)Pool2;
  v4 = (WCHAR *)Pool2;
  if ( !Pool2 )
  {
LABEL_59:
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_42;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v8,
                     3LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v31,
                     Pool2,
                     400,
                     (__int64)&v34,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_62;
  if ( ObjectProperty < 0 )
    goto LABEL_42;
  if ( (_DWORD)v31 != 18 )
    goto LABEL_62;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&DestinationString, v4);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_42;
  v14 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x49706E50u);
  v36 = v14;
  v7 = v14;
  if ( v14 )
  {
    p_DeviceObjectExtension = (__int64)&v14->DeviceObjectExtension;
    DeviceObjectExtension = v14->DeviceObjectExtension;
    DeviceNode = DeviceObjectExtension->DeviceNode;
    if ( !a2 || (unsigned __int8)PipCanEnableInterfaces(DeviceObjectExtension->DeviceNode) )
    {
      v18 = a2;
      goto LABEL_16;
    }
LABEL_62:
    DeviceInterfaceClassGuid = -1073741808;
    goto LABEL_42;
  }
  v18 = a2;
  if ( a2 )
    goto LABEL_62;
  DeviceNode = 0LL;
  p_DeviceObjectExtension = 312LL;
LABEL_16:
  if ( a3 && DeviceNode && (*(_DWORD *)(*(_QWORD *)p_DeviceObjectExtension + 32LL) & 0x10) != 0 )
  {
    if ( v18 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(DeviceNode, a1);
    else
      PiRemoveDeferredSetInterfaceState(DeviceNode, a1);
    goto LABEL_42;
  }
  if ( v18 )
  {
    BufferLength = 512;
    while ( 1 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v5 = (void *)ExAllocatePool2(256LL, BufferLength, 538996816LL);
      if ( !v5 )
        goto LABEL_59;
      DeviceProperty = IoGetDeviceProperty(v7, DevicePropertyPhysicalDeviceObjectName, BufferLength, v5, &BufferLength);
      DeviceInterfaceClassGuid = DeviceProperty;
      if ( DeviceProperty != -1073741789 )
      {
        if ( DeviceProperty < 0 || !BufferLength )
          goto LABEL_42;
        RtlInitUnicodeString(&LinkTarget, (PCWSTR)v5);
        DeviceInterfaceClassGuid = PiDmAddCacheReferenceForObject(
                                     3u,
                                     v8,
                                     (volatile signed __int32 **)&BugCheckParameter2);
        if ( DeviceInterfaceClassGuid < 0 )
          goto LABEL_58;
        CurrentThread = KeGetCurrentThread();
        v6 = BugCheckParameter2;
        v21 = BugCheckParameter2;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v21, 0LL);
        if ( (*(_DWORD *)(v6 + 32) & 1) == 0 )
        {
          DeviceInterfaceClassGuid = -1073741772;
          goto LABEL_55;
        }
        if ( *(_QWORD *)(v6 + 40) )
        {
          DeviceInterfaceClassGuid = 0x40000000;
          goto LABEL_55;
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &UnicodeString;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)(v6 + 40), 0xF0001u, &ObjectAttributes);
        if ( DeviceInterfaceClassGuid == -1073741772 )
          DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(
                                       (PHANDLE)(v6 + 40),
                                       0xF0001u,
                                       &ObjectAttributes,
                                       &LinkTarget);
        if ( DeviceInterfaceClassGuid >= 0 )
          HIBYTE(v28) = 1;
        goto LABEL_36;
      }
    }
  }
  DeviceInterfaceClassGuid = PiDmGetObject(3LL, (__int64)v8, &BugCheckParameter2);
  if ( DeviceInterfaceClassGuid < 0 )
  {
LABEL_58:
    v6 = BugCheckParameter2;
  }
  else
  {
    v24 = KeGetCurrentThread();
    v6 = BugCheckParameter2;
    v25 = BugCheckParameter2;
    --v24->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v25, 0LL);
    v26 = *(void **)(v6 + 40);
    if ( v26 )
    {
      ZwClose(v26);
      *(_QWORD *)(v6 + 40) = 0LL;
      HIBYTE(v28) = 1;
LABEL_55:
      LOBYTE(v28) = 1;
    }
    else
    {
      DeviceInterfaceClassGuid = -1073741772;
    }
LABEL_36:
    ExReleasePushLockEx((__int64 *)v6, 0LL);
    KeLeaveCriticalRegion();
    v4 = v35;
    v7 = v36;
    v8 = v33;
    if ( HIBYTE(v28) )
    {
      v22 = &GUID_DEVICE_INTERFACE_ARRIVAL;
      if ( !a2 )
        v22 = &GUID_DEVICE_INTERFACE_REMOVAL;
      PnpSetDeviceClassChange(v22, &v41, a1);
      PnpObjectRaisePropertyChangeEvent(PiPnpRtlCtx, (_DWORD)v8, 3, 0, 0LL, (__int64)&DEVPKEY_DeviceInterface_Enabled);
    }
    if ( (_BYTE)v28 )
      PiDmRemoveCacheReferenceForObject(3LL, v8);
  }
LABEL_42:
  RtlFreeUnicodeString(&UnicodeString);
  PnpUnicodeStringToWstrFree(v8, a1);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x49706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
    PiDmObjectRelease((char *)v6);
  return (unsigned int)DeviceInterfaceClassGuid;
}
