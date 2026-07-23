/*
 * XREFs of IoCallDriver @ 0x140556EB0
 * Callers:
 *     IoCancelFileOpen @ 0x140946F00 (IoCancelFileOpen.c)
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 */

NTSTATUS __fastcall IoCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return IofCallDriver(a1, a2);
}
