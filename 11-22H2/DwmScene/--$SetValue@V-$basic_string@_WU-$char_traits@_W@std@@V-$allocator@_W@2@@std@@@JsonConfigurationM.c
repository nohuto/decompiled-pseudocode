/*
 * XREFs of ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@W4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC760
 * Callers:
 *     ?SetString@JsonConfigurationManager@Utils@Spectre@@UEAA?AW4PlacementResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V56@W4LoadPolicy@IConfigurationManager@23@@Z @ 0x1800DEF10 (-SetString@JsonConfigurationManager@Utils@Spectre@@UEAA-AW4PlacementResult@23@AEBV-$basic_string.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??$?9_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x1800DC058 (--$-9_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ??$GetJsonValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@KA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBVConfigurationValue@12@@Z @ 0x1800DC0B0 (--$GetJsonValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurat.c)
 *     ??$IsJsonType@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0FC (--$IsJsonType@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfiguratio.c)
 *     ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@ConfigurationValue@Utils@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x1800DC698 (--$SetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@ConfigurationValue.c)
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DD9C8 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_1800DD9C8.c)
 *     ?TriggerHandlers@JsonConfigurationManager@Utils@Spectre@@AEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DEF80 (-TriggerHandlers@JsonConfigurationManager@Utils@Spectre@@AEAAXAEBV-$basic_string@_WU-$char_trait.c)
 *     ?GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DF998 (-GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V-$basic_string@_WU-$char_traits@_W@st.c)
 *     ?HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z @ 0x1800DFAF8 (-HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z.c)
 *     ?IsObject@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DFBC4 (-IsObject@ConfigurationValue@Utils@Spectre@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::SetValue<std::wstring>(
        __int64 a1,
        wchar_t *a2,
        __int64 **a3,
        int a4)
{
  __int64 v7; // r14
  struct _Mtx_internal_imp_t *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  const wchar_t *v11; // rdx
  unsigned int v12; // esi
  _QWORD *v13; // rax
  Spectre::Utils::ConfigurationValue *Content; // r14
  Spectre::Utils::ConfigurationValue *v15; // rcx
  const wchar_t *v16; // rdx
  _QWORD *v17; // rax
  Spectre::Utils::ConfigurationValue *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char v21; // di
  _QWORD *v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  char v25; // di
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  _QWORD *v29; // rax
  _QWORD v32[5]; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v33[5]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v34[4]; // [rsp+88h] [rbp-41h] BYREF
  wchar_t *v35[4]; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v36[32]; // [rsp+C8h] [rbp-1h] BYREF

  v7 = a1;
  v33[4] = a3;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v32[4] = a1 + 64;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 64));
  (*(void (__fastcall **)(__int64, _BYTE *, wchar_t *))(*(_QWORD *)v7 + 56LL))(v7, v36, a2);
  v9 = std::map<std::wstring,Spectre::Utils::ConfigurationValue>::_Try_emplace<std::wstring const &,>(
         v7 + 144,
         v35,
         v36);
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
      v13 = std::wstring::wstring(v33, (__int64)a2);
      Content = (Spectre::Utils::ConfigurationValue *)Spectre::Utils::ConfigurationValue::GetContent(v10, v13);
      if ( Spectre::Utils::ConfigurationValue::IsObject(Content) )
      {
        std::wstring::wstring(v35, (__int64)L"Value");
        v16 = (const wchar_t *)v35;
        if ( v35[3] >= (wchar_t *)8 )
          v16 = v35[0];
        if ( Spectre::Utils::ConfigurationValue::HasKey(Content, v16)
          && (v17 = std::wstring::wstring(v32, (__int64)v35),
              v18 = (Spectre::Utils::ConfigurationValue *)Spectre::Utils::ConfigurationValue::GetContent(Content, v17),
              Spectre::Utils::JsonConfigurationManager::IsJsonType<std::wstring>(v18)) )
        {
          v20 = (_QWORD *)Spectre::Utils::JsonConfigurationManager::GetJsonValue<std::wstring>((__int64)v34, v19);
          v21 = std::operator!=<wchar_t>(v20, a3);
          std::wstring::_Tidy_deallocate((__int64)v34);
          if ( v21 )
          {
            v22 = std::wstring::wstring(v34, (__int64)a3);
            v23 = std::wstring::wstring(v32, (__int64)v35);
            Spectre::Utils::ConfigurationValue::SetValue<std::wstring>((__int64)Content, v23, (__int64)v22);
            v12 = 1;
          }
        }
        else
        {
          v12 = 5;
        }
        std::wstring::_Tidy_deallocate((__int64)v35);
      }
      else if ( Spectre::Utils::JsonConfigurationManager::IsJsonType<std::wstring>(v15) )
      {
        v24 = (_QWORD *)Spectre::Utils::JsonConfigurationManager::GetJsonValue<std::wstring>(
                          (__int64)v34,
                          (__int64)Content);
        v25 = std::operator!=<wchar_t>(v24, a3);
        std::wstring::_Tidy_deallocate((__int64)v34);
        if ( v25 )
        {
          v26 = std::wstring::wstring(v34, (__int64)a3);
          v27 = std::wstring::wstring(v32, (__int64)a2);
          Spectre::Utils::ConfigurationValue::SetValue<std::wstring>(v10, v27, (__int64)v26);
          v12 = 1;
        }
      }
      else
      {
        v12 = 5;
      }
      v7 = a1;
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v28 = std::wstring::wstring(v34, (__int64)a3);
    v29 = std::wstring::wstring(v32, (__int64)a2);
    Spectre::Utils::ConfigurationValue::SetValue<std::wstring>(v10, v29, (__int64)v28);
    v12 = 0;
  }
  else
  {
    v12 = 4;
  }
  std::wstring::_Tidy_deallocate((__int64)v36);
  _Mtx_unlock(v8);
  if ( v12 <= 1 )
    Spectre::Utils::JsonConfigurationManager::TriggerHandlers(v7, a2);
  std::wstring::_Tidy_deallocate((__int64)a3);
  return v12;
}
