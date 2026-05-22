/*
 * XREFs of ??$?4U?$default_delete@ULegacyDeviceInfo@@@std@@$0A@@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C4D2C
 * Callers:
 *     ??$_Insert_or_assign@AEBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x1800403E0 (--$_Insert_or_assign@AEBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800C6AE8 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x1800CA6AC (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 */

__int64 *__fastcall std::unique_ptr<LegacyDeviceInfo>::operator=<std::default_delete<LegacyDeviceInfo>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    std::unique_ptr<LegacyDeviceInfo>::reset(a1, v4);
  }
  return a1;
}
