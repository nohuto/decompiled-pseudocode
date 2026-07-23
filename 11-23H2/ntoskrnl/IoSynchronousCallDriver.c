/*
 * XREFs of IoSynchronousCallDriver @ 0x140355400
 * Callers:
 *     FsRtlGetFileExtents @ 0x14053CDD8 (FsRtlGetFileExtents.c)
 *     WmipGetFilePDO @ 0x1407C3C5C (WmipGetFilePDO.c)
 *     IoForwardIrpSynchronously @ 0x1407C3D50 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1407E96E0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1407E9800 (FsRtlMdlReadEx.c)
 *     PopAcquireCoolingInterface @ 0x14084E4C4 (PopAcquireCoolingInterface.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940670 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940710 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x140995518 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1409956A8 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x140995730 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1409958B4 (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  _DWORD Object[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  Object[1] = 0;
  Object[0] = 393216;
  v6[1] = v6;
  v6[0] = v6;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&CmpCompleteFlushAndPurgeIrp;
  CurrentStackLocation[-1].Context = Object;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(a1, a2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(Object, Suspended, 0, 0, 0LL);
    return a2->IoStatus.Status;
  }
  return result;
}
