/*
 * XREFs of ??$Pop@ULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@QEAAPEAULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@2@_K@Z @ 0x180043F90
 * Callers:
 *     ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800438B4 (-EndArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@t.c)
 *     ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x180043930 (-EndObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 */

__int64 __fastcall tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Pop<tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::Level>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int64)(v1 - *(_QWORD *)(a1 + 16)) < 0x10 )
  {
    pExceptionObject[0] = &stdext::exception::`vftable';
    pExceptionObject[1] = "rapidjson";
    throw (stdext::exception *)pExceptionObject;
  }
  result = v1 - 16;
  *(_QWORD *)(a1 + 24) = v1 - 16;
  return result;
}
