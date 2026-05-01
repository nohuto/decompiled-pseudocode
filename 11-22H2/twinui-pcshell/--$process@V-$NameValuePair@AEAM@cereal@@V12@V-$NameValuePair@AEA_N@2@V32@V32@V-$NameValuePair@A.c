/*
 * XREFs of ??$process@V?$NameValuePair@AEAM@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@0$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x180653130
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAM@2@V32@V?$NameValuePair@AEA_N@2@V42@V42@V?$NameValuePair@AEAI@2@V52@V?$NameValuePair@AEAJ@2@V62@V62@V62@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAM@1@1$$QEAV?$NameValuePair@AEA_N@1@22$$QEAV?$NameValuePair@AEAI@1@3$$QEAV?$NameValuePair@AEAJ@1@444@Z @ 0x180653558 (--$process@V-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAM@2@V32@V-$NameValuePair@AEA_N@2@V.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ??$process@V?$NameValuePair@AEAM@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x180653354 (--$process@V-$NameValuePair@AEAM@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V-$NameValuePair@AEAI@.c)
 *     ?GetDouble@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBANXZ @ 0x1806543F4 (-GetDouble@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<float &>,cereal::NameValuePair<float &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // esi
  __int64 v15; // r10
  float *v16; // rdi
  cereal::JSONInputArchive *v17; // rbx
  __int64 v18; // rax
  double Double; // xmm0_8
  __int64 v20; // rax
  float v21; // xmm1_4

  v12 = a1;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v15 + 304) = *a2;
  v16 = (float *)a2[1];
  v17 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v15 + 32) + 32LL);
  cereal::JSONInputArchive::search(v17);
  v18 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v17 + 43) - 40LL);
  Double = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetDouble(v18);
  v20 = *((_QWORD *)v17 + 43);
  v21 = Double;
  *v16 = v21;
  ++*(_QWORD *)(v20 - 16);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<float &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           v12,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
