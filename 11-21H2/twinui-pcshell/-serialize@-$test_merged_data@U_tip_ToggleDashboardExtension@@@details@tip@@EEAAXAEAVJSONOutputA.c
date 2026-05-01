/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_ToggleDashboardExtension@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1800192A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00@Z @ 0x18005C7D8 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@@-$OutputArchive@VJSONOutputArchive@cereal@@$0.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

void __fastcall tip::details::test_merged_data<_tip_ToggleDashboardExtension>::serialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  const char *v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  const char *v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  const char *v17; // [rsp+40h] [rbp-18h] BYREF

  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v7 + 32));
    v13 = "isExtensionCallError";
    v8 = a1 + 154;
    if ( !a1 )
      v8 = 10LL;
    v14 = v8;
    v15 = "isDashboardExtensionPresent";
    v9 = a1 + 153;
    if ( !a1 )
      v9 = 9LL;
    v16 = v9;
    v17 = "isDashboardExtensionCallSuccessful";
    v10 = a1 + 152;
    if ( !a1 )
      v10 = 8LL;
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL) + 32LL),
      &v17,
      &v15,
      &v13,
      v13,
      v14,
      v15,
      v16,
      v17,
      v10);
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v7 + 32));
  }
  if ( (a3 & 2) != 0 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v12 = *(_QWORD *)(v11 + 32);
    *(_QWORD *)(v11 + 408) = "metrics";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v12 + 32));
    *(_DWORD *)(a1 + 120) = 0;
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v12 + 32));
  }
}
