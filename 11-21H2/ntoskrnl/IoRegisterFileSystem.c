/*
 * XREFs of IoRegisterFileSystem @ 0x14080F4B0
 * Callers:
 *     sub_140B229D0 @ 0x140B229D0 (sub_140B229D0.c)
 * Callees:
 *     sub_1402A6E00 @ 0x1402A6E00 (sub_1402A6E00.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403A5A30 @ 0x1403A5A30 (sub_1403A5A30.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     FsRtlSetDriverBacking @ 0x14080F640 (FsRtlSetDriverBacking.c)
 */

void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rdx
  ULONG DeviceType; // eax
  __int64 *v5; // rcx
  ULONG Flags; // eax
  struct _LIST_ENTRY *v7; // r8
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v8; // rax
  __int64 *v9; // rdi
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  struct _LIST_ENTRY *Blink; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v12; // rax

  FsRtlSetDriverBacking(DeviceObject->DriverObject, 1LL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  sub_1403A5A30(1);
  ExAcquireResourceExclusiveLite(&stru_140C46E20, 1u);
  DeviceType = DeviceObject->DeviceType;
  if ( DeviceType == 20 )
  {
    v5 = &qword_140C46F20;
  }
  else
  {
    switch ( DeviceType )
    {
      case 3u:
        v5 = &qword_140C46F40;
        break;
      case 8u:
        v5 = &qword_140C46F30;
        break;
      case 0x20u:
        v5 = &qword_140C46F10;
        break;
      default:
        goto LABEL_13;
    }
    DeviceObject->DriverObject->Flags |= 0x80u;
  }
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x10000) != 0 )
  {
    Flink = (struct _LIST_ENTRY *)v5[1];
    p_Queue = &DeviceObject->Queue;
    Blink = Flink->Blink;
    if ( Blink->Flink == Flink )
    {
      p_Queue->ListEntry.Flink = Flink;
      DeviceObject->Queue.ListEntry.Blink = Blink;
      Blink->Flink = &p_Queue->ListEntry;
      Flink->Blink = &p_Queue->ListEntry;
      goto LABEL_13;
    }
LABEL_26:
    __fastfail(3u);
  }
  Flink = (struct _LIST_ENTRY *)*v5;
  if ( (Flags & 0x200) != 0 )
  {
    v12 = &DeviceObject->Queue;
    if ( (__int64 *)Flink->Blink == v5 )
    {
      v12->ListEntry.Flink = Flink;
      DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v5;
      Flink->Blink = &v12->ListEntry;
      *v5 = (__int64)v12;
      goto LABEL_13;
    }
    goto LABEL_26;
  }
  v7 = (struct _LIST_ENTRY *)v5;
  while ( Flink != (struct _LIST_ENTRY *)v5 && _bittest((const signed __int32 *)&Flink[-2], 9u) )
  {
    v7 = Flink;
    Flink = Flink->Flink;
  }
  Flink = v7->Flink;
  v8 = &DeviceObject->Queue;
  if ( v7->Flink->Blink != v7 )
    goto LABEL_26;
  v8->ListEntry.Flink = Flink;
  DeviceObject->Queue.ListEntry.Blink = v7;
  Flink->Blink = &v8->ListEntry;
  v7->Flink = &v8->ListEntry;
LABEL_13:
  ++dword_140C46D80;
  DeviceObject->Flags &= ~0x80u;
  v9 = (__int64 *)qword_140C46FA0;
  while ( v9 != &qword_140C46FA0 )
  {
    LOBYTE(Flink) = 1;
    v9 = (__int64 *)*v9;
    sub_14042A5E0(DeviceObject, Flink);
  }
  sub_1403A5A30(0);
  ExReleaseResourceLite(&stru_140C46E20);
  sub_1403A5A30(0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  sub_1402A6E00((ULONG_PTR)DeviceObject, 1);
}
