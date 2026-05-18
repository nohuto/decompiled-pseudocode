/*
 * XREFs of ?SetString@JsonConfigurationManager@Utils@Spectre@@UEAA?AW4PlacementResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V56@W4LoadPolicy@IConfigurationManager@23@@Z @ 0x1800DEF10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@W4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC760 (--$SetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurationM.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::SetString(__int64 a1, wchar_t *a2, __int64 a3, int a4)
{
  __int64 **v8; // rax
  _QWORD v10[5]; // [rsp+28h] [rbp-60h] BYREF

  v10[4] = a3;
  v8 = (__int64 **)std::wstring::wstring(v10, a3);
  LODWORD(a1) = Spectre::Utils::JsonConfigurationManager::SetValue<std::wstring>(a1, a2, v8, a4);
  std::wstring::_Tidy_deallocate(a3);
  return (unsigned int)a1;
}
