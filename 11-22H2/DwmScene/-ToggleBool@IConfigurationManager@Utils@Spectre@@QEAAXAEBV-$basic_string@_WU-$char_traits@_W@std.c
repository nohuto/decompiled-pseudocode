/*
 * XREFs of ?ToggleBool@IConfigurationManager@Utils@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DBED0
 * Callers:
 *     ?UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBVInput@23@@Z @ 0x18006AF64 (-UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Utils::IConfigurationManager::ToggleBool(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64); // rbx
  __int64 v5; // r8

  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 144LL);
  LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, a2, 0LL) == 0;
  return v4(a1, a2, v5, 1LL);
}
