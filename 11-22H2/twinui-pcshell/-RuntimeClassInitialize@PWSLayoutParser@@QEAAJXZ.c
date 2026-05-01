/*
 * XREFs of ?RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ @ 0x180497318
 * Callers:
 *     ??$MakeAndInitialize@VPWSLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutParser@@@Z @ 0x180495E10 (--$MakeAndInitialize@VPWSLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutParser@@.c)
 * Callees:
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x180182468 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801824D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 */

__int64 __fastcall PWSLayoutParser::RuntimeClassInitialize(OLECHAR **this)
{
  OLECHAR **bstr; // rax
  OLECHAR **v3; // rdi
  OLECHAR **v4; // rax
  OLECHAR **v5; // rdi
  OLECHAR **v6; // rax
  const char *v7; // r9
  OLECHAR **v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  BSTR bstrString; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    bstr = (OLECHAR **)wil::make_bstr(&bstrString);
    v3 = bstr;
    if ( this + 2 != bstr )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        this + 2,
        *bstr);
      *v3 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v4 = (OLECHAR **)wil::make_bstr(&bstrString);
    v5 = v4;
    if ( this + 3 != v4 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        this + 3,
        *v4);
      *v5 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v6 = (OLECHAR **)wil::make_bstr(&bstrString);
    v8 = v6;
    if ( this + 4 != v6 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        this + 4,
        *v6);
      *v8 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x55,
                           (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
                           v7);
  }
  return 0LL;
}
