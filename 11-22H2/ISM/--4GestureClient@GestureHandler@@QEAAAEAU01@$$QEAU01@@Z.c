/*
 * XREFs of ??4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x180164A20
 * Callers:
 *     ?RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x180165DE4 (-RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024A54 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801649D0 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall GestureHandler::GestureClient::operator=(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=((__int64 *)(a1 + 8), (char *)(a2 + 8));
  Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(a1 + 16), (char *)(a2 + 16));
  Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(a1 + 24), (char *)(a2 + 24));
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32);
  return a1;
}
