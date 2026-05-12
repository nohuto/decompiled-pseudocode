/*
 * XREFs of ?PmPropagateVerify@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C000ED40
 * Callers:
 *     ?PmIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0001010 (-PmIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 */

void __fastcall PmPropagateVerify(struct _DEVICE_EXTENSION *a1)
{
  KIRQL v2; // al
  struct _DEVICE_EXTENSION *i; // r8
  PIRP Irp; // rax
  IRP *v5; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v7; // rax

  PmInvalidatePartitionTableCache((__int64)a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
  for ( i = (struct _DEVICE_EXTENSION *)*((_QWORD *)a1 + 112);
        i != (struct _DEVICE_EXTENSION *)((char *)a1 + 896);
        i = *(struct _DEVICE_EXTENSION **)i )
  {
    *(_DWORD *)(*((_QWORD *)i - 17) + 48LL) |= 2u;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v2);
  Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)a1 + 2) + 76LL), 0);
  v5 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].Parameters.Read.Length = 0;
    CurrentStackLocation[-1].Parameters.Create.Options = 0;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 459783;
    Irp->RequestorMode = 0;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    v7 = Irp->Tail.Overlay.CurrentStackLocation;
    v7[-1].CompletionRoutine = PmPropagateVerifyCompletion;
    v7[-1].Context = 0LL;
    v7[-1].Control = -32;
    IofCallDriver(*((PDEVICE_OBJECT *)a1 + 2), v5);
  }
}
