/*
 * XREFs of ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800F20E8
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@1@@Z @ 0x1800F47A0 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAW4RotationState@Rotation@Priva.c)
 * Callees:
 *     <none>
 */

char __fastcall tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
        __int64 **a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v3 = **a1;
  if ( (_BYTE)a2 )
  {
    LOBYTE(a2) = 116;
    std::ostream::put(v3, a2);
    LOBYTE(v4) = 114;
    std::ostream::put(**a1, v4);
    LOBYTE(v5) = 117;
  }
  else
  {
    LOBYTE(a2) = 102;
    std::ostream::put(v3, a2);
    LOBYTE(v6) = 97;
    std::ostream::put(**a1, v6);
    LOBYTE(v7) = 108;
    std::ostream::put(**a1, v7);
    LOBYTE(v5) = 115;
  }
  std::ostream::put(**a1, v5);
  LOBYTE(v8) = 101;
  std::ostream::put(**a1, v8);
  return 1;
}
