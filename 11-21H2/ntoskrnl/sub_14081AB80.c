/*
 * XREFs of sub_14081AB80 @ 0x14081AB80
 * Callers:
 *     sub_14081AA90 @ 0x14081AA90 (sub_14081AA90.c)
 *     sub_1409DE1A0 @ 0x1409DE1A0 (sub_1409DE1A0.c)
 * Callees:
 *     IoInitializeIrp @ 0x140229D70 (IoInitializeIrp.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 */

__int64 __fastcall sub_14081AB80(__int64 a1, unsigned int a2, unsigned __int8 a3, int a4, __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v8; // ebx
  __int16 StackSize; // di
  CCHAR v10; // r14
  PIRP Irp; // rsi
  USHORT v12; // di

  v6 = a2;
  v8 = 0;
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  StackSize = qword_140C164D8->StackSize;
  v10 = StackSize + 1;
  KeReleaseMutex(&Object, 0);
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
        Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = qword_140C164D8;
        Irp->Tail.Overlay.Thread = KeGetCurrentThread();
        sub_140783A9C(Irp, a3, *(_DWORD *)(*(_QWORD *)a1 + 56LL), 0LL, a4, a5);
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
