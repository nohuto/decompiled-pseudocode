/*
 * XREFs of WorkerRoutine @ 0x1C0063A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C0019218 @ 0x1C0019218 (sub_1C0019218.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C0060EDC @ 0x1C0060EDC (sub_1C0060EDC.c)
 */

void __fastcall WorkerRoutine(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  _QWORD *DeviceExtension; // rdi
  CCHAR v4; // si
  int v5; // [rsp+28h] [rbp-A0h]
  int v6; // [rsp+28h] [rbp-A0h]
  _QWORD Dst[15]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[3]; // [rsp+A8h] [rbp-20h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset_0(Dst, 0, sizeof(Dst));
  v8[1] = v8;
  v8[0] = v8;
  Dst[0] = DeviceExtension[3];
  CMSPAddress::get_DynamicTerminalClasses(
    (CMSPAddress *)Dst,
    (struct tagVARIANT *)*((unsigned int *)DeviceExtension + 24));
  sub_1C0019218((__int64)Dst);
  v4 = 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension[3] + 5696LL), 0, 0) )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 8) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      v5 = *((_DWORD *)Context[1] + 12);
      sub_1C003F0C4(
        (__int64)off_1C0093070->AttachedDevice,
        0x3Au,
        (__int64)&unk_1C0083530,
        DeviceExtension,
        Context[1],
        v5);
    }
    if ( (qword_1C0093468 & 0x10) != 0 )
      sub_1C0060EDC(DeviceExtension[3], (__int64)Context[1], *(_QWORD *)(*((_QWORD *)Context[1] + 23) + 8LL));
    v4 = 1;
LABEL_14:
    sub_1C0003440((PIRP)Context[1], v4, *((_DWORD *)Context[1] + 12));
    goto LABEL_15;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(DeviceExtension[3] + 5696LL), 0xFFFFFFFF) == 1 )
  {
    *((_QWORD *)Context[1] + 7) = 0LL;
    *((_DWORD *)Context[1] + 12) = 0;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      v6 = *((_DWORD *)Context[1] + 12);
      sub_1C003F0C4(
        (__int64)off_1C0093070->AttachedDevice,
        0x3Bu,
        (__int64)&unk_1C0083530,
        DeviceExtension[3],
        Context[1],
        v6);
    }
    goto LABEL_14;
  }
LABEL_15:
  IoFreeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  sub_1C000729C((__int64)DeviceExtension);
}
