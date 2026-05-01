/*
 * XREFs of ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x180087F24
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180085E80 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180121074 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 */

char __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndObject(
        _QWORD **a1,
        __int64 a2)
{
  char *v3; // rcx
  char v4; // si
  _QWORD *v5; // r14
  unsigned __int64 i; // rdi
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)a1[4];
  if ( (unsigned __int64)(v3 - (char *)a1[3]) < 0x10 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  if ( *(v3 - 8) )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  a1[4] = v3 - 16;
  if ( *((_QWORD *)v3 - 2) )
  {
    LOBYTE(a2) = 10;
    std::ostream::put(**a1, a2);
    v4 = *((_BYTE *)a1 + 64);
    v5 = *a1;
    for ( i = *((unsigned int *)a1 + 17) * ((unsigned __int64)((char *)a1[4] - (char *)a1[3]) >> 4); i; --i )
    {
      LOBYTE(a2) = v4;
      std::ostream::put(*v5, a2);
    }
  }
  LOBYTE(a2) = 125;
  std::ostream::put(**a1, a2);
  if ( a1[4] == a1[3] )
    std::ostream::flush(**a1);
  return 1;
}
