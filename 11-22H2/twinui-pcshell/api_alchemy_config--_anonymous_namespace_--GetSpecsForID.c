/*
 * XREFs of api_alchemy_config::_anonymous_namespace_::GetSpecsForID @ 0x1806E28C0
 * Callers:
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1806E2BA0 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::specifiers @ 0x1806E144C (api_alchemy_config--_anonymous_namespace_--specifiers--specifiers.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0 @ 0x1806E1524 (api_alchemy_config--_anonymous_namespace_--specifiers--specifiers_0.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers @ 0x1806E1CAC (api_alchemy_config--_anonymous_namespace_--specifiers--_specifiers.c)
 *     api_alchemy_config::_anonymous_namespace_::GetDataForID @ 0x1806E2584 (api_alchemy_config--_anonymous_namespace_--GetDataForID.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall api_alchemy_config::_anonymous_namespace_::GetSpecsForID(__int64 a1, __int64 a2, unsigned int *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  _BYTE v10[32]; // [rsp+30h] [rbp-D0h] BYREF
  char v11; // [rsp+50h] [rbp-B0h]
  _QWORD v12[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v13[7]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v14[80]; // [rsp+B0h] [rbp-50h] BYREF

  v13[5] = a2;
  v6 = std::wstring::wstring(v12, a2);
  api_alchemy_config::_anonymous_namespace_::GetDataForID((__int64)v10, (__int64)v6, *a3);
  if ( v11 )
  {
    v7 = std::wstring::wstring(v13, (__int64)v10);
    v8 = api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0((__int64)v14, (__int64)v7);
    api_alchemy_config::_anonymous_namespace_::specifiers::specifiers((_QWORD *)a1, v8);
    *(_BYTE *)(a1 + 80) = 1;
    api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers((__int64)v14);
    if ( v11 )
      std::wstring::_Tidy_deallocate((__int64)v10);
  }
  else
  {
    *(_BYTE *)(a1 + 80) = 0;
  }
  std::wstring::_Tidy_deallocate(a2);
  return a1;
}
