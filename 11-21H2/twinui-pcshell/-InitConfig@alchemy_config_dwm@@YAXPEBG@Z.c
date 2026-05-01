/*
 * XREFs of ?InitConfig@alchemy_config_dwm@@YAXPEBG@Z @ 0x1805DDB40
 * Callers:
 *     ?InitUserConfig_B@Theming@@YAXXZ @ 0x1801198E8 (-InitUserConfig_B@Theming@@YAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1805DDC50 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall alchemy_config_dwm::InitConfig(alchemy_config_dwm *this, const unsigned __int16 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int128 v6; // [rsp+28h] [rbp-39h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp-29h]
  _QWORD v8[4]; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v10[4]; // [rsp+80h] [rbp+1Fh] BYREF

  std::wstring::wstring(v10, this);
  v7 = v8;
  v2 = std::wstring::wstring(v8, L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Configs");
  v3 = std::wstring::wstring((__int64)v9, (__int64)v10);
  v6 = unk_180669960;
  api_alchemy_config::InitConfig(v3, v2, &v6);
  *(_QWORD *)&v6 = v9;
  v4 = std::wstring::wstring(v9, L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Configs");
  v5 = std::wstring::wstring((__int64)v8, (__int64)v10);
  v6 = unk_180669950;
  api_alchemy_config::InitConfig(v5, v4, &v6);
  std::wstring::_Tidy_deallocate((__int64)v10);
}
