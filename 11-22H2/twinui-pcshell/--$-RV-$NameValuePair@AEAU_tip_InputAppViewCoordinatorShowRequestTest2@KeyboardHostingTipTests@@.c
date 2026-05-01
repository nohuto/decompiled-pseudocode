/*
 * XREFs of ??$?RV?$NameValuePair@AEAU_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@1@@Z @ 0x180204A28
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18020C950 (-serialize@-$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTe.c)
 * Callees:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18020609C (--$serialize@VJSONOutputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHo.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2 &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rbx

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v4 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 408) = *a2;
  v5 = a2[1];
  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v4 + 32));
  KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::serialize<cereal::JSONOutputArchive>(
    v5,
    *(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL));
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v4 + 32));
  return *(_QWORD *)(a1 + 32);
}
