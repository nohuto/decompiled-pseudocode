/*
 * XREFs of ??$process@V?$NameValuePair@AEAM@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x180653354
 * Callers:
 *     ??$process@V?$NameValuePair@AEAM@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@0$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x180653130 (--$process@V-$NameValuePair@AEAM@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V-$NameValuePair@A.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V?$NameValuePair@AEAI@2@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00$$QEAV?$NameValuePair@AEAI@1@1$$QEAV?$NameValuePair@AEAJ@1@222@Z @ 0x180653698 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V-$NameValuePair@AEAI@2@V32@V-$NameValuePair@A.c)
 *     ?GetDouble@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBANXZ @ 0x1806543F4 (-GetDouble@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<float &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
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
        __int64 a11)
{
  int v11; // esi
  __int64 v14; // r10
  float *v15; // rdi
  cereal::JSONInputArchive *v16; // rbx
  __int64 v17; // rax
  double Double; // xmm0_8
  __int64 v19; // rax
  float v20; // xmm1_4

  v11 = a1;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v14 + 304) = *a2;
  v15 = (float *)a2[1];
  v16 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v14 + 32) + 32LL);
  cereal::JSONInputArchive::search(v16);
  v17 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v16 + 43) - 40LL);
  Double = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetDouble(v17);
  v19 = *((_QWORD *)v16 + 43);
  v20 = Double;
  *v15 = v20;
  ++*(_QWORD *)(v19 - 16);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           v11,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
