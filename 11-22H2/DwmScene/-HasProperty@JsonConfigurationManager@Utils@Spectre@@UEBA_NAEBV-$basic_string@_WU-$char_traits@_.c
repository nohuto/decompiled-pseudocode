/*
 * XREFs of ?HasProperty@JsonConfigurationManager@Utils@Spectre@@UEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DEBE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@QEAAAEAVConfigurationValue@Utils@Spectre@@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DE3E4 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VConfigurationValue@Ut.c)
 *     ?HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z @ 0x1800DFAF8 (-HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall Spectre::Utils::JsonConfigurationManager::HasProperty(__int64 *a1, wchar_t *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  _QWORD *v5; // rax
  Spectre::Utils::ConfigurationValue *v6; // rdi
  bool HasKey; // di
  _BYTE v9[32]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 8));
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, wchar_t *))(*a1 + 56))(a1, v9, a2);
  v6 = (Spectre::Utils::ConfigurationValue *)std::map<std::wstring,Spectre::Utils::ConfigurationValue>::operator[](
                                               a1 + 18,
                                               v5);
  std::wstring::_Tidy_deallocate((__int64)v9);
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(wchar_t **)a2;
  HasKey = Spectre::Utils::ConfigurationValue::HasKey(v6, a2);
  _Mtx_unlock(v4);
  return HasKey;
}
