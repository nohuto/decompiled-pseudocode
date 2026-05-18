/*
 * XREFs of ?GetValueType@JsonConfigurationManager@Utils@Spectre@@AEBA?AW4EConfigurationPropertyType@23@AEBVConfigurationValue@23@@Z @ 0x1800DEAF0
 * Callers:
 *     ?GetPropertyType@JsonConfigurationManager@Utils@Spectre@@UEBA?AW4EConfigurationPropertyType@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DE910 (-GetPropertyType@JsonConfigurationManager@Utils@Spectre@@UEBA-AW4EConfigurationPropertyType@23@A.c)
 *     ?GetValueType@JsonConfigurationManager@Utils@Spectre@@AEBA?AW4EConfigurationPropertyType@23@AEBVConfigurationValue@23@@Z @ 0x1800DEAF0 (-GetValueType@JsonConfigurationManager@Utils@Spectre@@AEBA-AW4EConfigurationPropertyType@23@AEBV.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?GetValueType@JsonConfigurationManager@Utils@Spectre@@AEBA?AW4EConfigurationPropertyType@23@AEBVConfigurationValue@23@@Z @ 0x1800DEAF0 (-GetValueType@JsonConfigurationManager@Utils@Spectre@@AEBA-AW4EConfigurationPropertyType@23@AEBV.c)
 *     ?GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DF998 (-GetContent@ConfigurationValue@Utils@Spectre@@QEBAAEAV123@V-$basic_string@_WU-$char_traits@_W@st.c)
 *     ?GetType@ConfigurationValue@Utils@Spectre@@QEBA?AW4ContentType@123@XZ @ 0x1800DFAEC (-GetType@ConfigurationValue@Utils@Spectre@@QEBA-AW4ContentType@123@XZ.c)
 *     ?HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z @ 0x1800DFAF8 (-HasKey@ConfigurationValue@Utils@Spectre@@QEBA_NPEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::GetValueType(
        __int64 a1,
        Spectre::Utils::ConfigurationValue *a2)
{
  int Type; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  const wchar_t *v8; // rdx
  _QWORD *v9; // rax
  __int64 Content; // rax
  unsigned int ValueType; // ebx
  _QWORD v13[4]; // [rsp+28h] [rbp-50h] BYREF
  wchar_t *v14[4]; // [rsp+48h] [rbp-30h] BYREF

  Type = Spectre::Utils::ConfigurationValue::GetType(a2);
  std::wstring::wstring(v14, (__int64)L"Value");
  if ( Type )
  {
    v5 = Type - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 != 1 )
            goto LABEL_10;
          v8 = (const wchar_t *)v14;
          if ( v14[3] >= (wchar_t *)8 )
            v8 = v14[0];
          if ( Spectre::Utils::ConfigurationValue::HasKey(a2, v8) )
          {
            v9 = std::wstring::wstring(v13, (__int64)v14);
            Content = Spectre::Utils::ConfigurationValue::GetContent(a2, v9);
            ValueType = Spectre::Utils::JsonConfigurationManager::GetValueType(a1, Content);
          }
          else
          {
LABEL_10:
            ValueType = 0;
          }
        }
        else
        {
          ValueType = 3;
        }
      }
      else
      {
        ValueType = 1;
      }
    }
    else
    {
      ValueType = 2;
    }
  }
  else
  {
    ValueType = 4;
  }
  std::wstring::_Tidy_deallocate((__int64)v14);
  return ValueType;
}
