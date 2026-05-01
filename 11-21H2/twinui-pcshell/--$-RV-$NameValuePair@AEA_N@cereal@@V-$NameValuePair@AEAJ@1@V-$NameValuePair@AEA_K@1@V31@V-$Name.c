/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_K@1@V31@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C1954
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_AppPrelaunch@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805BC2AC (--$serialize@VJSONInputArchive@cereal@@@_tip_AppPrelaunch@@QEAAXAEAVJSONInputArchive@cereal@@@Z.c)
 * Callees:
 *     ??$load@VJSONInputArchive@cereal@@HV?$allocator@H@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C2E88 (--$load@VJSONInputArchive@cereal@@HV-$allocator@H@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV-$.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x18034A70C (--$process@V-$NameValuePair@AEAJ@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x18034AAB4 (--$process@V-$NameValuePair@AEA_N@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180351DEC (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@@Z @ 0x1805BC218 (--$process@V-$NameValuePair@AEA_K@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<std::vector<int> &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax

  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a1, a2);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<long &>>(a1, a3);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>>(a1, a4);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>>(a1, a5);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v9 + 304) = *a6;
  v10 = a6[1];
  cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(v9 + 32));
  cereal::load<cereal::JSONInputArchive,int,std::allocator<int>>(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL), v10);
  v11 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v11 + 344) -= 40LL;
  ++*(_QWORD *)(*(_QWORD *)(v11 + 344) - 16LL);
  return *(_QWORD *)(a1 + 32);
}
