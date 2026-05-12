/*
 * XREFs of sub_1C004E2E0 @ 0x1C004E2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C004E0D0 @ 0x1C004E0D0 (sub_1C004E0D0.c)
 */

void __fastcall sub_1C004E2E0(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1404, 0);
  sub_1C004E0D0((char *)Context);
}
