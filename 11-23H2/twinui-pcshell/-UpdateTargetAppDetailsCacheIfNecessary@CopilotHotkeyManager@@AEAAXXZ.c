/*
 * XREFs of ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1802746FC
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180271D90 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x1806FDE10 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18017B6A0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261030 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x18026118C (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 *     ??4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z @ 0x18026127C (--4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x18026132C (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ @ 0x1802618E4 (-ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802638C0 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ @ 0x1802749EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ.c)
 *     ?try_get_value_string@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180275E14 (-try_get_value_string@reg@wil@@YA-AV-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??1?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1806E1B24 (--1-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@XZ.c)
 *     ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x1806EDFB8 (--$-9GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary(
        CopilotHotkeyManager *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v6; // rax
  __int64 TargetAppExtensionDetails; // rax
  void *v8; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v9[40]; // [rsp+28h] [rbp-D8h] BYREF
  char v10[40]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v11[5]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v12[2]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-50h]
  __int64 v14; // [rsp+C0h] [rbp-40h]
  __m128i v15; // [rsp+D0h] [rbp-30h]
  __int64 v16; // [rsp+E0h] [rbp-20h]
  __m128i v17; // [rsp+F0h] [rbp-10h]
  __int64 v18; // [rsp+100h] [rbp+0h]
  __int64 v19; // [rsp+108h] [rbp+8h]
  __int64 v20; // [rsp+118h] [rbp+18h]
  __m128i v21; // [rsp+120h] [rbp+20h]
  __int64 v22; // [rsp+130h] [rbp+30h]
  __m128i v23; // [rsp+140h] [rbp+40h]
  __int64 v24; // [rsp+150h] [rbp+50h]

  wil::reg::try_get_value_string(v10, a2, a3, L"BrandedKeyChoiceType");
  wil::reg::try_get_value_string(v9, v4, v5, L"AppAumid");
  if ( v9[32]
    && v10[32]
    && (std::wstring::_Equal(v10, (char *)L"App") || std::wstring::_Equal(v10, (char *)L"AppEnforcedByPolicy")) )
  {
    if ( !*((_QWORD *)this + 26) || (unsigned __int8)std::operator!=<unsigned short>(v9, (char *)this + 192) )
    {
      v6 = (char *)std::wstring::wstring(v11, (__int64)v9);
      TargetAppExtensionDetails = CopilotHotkeyManager::GetTargetAppExtensionDetails(this, (__int64)v12, v6);
      TargetAppExtensionDetails::operator=((__int64)this + 192, TargetAppExtensionDetails);
      TargetAppExtensionDetails::~TargetAppExtensionDetails((TargetAppExtensionDetails *)v12);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl) )
        CopilotHotkeyManager::ClearFastpathRegistrationProperties(this);
    }
  }
  else
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 432,
                  (__int64 *)&v8)
             + 275) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v8);
    v12[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v14 = 0LL;
    v15 = si128;
    v16 = 0LL;
    v17 = si128;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = _mm_load_si128((const __m128i *)&_xmm);
    v24 = 0LL;
    v22 = 0LL;
    v23 = si128;
    TargetAppExtensionDetails::operator=((__int64)this + 192, (__int64)v12);
    TargetAppExtensionDetails::~TargetAppExtensionDetails((TargetAppExtensionDetails *)v12);
  }
  std::optional<std::wstring>::~optional<std::wstring>(v9);
  std::optional<std::wstring>::~optional<std::wstring>(v10);
}
