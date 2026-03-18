/*
 * XREFs of WmipSendWmiIrpToTraceDeviceList @ 0x140848E84
 * Callers:
 *     WmiTraceRundownNotify @ 0x140848DE8 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1409E183C (WmiSetNetworkNotify.c)
 * Callees:
 *     IoAllocateIrp @ 0x14022E610 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x1402AF210 (IoFreeIrp.c)
 *     KeReleaseMutex @ 0x1402AFF70 (KeReleaseMutex.c)
 *     IoInitializeIrp @ 0x140334820 (IoInitializeIrp.c)
 *     WmipForwardWmiIrp @ 0x1406C7480 (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrpToTraceDeviceList(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v8; // ebx
  __int16 StackSize; // di
  CCHAR v10; // r14
  PIRP Irp; // rsi
  USHORT v12; // di

  v6 = a2;
  v8 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  StackSize = WmipServiceDeviceObject->StackSize;
  v10 = StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp((unsigned __int8)StackSize + 1, 0);
  if ( Irp )
  {
    if ( (_DWORD)v6 )
    {
      v12 = 72 * StackSize + 280;
      do
      {
        IoInitializeIrp(Irp, v12, v10);
        --Irp->Tail.Overlay.CurrentStackLocation;
        --Irp->CurrentLocation;
        Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
        Irp->Tail.Overlay.Thread = KeGetCurrentThread();
        WmipForwardWmiIrp(Irp, a3, *(_DWORD *)(*(_QWORD *)a1 + 56LL), 0LL, a4, a5);
        a1 += 16LL;
        --v6;
      }
      while ( v6 );
      v8 = 0;
    }
    IoFreeIrp(Irp);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
