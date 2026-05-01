/*
 * XREFs of ??$process@V?$NameValuePair@AEAJ@cereal@@V12@V12@V12@V?$NameValuePair@AEA_N@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@000$$QEAV?$NameValuePair@AEA_N@1@1@Z @ 0x180136650
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@2@V32@V32@V32@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@11100@Z @ 0x180136578 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@2@V32@V32@V32@V12@V12@@-$OutputA.c)
 * Callees:
 *     ??$process@AEAJ@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z @ 0x1801554EC (--$process@AEAJ@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx

  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v10 + 408) = *a2;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v10 + 32), a2[1]);
  v11 = *(_QWORD *)(a1 + 32);
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v12 + 408) = *a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v12 + 32), a3[1]);
  v13 = *(_QWORD *)(v11 + 32);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v14 + 408) = *a4;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v14 + 32), a4[1]);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           *(_QWORD *)(v13 + 32),
           a5,
           a6,
           a7);
}
