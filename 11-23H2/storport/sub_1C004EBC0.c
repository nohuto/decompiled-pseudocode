/*
 * XREFs of sub_1C004EBC0 @ 0x1C004EBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C004E9A0 @ 0x1C004E9A0 (sub_1C004E9A0.c)
 */

void __fastcall sub_1C004EBC0(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1404, 0);
  sub_1C004E9A0((PVOID)Context);
}
