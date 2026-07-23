/*
 * XREFs of IoInitializeIrp @ 0x140229D70
 * Callers:
 *     IoInitializeIrpEx @ 0x14039E9C0 (IoInitializeIrpEx.c)
 *     sub_140556050 @ 0x140556050 (sub_140556050.c)
 *     sub_1405562E8 @ 0x1405562E8 (sub_1405562E8.c)
 *     sub_14081AB80 @ 0x14081AB80 (sub_14081AB80.c)
 *     sub_1409D48D8 @ 0x1409D48D8 (sub_1409D48D8.c)
 *     sub_140A8D338 @ 0x140A8D338 (sub_140A8D338.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A808A8 @ 0x140A808A8 (sub_140A808A8.c)
 */

void __stdcall IoInitializeIrp(PIRP Irp, USHORT PacketSize, CCHAR StackSize)
{
  __int64 v4; // rdi
  size_t v5; // rsi
  CCHAR v6; // cl
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = StackSize;
  v5 = PacketSize;
  if ( (dword_140C29FC0 & 0x10) != 0 )
    sub_140A808A8(Irp, PacketSize, StackSize, retaddr);
  memset(Irp, 0, v5);
  Irp->Size = v5;
  Irp->Type = 6;
  Irp->CurrentLocation = v4 + 1;
  Irp->StackCount = v4;
  v6 = *((_BYTE *)KeGetCurrentThread() + 586);
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->ApcEnvironment = v6;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 64 * v4 + 8 * v4);
}
