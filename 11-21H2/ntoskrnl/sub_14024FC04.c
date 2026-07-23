/*
 * XREFs of sub_14024FC04 @ 0x14024FC04
 * Callers:
 *     IoAttachDeviceToDeviceStack @ 0x14024FBC0 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceToDeviceStackSafe @ 0x14024FBE0 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceByPointer @ 0x140557420 (IoAttachDeviceByPointer.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402A4064 @ 0x1402A4064 (sub_1402A4064.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     IoGetDiskDeviceObject @ 0x1403A6F80 (IoGetDiskDeviceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140558320 @ 0x140558320 (sub_140558320.c)
 *     sub_140558450 @ 0x140558450 (sub_140558450.c)
 *     sub_1405584D8 @ 0x1405584D8 (sub_1405584D8.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A800C4 @ 0x140A800C4 (sub_140A800C4.c)
 */

PDEVICE_OBJECT __fastcall sub_14024FC04(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  __int64 v3; // r12
  struct _DEVICE_OBJECT *v6; // r13
  PDEVICE_OBJECT AttachedDevice; // rbx
  char v8; // r14
  struct _DEVICE_OBJECT *v9; // r15
  unsigned __int64 DeviceType; // rcx
  __int64 v11; // rax
  CCHAR StackSize; // al
  PVOID *DeviceNode; // rcx
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // edx
  __int64 v19; // rax
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rdi
  _OBJECT_NAME_INFORMATION *v21; // r14
  unsigned __int16 v22; // r13
  PDEVICE_OBJECT v23; // r12
  __int64 v24; // r9
  NTSTATUS v25; // r15d
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  bool v27; // sf
  KIRQL OldIrql; // [rsp+40h] [rbp-59h]
  ULONG Length; // [rsp+44h] [rbp-55h] BYREF
  struct _DEVICE_OBJECT *v30; // [rsp+48h] [rbp-51h]
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v32[2]; // [rsp+58h] [rbp-41h] BYREF
  struct _DEVICE_OBJECT *v33; // [rsp+68h] [rbp-31h]
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+70h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  v30 = a2;
  v6 = a2;
  OldIrql = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (dword_140C29FC0 & 0x10) != 0 )
    sub_140A800C4(a1, v6);
  AttachedDevice = IoGetAttachedDevice(v6);
  v8 = 0;
  v33 = (struct _DEVICE_OBJECT *)sub_1402A4064(v6);
  v9 = v33;
  DeviceType = v33->DeviceType;
  if ( (unsigned int)DeviceType <= 0x35 )
  {
    v11 = 0x20000100100108LL;
    if ( _bittest64(&v11, DeviceType) )
    {
      if ( (v33->Flags & 0x10000000) != 0 || dword_140D011B0 )
      {
        v8 = 1;
        if ( (unsigned __int8)sub_140558320(*(_QWORD *)(a1 + 8) + 56LL) )
          v8 = 0;
        else
          ObfReferenceObjectWithTag(v33, 0x746C6644u);
      }
    }
  }
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || (StackSize = AttachedDevice->StackSize, (unsigned __int8)StackSize >= 0x7Du)
    || v8 )
  {
    AttachedDevice = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
    {
      *a3 = AttachedDevice;
      StackSize = AttachedDevice->StackSize;
    }
    *(_BYTE *)(a1 + 76) = StackSize + 1;
    *(_DWORD *)(a1 + 152) = AttachedDevice->AlignmentRequirement;
    *(_WORD *)(a1 + 304) = AttachedDevice->SectorSize;
    if ( (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x10u;
    if ( (AttachedDevice->Flags & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 0x8000000u;
    _InterlockedExchange64((volatile __int64 *)&AttachedDevice->AttachedDevice, a1);
    ++AttachedDevice->Spare1;
    *(_QWORD *)(v3 + 48) = AttachedDevice;
    DeviceNode = (PVOID *)v9->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && *((int *)DeviceNode + 99) < 0 )
      sub_1402DCF44(DeviceNode[4], 0LL, 0LL, 0LL);
  }
  KeReleaseQueuedSpinLock(0xAuLL, OldIrql);
  if ( v8 )
  {
    if ( dword_140D011B0 )
    {
      if ( (byte_140C474F8 & 4) != 0 )
        sub_140558450(v15, v14, 0, *(_WORD *)(*(_QWORD *)(a1 + 8) + 56LL) >> 1, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL));
    }
    else if ( (byte_140C474F8 & 4) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &ObjectNameInfo;
      v32[0] = 1835034LL;
      v21 = (_OBJECT_NAME_INFORMATION *)v32;
      v22 = *(_WORD *)(v19 + 56) >> 1;
      DiskDeviceObject = 0LL;
      v32[1] = L"(Unavailable)";
      Length = 64;
      if ( KeGetCurrentIrql() < 2u && IoGetDiskDeviceObject(v9, &DiskDeviceObject) >= 0 )
      {
        v23 = DiskDeviceObject;
        v25 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, Length, &Length);
        if ( v25 == -1073741820 )
        {
          Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, Length, 1850699593LL, v24);
          p_ObjectNameInfo = Pool2;
          if ( Pool2 )
            v25 = ObQueryNameString(v23, Pool2, Length, &Length);
          else
            v25 = -1073741670;
        }
        ObfDereferenceObject(v23);
        v27 = v25 < 0;
        v9 = v33;
        if ( !v27 )
          v21 = p_ObjectNameInfo;
      }
      if ( (byte_140C474F8 & 4) != 0 )
        sub_1405584D8(
          *(_QWORD *)(a1 + 8),
          v21->Name.Length >> 1,
          *((_QWORD *)KeGetCurrentThread() + 190),
          v22,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v21->Name.Length >> 1,
          (__int64)v21->Name.Buffer);
      if ( p_ObjectNameInfo && p_ObjectNameInfo != &ObjectNameInfo )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
      v6 = v30;
    }
    ObfDereferenceObject(v9);
  }
  v16 = v6->DeviceType;
  if ( v16 <= 0x14 )
  {
    v17 = 1048840;
    if ( _bittest(&v17, v16) )
    {
      if ( qword_140D00A28 )
        sub_14042A5E0(a1, v6);
    }
  }
  return AttachedDevice;
}
