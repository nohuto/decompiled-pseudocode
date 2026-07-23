/*
 * XREFs of IoDeleteDevice @ 0x140304E10
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x1405DED70 (DifIoDeleteDeviceWrapper.c)
 *     RawDeleteVcb @ 0x140791BF0 (RawDeleteVcb.c)
 *     RawMountVolume @ 0x14079287C (RawMountVolume.c)
 *     IopPnPDispatch @ 0x1407EB5A0 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140814744 (IopInitializeDeviceInstanceKey.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140814AF8 (IopCreateRootEnumeratedDeviceObject.c)
 *     IopLegacyResourceAllocation @ 0x140817DC4 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140817EE8 (IopRemoveLegacyDeviceNode.c)
 *     HalpAddDevice @ 0x140836770 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IoCreateDeviceSecure @ 0x14083CDC0 (IoCreateDeviceSecure.c)
 *     PiSwGetChildPdo @ 0x1408495C0 (PiSwGetChildPdo.c)
 *     PiSwDestroyDeviceObject @ 0x14096725C (PiSwDestroyDeviceObject.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1409B82D0 (RawShutdown.c)
 *     VrpRegistryUnload @ 0x140A720C0 (VrpRegistryUnload.c)
 *     ViDdiDriverEntry @ 0x140AC4E40 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140AE020C (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140AE0600 (ViFilterDispatchPnp.c)
 *     RawInitialize @ 0x140B3C2E0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140B3C550 (WmipDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x140304F58 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x140557AE0 (IopRemoveTimerFromTimerList.c)
 *     ObQueryNameString @ 0x14075B880 (ObQueryNameString.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14076BF44 (EtwTiLogDeviceObjectLoadUnload.c)
 *     PnpFreeInterruptInformation @ 0x14076C578 (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x1407E1210 (ObMakeTemporaryObject.c)
 *     IoUnregisterShutdownNotification @ 0x140A99E80 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     IovDeleteDevice @ 0x140AC2694 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  _OBJECT_NAME_INFORMATION *v2; // rsi
  _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 860778313LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      if ( ObQueryNameString(DeviceObject, Pool2, ReturnLength, &ReturnLength) >= 0 )
        v2 = v3;
    }
  }
  EtwTiLogDeviceObjectLoadUnload(0LL, &DeviceObject->DriverObject->DriverName, v2);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( (MmVerifierData & 0x90) != 0 )
    IovDeleteDevice(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    IopRemoveTimerFromTimerList(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  PoRunDownDeviceObject(DeviceObject);
  PnpFreeInterruptInformation(DeviceObject);
  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v6);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject);
}
