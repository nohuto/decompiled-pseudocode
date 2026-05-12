/*
 * XREFs of ?PartitionIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001590
 * Callers:
 *     ?PartitionWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001560 (-PartitionWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PartitionOverlapCount @ 0x1C0001EB0 (PartitionOverlapCount.c)
 *     PmEnumerateOverlaps @ 0x1C0004060 (PmEnumerateOverlaps.c)
 */

__int64 __fastcall PartitionIo(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // r15
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v5; // rcx
  NTSTATUS v7; // ebx
  struct _IO_STACK_LOCATION *v8; // rax
  struct _IO_STACK_LOCATION *v9; // rax
  int v10; // r13d
  char *v11; // r12
  unsigned __int64 Length; // r14
  LARGE_INTEGER ByteOffset; // rbp
  char *v14; // r13
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // r12d
  struct _LIST_ENTRY *v23; // rcx
  struct _LIST_ENTRY *v24; // rax
  struct _LIST_ENTRY *v25; // rcx
  IRP *p_Blink; // rbp
  struct _MDL *v27; // rcx
  unsigned __int64 v28; // rax
  struct _IO_STACK_LOCATION *v29; // rax
  int v30; // ecx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v32; // rax
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  __int128 v34; // [rsp+48h] [rbp-60h] BYREF
  __int128 v35; // [rsp+58h] [rbp-50h]
  unsigned __int64 v36; // [rsp+B0h] [rbp+8h]
  __int64 v37; // [rsp+B0h] [rbp+8h]
  struct _IO_STACK_LOCATION *v38; // [rsp+B8h] [rbp+10h]

  DeviceExtension = (char *)a1->DeviceExtension;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&a2->Tail.Overlay.ListEntry;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v34 = 0LL;
  v35 = 0LL;
  v5 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)DeviceExtension + 50);
  v38 = CurrentStackLocation;
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !ExAcquireRundownProtectionCacheAware(v5) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 56, &LockHandle);
    if ( !ExAcquireRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 50)) )
    {
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v23 = (struct _LIST_ENTRY *)*((_QWORD *)DeviceExtension + 55);
      if ( (char *)v23->Flink != DeviceExtension + 432 )
        goto LABEL_47;
      p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(DeviceExtension + 432);
      v7 = 259;
      p_ListEntry->ListEntry.Blink = v23;
      v23->Flink = &p_ListEntry->ListEntry;
      *((_QWORD *)DeviceExtension + 55) = p_ListEntry;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v7 )
      return (unsigned int)v7;
  }
  p_ListEntry->ListEntry.Blink = &p_ListEntry->ListEntry;
  p_ListEntry->ListEntry.Flink = &p_ListEntry->ListEntry;
  v8 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
  *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
  v8[-1].FileObject = v8->FileObject;
  v8[-1].Control = 0;
  v9 = a2->Tail.Overlay.CurrentStackLocation;
  v9[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PartitionIoCompletion;
  v9[-1].Context = 0LL;
  v9[-1].Control = -32;
  if ( (*((_DWORD *)DeviceExtension + 10) & 0x80u) != 0 )
  {
    v7 = -1073741810;
    goto LABEL_25;
  }
  *(_QWORD *)&v34 = DeviceExtension;
  v10 = (_DWORD)DeviceExtension + 312;
  *((_QWORD *)&v34 + 1) = a2;
  v11 = (char *)*((_QWORD *)DeviceExtension + 39);
  Length = CurrentStackLocation->Parameters.Read.Length;
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( v11 == DeviceExtension + 312 )
  {
LABEL_38:
    if ( Length )
    {
      v21 = 0;
      v7 = PartitionOverlapCount(3, 0, Length, ByteOffset.LowPart, (__int64)&v34);
      if ( v7 < 0 )
        goto LABEL_15;
      ByteOffset.LowPart += Length;
      LODWORD(Length) = 0;
LABEL_14:
      v7 = PartitionOverlapCount(4, 0, Length, ByteOffset.LowPart, (__int64)&v34);
LABEL_15:
      if ( v7 < 0 )
        goto LABEL_25;
      if ( (_DWORD)v35 == 1 )
      {
        a2->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *((_QWORD *)&v35 + 1);
        return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
      }
      v7 = PmEnumerateOverlaps(
             v10,
             v38->Parameters.Read.ByteOffset.QuadPart,
             v38->Parameters.Read.Length,
             (unsigned int)&PartitionOverlapIo,
             (__int64)&v34);
      if ( v7 < 0 )
        goto LABEL_25;
      --a2->Tail.Overlay.CurrentStackLocation;
      --a2->CurrentLocation;
      v29 = a2->Tail.Overlay.CurrentStackLocation;
      a2->IoStatus.Information = 0LL;
      a2->IoStatus.Status = 0;
      v29->Control |= 1u;
      v30 = v35;
      a2->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)(int)v35;
      if ( !v30 )
        return 259;
      while ( 1 )
      {
        Flink = p_ListEntry->ListEntry.Flink;
        if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)p_ListEntry->ListEntry.Flink->Blink != p_ListEntry )
          break;
        v32 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink )
          break;
        p_ListEntry->ListEntry.Flink = v32;
        v32->Blink = &p_ListEntry->ListEntry;
        Flink->Blink = Flink;
        Flink->Flink = Flink;
        IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), (PIRP)&Flink[-11].Blink);
        if ( ++v21 >= (unsigned int)v35 )
          return 259;
      }
