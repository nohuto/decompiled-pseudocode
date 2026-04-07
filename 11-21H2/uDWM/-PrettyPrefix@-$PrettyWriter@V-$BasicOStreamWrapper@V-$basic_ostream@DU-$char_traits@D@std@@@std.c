/*
 * XREFs of ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180043E34
 * Callers:
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x180042610 (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V12@V?$NameValuePair@AEA_N@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@0$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x1800426C4 (--$process@V-$NameValuePair@AEAI@cereal@@V12@V-$NameValuePair@AEA_N@2@@-$OutputArchive@VJSONOutp.c)
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x180042794 (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ?StartArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x180043774 (-StartArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@.c)
 *     ?StartObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x180043814 (-StartObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@.c)
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180043D44 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ??$process@AEAG@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAG@Z @ 0x1800F2804 (--$process@AEAG@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAG@Z.c)
 *     ??$process@AEAJ@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z @ 0x1800F28B0 (--$process@AEAJ@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEA_N@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEA_N@1@1@Z @ 0x1800F2AF0 (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEA_N@2@V32@@-$OutputArchive@VJSONOutp.c)
 * Callees:
 *     ??$Top@ULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@QEAAPEAULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@2@XZ @ 0x180043F04 (--$Top@ULevel@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?WriteIndent@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXXZ @ 0x180043F30 (-WriteIndent@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 */

__int64 *__fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
        __int64 **a1,
        int a2)
{
  __int64 *result; // rax
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  void **pExceptionObject; // [rsp+20h] [rbp-18h] BYREF
  const char *v9; // [rsp+28h] [rbp-10h]

  result = a1[4];
  if ( result != a1[3] )
  {
    result = (__int64 *)tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Top<tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::Level>(a1 + 1);
    v6 = result;
    if ( !*((_BYTE *)result + 8) )
    {
      v7 = **a1;
      if ( *result )
      {
        if ( (*(_BYTE *)result & 1) != 0 )
        {
          LOBYTE(v5) = 58;
          std::ostream::put(v7, v5);
          LOBYTE(v5) = 32;
          v7 = **a1;
          goto LABEL_6;
        }
        LOBYTE(v5) = 44;
        std::ostream::put(v7, v5);
        v7 = **a1;
      }
      LOBYTE(v5) = 10;
LABEL_6:
      result = (__int64 *)std::ostream::put(v7, v5);
      if ( (*(_BYTE *)v6 & 1) != 0 )
        goto LABEL_8;
      goto LABEL_7;
    }
    if ( *result )
    {
      LOBYTE(v5) = 44;
      std::ostream::put(**a1, v5);
      if ( ((_BYTE)a1[9] & 1) == 0 )
      {
LABEL_20:
        LOBYTE(v5) = 10;
        std::ostream::put(**a1, v5);
LABEL_7:
        result = (__int64 *)tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteIndent(a1);
        goto LABEL_8;
      }
      LOBYTE(v5) = 32;
      result = (__int64 *)std::ostream::put(**a1, v5);
    }
    if ( ((_BYTE)a1[9] & 1) != 0 )
    {
LABEL_8:
      if ( !*((_BYTE *)v6 + 8) && (*(_BYTE *)v6 & 1) == 0 && a2 != 5 )
      {
        pExceptionObject = &stdext::exception::`vftable';
        v9 = "rapidjson";
        throw (stdext::exception *)&pExceptionObject;
      }
      ++*v6;
      return result;
    }
    goto LABEL_20;
  }
  if ( *((_BYTE *)a1 + 60) )
  {
    pExceptionObject = &stdext::exception::`vftable';
    v9 = "rapidjson";
    throw (stdext::exception *)&pExceptionObject;
  }
  *((_BYTE *)a1 + 60) = 1;
  return result;
}
