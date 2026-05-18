/*
 * XREFs of ??$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC464
 * Callers:
 *     ?SetDouble@JsonConfigurationManager@Utils@Spectre@@UEAA?AW4PlacementResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@NW4LoadPolicy@IConfigurationManager@23@@Z @ 0x1800DEED0 (-SetDouble@JsonConfigurationManager@Utils@Spectre@@UEAA-AW4PlacementResult@23@AEBV-$basic_string.c)
 *     ?SetFloat@JsonConfigurationManager@Utils@Spectre@@UEAA?AW4PlacementResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@MW4LoadPolicy@IConfigurationManager@23@@Z @ 0x1800DEEE0 (-SetFloat@JsonConfigurationManager@Utils@Spectre@@UEAA-AW4PlacementResult@23@AEBV-$basic_string@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??$GetJsonValue@N@JsonConfigurationManager@Utils@Spectre@@KANAEBVConfigurationValue@12@@Z @ 0x1800DC0A4 (--$GetJsonValue@N@JsonConfigurationManager@Utils@Spectre@@KANAEBVConfigurationValue@12@@Z.c)
 *     ??$IsJsonType@N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0F0 (--$IsJsonType@N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z.c)
 *     ??$SetValue@N@ConfigurationValue@Utils@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@N@Z @ 0x1800DC3D0 (--$SetValue@N@ConfigurationValue@Utils@Spectre@@QEAAXV-$basic_string@_WU-$char_traits@_W@std@@V-.c)
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DD9C8 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_1800DD9C8.c)
 *     ?TriggerHandlers@JsonConfigurationManager@Utils@Spectre@@AEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DEF80 (-TriggerHandlers@JsonConfigurationManager@Utils@Spectre@@AEAAXAEBV-$basic_string@_WU-$char_trait.c)
 *     ?GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DF998 (-GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V-$basic_string@_WU-$char_traits@_W@st.c)
 *     ?HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z @ 0x1800DFAF8 (-HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z.c)
 *     ?IsObject@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DFBC4 (-IsObject@ConfigurationValue@Utils@Spectre@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::SetValue<double>(
        __int64 a1,
        wchar_t *a2,
        double a3,
        int a4)
{
  struct _Mtx_internal_imp_t *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r15
  const wchar_t *v10; // rdx
  unsigned int v11; // edi
  _QWORD *v12; // rax
  Spectre::Utils::ConfigurationValue *Content; // rsi
  Spectre::Utils::ConfigurationValue *v14; // rcx
  const wchar_t *v15; // rdx
  _QWORD *v16; // rax
  Spectre::Utils::ConfigurationValue *v17; // rax
  Spectre::Utils::ConfigurationValue *v18; // rcx
  _QWORD *v19; // rax
  Spectre::Utils::ConfigurationValue *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD v24[5]; // [rsp+30h] [rbp-81h] BYREF
  _QWORD v25[4]; // [rsp+58h] [rbp-59h] BYREF
  wchar_t *v26[4]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v27[32]; // [rsp+98h] [rbp-19h] BYREF

  v7 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v24[4] = a1 + 64;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 64));
  (*(void (__fastcall **)(__int64, _BYTE *, wchar_t *))(*(_QWORD *)a1 + 56LL))(a1, v27, a2);
  v8 = std::map<std::wstring,Spectre::Utils::ConfigurationValue>::_Try_emplace<std::wstring const &,>(
         a1 + 144,
         v26,
         v27);
  v9 = *(_QWORD *)v8 + 64LL;
  v10 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v10 = *(const wchar_t **)a2;
  if ( Spectre::Utils::ConfigurationValue::HasKey((Spectre::Utils::ConfigurationValue *)(*(_QWORD *)v8 + 64LL), v10) )
  {
    v11 = 2;
    if ( a4 == 2 )
    {
      v11 = 3;
    }
    else
    {
      v12 = std::wstring::wstring(v25, (__int64)a2);
      Content = (Spectre::Utils::ConfigurationValue *)Spectre::Utils::ConfigurationValue::GetContent(v9, v12);
      if ( Spectre::Utils::ConfigurationValue::IsObject(Content) )
      {
        std::wstring::wstring(v26, (__int64)L"Value");
        v15 = (const wchar_t *)v26;
        if ( v26[3] >= (wchar_t *)8 )
          v15 = v26[0];
        if ( Spectre::Utils::ConfigurationValue::HasKey(Content, v15)
          && (v16 = std::wstring::wstring(v24, (__int64)v26),
              v17 = (Spectre::Utils::ConfigurationValue *)Spectre::Utils::ConfigurationValue::GetContent(Content, v16),
              Spectre::Utils::JsonConfigurationManager::IsJsonType<double>(v17)) )
        {
          if ( Spectre::Utils::JsonConfigurationManager::GetJsonValue<double>(v18) != a3 )
          {
            v19 = std::wstring::wstring(v24, (__int64)v26);
            Spectre::Utils::ConfigurationValue::SetValue<double>((__int64)Content, v19, a3);
            v11 = 1;
          }
        }
        else
        {
          v11 = 5;
        }
        std::wstring::_Tidy_deallocate((__int64)v26);
      }
      else if ( Spectre::Utils::JsonConfigurationManager::IsJsonType<double>(v14) )
      {
        if ( Spectre::Utils::JsonConfigurationManager::GetJsonValue<double>(v20) != a3 )
        {
          v21 = std::wstring::wstring(v24, (__int64)a2);
          Spectre::Utils::ConfigurationValue::SetValue<double>(v9, v21, a3);
          v11 = 1;
        }
      }
      else
      {
        v11 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v22 = std::wstring::wstring(v24, (__int64)a2);
    Spectre::Utils::ConfigurationValue::SetValue<double>(v9, v22, a3);
    v11 = 0;
  }
  else
  {
    v11 = 4;
  }
  std::wstring::_Tidy_deallocate((__int64)v27);
  _Mtx_unlock(v7);
  if ( v11 <= 1 )
    Spectre::Utils::JsonConfigurationManager::TriggerHandlers(a1, a2);
  return v11;
}
