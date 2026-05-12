/*
 * XREFs of PartitionIoctlVerify @ 0x1C000C72E
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PartitionSendRequest @ 0x1C0002A90 (PartitionSendRequest.c)
 *     PmEnumerateOverlaps @ 0x1C0004060 (PmEnumerateOverlaps.c)
 */

__int64 __fastcall PartitionIoctlVerify(__int64 a1, IRP *a2)
{
  int v4; // ebp
  __int64 v6; // rdi
  struct _IRP *MasterIrp; // r15
  KIRQL v8; // bl
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]

  v9 = 0LL;
  v10 = 0LL;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v6 + 24) + 112LL));
    v4 = PmEnumerateOverlaps(
           (_QWORD **)(v6 + 312),
           *(_QWORD *)&MasterIrp->Type,
           LODWORD(MasterIrp->MdlAddress),
           (__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64))PartitionOverlapCount,
           (__int64)&v9);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v6 + 24) + 112LL), v8);
    if ( v4 >= 0 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        *(_QWORD *)&MasterIrp->Type = *((_QWORD *)&v10 + 1);
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        return (unsigned int)PartitionSendRequest(a1, a2);
      }
      v4 = -1073741637;
    }
  }
  else
  {
    v4 = -1073741820;
  }
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v4;
}
