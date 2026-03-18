/*
 * XREFs of IoDeleteDevice @ 0x140304E10
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x1405DECE0 (DifIoDeleteDeviceWrapper.c)
 *     RawDeleteVcb @ 0x1407916E0 (RawDeleteVcb.c)
 *     RawMountVolume @ 0x14079236C (RawMountVolume.c)
 *     IopPnPDispatch @ 0x1407EB020 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x1408121C4 (IopInitializeDeviceInstanceKey.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140812578 (IopCreateRootEnumeratedDeviceObject.c)
 *     IopLegacyResourceAllocation @ 0x140815844 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140815968 (IopRemoveLegacyDeviceNode.c)
 *     HalpAddDevice @ 0x140834C20 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IoCreateDeviceSecure @ 0x14083B030 (IoCreateDeviceSecure.c)
 *     PiSwGetChildPdo @ 0x140848320 (PiSwGetChildPdo.c)
 *     PiSwDestroyDeviceObject @ 0x1409671AC (PiSwDestroyDeviceObject.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1409B8220 (RawShutdown.c)
 *     VrpRegistryUnload @ 0x140A72050 (VrpRegistryUnload.c)
 *     ViDdiDriverEntry @ 0x140AC3E70 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140ADF23C (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140ADF630 (ViFilterDispatchPnp.c)
 *     RawInitialize @ 0x140B38BE0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140B38E50 (WmipDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0760 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x140304F58 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x140557A40 (IopRemoveTimerFromTimerList.c)
 *     ObQueryNameString @ 0x14075B370 (ObQueryNameString.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14076BA34 (EtwTiLogDeviceObjectLoadUnload.c)
 *     PnpFreeInterruptInformation @ 0x14076C068 (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x1407E0C90 (ObMakeTemporaryObject.c)
 *     IoUnregisterShutdownNotification @ 0x140A99DC0 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     IovDeleteDevice @ 0x140AC1694 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  struct _OBJECT_NAME_INFORMATION *v2; // rsi
  struct _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 860778313LL);
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
