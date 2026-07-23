/*
 * XREFs of sub_14080AB40 @ 0x14080AB40
 * Callers:
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_1409589A4 @ 0x1409589A4 (sub_1409589A4.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     IoCreateStreamFileObjectLite @ 0x14074CD20 (IoCreateStreamFileObjectLite.c)
 */

__int64 __fastcall sub_14080AB40(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v1; // r14
  NTSTATUS v2; // edi
  PDEVICE_OBJECT i; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // r12
  ULONG DeviceType; // eax
  __int64 *v7; // r14
  __int64 *j; // r15
  struct _DEVICE_OBJECT *k; // r13
  PIRP v10; // rax
  int Status; // eax
  PFILE_OBJECT Object; // [rsp+58h] [rbp-60h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-48h] BYREF
  HANDLE InputBuffer; // [rsp+C8h] [rbp+10h] BYREF
  PDEVICE_OBJECT v18; // [rsp+D0h] [rbp+18h]

  v1 = DeviceObject;
  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  for ( i = DeviceObject; ; i = i->AttachedDevice )
  {
    v18 = i;
    if ( !i )
      break;
    if ( i->Vpb )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      KeWaitForSingleObject(&i->DeviceLock, Executive, 0, 0, 0LL);
      InputBuffer = 0LL;
      Object = IoCreateStreamFileObjectLite(0LL, i);
      Object->Vpb = i->Vpb;
      v2 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &InputBuffer);
      if ( v2 >= 0 )
      {
        v5 = KeGetCurrentThread();
        --*((_WORD *)v5 + 242);
        ExAcquireResourceSharedLite(&stru_140C46E20, 1u);
        DeviceType = v1->DeviceType;
        if ( DeviceType == 7 || DeviceType == 36 )
        {
          v7 = &qword_140C46F30;
        }
        else
        {
          v7 = &qword_140C46F40;
          if ( DeviceType != 2 )
            v7 = &qword_140C46F10;
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v2 = 0;
        for ( j = (__int64 *)*v7; j != v7 && (__int64 *)*j != v7; j = (__int64 *)*j )
        {
          for ( k = (struct _DEVICE_OBJECT *)(j - 10); k->AttachedDevice; k = k->AttachedDevice )
            ;
          KeResetEvent(&Event);
          v10 = IoBuildDeviceIoControlRequest(0x90054u, k, &InputBuffer, 8u, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( !v10 )
          {
            v2 = -1073741670;
            break;
          }
          *(_WORD *)&v10->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 13;
          Status = IofCallDriver(k, v10);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          else
          {
            IoStatusBlock.Status = Status;
            IoStatusBlock.Information = 0LL;
          }
          if ( Status == -1073741808 || Status == -1073741822 )
            Status = 0;
          if ( v2 >= 0 && Status < 0 )
            v2 = Status;
        }
        ExReleaseResourceLite(&stru_140C46E20);
        sub_1402AC800((__int64)v5);
        if ( Object )
        {
          ObfDereferenceObject(Object);
          if ( InputBuffer )
            ZwClose(InputBuffer);
        }
      }
      KeSetEvent(&i->DeviceLock, 0, 0);
      KeLeaveCriticalRegion();
      v1 = DeviceObject;
    }
  }
  return (unsigned int)v2;
}
