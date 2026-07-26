/*
 * XREFs of ?ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z @ 0x1C012CA5C
 * Callers:
 *     ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x1C005E314 (-ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z.c)
 *     ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x1C012CB7C (-ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDA.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NTSTATUS __fastcall ndisQueryDriverInterface(
        PDEVICE_OBJECT DeviceObject,
        const struct _GUID *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _INTERFACE *a5)
{
  PIRP v9; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset(a5, 0, a4);
  a5->Size = a4;
  a5->Version = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v9 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v9 )
    return -1073741670;
  CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
  v9->RequestorMode = 0;
  v9->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].MinorFunction = 8;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)a2;
  CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
  CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a5;
  result = IofCallDriver(DeviceObject, v9);
  if ( result == 259 )
  {
    ndisWaitForKernelObject(&Event);
    return IoStatusBlock.Status;
  }
  return result;
}
