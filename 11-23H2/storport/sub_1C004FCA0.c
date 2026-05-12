/*
 * XREFs of sub_1C004FCA0 @ 0x1C004FCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C004FA08 @ 0x1C004FA08 (sub_1C004FA08.c)
 */

void __fastcall sub_1C004FCA0(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 488, 0);
  sub_1C004FA08((char *)Context);
}
