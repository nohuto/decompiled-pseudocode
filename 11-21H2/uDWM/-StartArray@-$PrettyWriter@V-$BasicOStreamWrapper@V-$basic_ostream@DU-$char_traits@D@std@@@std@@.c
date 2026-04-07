/*
 * XREFs of ?StartArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x180043774
 * Callers:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800436C0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180043E34 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ??$Expand@ULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180043FC0 (--$Expand@ULevel@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 */

char __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::StartArray(
        __int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    a1,
    4LL);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v2 + 16 > v3 )
  {
    tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::Level>(a1 + 8);
    v2 = *(_QWORD *)(a1 + 32);
    v3 = *(_QWORD *)(a1 + 40);
  }
  if ( v2 + 16 > v3 )
  {
    pExceptionObject[0] = &stdext::exception::`vftable';
    pExceptionObject[1] = "rapidjson";
    throw (stdext::exception *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 32) = v2 + 16;
  *(_QWORD *)v2 = 0LL;
  *(_BYTE *)(v2 + 8) = 1;
  LOBYTE(v2) = 91;
  std::ostream::put(**(_QWORD **)a1, v2);
  return 1;
}
