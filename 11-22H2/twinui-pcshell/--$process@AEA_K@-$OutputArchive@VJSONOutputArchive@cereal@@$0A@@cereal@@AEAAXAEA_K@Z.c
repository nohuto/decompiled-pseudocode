/*
 * XREFs of ??$process@AEA_K@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z @ 0x18019C508
 * Callers:
 *     ??$?RV?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAM@1@V21@V?$NameValuePair@AEA_N@1@V31@V31@V?$NameValuePair@AEAI@1@V41@V?$NameValuePair@AEAJ@1@V51@V51@V51@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAM@1@1$$QEAV?$NameValuePair@AEA_N@1@22$$QEAV?$NameValuePair@AEAI@1@3$$QEAV?$NameValuePair@AEAJ@1@444@Z @ 0x180652CAC (--$-RV-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAM@1@V21@V-$NameValuePair@AEA_N@1@V31@V31.c)
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@V12@V?$NameValuePair@AEA_N@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180703158 (--$process@V-$NameValuePair@AEA_K@cereal@@V12@V-$NameValuePair@AEA_N@2@@-$OutputArchive@VJSONOut.c)
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEA_N@2@V?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x180703314 (--$process@V-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEA_N@2@V-$NameValuePair@AEAW4BootMod.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1807050B4 (--$serialize@VJSONOutputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONOutputAr.c)
 *     ??$process@AEAU_tip_FileMappingTipTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_FileMappingTipTest@@@Z @ 0x18070CE20 (--$process@AEAU_tip_FileMappingTipTest@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEA_K@2@V?$NameValuePair@AEAH@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x18070D3C0 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEA_K@2@V-$NameValuePair@AEAH@2@@-$Ou.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEA_K@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEA_K@1@0@Z @ 0x18072A834 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEA_K@2@V12@@-$OutputArchive@VJSONOut.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?u64toa@internal@tip_rapidjson@@YAPEAD_KPEAD@Z @ 0x18018B82C (-u64toa@internal@tip_rapidjson@@YAPEAD_KPEAD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

unsigned __int64 *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned __int64 &>(
        __int64 a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  char *v6; // r8
  __int64 v7; // rdx
  char *v8; // rdi
  unsigned __int64 *v9; // rbx
  unsigned __int64 *result; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-28h] BYREF

  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v5 + 328),
    6LL);
  v8 = tip_rapidjson::internal::u64toa(v4, v11, v6);
  v9 = (unsigned __int64 *)v11;
  result = (unsigned __int64 *)v11;
  if ( v11 != v8 )
  {
    do
    {
      LOBYTE(v7) = *(_BYTE *)v9;
      result = (unsigned __int64 *)std::ostream::put(**(_QWORD **)(v5 + 328), v7);
      v9 = (unsigned __int64 *)((char *)v9 + 1);
    }
    while ( v9 != (unsigned __int64 *)v8 );
  }
  return result;
}
