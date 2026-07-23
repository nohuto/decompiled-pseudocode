/*
 * XREFs of IoCancelFileOpen @ 0x140935F60
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_14020B0A0 @ 0x14020B0A0 (sub_14020B0A0.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AA860 @ 0x1402AA860 (sub_1402AA860.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_1403489B0 @ 0x1403489B0 (sub_1403489B0.c)
 *     PoCallDriver @ 0x1403A6C60 (PoCallDriver.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  bool v2; // zf
  __int64 v5; // rdx
  IRP *v6; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = (FileObject->Flags & 0x40000) == 0;
  memset(&Event, 0, sizeof(Event));
  if ( !v2 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( (FileObject->Flags & 0x4000000) == 0 )
    KeResetEvent(&FileObject->Event);
  LOBYTE(v5) = DeviceObject->StackSize;
  v6 = (IRP *)sub_1402AA860((__int64)DeviceObject, v5);
  v6->Tail.Overlay.OriginalFileObject = FileObject;
  CurrentThread = KeGetCurrentThread();
  v6->Overlay.AllocationSize.QuadPart = 0LL;
  v6->Tail.Overlay.Thread = CurrentThread;
  v6->UserIosb = &v6->IoStatus;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  v6->RequestorMode = 0;
  v6->UserEvent = &Event;
  v6->Flags = 1028;
  CurrentStackLocation[-1].MajorFunction = 18;
  CurrentStackLocation[-1].FileObject = FileObject;
  sub_1402AE1B0((__int64)v6);
  if ( PoCallDriver(DeviceObject, v6) == 259 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  sub_1403489B0(v6);
  IoFreeIrp(v6);
  KeResetEvent(&FileObject->Event);
  FileObject->Flags |= 0x200000u;
  if ( FileObject->FileObjectExtension )
    sub_14020B0A0((__int64)FileObject);
}
