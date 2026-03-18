/*
 * XREFs of IoCallDriver @ 0x1405567F0
 * Callers:
 *     IoCancelFileOpen @ 0x140946D00 (IoCancelFileOpen.c)
 * Callees:
 *     IofCallDriver @ 0x14022EEF0 (IofCallDriver.c)
 */

NTSTATUS __fastcall IoCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return IofCallDriver(a1, a2);
}
