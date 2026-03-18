/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1801226D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceResource::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CDeviceResource::AddResourceNotifier((CDeviceResource *)(a1 - *(int *)(a1 - 4) - 160), a2);
}
