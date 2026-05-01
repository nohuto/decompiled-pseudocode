/*
 * XREFs of api_alchemy_config::_anonymous_namespace_::GetSpecsForID @ 0x1805DDA30
 * Callers:
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1805DDC50 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::specifiers @ 0x1805DD180 (api_alchemy_config--_anonymous_namespace_--specifiers--specifiers.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0 @ 0x1805DD254 (api_alchemy_config--_anonymous_namespace_--specifiers--specifiers_0.c)
 *     api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers @ 0x1805DD68C (api_alchemy_config--_anonymous_namespace_--specifiers--_specifiers.c)
 *     api_alchemy_config::_anonymous_namespace_::GetDataForID @ 0x1805DD8C4 (api_alchemy_config--_anonymous_namespace_--GetDataForID.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall api_alchemy_config::_anonymous_namespace_::GetSpecsForID(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v10[32]; // [rsp+28h] [rbp-91h] BYREF
  char v11; // [rsp+48h] [rbp-71h]
  _BYTE v12[32]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v13[32]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v14; // [rsp+90h] [rbp-29h]
  _BYTE v15[80]; // [rsp+A0h] [rbp-19h] BYREF

  v14 = a2;
  v6 = std::wstring::wstring((__int64)v12, a2);
  api_alchemy_config::_anonymous_namespace_::GetDataForID((__int64)v10, v6, *a3);
  if ( v11 )
  {
    v7 = std::wstring::wstring((__int64)v13, (__int64)v10);
    v8 = api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0((__int64)v15, v7);
    api_alchemy_config::_anonymous_namespace_::specifiers::specifiers(a1, v8);
    *(_BYTE *)(a1 + 80) = 1;
    api_alchemy_config::_anonymous_namespace_::specifiers::_specifiers((__int64)v15);
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
