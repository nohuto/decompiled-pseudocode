/*
 * XREFs of PmDecrementPendingPartitionsCount @ 0x1C000253C
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?PmGivePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C0009B70 (-PmGivePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     PartitionIoctlVolumePostOnline @ 0x1C000A4CC (PartitionIoctlVolumePostOnline.c)
 * Callees:
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

int __fastcall PmDecrementPendingPartitionsCount(__int64 a1, int a2)
{
  struct _KMUTANT *v2; // r14
  KIRQL v5; // al
  int v6; // ebx
  __int64 **v7; // rcx
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 ***v10; // r9
  __int64 v11; // rax
  __int64 **v12; // r8
  __int64 ***v13; // r10
  __int64 *v14; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  IRP *v17; // rcx
  __int64 *v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v20; // [rsp+48h] [rbp-8h]

  v2 = (struct _KMUTANT *)(a1 + 56);
  KeWaitForSingleObject((PVOID)(a1 + 56), Executive, 0, 0, 0LL);
  *(_DWORD *)(a1 + 880) -= a2;
  if ( *(_DWORD *)(a1 + 880)
    || (v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112)),
        v6 = *(_DWORD *)(a1 + 512),
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v5),
        (v6 & 0x14) == 0) )
  {
    LODWORD(v9) = KeReleaseMutex(v2, 0);
  }
  else
  {
    v20 = &v19;
    v7 = *(__int64 ***)(a1 + 864);
    v19 = (__int64 *)&v19;
    while ( v7 != (__int64 **)(a1 + 864) )
    {
      v10 = (__int64 ***)v7;
      v11 = _InterlockedExchange64((volatile __int64 *)v7 - 8, 0LL);
      v12 = (__int64 **)*v7;
      if ( v11 )
      {
        if ( v12[1] != (__int64 *)v7
          || (v13 = (__int64 ***)(v7 + 1), v14 = v7[1], (__int64 **)*v14 != v7)
          || (*v14 = (__int64)v12, v12[1] = v14, v15 = v20, v7 = (__int64 **)*v7, *v20 != (__int64 *)&v19) )
        {
LABEL_19:
          __fastfail(3u);
        }
        *v13 = v20;
        *v10 = &v19;
        *v15 = v10;
        v20 = (__int64 **)v10;
      }
      else
      {
        v7 = (__int64 **)*v7;
      }
    }
    KeReleaseMutex(v2, 0);
    while ( 1 )
    {
      v8 = v19;
      v9 = &v19;
      if ( v19 == (__int64 *)&v19 )
        break;
      if ( (__int64 **)v19[1] != &v19 )
        goto LABEL_19;
      v16 = (__int64 *)*v19;
      if ( *(__int64 **)(*v19 + 8) != v19 )
        goto LABEL_19;
      v19 = (__int64 *)*v19;
      v16[1] = (__int64)&v19;
      v17 = (IRP *)(v8 - 21);
      v17->IoStatus.Status = 0;
      v17->IoStatus.Information = 0LL;
      IofCompleteRequest(v17, 0);
    }
    if ( a2 )
      LODWORD(v9) = PmSendDeviceControl(*(PDEVICE_OBJECT *)(a1 + 16), 0x7C220u, (PVOID)(a1 + 168), 4u, 0LL, 0, 0);
  }
  return (int)v9;
}
