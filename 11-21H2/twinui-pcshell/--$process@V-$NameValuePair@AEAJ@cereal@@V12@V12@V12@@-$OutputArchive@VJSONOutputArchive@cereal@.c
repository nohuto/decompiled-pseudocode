/*
 * XREFs of ??$process@V?$NameValuePair@AEAJ@cereal@@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@000@Z @ 0x18058D0A8
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@2@V32@V32@V32@V32@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@11111@Z @ 0x18058D8DC (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@2@V32@V32@V32@V32@V32@@-$OutputA.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_ColumnSmartFillTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1805A1854 (--$serialize@VJSONOutputArchive@cereal@@@_tip_ColumnSmartFillTest@@QEAAXAEAVJSONOutputArchive@ce.c)
 * Callees:
 *     ??$process@AEAJ@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z @ 0x1801554EC (--$process@AEAJ@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z.c)
 */

char *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v8 + 408) = *(_QWORD *)a2;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v8 + 32), *(int **)(a2 + 8));
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v10 + 408) = *(_QWORD *)a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v10 + 32), *(int **)(a3 + 8));
  v11 = *(_QWORD *)(v9 + 32);
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v12 + 408) = *(_QWORD *)a4;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v12 + 32), *(int **)(a4 + 8));
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v13 + 408) = *(_QWORD *)a5;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v13 + 32), *(int **)(a5 + 8));
}
