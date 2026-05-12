/*
 * XREFs of ?PmTakePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@E@Z @ 0x1C0004A44
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     PartitionLength @ 0x1C0002B2C (PartitionLength.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

void __fastcall PmTakePartition(struct _DEVICE_EXTENSION *a1, struct _PARTITION_EXTENSION *a2, char a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  KIRQL v13; // r9
  _OWORD *v14; // rax
  __int64 v15; // rax
  IRP *v16; // rdx
  struct _DEVICE_OBJECT *v17; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-B0h]
  _OWORD *v23; // [rsp+30h] [rbp-A8h]
  _OWORD v24[9]; // [rsp+40h] [rbp-98h] BYREF

  v23 = 0LL;
  memset(v24, 0, sizeof(v24));
  if ( *((_QWORD *)a2 + 14) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
    v6 = *(_OWORD *)((char *)a2 + 184);
    v24[0] = *(_OWORD *)((char *)a2 + 168);
    v7 = *(_OWORD *)((char *)a2 + 200);
    v24[1] = v6;
    v8 = *(_OWORD *)((char *)a2 + 216);
    v24[2] = v7;
    v9 = *(_OWORD *)((char *)a2 + 232);
    v24[3] = v8;
    v10 = *(_OWORD *)((char *)a2 + 248);
    v24[4] = v9;
    v11 = *(_OWORD *)((char *)a2 + 264);
    v24[5] = v10;
    v12 = *(_OWORD *)((char *)a2 + 296);
    v24[6] = v11;
    v24[7] = *(_OWORD *)((char *)a2 + 280);
    v24[8] = v12;
    *(_QWORD *)&v24[1] = PartitionLength((__int64)a2, 1);
    v21 = *((_QWORD *)a2 + 1);
    if ( a3 )
      v22 = 0LL;
    else
      v22 = *((_QWORD *)a1 + 3);
    v14 = v24;
    if ( (*((_BYTE *)a2 + 40) & 8) != 0 )
      v14 = v23;
    v23 = v14;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v13);
    IoReuseIrp(*((PIRP *)a1 + 107), -1073741637);
    v15 = *((_QWORD *)a1 + 107);
    --*(_BYTE *)(v15 + 67);
    *(_QWORD *)(v15 + 184) -= 72LL;
    v16 = (IRP *)*((_QWORD *)a1 + 107);
    v17 = *(struct _DEVICE_OBJECT **)(*((_QWORD *)a2 + 14) + 40LL);
    CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation->MajorFunction = 15;
    v16->AssociatedIrp.MasterIrp = (struct _IRP *)&v21;
    CurrentStackLocation->Parameters.Read.Length = 0;
    CurrentStackLocation->Parameters.Create.Options = 24;
    CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 7733252;
    IoForwardIrpSynchronously(v17, v16);
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 14) + 32LL));
    *((_QWORD *)a2 + 14) = 0LL;
    if ( *((_DWORD *)a2 + 26) )
    {
      v19 = --*((_DWORD *)a1 + 163);
      *((_DWORD *)a2 + 26) = 0;
      v20 = (v19 != 0) - 1;
    }
    else
    {
      v20 = -2;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 162, v20);
  }
}
