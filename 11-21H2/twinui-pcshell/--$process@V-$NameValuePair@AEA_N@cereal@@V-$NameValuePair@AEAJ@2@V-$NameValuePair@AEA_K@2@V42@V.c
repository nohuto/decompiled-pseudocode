/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@2@V?$NameValuePair@AEA_K@2@V42@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C3314
 * Callers:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_K@1@V31@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C19FC (--$-RV-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@1@V-$NameValuePair@AEA_K@_ea_1801C19FC.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180136914 (--$process@V-$NameValuePair@AEA_N@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cerea.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x18013698C (--$process@V-$NameValuePair@AEAJ@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal.c)
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@@Z @ 0x18017D770 (--$process@V-$NameValuePair@AEA_K@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cerea.c)
 *     ??$save@VJSONOutputArchive@cereal@@HV?$allocator@H@std@@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C33C4 (--$save@VJSONOutputArchive@cereal@@HV-$allocator@H@std@@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<std::vector<int> &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx

  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(a1 + 32), a2);
  v9 = *(_QWORD *)(a1 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>>(*(_QWORD *)(v9 + 32), a3);
  v10 = *(_QWORD *)(v9 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>>(
    *(_QWORD *)(v10 + 32),
    a4);
  v11 = *(_QWORD *)(v10 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>>(
    *(_QWORD *)(v11 + 32),
    a5);
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL) + 32LL);
  v13 = *(_QWORD *)(v12 + 32);
  *(_QWORD *)(v12 + 408) = *a6;
  v14 = a6[1];
  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v13 + 32));
  cereal::save<cereal::JSONOutputArchive,int,std::allocator<int>>(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL), v14);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v13 + 32));
}
