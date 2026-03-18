/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1406D7B6C
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x140693570 (CmpDoWritethroughReparse.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4AE0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077CF00 (CmpStartSiloRegistryNamespace.c)
 *     CmpIsKeyDeleted @ 0x1407CB1FC (CmpIsKeyDeleted.c)
 *     CmpReportNotify @ 0x1407D1BB0 (CmpReportNotify.c)
 *     CmpAssignKeySecurity @ 0x14085838C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB6F0 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A0B990 (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D0A0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13B64 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13EA0 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A190BC (CmpDoBuildVirtualStack.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B0E8 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmpStartKcbStack @ 0x1406D7D20 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406D7D60 (CmpPopulateKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // r11d

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 66));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
