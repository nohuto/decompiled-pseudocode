/*
 * XREFs of CmpUnlockKcbStack @ 0x1406D5398
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DE24 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140616E3C (CmDeleteLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4B10 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1406D5BD0 (CmpQueryKeySecurity.c)
 *     CmQueryValueKey @ 0x1406E02F0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D0F0 (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x1408585CC (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB940 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A0BC40 (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D350 (CmOpenKeyForBugCheckRecovery.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13E14 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A14150 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A166C4 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1936C (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpUnlockKcbStack(__int64 a1)
{
  __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    result = CmpUnlockKcb(v3);
  }
  return result;
}
