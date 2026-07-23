/*
 * XREFs of sub_140A651B8 @ 0x140A651B8
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_140255C70 @ 0x140255C70 (sub_140255C70.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x14041EE00 (ZwSetSystemInformation.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoBuildSynchronousFsdRequest @ 0x140705EF0 (IoBuildSynchronousFsdRequest.c)
 *     sub_1409404FC @ 0x1409404FC (sub_1409404FC.c)
 *     sub_140A65554 @ 0x140A65554 (sub_140A65554.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A80940 @ 0x140A80940 (sub_140A80940.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 */

void __fastcall sub_140A651B8(int a1)
{
  __int64 v2; // rdx
  struct _DEVICE_OBJECT *v3; // rdi
  IRP *v4; // rax
  PVOID *v5; // rax
  PVOID *v6; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v8; // rax
  PVOID *v9; // rax
  PVOID *v10; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  int SystemInformation; // [rsp+80h] [rbp+10h] BYREF

  SystemInformation = 0;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (unsigned int)sub_1402DA4B0() )
    sub_140A81780(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease(&stru_140C46E08);
      ExAcquireResourceExclusiveLite(&stru_140C46E20, 1u);
      sub_140A65554(&qword_140C46F30);
      sub_140A65554(&qword_140C46F40);
      sub_140A65554(&qword_140C46F10);
      while ( 1 )
      {
        v9 = (PVOID *)sub_140255C70((_QWORD **)&qword_140C46F60);
        v10 = v9;
        if ( !v9 )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v9[2]);
        v8 = IoBuildSynchronousFsdRequest(0x10u, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
        if ( v8 && IofCallDriver(AttachedDeviceReference, v8) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(v10[2]);
        ExFreePoolWithTag(v10, 0);
        KeResetEvent(&Event);
      }
    }
  }
  else
  {
    if ( ZwQuerySystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u, 0LL) >= 0
      && (SystemInformation & 0x20) != 0 )
    {
      sub_14042A5E0(0LL, v2);
      SystemInformation = 0;
      ZwSetSystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u);
    }
    sub_1409404FC();
    while ( 1 )
    {
      v5 = (PVOID *)sub_140255C70((_QWORD **)&qword_140C46F50);
      v6 = v5;
      if ( !v5 )
        break;
      v3 = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v5[2]);
      v4 = IoBuildSynchronousFsdRequest(0x10u, v3, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      if ( v4 && IofCallDriver(v3, v4) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v3);
      ObfDereferenceObject(v6[2]);
      ExFreePoolWithTag(v6, 0);
      KeResetEvent(&Event);
    }
    if ( (dword_140C29FC0 & 0x10) != 0 )
      sub_140A80940();
    SystemInformation = 2;
    ZwSetSystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u);
  }
}
