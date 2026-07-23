/*
 * XREFs of IoDeleteDevice @ 0x1403050A0
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x1405DF250 (DifIoDeleteDeviceWrapper.c)
 *     RawDeleteVcb @ 0x1407918D0 (RawDeleteVcb.c)
 *     RawMountVolume @ 0x14079255C (RawMountVolume.c)
 *     IopPnPDispatch @ 0x1407EB2F0 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140812494 (IopInitializeDeviceInstanceKey.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140812848 (IopCreateRootEnumeratedDeviceObject.c)
 *     IopLegacyResourceAllocation @ 0x140815B14 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140815C38 (IopRemoveLegacyDeviceNode.c)
 *     HalpAddDevice @ 0x140834F20 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     IoCreateDeviceSecure @ 0x14083B330 (IoCreateDeviceSecure.c)
 *     PiSwGetChildPdo @ 0x140848620 (PiSwGetChildPdo.c)
 *     PiSwDestroyDeviceObject @ 0x1409673AC (PiSwDestroyDeviceObject.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1409B8420 (RawShutdown.c)
 *     VrpRegistryUnload @ 0x140A72300 (VrpRegistryUnload.c)
 *     ViDdiDriverEntry @ 0x140AC3E60 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140ADF22C (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140ADF620 (ViFilterDispatchPnp.c)
 *     RawInitialize @ 0x140B38BE0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140B38E50 (WmipDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x1403051E8 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x140305590 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x140558100 (IopRemoveTimerFromTimerList.c)
 *     ObQueryNameString @ 0x14075B560 (ObQueryNameString.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14076BC24 (EtwTiLogDeviceObjectLoadUnload.c)
 *     PnpFreeInterruptInformation @ 0x14076C258 (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x1407E0F60 (ObMakeTemporaryObject.c)
 *     IoUnregisterShutdownNotification @ 0x140A99C30 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     IovDeleteDevice @ 0x140AC1684 (IovDeleteDevice.c)
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
