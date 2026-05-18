/*
 * XREFs of ??$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAH@Z @ 0x1800DCCF0
 * Callers:
 *     ??$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAH@Z @ 0x1800DCCF0 (--$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 *     ?GetInt@JsonConfigurationManager@Utils@Spectre@@UEBAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@H@Z @ 0x1800DE760 (-GetInt@JsonConfigurationManager@Utils@Spectre@@UEBAHAEBV-$basic_string@_WU-$char_traits@_W@std@.c)
 *     ?TryGetInt@JsonConfigurationManager@Utils@Spectre@@UEBA?AW4QueryResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAH@Z @ 0x1800DF100 (-TryGetInt@JsonConfigurationManager@Utils@Spectre@@UEBA-AW4QueryResult@23@AEBV-$basic_string@_WU.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 *     ??$GetJsonValue@H@JsonConfigurationManager@Utils@Spectre@@KAHAEBVConfigurationValue@12@@Z @ 0x1800DC098 (--$GetJsonValue@H@JsonConfigurationManager@Utils@Spectre@@KAHAEBVConfigurationValue@12@@Z.c)
 *     ??$IsJsonType@H@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0E4 (--$IsJsonType@H@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z.c)
 *     ??$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAH@Z @ 0x1800DCCF0 (--$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@QEAAAEAVConfigurationValue@Utils@Spectre@@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DE3E4 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VConfigurationValue@Ut.c)
 *     ?GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DF998 (-GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V-$basic_string@_WU-$char_traits@_W@st.c)
 *     ?HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z @ 0x1800DFAF8 (-HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z.c)
 *     ?IsObject@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DFBC4 (-IsObject@ConfigurationValue@Utils@Spectre@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::TryGetValue<int>(__int64 a1, wchar_t *a2, _DWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  __int64 v7; // rax
  Spectre::Utils::ConfigurationValue *v8; // rdi
  const wchar_t *v9; // rdx
  unsigned int v10; // edi
  _QWORD *v11; // rax
  Spectre::Utils::ConfigurationValue *Content; // rdi
  Spectre::Utils::ConfigurationValue *v13; // rcx
  const wchar_t *v14; // rdx
  _QWORD *v15; // rax
  Spectre::Utils::ConfigurationValue *v16; // rax
  Spectre::Utils::ConfigurationValue *v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-39h] BYREF
  std::_Ref_count_base *v20; // [rsp+28h] [rbp-31h]
  __int64 v21; // [rsp+40h] [rbp-19h]
  _QWORD v22[4]; // [rsp+48h] [rbp-11h] BYREF
  wchar_t *v23[4]; // [rsp+68h] [rbp+Fh] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v21 = a1 + 64;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 64));
  v7 = (*(__int64 (__fastcall **)(__int64, wchar_t **, wchar_t *))(*(_QWORD *)a1 + 56LL))(a1, v23, a2);
  v8 = (Spectre::Utils::ConfigurationValue *)std::map<std::wstring,Spectre::Utils::ConfigurationValue>::operator[](
                                               a1 + 144,
                                               v7);
  std::wstring::_Tidy_deallocate((__int64)v23);
  v9 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v9 = *(const wchar_t **)a2;
  if ( Spectre::Utils::ConfigurationValue::HasKey(v8, v9) )
  {
    v11 = std::wstring::wstring(v22, (__int64)a2);
    Content = (Spectre::Utils::ConfigurationValue *)Spectre::Utils::ConfigurationValue::GetContent(v8, v11);
    if ( Spectre::Utils::ConfigurationValue::IsObject(Content) )
    {
      std::wstring::wstring(v23, (__int64)L"Value");
      v14 = (const wchar_t *)v23;
      if ( v23[3] >= (wchar_t *)8 )
        v14 = v23[0];
      if ( Spectre::Utils::ConfigurationValue::HasKey(Content, v14) )
      {
        v15 = std::wstring::wstring(&v19, (__int64)v23);
        v16 = (Spectre::Utils::ConfigurationValue *)Spectre::Utils::ConfigurationValue::GetContent(Content, v15);
        if ( Spectre::Utils::JsonConfigurationManager::IsJsonType<int>(v16) )
        {
          *a3 = Spectre::Utils::JsonConfigurationManager::GetJsonValue<int>(v17);
          std::wstring::_Tidy_deallocate((__int64)v23);
LABEL_20:
          v10 = 0;
          goto LABEL_21;
        }
      }
      std::wstring::_Tidy_deallocate((__int64)v23);
    }
    else if ( Spectre::Utils::JsonConfigurationManager::IsJsonType<int>(v13) )
    {
      *a3 = *((_DWORD *)Content + 10);
      goto LABEL_20;
    }
    v10 = 1;
    goto LABEL_21;
  }
  Spectre::Utils::IConfigurationManager::GetParent(a1, &v19);
  if ( v19 )
  {
    v10 = Spectre::Utils::JsonConfigurationManager::TryGetValue<int>(v19, a2, a3);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
  }
  else
  {
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    v10 = 2;
  }
LABEL_21:
  _Mtx_unlock(v6);
  return v10;
}
