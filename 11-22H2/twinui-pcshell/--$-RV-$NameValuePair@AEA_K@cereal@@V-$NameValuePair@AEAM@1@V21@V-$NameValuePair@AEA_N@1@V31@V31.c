/*
 * XREFs of ??$?RV?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAM@1@V21@V?$NameValuePair@AEA_N@1@V31@V31@V?$NameValuePair@AEAI@1@V41@V?$NameValuePair@AEAJ@1@V51@V51@V51@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAM@1@1$$QEAV?$NameValuePair@AEA_N@1@22$$QEAV?$NameValuePair@AEAI@1@3$$QEAV?$NameValuePair@AEAJ@1@444@Z @ 0x180652CAC
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x180653E04 (--$serialize@VJSONOutputArchive@cereal@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVJSONOutputArchive@c.c)
 * Callees:
 *     ??$process@AEA_K@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z @ 0x18019C508 (--$process@AEA_K@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z.c)
 *     ??$process@V?$NameValuePair@AEAM@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@0$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x18065323C (--$process@V-$NameValuePair@AEAM@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V-$Na_ea_18065323C.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<float &>,cereal::NameValuePair<float &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rbx
  __int64 v17; // rcx

  v13 = *(_QWORD *)(a1 + 32);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v17 + 408) = *(_QWORD *)a2;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned __int64 &>(
    *(_QWORD *)(v17 + 32),
    *(unsigned __int64 **)(a2 + 8));
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<float &>,cereal::NameValuePair<float &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
    *(_QWORD *)(v13 + 32),
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13);
  return *(_QWORD *)(a1 + 32);
}
