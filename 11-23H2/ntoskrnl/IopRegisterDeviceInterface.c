/*
 * XREFs of IopRegisterDeviceInterface @ 0x140866A3C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14081B064 (PiSwIrpInterfaceRegister.c)
 *     IoRegisterDeviceInterface @ 0x140867000 (IoRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x14087CFE0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A884 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14077DB00 (_CmSetDeviceInterfacePathFormat.c)
 *     PnpIsNullGuid @ 0x140786A24 (PnpIsNullGuid.c)
 *     _PnpStringFromGuid @ 0x140788044 (_PnpStringFromGuid.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407882A4 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 *     PiDmListAddObject @ 0x1407BE7F0 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C24C8 (PiDmRemoveCacheReferenceForObject.c)
 *     _CmGetDeviceInterfaceName @ 0x1407C5C88 (_CmGetDeviceInterfaceName.c)
 *     PipCheckForDenyExecute @ 0x140866EE4 (PipCheckForDenyExecute.c)
 *     _CmCreateDeviceInterface @ 0x14088035C (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x140A6187C (_CmDeleteDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(wchar_t *a1, int *a2, const wchar_t *a3, char a4, PVOID *a5, __int64 a6)
{
  PVOID v6; // rdi
  HANDLE v7; // r12
  PVOID v8; // rsi
  ULONG_PTR v9; // r14
  PVOID v10; // r13
  int DeviceInterfaceName; // ebx
  wchar_t *Pool2; // rax
  _DWORD *v13; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdi
  struct _KTHREAD *v16; // rax
  ULONG_PTR v17; // rcx
  int v18; // esi
  char v19; // si
  int v20; // eax
  wchar_t *v21; // r12
  int ObjectProperty; // eax
  char v23; // si
  int Object; // eax
  unsigned int v26; // ebx
  wchar_t *v27; // rax
  size_t v28; // [rsp+30h] [rbp-D0h]
  size_t v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+38h] [rbp-C8h]
  char v31; // [rsp+60h] [rbp-A0h] BYREF
  char v32; // [rsp+61h] [rbp-9Fh]
  unsigned int v33; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v35; // [rsp+70h] [rbp-90h] BYREF
  PVOID v36; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h] BYREF
  int v40; // [rsp+90h] [rbp-70h] BYREF
  wchar_t *v41; // [rsp+98h] [rbp-68h]
  const wchar_t *v42; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v44; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int128 Source2; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Str2[40]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t v48[40]; // [rsp+120h] [rbp+20h] BYREF

  v41 = a1;
  v45 = a6;
  v6 = 0LL;
  v35 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  v36 = 0LL;
  LOBYTE(v38) = 0;
  v9 = 0LL;
  v44 = 0LL;
  v10 = 0LL;
  v31 = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  v40 = 0;
  v39 = 0;
  *a5 = 0LL;
  v32 = a4;
  v42 = a3;
  Source2 = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  v33 = 512;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 1024LL, 538996816LL);
  *a5 = Pool2;
  if ( !Pool2 )
    goto LABEL_45;
  LODWORD(v28) = 512;
  DeviceInterfaceName = CmGetDeviceInterfaceName((__int64)&v33, Str2, v41, v42, 0, Pool2, v28, &v33);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v26 = v33;
  v27 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v33, 538996816LL);
  *a5 = v27;
  if ( !v27 )
  {
LABEL_45:
    DeviceInterfaceName = -1073741670;
    goto LABEL_46;
  }
  LODWORD(v29) = v26;
  DeviceInterfaceName = CmGetDeviceInterfaceName((__int64)&v33, Str2, v41, v42, 0, v27, v29, &v33);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  v13 = (_DWORD *)v45;
  if ( v45 )
    *v13 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v15 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, (__int64)*a5, &BugCheckParameter2) < 0 )
  {
    v9 = BugCheckParameter2;
    v19 = v38;
  }
  else
  {
    v16 = KeGetCurrentThread();
    v9 = BugCheckParameter2;
    v17 = BugCheckParameter2;
    --v16->KernelApcDisable;
    ExAcquirePushLockSharedEx(v17, 0LL);
    v18 = *(_DWORD *)(v9 + 32);
    ExReleasePushLockEx((__int64 *)v9, 0LL);
    KeLeaveCriticalRegion();
    v19 = v18 & 1;
  }
  v20 = PiDmAddCacheReferenceForObject(4u, Str2, (volatile signed __int32 **)&P);
  v10 = P;
  DeviceInterfaceName = v20;
  if ( v20 < 0 )
    goto LABEL_42;
  v21 = v41;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1u, v41, (volatile signed __int32 **)&v36);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_42;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v21,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)&v40,
                     (__int64)&Source2,
                     16,
                     (__int64)&v39,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2 = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
LABEL_42:
    v7 = Handle;
LABEL_53:
    v8 = v36;
    v6 = v35;
    goto LABEL_23;
  }
  if ( !PnpIsNullGuid(&Source2) )
  {
    DeviceInterfaceName = PnpStringFromGuid((int *)&Source2, v48);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_42;
    DeviceInterfaceName = PiDmAddCacheReferenceForObject(5u, v48, (volatile signed __int32 **)&v35);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_42;
  }
  if ( !v19 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation((__int64 **)&v44);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_42;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&Handle,
                            (__int64)&v31,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_42;
  }
  if ( !v9 )
  {
    Object = PiDmGetObject(3LL, (__int64)*a5, &BugCheckParameter2);
    v9 = BugCheckParameter2;
    DeviceInterfaceName = Object;
    if ( Object < 0 )
      goto LABEL_42;
  }
  PiDmListAddObject(0, (ULONG_PTR)v10, (__int64 *)v9, 0LL);
  v23 = v31;
  do
    ++v15;
  while ( v21[v15] );
  v30 = (__int64)v21;
  v7 = Handle;
  DeviceInterfaceName = PnpSetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)*a5,
                          3u,
                          (__int64)Handle,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstanceId,
                          18,
                          v30,
                          2 * (int)v15 + 2,
                          v31 != 0 ? 0x20000 : 0);
  if ( DeviceInterfaceName < 0 )
  {
    if ( v23 )
      CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
    goto LABEL_53;
  }
  v8 = v36;
  PiDmListAddObject(1u, (ULONG_PTR)v36, (__int64 *)v9, 0LL);
  v6 = v35;
  if ( v35 )
    PiDmListAddObject(2u, (ULONG_PTR)v35, (__int64 *)v9, 0LL);
LABEL_23:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v32 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(0LL, (__int64 *)*a5, 1);
    goto LABEL_26;
  }
LABEL_46:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_26:
  if ( v7 )
    ZwClose(v7);
  if ( v44 )
    PiPnpRtlEndOperation((PVOID **)v44);
  if ( v9 )
    PiDmObjectRelease((char *)v9);
  if ( v10 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v10 + 7), *((_QWORD *)v10 + 2));
    PiDmObjectRelease((char *)v10);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v8 + 7), *((_QWORD *)v8 + 2));
    PiDmObjectRelease((char *)v8);
  }
  if ( v6 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v6 + 7), *((_QWORD *)v6 + 2));
    PiDmObjectRelease((char *)v6);
  }
  return (unsigned int)DeviceInterfaceName;
}
