/*
 * XREFs of ?PmGivePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C0009B70
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     PmDecrementPendingPartitionsCount @ 0x1C000253C (PmDecrementPendingPartitionsCount.c)
 *     PartitionLength @ 0x1C0002B2C (PartitionLength.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

void __fastcall PmGivePartition(struct _DEVICE_EXTENSION *a1, struct _PARTITION_EXTENSION *a2)
{
  unsigned int v4; // edi
  char v5; // r13
  char *DeviceExtension; // r12
  volatile signed __int32 **v7; // r12
  volatile signed __int32 *v8; // r15
  KSPIN_LOCK *v9; // rbx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  KIRQL v18; // r9
  __int64 v19; // rax
  __int64 v20; // rbx
  struct _DEVICE_OBJECT *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  KIRQL v24; // al
  IRP *v25; // rcx
  __int64 v26; // rax
  IRP *v27; // rbx
  struct _DEVICE_OBJECT *v28; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v30; // ecx
  __int128 v31; // [rsp+28h] [rbp-79h] BYREF
  _OWORD *v32; // [rsp+38h] [rbp-69h]
  _OWORD v33[9]; // [rsp+48h] [rbp-59h] BYREF

  v4 = 0;
  v5 = 0;
  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  memset(v33, 0, sizeof(v33));
  v31 = 0LL;
  v32 = 0LL;
  if ( !*((_BYTE *)a1 + 604) || DeviceExtension[164] )
    *(_DWORD *)(*((_QWORD *)a2 + 1) + 52LL) |= *(_DWORD *)(*((_QWORD *)a1 + 1) + 52LL) & 0x40001;
  v7 = (volatile signed __int32 **)(DeviceExtension + 72);
  v8 = *v7;
  if ( *v7 != (volatile signed __int32 *)v7 )
  {
    v9 = (KSPIN_LOCK *)((char *)a1 + 112);
    while ( 1 )
    {
      KeAcquireSpinLockRaiseToDpc(v9);
      v10 = *(_OWORD *)((char *)a2 + 184);
      v33[0] = *(_OWORD *)((char *)a2 + 168);
      v11 = *(_OWORD *)((char *)a2 + 200);
      v33[1] = v10;
      v12 = *(_OWORD *)((char *)a2 + 216);
      v33[2] = v11;
      v13 = *(_OWORD *)((char *)a2 + 232);
      v33[3] = v12;
      v14 = *(_OWORD *)((char *)a2 + 248);
      v33[4] = v13;
      v15 = *(_OWORD *)((char *)a2 + 264);
      v33[5] = v14;
      v16 = *(_OWORD *)((char *)a2 + 280);
      v33[6] = v15;
      v17 = *(_OWORD *)((char *)a2 + 296);
      v33[7] = v16;
      v33[8] = v17;
      *(_QWORD *)&v33[1] = PartitionLength((__int64)a2, 1);
      *(_QWORD *)&v31 = *((_QWORD *)a2 + 1);
      *((_QWORD *)&v31 + 1) = *((_QWORD *)a1 + 3);
      v32 = v33;
      KeReleaseSpinLock(v9, v18);
      IoReuseIrp(*((PIRP *)a1 + 107), -1073741637);
      v19 = *((_QWORD *)a1 + 107);
      --*(_BYTE *)(v19 + 67);
      *(_QWORD *)(v19 + 184) -= 72LL;
      v20 = *((_QWORD *)a1 + 107);
      v21 = (struct _DEVICE_OBJECT *)*((_QWORD *)v8 + 5);
      v22 = *(_QWORD *)(v20 + 184);
      *(_BYTE *)v22 = 15;
      *(_QWORD *)(v20 + 24) = &v31;
      *(_DWORD *)(v22 + 8) = 1;
      *(_DWORD *)(v22 + 16) = 24;
      *(_DWORD *)(v22 + 24) = 7733248;
      IoForwardIrpSynchronously(v21, (PIRP)v20);
      v23 = *(_DWORD *)(v20 + 56);
      if ( *(int *)(v20 + 48) >= 0 )
        break;
      v8 = *(volatile signed __int32 **)v8;
      v9 = (KSPIN_LOCK *)((char *)a1 + 112);
      if ( v8 == (volatile signed __int32 *)v7 )
        goto LABEL_12;
    }
    _InterlockedIncrement(v8 + 8);
    *((_QWORD *)a2 + 14) = v8;
    if ( v23 != 1 || !(_BYTE)v31 )
      v5 = 1;
  }
LABEL_12:
  if ( *((_QWORD *)a2 + 14) && !v5
    || (v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14),
        *((_DWORD *)a2 + 10) &= ~2u,
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v24),
        PmDecrementPendingPartitionsCount((__int64)a1, 1),
        *((_QWORD *)a2 + 14)) )
  {
    v25 = (IRP *)*((_QWORD *)a1 + 107);
    *(_QWORD *)&v31 = *((_QWORD *)a2 + 1);
    *((_QWORD *)&v31 + 1) = *((_QWORD *)a1 + 3);
    IoReuseIrp(v25, -1073741637);
    v26 = *((_QWORD *)a1 + 107);
    --*(_BYTE *)(v26 + 67);
    *(_QWORD *)(v26 + 184) -= 72LL;
    v27 = (IRP *)*((_QWORD *)a1 + 107);
    v28 = *(struct _DEVICE_OBJECT **)(*((_QWORD *)a2 + 14) + 40LL);
    CurrentStackLocation = v27->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation->MajorFunction = 15;
    v27->AssociatedIrp.MasterIrp = (struct _IRP *)&v31;
    CurrentStackLocation->Parameters.Read.Length = 0;
    CurrentStackLocation->Parameters.Create.Options = 24;
    CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 7733296;
    IoForwardIrpSynchronously(v28, v27);
    if ( v27->IoStatus.Status < 0 )
    {
      v4 = 2;
    }
    else
    {
      v30 = *((_DWORD *)a1 + 163);
      LOBYTE(v4) = v30 == 0;
      *((_DWORD *)a1 + 163) = v30 + 1;
      *((_DWORD *)a2 + 26) = 1;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 162, v4);
  }
}
