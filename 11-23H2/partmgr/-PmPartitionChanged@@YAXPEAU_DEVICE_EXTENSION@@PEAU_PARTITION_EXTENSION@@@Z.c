/*
 * XREFs of ?PmPartitionChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C00100C0
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     PartitionLength @ 0x1C0002B2C (PartitionLength.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

void __fastcall PmPartitionChanged(struct _DEVICE_EXTENSION *a1, struct _PARTITION_EXTENSION *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  KIRQL v11; // r9
  __int64 v12; // rax
  IRP *v13; // rdx
  struct _DEVICE_OBJECT *v14; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD v16[4]; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v17[9]; // [rsp+40h] [rbp-98h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( *((_QWORD *)a2 + 14) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
    v4 = *(_OWORD *)((char *)a2 + 184);
    v17[0] = *(_OWORD *)((char *)a2 + 168);
    v5 = *(_OWORD *)((char *)a2 + 200);
    v17[1] = v4;
    v6 = *(_OWORD *)((char *)a2 + 216);
    v17[2] = v5;
    v7 = *(_OWORD *)((char *)a2 + 232);
    v17[3] = v6;
    v8 = *(_OWORD *)((char *)a2 + 248);
    v17[4] = v7;
    v9 = *(_OWORD *)((char *)a2 + 264);
    v17[5] = v8;
    v10 = *(_OWORD *)((char *)a2 + 296);
    v17[6] = v9;
    v17[7] = *(_OWORD *)((char *)a2 + 280);
    v17[8] = v10;
    *(_QWORD *)&v17[1] = PartitionLength((__int64)a2, 1);
    v16[0] = *((_QWORD *)a2 + 1);
    v16[1] = *((_QWORD *)a1 + 3);
    v16[2] = v17;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v11);
    IoReuseIrp(*((PIRP *)a1 + 107), -1073741637);
    v12 = *((_QWORD *)a1 + 107);
    --*(_BYTE *)(v12 + 67);
    *(_QWORD *)(v12 + 184) -= 72LL;
    v13 = (IRP *)*((_QWORD *)a1 + 107);
    v14 = *(struct _DEVICE_OBJECT **)(*((_QWORD *)a2 + 14) + 40LL);
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation->MajorFunction = 15;
    v13->AssociatedIrp.MasterIrp = (struct _IRP *)v16;
    CurrentStackLocation->Parameters.Read.Length = 0;
    CurrentStackLocation->Parameters.Create.Options = 24;
    CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 7733280;
    IoForwardIrpSynchronously(v14, v13);
  }
}
