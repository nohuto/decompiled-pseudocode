/*
 * XREFs of IoInitializeIrp @ 0x140334820
 * Callers:
 *     IoInitializeIrpEx @ 0x1403D0A50 (IoInitializeIrpEx.c)
 *     IopAllocateBackpocketIrp @ 0x1405549E0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140554C78 (IopAllocateReserveIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140848E84 (WmipSendWmiIrpToTraceDeviceList.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7BB0 (SmStorePhysicalRequestIssue.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACDC94 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     IovInitializeIrp @ 0x140AC1758 (IovInitializeIrp.c)
 */

void __stdcall IoInitializeIrp(PIRP Irp, USHORT PacketSize, CCHAR StackSize)
{
  __int64 v4; // rdi
  size_t v5; // rsi
  CCHAR ApcStateIndex; // cl
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = StackSize;
  v5 = PacketSize;
  if ( (MmVerifierData & 0x10) != 0 )
    IovInitializeIrp(Irp, PacketSize, StackSize, retaddr);
  memset(Irp, 0, v5);
  Irp->Size = v5;
  Irp->Type = 6;
  Irp->CurrentLocation = v4 + 1;
  Irp->StackCount = v4;
  ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->ApcEnvironment = ApcStateIndex;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 64 * v4 + 8 * v4);
}
