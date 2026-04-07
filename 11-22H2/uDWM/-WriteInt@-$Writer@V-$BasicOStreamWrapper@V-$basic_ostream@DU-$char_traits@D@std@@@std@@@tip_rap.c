/*
 * XREFs of ?WriteInt@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NH@Z @ 0x1800F21F0
 * Callers:
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x1800F005C (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 *     ??$process@V?$NameValuePair@AEAG@cereal@@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAG@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1800F00B8 (--$process@V-$NameValuePair@AEAG@cereal@@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@s.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$NameValuePair@AEAG@2@V32@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@1$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1800F022C (--$process@V-$NameValuePair@AEAJ@cereal@@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@s.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x1800F3E38 (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 */

char __fastcall tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteInt(
        _QWORD **a1,
        int a2)
{
  char v2; // al
  char *v3; // r8
  bool v4; // sf
  _BYTE *v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  char *v9; // rdi
  char *i; // rbx
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v2 = v12[0];
  v3 = (char *)(unsigned int)a2;
  v4 = a2 < 0;
  v6 = v12;
  if ( v4 )
    v2 = 45;
  v12[0] = v2;
  if ( (int)v3 < 0 )
    LODWORD(v6) = (unsigned int)&retaddr - 39;
  v7 = (unsigned int)-(int)v3;
  if ( (int)v3 >= 0 )
    v7 = (unsigned int)v3;
  v9 = tip_rapidjson::internal::u32toa((tip_rapidjson::internal *)v7, (unsigned int)v6, v3);
  for ( i = v12; i != v9; ++i )
  {
    LOBYTE(v8) = *i;
    std::ostream::put(**a1, v8);
  }
  return 1;
}
