/*
 * XREFs of ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180709A10
 * Callers:
 *     ?CreateFromBytes@RemoteSystem@RemoteSystemData@@SA?AU12@PEBXI@Z @ 0x18071014C (-CreateFromBytes@RemoteSystem@RemoteSystemData@@SA-AU12@PEBXI@Z.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18009330C (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180113F10 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAA_NXZ @ 0x180115AF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wi.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1805045F4 (--$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x18051DA28 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_18051DA28.c)
 *     ??$TrySerialize@G@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAG@Z @ 0x180709C98 (--$TrySerialize@G@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_string_view@GU-$cha.c)
 *     ??$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAUhstring@winrt@@@Z @ 0x180709D4C (--$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_stri.c)
 *     ??$TrySerialize@_K@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEA_K@Z @ 0x180709E08 (--$TrySerialize@_K@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_string_view@GU-$ch.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall RemoteSystemData::RemoteSystem::Serialize<RemoteSystemData::Details::ValueSetReader>(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  char *v4; // rax
  char *v5; // rcx
  __int64 v6; // rax
  const char *v7; // r9
  char *v8; // rax
  const unsigned __int16 *v9; // rdx
  const char *v10; // r9
  char v11; // al
  char *v12; // rax
  char *v13; // rcx
  __int64 v14; // rax
  const char *v15; // r9
  char *v16; // rax
  char *v17; // rdx
  __int64 v18; // rax
  const char *v19; // r9
  char *v21; // [rsp+20h] [rbp-29h] BYREF
  __int64 v22; // [rsp+28h] [rbp-21h]
  _QWORD v23[4]; // [rsp+30h] [rbp-19h] BYREF
  char v24[32]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v25[4]; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  std::wstring::wstring(v23, (void **)&RemoteSystemData::RemoteSystem::defaultPrefix);
  v4 = std::operator+<unsigned short>((char *)v25, v23, RemoteSystemData::Properties::Id);
  v5 = v4;
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v5 = *(char **)v4;
  v6 = *((_QWORD *)v4 + 2);
  v21 = v5;
  v22 = v6;
  if ( !(unsigned __int8)RemoteSystemData::Details::ValueSetReader::TrySerialize<winrt::hstring>(a2, &v21, a1) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
      v7);
  std::wstring::_Tidy_deallocate((__int64)v25);
  v8 = std::operator+<unsigned short>(v24, v23, RemoteSystemData::Properties::State);
  v9 = (const unsigned __int16 *)v8;
  if ( *((_QWORD *)v8 + 3) >= 8uLL )
    v9 = *(const unsigned __int16 **)v8;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v25, v9, *((_QWORD *)v8 + 2));
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
    a2,
    (winrt::Windows::Foundation::IUnknown *)&v21,
    v25);
  if ( v21 )
  {
    *(_DWORD *)(a1 + 8) = winrt::impl::unbox_value_type<unsigned int,winrt::Windows::Foundation::IInspectable const &>((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v21);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v21);
    v11 = 0;
  }
  else
  {
    v11 = 1;
  }
  if ( v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
      v10);
  std::wstring::_Tidy_deallocate((__int64)v24);
  v12 = std::operator+<unsigned short>(v24, v23, RemoteSystemData::Properties::UpdateTimestamp);
  v13 = v12;
  if ( *((_QWORD *)v12 + 3) >= 8uLL )
    v13 = *(char **)v12;
  v14 = *((_QWORD *)v12 + 2);
  v21 = v13;
  v22 = v14;
  if ( !(unsigned __int8)RemoteSystemData::Details::ValueSetReader::TrySerialize<unsigned __int64>(a2, &v21, a1 + 16) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x38,
      (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
      v15);
  std::wstring::_Tidy_deallocate((__int64)v24);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl)
    && !(unsigned int)CloudPCHelpers::GetCloudPCMode() )
  {
    v16 = std::operator+<unsigned short>(v24, v23, RemoteSystemData::Properties::TimeOut);
    v17 = v16;
    if ( *((_QWORD *)v16 + 3) >= 8uLL )
      v17 = *(char **)v16;
    v18 = *((_QWORD *)v16 + 2);
    v21 = v17;
    v22 = v18;
    if ( !(unsigned __int8)RemoteSystemData::Details::ValueSetReader::TrySerialize<unsigned short>(a2, &v21, a1 + 24) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3D,
        (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
        v19);
    std::wstring::_Tidy_deallocate((__int64)v24);
  }
  return std::wstring::_Tidy_deallocate((__int64)v23);
}
