/*
 * XREFs of sub_1C004F2A0 @ 0x1C004F2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C004F060 @ 0x1C004F060 (sub_1C004F060.c)
 */

void __fastcall sub_1C004F2A0(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 488, 0);
  sub_1C004F060((char *)Context);
}
