/*
 * XREFs of IoVerifyVolume @ 0x1409367E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A4C30 @ 0x1402A4C30 (sub_1402A4C30.c)
 *     sub_1402A6FB0 @ 0x1402A6FB0 (sub_1402A6FB0.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140556F1C @ 0x140556F1C (sub_140556F1C.c)
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_140810F24 @ 0x140810F24 (sub_140810F24.c)
 *     sub_140811370 @ 0x140811370 (sub_140811370.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_DeviceLock; // r12
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  PDEVICE_OBJECT v8; // rdi
  struct _DEVICE_OBJECT *i; // rax
  __int64 v10; // rax
  IRP *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+40h] BYREF

  DeviceObjecta = 0LL;
  v17 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  p_DeviceLock = &DeviceObject->DeviceLock;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !sub_140556F1C((__int64)DeviceObject, (ULONG_PTR *)&v17, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)sub_140811370((__int64)DeviceObject) < 0
      || (sub_140810F24((__int64)DeviceObject),
          v17 = 0LL,
          (int)sub_14068E624(DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v17) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v17 )
    {
      sub_1402A6FB0(v17, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v8 = i;
  LOBYTE(v7) = v8->StackSize;
  v10 = sub_1402AACA0((__int64)v8, v7, 0LL);
  v11 = (IRP *)v10;
  if ( !v10 )
  {
    sub_1402A4C30(v17);
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(v10 + 16) = 66;
  *(_BYTE *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 80) = &Event;
  *(_QWORD *)(v10 + 72) = &v15;
  v12 = *(_QWORD *)(v10 + 184);
  v13 = v17;
  *(_QWORD *)(v10 + 152) = KeGetCurrentThread();
  *(_BYTE *)(v12 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v12 - 56) = DeviceObjecta;
  *(_WORD *)(v12 - 72) = 525;
  *(_QWORD *)(v12 - 64) = v13;
  sub_1402AE1B0(v10);
  v6 = IofCallDriver(v8, v11);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v15;
  }
  sub_1402A4C30(v13);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v6;
}
