/*
 * XREFs of ?DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXAEB_KAEBUhstring@6@AEB_N@Z @ 0x1807279FC
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x18027F45C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x18027F858 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_18027F858.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveHostProcessDataToStorage_::_1_::catch$3 @ 0x1802809C9 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--S_ea_1802809C9.c)
 *     ?DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x180727B30 (-DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x180727C48 (-DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 * Callees:
 *     ?TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@AEB_N@Z @ 0x1800A8B3C (-TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAA_NXZ @ 0x180279EA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@d_ea_180279EA8.c)
 *     ??$check_win32@J@winrt@@YAXJ@Z @ 0x18070B840 (--$check_win32@J@winrt@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteIdFromStorage(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *this,
        unsigned __int64 *a2,
        const struct winrt::hstring *a3,
        const bool *a4)
{
  unsigned __int64 v5; // r8
  _BYTE *v6; // r9
  const WCHAR *v7; // rdx
  unsigned int v8; // edi
  HKEY hKey; // [rsp+20h] [rbp-68h] BYREF
  LPCWSTR lpSubKey[9]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v11[6]; // [rsp+72h] [rbp-16h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::TryOpenTrackedIdsKey(
    (__int64)this,
    &hKey,
    (__int64)a3,
    (__int64)a4);
  if ( hKey )
  {
    v5 = *a2;
    v6 = v11;
    do
    {
      v6 -= 2;
      *(_WORD *)v6 = v5 % 0xA + 48;
      v5 /= 0xAuLL;
    }
    while ( v5 );
    std::wstring::wstring((__int64)lpSubKey, v6, v11);
    v7 = (const WCHAR *)lpSubKey;
    if ( lpSubKey[3] >= (LPCWSTR)8 )
      v7 = lpSubKey[0];
    v8 = RegDeleteKeyW(hKey, v7);
    std::wstring::_Tidy_deallocate((__int64)lpSubKey);
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::__private_IsEnabled((volatile signed __int32 *)`wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl) )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0x164,
          (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
          (const char *)v8);
      else
        winrt::check_win32<long>(v8);
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
}
