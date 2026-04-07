/*
 * XREFs of ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x180043930
 * Callers:
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180043324 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800436C0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     ??$Top@ULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@QEAAPEAULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@2@XZ @ 0x180043F04 (--$Top@ULevel@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?WriteIndent@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXXZ @ 0x180043F30 (-WriteIndent@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@.c)
 *     ??$Pop@ULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@QEAAPEAULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@2@_K@Z @ 0x180043F90 (--$Pop@ULevel@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 */

char __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndObject(
        _QWORD **a1)
{
  __int64 v2; // rdx
  void **pExceptionObject; // [rsp+20h] [rbp-18h] BYREF
  const char *v5; // [rsp+28h] [rbp-10h]

  if ( (unsigned __int64)((char *)a1[4] - (char *)a1[3]) < 0x10 )
  {
    pExceptionObject = &stdext::exception::`vftable';
    v5 = "rapidjson";
    throw (stdext::exception *)&pExceptionObject;
  }
  if ( *(_BYTE *)(tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Top<tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::Level>(a1 + 1)
                + 8) )
  {
    pExceptionObject = &stdext::exception::`vftable';
    v5 = "rapidjson";
    throw (stdext::exception *)&pExceptionObject;
  }
  if ( *(_QWORD *)tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Pop<tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::Level>(a1 + 1) )
  {
    LOBYTE(v2) = 10;
    std::ostream::put(**a1, v2);
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteIndent(a1);
  }
  LOBYTE(v2) = 125;
  std::ostream::put(**a1, v2);
  if ( a1[4] == a1[3] )
    std::ostream::flush(**a1);
  return 1;
}
