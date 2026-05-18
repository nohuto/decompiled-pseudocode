/*
 * XREFs of ?GetPropertyType@JsonConfigurationManager@Utils@Spectre@@UEBA?AW4EConfigurationPropertyType@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DE910
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@QEAAAEAVConfigurationValue@Utils@Spectre@@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DE3E4 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VConfigurationValue@Ut.c)
 *     ?GetValueType@JsonConfigurationManager@Utils@Spectre@@AEBA?AW4EConfigurationPropertyType@23@AEBVConfigurationValue@23@@Z @ 0x1800DEAF0 (-GetValueType@JsonConfigurationManager@Utils@Spectre@@AEBA-AW4EConfigurationPropertyType@23@AEBV.c)
 *     ?GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DF998 (-GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V-$basic_string@_WU-$char_traits@_W@st.c)
 *     ?HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z @ 0x1800DFAF8 (-HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::GetPropertyType(__int64 *a1, wchar_t *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  unsigned int ValueType; // esi
  _QWORD *v6; // rax
  Spectre::Utils::ConfigurationValue *v7; // rdi
  const wchar_t *v8; // rdx
  _QWORD *v9; // rax
  __int64 Content; // rax
  _QWORD v12[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-48h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 8));
  ValueType = 0;
  if ( !std::string::empty((__int64)a2) )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, wchar_t *))(*a1 + 56))(a1, v13, a2);
    v7 = (Spectre::Utils::ConfigurationValue *)std::map<std::wstring,Spectre::Utils::ConfigurationValue>::operator[](
                                                 a1 + 18,
                                                 v6);
    std::wstring::_Tidy_deallocate((__int64)v13);
    v8 = a2;
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      v8 = *(const wchar_t **)a2;
    if ( Spectre::Utils::ConfigurationValue::HasKey(v7, v8) )
    {
      v9 = std::wstring::wstring(v12, (__int64)a2);
      Content = Spectre::Utils::ConfigurationValue::GetContent(v7, v9);
      ValueType = Spectre::Utils::JsonConfigurationManager::GetValueType(a1, Content);
    }
  }
  _Mtx_unlock(v4);
  return ValueType;
}
