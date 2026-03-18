/*
 * XREFs of CmpUnlockKcbStack @ 0x1406D5368
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4AE0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1406D5BA0 (CmpQueryKeySecurity.c)
 *     CmQueryValueKey @ 0x1406E02C0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077CF00 (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x14085838C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB6F0 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A0B990 (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D0A0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13B64 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13EA0 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A190BC (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140A265AC (CmpPromoteKey.c)
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
