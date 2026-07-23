/*
 * XREFs of IoUnregisterFileSystem @ 0x14080C290
 * Callers:
 *     sub_1409B4E80 @ 0x1409B4E80 (sub_1409B4E80.c)
 * Callees:
 *     sub_140259288 @ 0x140259288 (sub_140259288.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __stdcall IoUnregisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rdx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 *v6; // rbx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C46E20, 1u);
  p_Queue = &DeviceObject->Queue;
  Flink = DeviceObject->Queue.ListEntry.Flink;
  if ( Flink )
  {
    if ( (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Flink->Blink != p_Queue
      || (Blink = DeviceObject->Queue.ListEntry.Blink,
          (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Blink->Flink != p_Queue) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  v6 = (__int64 *)qword_140C46FA0;
  while ( v6 != &qword_140C46FA0 )
  {
    v6 = (__int64 *)*v6;
    sub_14042A5E0(DeviceObject, 0LL);
  }
  ++dword_140C46D80;
  ExReleaseResourceLite(&stru_140C46E20);
  sub_1402F9540((__int64)KeGetCurrentThread());
  sub_140259288((ULONG_PTR)DeviceObject, 1);
}
