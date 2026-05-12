/*
 * XREFs of ?PmPartitionRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_IRP@@PEAX_JK@Z @ 0x1C0010230
 * Callers:
 *     ?PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001069C (-PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?PmSplitAndRedirectWrite@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001081C (-PmSplitAndRedirectWrite@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     PartitionOffset @ 0x1C0002784 (PartitionOffset.c)
 */

__int64 __fastcall PmPartitionRedirect(
        KSPIN_LOCK *a1,
        struct _PARTITION_EXTENSION *a2,
        struct _IRP *a3,
        void *a4,
        __int64 a5,
        unsigned int a6)
{
  int v10; // ebx
  KIRQL v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rax
  IRP *v14; // rcx
  KSPIN_LOCK v15; // rax
  IRP *v16; // rbx
  struct _DEVICE_OBJECT *v17; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD v20[5]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+4Ch] [rbp-1Ch]

  v22 = 0;
  v10 = 0;
  KeAcquireSpinLockRaiseToDpc(a1 + 14);
  if ( PartitionOffset((__int64)a2, 1) != *((_QWORD *)a2 + 22) && !*((_QWORD *)a2 + 4) )
    v10 = -1073741790;
  v12 = a5;
  if ( *((_QWORD *)a2 + 4) )
  {
    v13 = *((_QWORD *)a2 + 29);
    a2 = (struct _PARTITION_EXTENSION *)*((_QWORD *)a2 + 4);
    v12 = (v13 & 0xFFFFFFFFFFFFFF00uLL) + a5;
  }
  KeReleaseSpinLock(a1 + 14, v11);
  if ( v10 >= 0 )
  {
    v14 = (IRP *)a1[107];
    v20[2] = a3;
    v20[0] = *((_QWORD *)a2 + 1);
    v20[1] = a1[3];
    v21 = a6;
    v20[3] = a4;
    v20[4] = v12;
    IoReuseIrp(v14, -1073741637);
    v15 = a1[107];
    --*(_BYTE *)(v15 + 67);
    *(_QWORD *)(v15 + 184) -= 72LL;
    v16 = (IRP *)a1[107];
    v17 = *(struct _DEVICE_OBJECT **)(*((_QWORD *)a2 + 14) + 40LL);
    CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation->MajorFunction = 15;
    v16->AssociatedIrp.MasterIrp = (struct _IRP *)v20;
    CurrentStackLocation->Parameters.Read.Length = 0;
    CurrentStackLocation->Parameters.Create.Options = 48;
    CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 7733300;
    IoForwardIrpSynchronously(v17, v16);
    return (unsigned int)v16->IoStatus.Status;
  }
  return (unsigned int)v10;
}
