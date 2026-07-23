/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DE24 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140616E3C (CmDeleteLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x140693570 (CmpDoWritethroughReparse.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4B10 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D0F0 (CmpStartSiloRegistryNamespace.c)
 *     CmpIsKeyDeleted @ 0x1407CB4CC (CmpIsKeyDeleted.c)
 *     CmpReportNotify @ 0x1407D1E80 (CmpReportNotify.c)
 *     CmpAssignKeySecurity @ 0x1408585CC (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB940 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A0BC40 (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D350 (CmOpenKeyForBugCheckRecovery.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13E14 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A14150 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A166C4 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1936C (CmpDoBuildVirtualStack.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B398 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmpStartKcbStack @ 0x1406D7D50 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406D7D90 (CmpPopulateKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // r11d

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 66));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
