/*
 * XREFs of ??$SetValue@H@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@HW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC1A4
 * Callers:
 *     ?SetInt@JsonConfigurationManager@Utils@Spectre@@UEAA?AW4PlacementResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@HW4LoadPolicy@IConfigurationManager@23@@Z @ 0x1800DEF00 (-SetInt@JsonConfigurationManager@Utils@Spectre@@UEAA-AW4PlacementResult@23@AEBV-$basic_string@_W.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??$GetJsonValue@H@JsonConfigurationManager@Utils@Spectre@@KAHAEBVConfigurationValue@12@@Z @ 0x1800DC098 (--$GetJsonValue@H@JsonConfigurationManager@Utils@Spectre@@KAHAEBVConfigurationValue@12@@Z.c)
 *     ??$IsJsonType@H@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0E4 (--$IsJsonType@H@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z.c)
 *     ??$SetValue@H@ConfigurationValue@Utils@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@H@Z @ 0x1800DC114 (--$SetValue@H@ConfigurationValue@Utils@Spectre@@QEAAXV-$basic_string@_WU-$char_traits@_W@std@@V-.c)
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DD9C8 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_1800DD9C8.c)
 *     ?TriggerHandlers@JsonConfigurationManager@Utils@Spectre@@AEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DEF80 (-TriggerHandlers@JsonConfigurationManager@Utils@Spectre@@AEAAXAEBV-$basic_string@_WU-$char_trait.c)
 *     ?GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DF998 (-GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V-$basic_string@_WU-$char_traits@_W@st.c)
 *     ?HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z @ 0x1800DFAF8 (-HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z.c)
 *     ?IsObject@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DFBC4 (-IsObject@ConfigurationValue@Utils@Spectre@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::SetValue<int>(__int64 a1, wchar_t *a2, int a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  const wchar_t *v11; // rdx
  unsigned int v12; // edi
  _QWORD *v13; // rax
  Spectre::Utils::ConfigurationValue *Content; // rsi
  Spectre::Utils::ConfigurationValue *v15; // rcx
  const wchar_t *v16; // rdx
  _QWORD *v17; // rax
  Spectre::Utils::ConfigurationValue *v18; // rax
  Spectre::Utils::ConfigurationValue *v19; // rcx
  _QWORD *v20; // rax
  Spectre::Utils::ConfigurationValue *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD v25[5]; // [rsp+28h] [rbp-71h] BYREF
  _QWORD v26[4]; // [rsp+50h] [rbp-49h] BYREF
  wchar_t *v27[4]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v28[32]; // [rsp+90h] [rbp-9h] BYREF

  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v25[4] = a1 + 64;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 64));
  (*(void (__fastcall **)(__int64, _BYTE *, wchar_t *))(*(_QWORD *)a1 + 56LL))(a1, v28, a2);
  v9 = std::map<std::wstring,Spectre::Utils::ConfigurationValue>::_Try_emplace<std::wstring const &,>(
         a1 + 144,
         v27,
         v28);
  v10 = *(_QWORD *)v9 + 64LL;
  v11 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v11 = *(const wchar_t **)a2;
  if ( Spectre::Utils::ConfigurationValue::HasKey((Spectre::Utils::ConfigurationValue *)(*(_QWORD *)v9 + 64LL), v11) )
  {
    v12 = 2;
    if ( a4 == 2 )
    {
      v12 = 3;
    }
    else
    {
      v13 = std::wstring::wstring(v26, (__int64)a2);
      Content = (Spectre::Utils::ConfigurationValue *)Spectre::Utils::ConfigurationValue::GetContent(v10, v13);
      if ( Spectre::Utils::ConfigurationValue::IsObject(Content) )
      {
        std::wstring::wstring(v27, (__int64)L"Value");
        v16 = (const wchar_t *)v27;
        if ( v27[3] >= (wchar_t *)8 )
          v16 = v27[0];
        if ( Spectre::Utils::ConfigurationValue::HasKey(Content, v16)
          && (v17 = std::wstring::wstring(v25, (__int64)v27),
              v18 = (Spectre::Utils::ConfigurationValue *)Spectre::Utils::ConfigurationValue::GetContent(Content, v17),
              Spectre::Utils::JsonConfigurationManager::IsJsonType<int>(v18)) )
        {
          if ( (unsigned int)Spectre::Utils::JsonConfigurationManager::GetJsonValue<int>(v19) != a3 )
          {
            v20 = std::wstring::wstring(v25, (__int64)v27);
            Spectre::Utils::ConfigurationValue::SetValue<int>((__int64)Content, v20, a3);
            v12 = 1;
          }
        }
        else
        {
          v12 = 5;
        }
        std::wstring::_Tidy_deallocate((__int64)v27);
      }
      else if ( Spectre::Utils::JsonConfigurationManager::IsJsonType<int>(v15) )
      {
        if ( (unsigned int)Spectre::Utils::JsonConfigurationManager::GetJsonValue<int>(v21) != a3 )
        {
          v22 = std::wstring::wstring(v25, (__int64)a2);
          Spectre::Utils::ConfigurationValue::SetValue<int>(v10, v22, a3);
          v12 = 1;
        }
      }
      else
      {
        v12 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v23 = std::wstring::wstring(v25, (__int64)a2);
    Spectre::Utils::ConfigurationValue::SetValue<int>(v10, v23, a3);
    v12 = 0;
  }
  else
  {
    v12 = 4;
  }
  std::wstring::_Tidy_deallocate((__int64)v28);
  _Mtx_unlock(v8);
  if ( v12 <= 1 )
    Spectre::Utils::JsonConfigurationManager::TriggerHandlers(a1, a2);
  return v12;
}
