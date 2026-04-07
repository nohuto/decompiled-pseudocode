/*
 * XREFs of ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800439D4
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180011FA0 (-serialize@-$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@detail.c)
 *     ??$process@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x180042840 (--$process@AEAV-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$allocat.c)
 *     ??$process@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800428FC (--$process@AEAV-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 *     ?serialize@?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1800F6B40 (-serialize@-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@ti.c)
 * Callees:
 *     ??$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAX$$QEAW4NodeType@JSONOutputArchive@cereal@@@Z @ 0x180043A1C (--$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@-$deque@W4NodeType@JSONOutputArc.c)
 *     ??$_Emplace_back_internal@I@?$deque@IV?$allocator@I@std@@@std@@AEAAX$$QEAI@Z @ 0x180043AE0 (--$_Emplace_back_internal@I@-$deque@IV-$allocator@I@std@@@std@@AEAAX$$QEAI@Z.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

void __fastcall cereal::JSONOutputArchive::startNode(cereal::JSONOutputArchive *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  cereal::JSONOutputArchive::writeName(this);
  v2 = 0;
  std::deque<enum cereal::JSONOutputArchive::NodeType>::_Emplace_back_internal<enum cereal::JSONOutputArchive::NodeType>(
    (char *)this + 456,
    &v2);
  v2 = 0;
  std::deque<unsigned int>::_Emplace_back_internal<unsigned int>((char *)this + 416, &v2);
}
