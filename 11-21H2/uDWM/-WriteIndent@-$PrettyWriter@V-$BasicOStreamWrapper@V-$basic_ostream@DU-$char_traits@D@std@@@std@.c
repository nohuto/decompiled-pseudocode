/*
 * XREFs of ?WriteIndent@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXXZ @ 0x180043F30
 * Callers:
 *     ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800438B4 (-EndArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@t.c)
 *     ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x180043930 (-EndObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180043E34 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteIndent(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  char v3; // di
  _QWORD *v4; // rsi
  __int64 i; // rbx

  result = *(unsigned int *)(a1 + 68);
  v3 = *(_BYTE *)(a1 + 64);
  v4 = *(_QWORD **)a1;
  for ( i = result * ((*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) >> 4); i; --i )
  {
    LOBYTE(a2) = v3;
    result = std::ostream::put(*v4, a2);
  }
  return result;
}
