/*
 * XREFs of ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180182318
 * Callers:
 *     ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801820DC (--$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPE.c)
 * Callees:
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x180182468 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801824D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x18018251C (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180390134 (-_com_issue_error@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::RuntimeClassInitialize(
        TaskbarLayoutPolicyManager *this,
        const unsigned __int16 *a2)
{
  const VARIANTARG *v3; // rax
  HRESULT v4; // eax
  HRESULT v5; // eax
  TaskbarLayoutPolicyManager *bstr; // rax
  TaskbarLayoutPolicyManager *v7; // rdi
  TaskbarLayoutPolicyManager *v8; // rax
  TaskbarLayoutPolicyManager *v9; // rdi
  TaskbarLayoutPolicyManager *v10; // rax
  TaskbarLayoutPolicyManager *v11; // rdi
  TaskbarLayoutPolicyManager *v12; // rax
  TaskbarLayoutPolicyManager *v13; // rdi
  VARIANTARG pvarg; // [rsp+20h] [rbp-28h] BYREF
  BSTR bstrString; // [rsp+58h] [rbp+10h] BYREF

  v3 = (const VARIANTARG *)_variant_t::_variant_t((_variant_t *)&pvarg, a2);
  v4 = VariantCopy((VARIANTARG *)((char *)this + 104), v3);
  if ( v4 < 0 )
    _com_issue_error((char *)(unsigned int)v4);
  v5 = VariantClear(&pvarg);
  if ( v5 < 0 )
    _com_issue_error((char *)(unsigned int)v5);
  bstr = (TaskbarLayoutPolicyManager *)wil::make_bstr(&bstrString, L"SelectionNamespaces");
  v7 = bstr;
  if ( (TaskbarLayoutPolicyManager *)((char *)this + 128) != bstr )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)this + 128,
      *(_QWORD *)bstr);
    *(_QWORD *)v7 = 0LL;
  }
  if ( bstrString )
    SysFreeString(bstrString);
  v8 = (TaskbarLayoutPolicyManager *)wil::make_bstr(
                                       &bstrString,
                                       L"/d:FullDefaultLayoutTemplate/d:TaskbarLayoutCollection");
  v9 = v8;
  if ( (TaskbarLayoutPolicyManager *)((char *)this + 136) != v8 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)this + 136,
      *(_QWORD *)v8);
    *(_QWORD *)v9 = 0LL;
  }
  if ( bstrString )
    SysFreeString(bstrString);
  v10 = (TaskbarLayoutPolicyManager *)wil::make_bstr(
                                        &bstrString,
                                        L"/l:LayoutModificationTemplate/l:CustomTaskbarLayoutCollection");
  v11 = v10;
  if ( (TaskbarLayoutPolicyManager *)((char *)this + 144) != v10 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)this + 144,
      *(_QWORD *)v10);
    *(_QWORD *)v11 = 0LL;
  }
  if ( bstrString )
    SysFreeString(bstrString);
  v12 = (TaskbarLayoutPolicyManager *)wil::make_bstr(&bstrString, L"PinListPlacement");
  v13 = v12;
  if ( (TaskbarLayoutPolicyManager *)((char *)this + 152) != v12 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)this + 152,
      *(_QWORD *)v12);
    *(_QWORD *)v13 = 0LL;
  }
  if ( bstrString )
    SysFreeString(bstrString);
  return 0LL;
}
