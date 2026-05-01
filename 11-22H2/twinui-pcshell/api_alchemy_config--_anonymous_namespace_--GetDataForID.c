/*
 * XREFs of api_alchemy_config::_anonymous_namespace_::GetDataForID @ 0x1806E2584
 * Callers:
 *     api_alchemy_config::_anonymous_namespace_::GetSpecsForID @ 0x1806E28C0 (api_alchemy_config--_anonymous_namespace_--GetSpecsForID.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ReadFileToString@stringutils@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1806E3388 (-ReadFileToString@stringutils@@YA-AV-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall api_alchemy_config::_anonymous_namespace_::GetDataForID(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE *v6; // r9
  _QWORD *v7; // rdx
  _QWORD v9[4]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD Src[9]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v11[6]; // [rsp+9Ah] [rbp+31h] BYREF

  std::wstring::wstring(Src, a2);
  std::wstring::append(Src, L"\\", 1uLL);
  v6 = v11;
  do
  {
    v6 -= 2;
    *(_WORD *)v6 = a3 % 0xA + 48;
    a3 /= 0xAu;
  }
  while ( a3 );
  std::wstring::wstring((__int64)v9, v6, v11);
  v7 = v9;
  if ( v9[3] >= 8uLL )
    v7 = (_QWORD *)v9[0];
  std::wstring::append(Src, v7, v9[2]);
  std::wstring::_Tidy_deallocate((__int64)v9);
  std::wstring::append(Src, L".txt", a3 + 4);
  stringutils::ReadFileToString(a1, Src);
  std::wstring::_Tidy_deallocate((__int64)Src);
  std::wstring::_Tidy_deallocate(a2);
  return a1;
}
