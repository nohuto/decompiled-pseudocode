/*
 * XREFs of ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800C1A18
 * Callers:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800C2604 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 * Callees:
 *     ?WriteIndent@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXXZ @ 0x1800C02F8 (-WriteIndent@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

char __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndArray(
        _QWORD **a1,
        __int64 a2)
{
  char *v3; // rcx
  __int64 v5; // rdx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)a1[4];
  if ( (unsigned __int64)(v3 - (char *)a1[3]) < 0x10 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  if ( !*(v3 - 8) )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  a1[4] = v3 - 16;
  if ( *((_QWORD *)v3 - 2) && ((_BYTE)a1[9] & 1) == 0 )
  {
    LOBYTE(a2) = 10;
    std::ostream::put(**a1, a2);
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteIndent(
      (__int64)a1,
      v5);
  }
  LOBYTE(a2) = 93;
  std::ostream::put(**a1, a2);
  if ( a1[4] == a1[3] )
    std::ostream::flush(**a1);
  return 1;
}
