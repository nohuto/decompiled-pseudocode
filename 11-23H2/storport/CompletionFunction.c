/*
 * XREFs of CompletionFunction @ 0x1C0014960
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

void __fastcall CompletionFunction(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PVOID DeviceExtension; // rbx
  int v7; // esi

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 56LL, &unk_1C008A080, DeviceExtension, Context);
  }
  if ( *(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 4896LL)
    && _InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 878, 0, 1) == 1 )
  {
    sub_1C0008BB4(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
  }
  *((_BYTE *)DeviceExtension + 449) &= ~1u;
  v7 = sub_1C0003440(Context, 0, IoStatus->Status);
  sub_1C000729C((__int64)DeviceExtension);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 57LL, &unk_1C008A080, DeviceExtension, Context, v7);
  }
}
