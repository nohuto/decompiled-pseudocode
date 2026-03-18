/*
 * XREFs of UsbhSendSynchronousUsbIoctlRequest @ 0x1C0021D3C
 * Callers:
 *     UsbhSshPropagateResume @ 0x1C0021BE4 (UsbhSshPropagateResume.c)
 *     UsbhPortResumeTimeout @ 0x1C0038ED0 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 */

__int64 __fastcall UsbhSendSynchronousUsbIoctlRequest(__int64 a1, struct _DEVICE_OBJECT *a2, unsigned int a3)
{
  __int64 v3; // rsi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v6; // rax
  NTSTATUS v7; // eax
  int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v3 = a3;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a2);
  if ( AttachedDeviceReference )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(v3, AttachedDeviceReference, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
    if ( v6 )
    {
      v7 = IofCallDriver(AttachedDeviceReference, v6);
      Status = v7;
      if ( v7 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      else
      {
        IoStatusBlock.Status = v7;
      }
      ObfDereferenceObject(AttachedDeviceReference);
    }
    else
    {
      ObfDereferenceObject(AttachedDeviceReference);
      Status = -1073741670;
    }
  }
  else
  {
    Status = -1073741810;
  }
  Log(a1, 32, 1397313362, v3, Status);
  return (unsigned int)Status;
}
