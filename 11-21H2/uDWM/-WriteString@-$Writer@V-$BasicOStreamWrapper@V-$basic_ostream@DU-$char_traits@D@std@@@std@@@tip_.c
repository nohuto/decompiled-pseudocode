/*
 * XREFs of ?WriteString@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NPEBDI@Z @ 0x180043D8C
 * Callers:
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180043D44 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 * Callees:
 *     <none>
 */

char __fastcall tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString(
        _QWORD **a1,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int8 *v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx

  v4 = a3;
  v5 = a2;
  LOBYTE(a2) = 34;
  std::ostream::put(**a1, a2);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *a1;
    if ( v7 >= v4 )
      break;
    v9 = *v5++;
    ++v7;
    v10 = (unsigned int)v9;
    if ( !`tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::escape[v9] )
      goto LABEL_4;
    LOBYTE(v9) = 92;
    std::ostream::put(*v8, v9);
    LOBYTE(v12) = `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::escape[v10];
    std::ostream::put(**a1, v12);
    if ( `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::escape[v10] == 117 )
    {
      LOBYTE(v6) = 48;
      std::ostream::put(**a1, v6);
      LOBYTE(v13) = 48;
      std::ostream::put(**a1, v13);
      LOBYTE(v14) = `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::hexDigits[v10 >> 4];
      std::ostream::put(**a1, v14);
      v8 = *a1;
      LOBYTE(v9) = `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::hexDigits[v10 & 0xF];
LABEL_4:
      std::ostream::put(*v8, v9);
    }
  }
  LOBYTE(v6) = 34;
  std::ostream::put(*v8, v6);
  return 1;
}
