/*
 * XREFs of ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800E6EEC
 * Callers:
 *     _lambda_4643dae5d5d0a07f7786c8f2505767e9_::operator() @ 0x1800DC8AC (_lambda_4643dae5d5d0a07f7786c8f2505767e9_--operator().c)
 *     std::_Func_impl_std::_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std::allocator_std::_Func_class_bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800E3F70 (std--_Func_impl_std--_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std_ea_1800E3F70.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800C28DC (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x1800E79CC (-stoul@std@@YAKAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 */

// Hidden C++ exception states: #wind=3
wchar_t *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(wchar_t *this, wchar_t *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdi
  wchar_t v6[4]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h]
  unsigned __int64 v8; // [rsp+40h] [rbp-30h]
  wchar_t String[4]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v10; // [rsp+58h] [rbp-18h]
  unsigned __int64 v11; // [rsp+60h] [rbp-10h]

  *((_QWORD *)this + 3) = 7LL;
  *((_QWORD *)this + 2) = 0LL;
  *this = 0;
  v11 = 7LL;
  v10 = 0LL;
  String[0] = 0;
  if ( *a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a2[v3] );
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)String, (char *)a2, v3);
  v4 = std::wstring::find((char *)String, L"!", 0LL, asc_18012F404[0] != 0);
  *((_BYTE *)this + 48) = 0;
  if ( this != String )
    std::wstring::assign((void **)this, (void **)String, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v4 == -1LL )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((double *)this + 5) = (double)(int)std::stoul(String);
  }
  else
  {
    v8 = 7LL;
    v7 = 0LL;
    v6[0] = 0;
    std::wstring::assign((void **)v6, (void **)String, 0LL, v4);
    *((double *)this + 4) = (double)(int)std::stoul(v6);
    if ( v8 >= 8 )
      operator delete(*(void **)v6);
    v8 = 7LL;
    v7 = 0LL;
    v6[0] = 0;
    std::wstring::assign((void **)v6, (void **)String, v4 + 1, 0xFFFFFFFFFFFFFFFFuLL);
    *((double *)this + 5) = (double)(int)std::stoul(v6);
    if ( v8 >= 8 )
      operator delete(*(void **)v6);
  }
  if ( v11 >= 8 )
    operator delete(*(void **)String);
  return this;
}
