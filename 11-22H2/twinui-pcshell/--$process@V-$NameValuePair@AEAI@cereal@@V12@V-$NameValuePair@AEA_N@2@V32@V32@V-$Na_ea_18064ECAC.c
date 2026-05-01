/*
 * XREFs of ??$process@V?$NameValuePair@AEAI@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@V42@V42@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@0$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAJ@1@22222@Z @ 0x18064ECAC
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_TouchGestureTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18064FB64 (--$serialize@VJSONOutputArchive@cereal@@@_tip_TouchGestureTest@@QEAAXAEAVJSONOutputArchive@cerea.c)
 * Callees:
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x18018D048 (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V?$NameValuePair@AEAJ@2@V32@V32@V32@V32@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00$$QEAV?$NameValuePair@AEAJ@1@11111@Z @ 0x18064F560 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V-$NameValuePair@AEAJ@2@V32@V32@V_ea_18064F560.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
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
        __int64 a12)
{
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx

  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v15 + 408) = *(_QWORD *)a2;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(
    *(_QWORD *)(v15 + 32),
    *(_DWORD **)(a2 + 8));
  v16 = *(_QWORD *)(a1 + 32);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v17 + 408) = *(_QWORD *)a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(
    *(_QWORD *)(v17 + 32),
    *(_DWORD **)(a3 + 8));
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           *(_QWORD *)(v16 + 32),
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
