/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_PerformLocalActionTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18071C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18070D0F4 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAW4CloudPCState@Shell@Internal@.c)
 */

void __fastcall tip::details::test_merged_data<_tip_PerformLocalActionTipTest>::serialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = a2 + 32;
  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 32LL) + 32LL);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v7 + 32));
    v13[0] = "localActionPerformed";
    v8 = a1 + 184;
    if ( !a1 )
      v8 = 8LL;
    v13[1] = v8;
    v14[0] = "isImmersiveRemoteSessionNotTrue";
    v9 = a1 + 189;
    if ( !a1 )
      v9 = 13LL;
    v14[1] = v9;
    v15[0] = "failedToGetHostServicesObject";
    v10 = a1 + 188;
    if ( !a1 )
      v10 = 12LL;
    v15[1] = v10;
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>>(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL) + 32LL),
      v15,
      v14,
      (__int64)v13);
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v7 + 32));
  }
  if ( (a3 & 2) != 0 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 32LL) + 32LL);
    v12 = *(_QWORD *)(v11 + 32);
    *(_QWORD *)(v11 + 408) = "metrics";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v12 + 32));
    *(_DWORD *)(a1 + 152) = 0;
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v12 + 32));
  }
}
