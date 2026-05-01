/*
 * XREFs of ?WriteString@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NPEBDI@Z @ 0x1800C1FB0
 * Callers:
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x1800BFBB0 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString(
        __int64 **a1,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int8 *v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v11; // rdx

  v4 = a3;
  v5 = a2;
  LOBYTE(a2) = 34;
  std::ostream::put(**a1, a2);
  for ( i = 0LL; i < v4; ++i )
  {
    v8 = *v5++;
    v9 = **a1;
    if ( `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::escape[v8] )
    {
      LOBYTE(v6) = 92;
      std::ostream::put(v9, v6);
      std::ostream::put(
        **a1,
        (unsigned __int8)`tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::escape[v8]);
      if ( `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::escape[v8] == 117 )
      {
        LOBYTE(v6) = 48;
        std::ostream::put(**a1, v6);
        LOBYTE(v11) = 48;
        std::ostream::put(**a1, v11);
        std::ostream::put(
          **a1,
          `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::hexDigits[v8 >> 4]);
        std::ostream::put(
          **a1,
          `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::hexDigits[v8 & 0xF]);
      }
    }
    else
    {
      std::ostream::put(v9, (unsigned __int8)v8);
    }
  }
  LOBYTE(v6) = 34;
  std::ostream::put(**a1, v6);
  return 1;
}
