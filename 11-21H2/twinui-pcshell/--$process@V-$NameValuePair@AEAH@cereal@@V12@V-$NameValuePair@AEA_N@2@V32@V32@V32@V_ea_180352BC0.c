/*
 * XREFs of ??$process@V?$NameValuePair@AEAH@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@0$$QEAV?$NameValuePair@AEA_N@1@11111111@Z @ 0x180352BC0
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_ControlCenterShowTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x180352EEC (--$serialize@VJSONOutputArchive@cereal@@@_tip_ControlCenterShowTest@@QEAAXAEAVJSONOutputArchive@.c)
 * Callees:
 *     ??$process@AEAH@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAH@Z @ 0x180023518 (--$process@AEAH@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAH@Z.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000000@Z @ 0x18034B590 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@@-$OutputArchive@VJSON.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<int &>,cereal::NameValuePair<int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
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
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int &>(*(_QWORD *)(v15 + 32), *(int **)(a2 + 8));
  v16 = *(_QWORD *)(a1 + 32);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v17 + 408) = *(_QWORD *)a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int &>(*(_QWORD *)(v17 + 32), *(int **)(a3 + 8));
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
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
