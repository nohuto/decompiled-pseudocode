/*
 * XREFs of ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800CF29C
 * Callers:
 *     _lambda_12e028b79b04ba515e9d372c1a557575_::operator() @ 0x1800C7800 (_lambda_12e028b79b04ba515e9d372c1a557575_--operator().c)
 *     std::_Func_impl_std::_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std::allocator_std::_Func_class_bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800CC8D0 (std--_Func_impl_std--_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std_ea_1800CC8D0.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006497C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800B049C (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ?substr@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV12@_K0@Z @ 0x1800B05D8 (-substr@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B1D70 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x1800CFB10 (-stoul@std@@YAKAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 */

// Hidden C++ exception states: #wind=3
CreativeFramework::TargetedContentLayoutHelpers::Tile *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
        CreativeFramework::TargetedContentLayoutHelpers::Tile *this,
        const wchar_t *a2)
{
  size_t v3; // rax
  unsigned __int64 v4; // rdi
  wchar_t *v5; // rax
  wchar_t *v6; // rax
  wchar_t String[16]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+48h] [rbp-28h] BYREF

  *((_QWORD *)this + 3) = 7LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_WORD *)this = 0;
  std::wstring::wstring((__int64)String);
  v3 = std::char_traits<wchar_t>::length(L"!");
  v4 = std::wstring::find(String, L"!", 0LL, v3);
  *((_BYTE *)this + 48) = 0;
  std::wstring::operator=((void **)this, (void **)String);
  if ( v4 == -1LL )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((double *)this + 5) = (double)(int)std::stoul(String);
  }
  else
  {
    v5 = (wchar_t *)std::wstring::substr((void **)String, (__int64)v9, 0LL, v4);
    *((double *)this + 4) = (double)(int)std::stoul(v5);
    std::wstring::_Tidy(v9, 1, 0LL);
    v6 = (wchar_t *)std::wstring::substr((void **)String, (__int64)v9, v4 + 1, 0xFFFFFFFFFFFFFFFFuLL);
    *((double *)this + 5) = (double)(int)std::stoul(v6);
    std::wstring::_Tidy(v9, 1, 0LL);
  }
  std::wstring::_Tidy(String, 1, 0LL);
  return this;
}
