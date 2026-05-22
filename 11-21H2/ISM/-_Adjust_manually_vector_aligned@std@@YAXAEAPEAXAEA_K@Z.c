/*
 * XREFs of ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24
 * Callers:
 *     ??$_Emplace_reallocate@UInputSiteId@@@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@QEAAPEAUInputSiteId@@QEAU2@$$QEAU2@@Z @ 0x180002204 (--$_Emplace_reallocate@UInputSiteId@@@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@s.c)
 *     ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180003BF0 (--$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VN.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x1800045B0 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180012788 (--$_Emplace_reallocate@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180012E30 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180013004 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z @ 0x180013ABC (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z.c)
 *     ??_EInputContext@@UEAAPEAXI@Z @ 0x180013D70 (--_EInputContext@@UEAAPEAXI@Z.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180014E30 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800166D0 (-TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextua.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180017B40 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18001B2E0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800356B8 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 *     ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@QEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x1800369F0 (--$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@-$vector@UContextu.c)
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180038070 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x180038BC8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@XZ @ 0x180038C80 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@@s.c)
 *     ??$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x18003CC7C (--$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x1800466A0 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x180086CFC (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Adjust_manually_vector_aligned(void **a1, unsigned __int64 *a2)
{
  _BYTE *v2; // rdx

  *a2 += 39LL;
  v2 = (_BYTE *)*((_QWORD *)*a1 - 1);
  if ( (unsigned __int64)((_BYTE *)*a1 - v2 - 8) > 0x1F )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v2);
    __debugbreak();
    JUMPOUT(0x18007FD56LL);
  }
  *a1 = v2;
}