LABEL_47:
      __fastfail(3u);
    }
LABEL_13:
    v21 = 0;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v14 = v11;
    v11 = *(char **)v11;
    v15 = *(LARGE_INTEGER *)(v14 + 16);
    if ( v15.QuadPart <= (unsigned __int64)ByteOffset.QuadPart )
      goto LABEL_5;
    v28 = v15.QuadPart - ByteOffset.QuadPart;
    if ( v28 >= Length )
    {
      v10 = (_DWORD)DeviceExtension + 312;
      goto LABEL_38;
    }
    v37 = (unsigned int)v28;
    v7 = PartitionOverlapCount(1, 0, v28, ByteOffset.LowPart, (__int64)&v34);
    if ( v7 < 0 )
      break;
    Length -= v37;
    ByteOffset.QuadPart += v37;
LABEL_5:
    if ( !Length )
      goto LABEL_12;
    v16 = *(LARGE_INTEGER *)(v14 + 16);
    if ( v16.QuadPart > (unsigned __int64)ByteOffset.QuadPart )
      goto LABEL_34;
    v17 = ByteOffset.QuadPart - v16.QuadPart;
    v18 = *((_QWORD *)v14 + 4);
    if ( v17 >= v18 )
      goto LABEL_34;
    v19 = v18 - v17;
    v20 = Length;
    if ( v19 < Length )
      v20 = v19;
    v36 = v20;
    v7 = PartitionOverlapCount(2, (_DWORD)v14, v20, ByteOffset.LowPart, (__int64)&v34);
    if ( v7 < 0 )
      break;
    ByteOffset.QuadPart += v36;
    Length -= v36;
    if ( !Length )
    {
LABEL_12:
      v10 = (_DWORD)DeviceExtension + 312;
      goto LABEL_13;
    }
LABEL_34:
    v10 = (_DWORD)DeviceExtension + 312;
    if ( v11 == DeviceExtension + 312 )
      goto LABEL_38;
  }
LABEL_25:
  while ( 1 )
  {
    v24 = p_ListEntry->ListEntry.Flink;
    if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)p_ListEntry->ListEntry.Flink == p_ListEntry )
      break;
    if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)v24->Blink != p_ListEntry )
      goto LABEL_47;
    v25 = v24->Flink;
    if ( v24->Flink->Blink != v24 )
      goto LABEL_47;
    p_ListEntry->ListEntry.Flink = v25;
    p_Blink = (IRP *)&v24[-11].Blink;
    v25->Blink = &p_ListEntry->ListEntry;
    v27 = (struct _MDL *)v24[-10].Flink;
    if ( v27 )
      IoFreeMdl(v27);
    IoFreeIrp(p_Blink);
  }
  --a2->CurrentLocation;
  --a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
