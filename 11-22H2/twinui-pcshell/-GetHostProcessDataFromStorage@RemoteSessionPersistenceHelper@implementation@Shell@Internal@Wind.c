/*
 * XREFs of ?GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBI@Z @ 0x18027FF10
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x18027F45C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x18027F858 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_18027F858.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAA_NXZ @ 0x180279EA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@d_ea_180279EA8.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@QEAA_NXZ @ 0x180279EE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@.c)
 *     _lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_short___ @ 0x18027F304 (_lambda_38c2e9ac3688a7625bc550deaa567694_--operator()_unsigned_short_const___int_unsigned_short_.c)
 *     _lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___ @ 0x18027F3B0 (_lambda_38c2e9ac3688a7625bc550deaa567694_--operator()_unsigned_short_const___int_unsigned_long__.c)
 *     ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEBIUhstring@6@U76@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEBI$$QEAUhstring@winrt@@1AEAK222222@Z @ 0x18027FC68 (--$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEBIUhstring@6@U76@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes@@@details@wil@@QEAA_NXZ @ 0x180280A38 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAn.c)
 *     ??$check_win32@J@winrt@@YAXJ@Z @ 0x18070B840 (--$check_win32@J@winrt@@YAXJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAA_NXZ @ 0x18071A804 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSe_ea_18071A804.c)
 */

// Hidden C++ exception states: #wind=2
const unsigned __int16 *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetHostProcessDataFromStorage(
        __int64 a1,
        unsigned __int16 *a2,
        void *a3,
        const unsigned int *a4)
{
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // eax
  const char *v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  char IsEnabled; // al
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  winrt::hstring *v21; // rbx
  winrt::hstring *v22; // rax
  const unsigned __int16 *v24; // rax
  DWORD v25; // [rsp+60h] [rbp-478h] BYREF
  void *v26; // [rsp+68h] [rbp-470h] BYREF
  const unsigned __int16 *v27; // [rsp+70h] [rbp-468h] BYREF
  int v28; // [rsp+78h] [rbp-460h] BYREF
  int v29; // [rsp+7Ch] [rbp-45Ch] BYREF
  int v30; // [rsp+80h] [rbp-458h] BYREF
  int v31; // [rsp+84h] [rbp-454h] BYREF
  int v32; // [rsp+88h] [rbp-450h] BYREF
  int v33; // [rsp+8Ch] [rbp-44Ch] BYREF
  _DWORD v34[4]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int16 v35[264]; // [rsp+A0h] [rbp-438h] BYREF
  unsigned __int16 v36[264]; // [rsp+2B0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D8h] [rbp+0h]

  v27 = a2;
  v29 = 0;
  v28 = 0;
  v34[0] = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v26 = a3;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::__private_IsEnabled((volatile signed __int32 *)`wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl) )
  {
    v25 = 2;
    v6 = (unsigned int)lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_short___(
                         (HKEY **)&v26,
                         (LPCWSTR *)&off_1807CC128,
                         &v25,
                         v36);
    try
    {
      winrt::check_win32<long>(v6);
      v25 = 2;
      v7 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_short___(
             (HKEY **)&v26,
             (LPCWSTR *)&off_1807CC140,
             &v25,
             v35);
      winrt::check_win32<long>(v7);
      v25 = 16;
      v8 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
             (HKEY **)&v26,
             (LPCWSTR *)&off_1807CC138,
             &v25,
             &v29);
      winrt::check_win32<long>(v8);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xE1,
        (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        v9);
      v24 = v27;
      *(_QWORD *)v27 = 0LL;
      *((_QWORD *)v24 + 1) = 0LL;
      return v27;
    }
  }
  else
  {
    v25 = 2;
    v10 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_short___(
            (HKEY **)&v26,
            (LPCWSTR *)&off_1807CC128,
            &v25,
            v36);
    winrt::check_win32<long>(v10);
    v25 = 2;
    v11 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_short___(
            (HKEY **)&v26,
            (LPCWSTR *)&off_1807CC140,
            &v25,
            v35);
    winrt::check_win32<long>(v11);
    v25 = 16;
    v12 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
            (HKEY **)&v26,
            (LPCWSTR *)&off_1807CC138,
            &v25,
            &v29);
    winrt::check_win32<long>(v12);
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::GetImpl'::`2'::impl);
  v25 = 16;
  if ( IsEnabled )
  {
    v14 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
            (HKEY **)&v26,
            (LPCWSTR *)&off_1807CC130,
            &v25,
            &v28);
    if ( v14 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xEE,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v14);
  }
  else
  {
    v15 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
            (HKEY **)&v26,
            (LPCWSTR *)&off_1807CC130,
            &v25,
            &v28);
    winrt::check_win32<long>(v15);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl) )
  {
    v25 = 16;
    v27 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
    v16 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
            (HKEY **)&v26,
            &v27,
            &v25,
            v34);
    if ( v16 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xF7,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v16);
    v25 = 16;
    v27 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
    v17 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
            (HKEY **)&v26,
            &v27,
            &v25,
            &v33);
    if ( v17 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xF8,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v17);
    v25 = 16;
    v27 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
    v18 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
            (HKEY **)&v26,
            &v27,
            &v25,
            &v32);
    if ( v18 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xF9,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v18);
    v25 = 16;
    v27 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
    v19 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
            (HKEY **)&v26,
            &v27,
            &v25,
            &v31);
    if ( v19 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xFA,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v19);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::GetImpl'::`2'::impl) )
  {
    v25 = 16;
    v27 = winrt::hstring::c_str((winrt::hstring *)&c_supportBlendedDisplaySettings);
    v20 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
            (HKEY **)&v26,
            &v27,
            &v25,
            &v30);
    if ( v20 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xFF,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v20);
  }
  v21 = winrt::hstring::hstring((winrt::hstring *)&v26, v35);
  v22 = winrt::hstring::hstring((winrt::hstring *)&v27, v36);
  std::make_shared<winrt::Windows::Internal::Shell::implementation::HostProcessData,unsigned int const &,winrt::hstring,winrt::hstring,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
    a2,
    a4,
    v22,
    v21,
    &v29,
    &v28,
    v34,
    &v33,
    &v32,
    &v31,
    &v30);
  winrt::hstring::~hstring((void **)&v27);
  winrt::hstring::~hstring(&v26);
  return a2;
}
