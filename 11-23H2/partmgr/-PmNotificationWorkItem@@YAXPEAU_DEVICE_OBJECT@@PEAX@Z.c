/*
 * XREFs of ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80
 * Callers:
 *     <none>
 * Callees:
 *     PmDecrementPendingPartitionsCount @ 0x1C000253C (PmDecrementPendingPartitionsCount.c)
 *     ?PmQueryDepends@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0004470 (-PmQueryDepends@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?PmTakePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@E@Z @ 0x1C0004A44 (-PmTakePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@E@Z.c)
 *     PmDeletePartition @ 0x1C0004D84 (PmDeletePartition.c)
 *     ?PmGivePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C0009B70 (-PmGivePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     ?PmPartitionChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C00100C0 (-PmPartitionChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     ?PmQueryVeto@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0010394 (-PmQueryVeto@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?PmSplitAndRedirect@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0010550 (-PmSplitAndRedirect@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?PmTakeDisk@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C001E698 (-PmTakeDisk@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 *     PmSendTelemetry @ 0x1C0020134 (PmSendTelemetry.c)
 *     ?PmGiveDisk@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0021CD8 (-PmGiveDisk@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?PmPowerChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0027F6C (-PmPowerChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall PmNotificationWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char *DeviceExtension; // rdi
  unsigned int v3; // r13d
  char v4; // r14
  KIRQL v5; // al
  int v6; // esi
  int v7; // r10d
  KIRQL v8; // bl
  char *i; // rcx
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // ecx
  __int64 *v15; // rcx
  int v16; // r14d
  __int64 **v17; // rsi
  __int64 *v18; // rax
  __int64 *v19; // rdx
  __int64 *v20; // rax
  char *v21; // rax
  _QWORD *v22; // rdx
  char *v23; // rdx
  char **v24; // rax
  int v25; // eax
  _QWORD *v26; // rdx
  char *v27; // rax
  __int64 *v28; // rax
  __int64 **v29; // rax
  __int64 *v30; // rax
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v32; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rdx
  char *v36; // rax
  _QWORD *v37; // rdx
  char *v38; // rax
  unsigned int v39; // eax
  __int64 *v40; // rcx
  __int64 *v41; // [rsp+30h] [rbp-50h] BYREF
  char *v42; // [rsp+38h] [rbp-48h]
  struct _LIST_ENTRY v43; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v44; // [rsp+50h] [rbp-30h] BYREF
  char *v45; // [rsp+58h] [rbp-28h]
  __int64 *v46; // [rsp+60h] [rbp-20h] BYREF
  char *v47; // [rsp+68h] [rbp-18h]
  __int64 *v48; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v49; // [rsp+78h] [rbp-8h]
  char v50; // [rsp+C0h] [rbp+40h]
  char v51; // [rsp+D0h] [rbp+50h]
  __int16 v52; // [rsp+D8h] [rbp+58h]

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v43.Blink = &v43;
  v3 = 0;
  v51 = 0;
  v43.Flink = &v43;
  v4 = 0;
  v50 = 0;
  v47 = (char *)&v46;
  v46 = (__int64 *)&v46;
  v49 = &v48;
  v48 = (__int64 *)&v48;
  v45 = (char *)&v44;
  v44 = (__int64 *)&v44;
  v42 = (char *)&v41;
  v41 = (__int64 *)&v41;
  while ( 1 )
  {
    KeWaitForSingleObject(DeviceExtension + 56, Executive, 0, 0, 0LL);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 14);
    v6 = 0;
    v7 = 0;
    v52 = 0;
    v8 = v5;
    if ( (*((_DWORD *)DeviceExtension + 128) & 2) == 0 )
      goto LABEL_16;
    for ( i = (char *)*((_QWORD *)DeviceExtension + 112); i != DeviceExtension + 896; i = *(char **)i )
    {
      *((_DWORD *)i - 2) = 0;
      v10 = *((_DWORD *)DeviceExtension + 128);
      if ( (v10 & 0x10) != 0 || (v11 = *((_DWORD *)i - 26), (v11 & 4) != 0) )
      {
        *((_DWORD *)DeviceExtension + 128) = v10 | 0x400;
        *((_DWORD *)i - 26) |= 8u;
        v23 = *(char **)i;
        if ( *(char **)(*(_QWORD *)i + 8LL) != i )
          goto LABEL_79;
        v24 = (char **)*((_QWORD *)i + 1);
        if ( *v24 != i )
          goto LABEL_79;
        *v24 = v23;
        *((_QWORD *)v23 + 1) = v24;
        v25 = *((_DWORD *)i - 26);
        if ( (v25 & 2) != 0 )
        {
          *((_DWORD *)i - 26) = v25 & 0xFFFFFFFD;
          ++v3;
        }
        v26 = v42;
        v27 = i - 24;
        if ( *(__int64 ***)v42 != &v41 )
LABEL_79:
          __fastfail(3u);
        *((_QWORD *)v27 + 1) = v42;
        *(_QWORD *)v27 = &v41;
        *v26 = v27;
        v42 = i - 24;
      }
      else if ( (v10 & 8) != 0 || (v10 & 0x200) != 0 || (v11 & 0x100) != 0 )
      {
        if ( *((_QWORD *)i - 4) )
        {
          v37 = v42;
          v38 = i - 24;
          if ( *(__int64 ***)v42 != &v41 )
            goto LABEL_79;
          *((_QWORD *)v38 + 1) = v42;
          *(_QWORD *)v38 = &v41;
          *v37 = v38;
          v42 = i - 24;
        }
        v39 = *((_DWORD *)i - 26) & 0xFFFFFEFE;
        *((_DWORD *)i - 26) = v39;
        if ( (v39 & 2) != 0 )
        {
          *((_DWORD *)i - 26) = v39 & 0xFFFFFFFD;
          ++v3;
        }
      }
      else if ( (v10 & 0x1E0) != 0 )
      {
        if ( *((_QWORD *)i - 4) || (v34 = *((_QWORD *)i - 14)) != 0 && *(_QWORD *)(v34 + 112) )
        {
          Blink = v43.Blink;
          v32 = (struct _LIST_ENTRY *)(i - 24);
          if ( v43.Blink->Flink != &v43 )
            goto LABEL_79;
          v32->Blink = v43.Blink;
          v32->Flink = &v43;
          Blink->Flink = v32;
          v43.Blink = (struct _LIST_ENTRY *)(i - 24);
        }
      }
      else
      {
        v12 = *((_DWORD *)i - 26) & 0x30;
        if ( (v11 & 0x30) != 0 )
        {
          *((_DWORD *)DeviceExtension + 128) = v10 | 0x400;
          if ( *((_QWORD *)i - 4) )
          {
            v35 = v45;
            v36 = i - 24;
            if ( *(__int64 ***)v45 != &v44 )
              goto LABEL_79;
            *((_QWORD *)v36 + 1) = v45;
            *(_QWORD *)v36 = &v44;
            *v35 = v36;
            v45 = i - 24;
          }
          *((_DWORD *)i - 2) |= v12;
          *((_DWORD *)i - 26) &= ~v12;
          v7 |= v12;
        }
        else if ( (v11 & 1) == 0 && (v11 & 0x40) == 0 )
        {
          *((_DWORD *)DeviceExtension + 128) = v10 | 0x400;
          v21 = i - 24;
          v22 = v47;
          if ( *(__int64 ***)v47 != &v46 )
            goto LABEL_79;
          *((_QWORD *)v21 + 1) = v47;
          *(_QWORD *)v21 = &v46;
          *v22 = v21;
          v47 = i - 24;
          *((_DWORD *)i - 26) |= 2u;
          ++*((_DWORD *)DeviceExtension + 220);
          *((_DWORD *)i - 26) |= 1u;
        }
      }
    }
    v13 = *((_DWORD *)DeviceExtension + 128);
    if ( (v13 & 0x10) == 0 && (v13 & 0x200) == 0 )
    {
      if ( (v13 & 4) != 0 )
        goto LABEL_16;
      v6 = 4;
      *((_DWORD *)DeviceExtension + 128) = v13 | 4;
      ++*((_DWORD *)DeviceExtension + 220);
      ++v3;
      goto LABEL_56;
    }
    if ( (v13 & 4) != 0 )
    {
      v6 = 16;
      *((_DWORD *)DeviceExtension + 128) = v13 & 0xFFFFFFFB;
LABEL_56:
      v52 = v6;
    }
LABEL_16:
    v14 = *((_DWORD *)DeviceExtension + 128) & 0x7E0;
    if ( v14 )
    {
      v6 |= v14;
      *((_DWORD *)DeviceExtension + 128) &= ~v14;
      v52 = v6;
    }
    if ( v43.Flink == &v43 && !v6 && v46 == (__int64 *)&v46 && !v7 && v44 == (__int64 *)&v44 && v41 == (__int64 *)&v41 )
      break;
    KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 14, v8);
    KeReleaseMutex((PRKMUTEX)DeviceExtension + 1, 0);
    if ( v4 )
      goto LABEL_25;
    v16 = v6 & 0x10;
    while ( 1 )
    {
      v17 = (__int64 **)v41;
      if ( v41 == (__int64 *)&v41 )
        break;
      if ( (__int64 **)v41[1] != &v41 )
        goto LABEL_79;
      v28 = (__int64 *)*v41;
      if ( *(__int64 **)(*v41 + 8) != v41 )
        goto LABEL_79;
      v41 = (__int64 *)*v41;
      v28[1] = (__int64)&v41;
      PmTakePartition((struct _DEVICE_EXTENSION *)DeviceExtension, (struct _PARTITION_EXTENSION *)(v17 - 15), v16 != 0);
      if ( (*(_DWORD *)(v17 - 10) & 8) != 0 )
      {
        v29 = v49;
        if ( *v49 != (__int64 *)&v48 )
          goto LABEL_79;
        v17[1] = (__int64 *)v49;
        *v17 = (__int64 *)&v48;
        *v29 = (__int64 *)v17;
        v49 = v17;
      }
    }
    if ( v16 )
      PmTakeDisk((struct _DEVICE_EXTENSION *)DeviceExtension);
    v4 = v50;
    if ( (v52 & 0x40) != 0 )
      PmQueryDepends((struct _DEVICE_EXTENSION *)DeviceExtension, &v43);
    if ( (v52 & 0x80u) != 0 )
      PmPowerChanged((struct _DEVICE_EXTENSION *)DeviceExtension, &v43);
    if ( (v52 & 0x20) != 0 )
      PmSplitAndRedirect((struct _DEVICE_EXTENSION *)DeviceExtension, &v43);
    if ( (v52 & 0x100) != 0 )
      PmQueryVeto((struct _DEVICE_EXTENSION *)DeviceExtension, &v43);
    if ( (v52 & 0x400) != 0 )
      v51 = 1;
    while ( v43.Flink != &v43 )
    {
      if ( v43.Flink->Blink != &v43 )
        goto LABEL_79;
      Flink = v43.Flink->Flink;
      if ( v43.Flink->Flink->Blink != v43.Flink )
        goto LABEL_79;
      v43.Flink = v43.Flink->Flink;
      Flink->Blink = &v43;
    }
    while ( 1 )
    {
      v18 = v44;
      if ( v44 == (__int64 *)&v44 )
        break;
      if ( (__int64 **)v44[1] != &v44 )
        goto LABEL_79;
      v40 = (__int64 *)*v44;
      if ( *(__int64 **)(*v44 + 8) != v44 )
        goto LABEL_79;
      v44 = (__int64 *)*v44;
      v40[1] = (__int64)&v44;
      if ( (v18[2] & 0x10) != 0 )
      {
        PmPartitionChanged((struct _DEVICE_EXTENSION *)DeviceExtension, (struct _PARTITION_EXTENSION *)(v18 - 15));
        v50 = v4;
      }
    }
    if ( (v52 & 4) != 0 )
    {
      PmGiveDisk((struct _DEVICE_EXTENSION *)DeviceExtension);
      v50 = v4;
    }
    while ( 1 )
    {
      v19 = v46;
      if ( v46 == (__int64 *)&v46 )
        break;
      if ( (__int64 **)v46[1] != &v46 )
        goto LABEL_79;
      v20 = (__int64 *)*v46;
      if ( *(__int64 **)(*v46 + 8) != v46 )
        goto LABEL_79;
      v46 = (__int64 *)*v46;
      v20[1] = (__int64)&v46;
      PmGivePartition((struct _DEVICE_EXTENSION *)DeviceExtension, (struct _PARTITION_EXTENSION *)(v19 - 15));
    }
  }
  DeviceExtension[816] = 0;
  KeSetEvent((PRKEVENT)(DeviceExtension + 824), 0, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 14, v8);
  KeReleaseMutex((PRKMUTEX)DeviceExtension + 1, 0);
LABEL_25:
  PmDecrementPendingPartitionsCount(DeviceExtension, v3);
  if ( v51 )
    PmSendTelemetry((struct _DEVICE_EXTENSION *)DeviceExtension);
  while ( 1 )
  {
    v15 = v48;
    if ( v48 == (__int64 *)&v48 )
      break;
    if ( (__int64 **)v48[1] != &v48 )
      goto LABEL_79;
    v30 = (__int64 *)*v48;
    if ( *(__int64 **)(*v48 + 8) != v48 )
      goto LABEL_79;
    v48 = (__int64 *)*v48;
    v30[1] = (__int64)&v48;
    PmDeletePartition(v15 - 15);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), *((PVOID *)DeviceExtension + 106), 0x20u);
}
