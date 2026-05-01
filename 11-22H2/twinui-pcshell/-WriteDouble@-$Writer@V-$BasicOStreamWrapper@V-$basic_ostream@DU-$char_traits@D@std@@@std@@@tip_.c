/*
 * XREFs of ?WriteDouble@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NN@Z @ 0x180655C44
 * Callers:
 *     ??$process@V?$NameValuePair@AEAM@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@0$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x18065323C (--$process@V-$NameValuePair@AEAM@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V-$Na_ea_18065323C.c)
 *     ??$process@V?$NameValuePair@AEAM@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x180653450 (--$process@V-$NameValuePair@AEAM@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V-$NameVa_ea_180653450.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?dtoa@internal@tip_rapidjson@@YAPEADNPEADH@Z @ 0x180655F38 (-dtoa@internal@tip_rapidjson@@YAPEADNPEADH@Z.c)
 */

char __fastcall tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteDouble(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  double v4; // xmm1_8
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  char *v15; // rsi
  char *i; // rdi
  _BYTE v18[32]; // [rsp+28h] [rbp-30h] BYREF

  if ( (*(_QWORD *)&v4 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&v4 & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      LOBYTE(a2) = 78;
      std::ostream::put(**a1, a2);
      LOBYTE(v6) = 97;
      std::ostream::put(**a1, v6);
      LOBYTE(v7) = 78;
    }
    else
    {
      if ( v4 < 0.0 )
      {
        LOBYTE(a2) = 45;
        std::ostream::put(**a1, a2);
      }
      LOBYTE(a2) = 73;
      std::ostream::put(**a1, a2);
      LOBYTE(v8) = 110;
      std::ostream::put(**a1, v8);
      LOBYTE(v9) = 102;
      std::ostream::put(**a1, v9);
      LOBYTE(v10) = 105;
      std::ostream::put(**a1, v10);
      LOBYTE(v11) = 110;
      std::ostream::put(**a1, v11);
      LOBYTE(v12) = 105;
      std::ostream::put(**a1, v12);
      LOBYTE(v13) = 116;
      std::ostream::put(**a1, v13);
      LOBYTE(v7) = 121;
    }
    std::ostream::put(**a1, v7);
  }
  else
  {
    v15 = tip_rapidjson::internal::dtoa(
            (tip_rapidjson::internal *)0x7FF0000000000000LL,
            v4,
            (char *)*((unsigned int *)a1 + 14),
            a4);
    for ( i = v18; i != v15; ++i )
    {
      LOBYTE(v14) = *i;
      std::ostream::put(**a1, v14);
    }
  }
  return 1;
}
