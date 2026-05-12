/*
 * XREFs of sub_1C00151A0 @ 0x1C00151A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

void __fastcall sub_1C00151A0(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *DeviceExtension; // rdi
  int v7; // esi

  DeviceExtension = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceObject->DeviceExtension;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 37LL, &unk_1C008A080, DeviceExtension, Context);
  }
  v7 = sub_1C0003440(Context, 0, IoStatus->Status);
  ExReleaseRundownProtectionCacheAware(DeviceExtension[37]);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 38LL, &unk_1C008A080, DeviceExtension, Context, v7);
  }
}
