/*
 * XREFs of ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803BC790
 * Callers:
 *     ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803BB68C (--$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180145DF4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180145E3C (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x180145E64 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x180145EB0 (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D9E14 (-_com_issue_error@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::RuntimeClassInitialize(
        PWSLayoutPolicyManager *this,
        const unsigned __int16 *a2)
{
  const VARIANTARG *v3; // rax
  HRESULT v4; // eax
  HRESULT v5; // eax
  OLECHAR **bstr; // rax
  OLECHAR **v7; // rbx
  OLECHAR **v8; // rax
  OLECHAR **v9; // rbx
  const char *v10; // r9
  VARIANTARG pvarg; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  OLECHAR *v14; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    v3 = (const VARIANTARG *)_variant_t::_variant_t((_variant_t *)&pvarg, a2);
    v4 = VariantCopy((VARIANTARG *)((char *)this + 80), v3);
    if ( v4 < 0 )
      _com_issue_error((char *)(unsigned int)v4);
    v5 = VariantClear(&pvarg);
    if ( v5 < 0 )
      _com_issue_error((char *)(unsigned int)v5);
    bstr = wil::make_bstr(&v14, L"SelectionNamespaces");
    v7 = bstr;
    if ( (OLECHAR **)((char *)this + 104) != bstr )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (OLECHAR **)this + 13,
        *bstr);
      *v7 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v14);
    v8 = wil::make_bstr(&v14, L"/l:LayoutModificationTemplate/l:InkWorkspaceTopApps");
    v9 = v8;
    if ( (OLECHAR **)((char *)this + 120) != v8 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (OLECHAR **)this + 15,
        *v8);
      *v9 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v14);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x56,
                           (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
                           v10);
  }
  return 0LL;
}
