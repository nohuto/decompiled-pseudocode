/*
 * XREFs of ?ndisIovIoctlNotification@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0076800
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000E8A0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovIoctlNotification(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  UCHAR Irql; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Irql = 0;
  if ( !*((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
    return 3221225506LL;
  if ( !ndisSystemSupportsSriov )
    return 3221225659LL;
  SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
  if ( !SriovCurrentCapabilities || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
    return 3221225659LL;
  IoAcquireCancelSpinLock(&Irql);
  _InterlockedExchange64((volatile __int64 *)&a2->CancelRoutine, (__int64)ndisIovCancelIoctlNotification);
  IoReleaseCancelSpinLock(Irql);
  a2->IoStatus.Information = 0LL;
  return 259LL;
}
