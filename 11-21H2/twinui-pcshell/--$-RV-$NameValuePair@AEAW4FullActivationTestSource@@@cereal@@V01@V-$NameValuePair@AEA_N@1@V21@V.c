/*
 * XREFs of ??$?RV?$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V01@V?$NameValuePair@AEA_N@1@V21@V21@V21@V21@V21@V21@V21@V21@V21@V21@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V21@V?$NameValuePair@AEAI@1@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAW4FullActivationTestSource@@@1@0$$QEAV?$NameValuePair@AEA_N@1@1111111111$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x180198E58
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_SearchFullActivationTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18019AE50 (--$serialize@VJSONOutputArchive@cereal@@@_tip_SearchFullActivationTest@@QEAAXAEAVJSONOutputArchi.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAW4SearchAppState@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@@Z @ 0x18019A664 (--$process@V-$NameValuePair@AEAW4SearchAppState@@@cereal@@@-$OutputArchive@VJSONOutputArchive@ce.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$NameValuePair@AEAI@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000000000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x18019A7B0 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V-$NameValuePa.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<enum FullActivationTestSource &>,cereal::NameValuePair<enum FullActivationTestSource &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v18; // rbx
  __int64 v21; // rbx

  v18 = *(_QWORD *)(a1 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<enum SearchAppState &>>(*(_QWORD *)(v18 + 32));
  v21 = *(_QWORD *)(v18 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<enum SearchAppState &>>(*(_QWORD *)(v21 + 32));
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>>(
    *(_QWORD *)(v21 + 32),
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18);
  return *(_QWORD *)(a1 + 32);
}
