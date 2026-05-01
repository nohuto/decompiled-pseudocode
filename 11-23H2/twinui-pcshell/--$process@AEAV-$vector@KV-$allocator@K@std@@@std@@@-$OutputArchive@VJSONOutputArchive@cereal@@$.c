/*
 * XREFs of ??$process@AEAV?$vector@KV?$allocator@K@std@@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1806CAD7C
 * Callers:
 *     ??$process@V?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@cereal@@V?$NameValuePair@AEAJ@2@V?$NameValuePair@AEA_N@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x1806CAED8 (--$process@V-$NameValuePair@AEAV-$vector@KV-$allocator@K@std@@@std@@@cereal@@V-$NameValuePair@AE.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@AEBK@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEBK@Z @ 0x1806CAE2C (--$process@AEBK@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEBK@Z.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::vector<unsigned long> &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // r9
  __int64 v6; // rbp
  __int64 i; // rbx

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  v5 = *(_QWORD **)(*(_QWORD *)(v4 + 32) + 32LL);
  *(_DWORD *)(*(_QWORD *)(v5[58] + 8 * ((v5[59] - 1LL) & ((unsigned __int64)(v5[61] + v5[60] - 1LL) >> 2)))
            + 4LL * ((*((_DWORD *)v5 + 122) + *((_DWORD *)v5 + 120) - 1) & 3)) = 2;
  v6 = a2[1];
  for ( i = *a2; i != v6; i += 4LL )
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned long const &>(*(_QWORD *)(v4 + 32), i);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
