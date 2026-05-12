/*
 * XREFs of ?PartitionIoctlDsmCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0002710
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C000B740 (memmove.c)
 */

__int64 __fastcall PartitionIoctlDsmCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, struct _IRP *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  bool v6; // zf
  size_t Length; // rdx
  struct _IRP *MasterIrp; // rsi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = a2->PendingReturned == 0;
  Length = CurrentStackLocation->Parameters.Read.Length;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( !v6 )
    CurrentStackLocation->Control |= 1u;
  if ( (_DWORD)Length )
    memmove(a3, MasterIrp, Length);
  a2->AssociatedIrp.MasterIrp = a3;
  ExFreePoolWithTag(MasterIrp, 0);
  return 0LL;
}
