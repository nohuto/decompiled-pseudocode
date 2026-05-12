/*
 * XREFs of sub_1C0026DB0 @ 0x1C0026DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0065E24 @ 0x1C0065E24 (sub_1C0065E24.c)
 */

void __fastcall sub_1C0026DB0(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 76, 0);
  sub_1C0065E24((PVOID)Context);
}
