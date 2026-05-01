/*
 * XREFs of ?SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180280468
 * Callers:
 *     ?SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180728148 (-SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAA_NXZ @ 0x180279EA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@d_ea_180279EA8.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@QEAA_NXZ @ 0x180279EE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes@@@details@wil@@QEAA_NXZ @ 0x180280A38 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAn.c)
 *     ??$check_win32@J@winrt@@YAXJ@Z @ 0x18070B840 (--$check_win32@J@winrt@@YAXJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAA_NXZ @ 0x18071A804 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSe_ea_18071A804.c)
 *     ?CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x18072C04C (-CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     ?IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x18072C074 (-IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4L.c)
 *     ?RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x18072C0F0 (-RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@X.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveHostProcessDataToStorage(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *a1,
        unsigned int **a2,
        HKEY *a3)
{
  __int64 v5; // rcx
  const BYTE *lpData; // rax
  DWORD cbData; // edx
  __int64 v8; // rcx
  const BYTE *v9; // rax
  DWORD v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // eax
  const char *v13; // r9
  const BYTE *v14; // rax
  DWORD v15; // edx
  unsigned int v16; // eax
  const BYTE *v17; // rax
  DWORD v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // eax
  char IsEnabled; // al
  HKEY v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  const WCHAR *v25; // rax
  unsigned int v26; // eax
  const WCHAR *v27; // rax
  unsigned int v28; // eax
  const WCHAR *v29; // rax
  unsigned int v30; // eax
  const WCHAR *v31; // rax
  unsigned int v32; // eax
  const WCHAR *v33; // rax
  unsigned int v34; // eax
  std::_Ref_count_base *v35; // rcx
  void *v36; // [rsp+30h] [rbp-48h] BYREF
  void *v37; // [rsp+38h] [rbp-40h] BYREF
  BYTE Data[4]; // [rsp+40h] [rbp-38h] BYREF
  BYTE v39[4]; // [rsp+44h] [rbp-34h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-30h] BYREF
  BYTE v41[4]; // [rsp+50h] [rbp-28h] BYREF
  BYTE v42[4]; // [rsp+54h] [rbp-24h] BYREF
  BYTE v43[32]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v47; // [rsp+98h] [rbp+20h] BYREF

  winrt::Windows::Internal::Shell::implementation::HostProcessData::RemoteDesktopId(*a2, &v36);
  winrt::Windows::Internal::Shell::implementation::HostProcessData::CorrelationId(*a2, &v37);
  v5 = (__int64)*a2;
  *(_DWORD *)Data = (*a2)[6];
  *(_DWORD *)v39 = *(_BYTE *)(v5 + 28) != 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::__private_IsEnabled((volatile signed __int32 *)`wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl) )
  {
    lpData = (const BYTE *)winrt::hstring::c_str((winrt::hstring *)&v36);
    v8 = (unsigned int)RegSetValueExW(*a3, L"remoteDesktopId", 0, 1u, lpData, cbData);
    try
    {
      winrt::check_win32<long>(v8);
      v9 = (const BYTE *)winrt::hstring::c_str((winrt::hstring *)&v37);
      v11 = RegSetValueExW(*a3, L"correlationId", 0, 1u, v9, v10);
      winrt::check_win32<long>(v11);
      v12 = RegSetValueExW(*a3, L"cloudPCMode", 0, 4u, Data, 4u);
      winrt::check_win32<long>(v12);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x88,
        (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        v13);
      LOBYTE(v47) = 1;
      v40 = **a2;
      winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteIdFromStorage(
        a1,
        &v40,
        (const struct winrt::hstring *)&v36,
        (const bool *)&v47);
      winrt::hstring::~hstring(&v37);
      winrt::hstring::~hstring(&v36);
      v35 = (std::_Ref_count_base *)a2[1];
      goto LABEL_21;
    }
  }
  else
  {
    v14 = (const BYTE *)winrt::hstring::c_str((winrt::hstring *)&v36);
    v16 = RegSetValueExW(*a3, L"remoteDesktopId", 0, 1u, v14, v15);
    winrt::check_win32<long>(v16);
    v17 = (const BYTE *)winrt::hstring::c_str((winrt::hstring *)&v37);
    v19 = RegSetValueExW(*a3, L"correlationId", 0, 1u, v17, v18);
    winrt::check_win32<long>(v19);
    v20 = RegSetValueExW(*a3, L"cloudPCMode", 0, 4u, Data, 4u);
    winrt::check_win32<long>(v20);
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::GetImpl'::`2'::impl);
  v22 = *a3;
  if ( IsEnabled )
  {
    v23 = RegSetValueExW(v22, L"supportBluetoothSettings", 0, 4u, v39, 4u);
    if ( v23 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x9A,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v23);
  }
  else
  {
    v24 = RegSetValueExW(v22, L"supportBluetoothSettings", 0, 4u, v39, 4u);
    winrt::check_win32<long>(v24);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl) )
  {
    v47 = 1;
    *(_DWORD *)v41 = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                       (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                       (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v47);
    v47 = 2;
    *(_DWORD *)v42 = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                       (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                       (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v47);
    v47 = 4;
    *(_DWORD *)v43 = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                       (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                       (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v47);
    v47 = 3;
    LODWORD(v40) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                     (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                     (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v47);
    v25 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
    v26 = RegSetValueExW(*a3, v25, 0, 4u, v41, 4u);
    if ( v26 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xA9,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v26);
    v27 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
    v28 = RegSetValueExW(*a3, v27, 0, 4u, v42, 4u);
    if ( v28 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xAB,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v28);
    v29 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
    v30 = RegSetValueExW(*a3, v29, 0, 4u, v43, 4u);
    if ( v30 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xAD,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v30);
    v31 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
    v32 = RegSetValueExW(*a3, v31, 0, 4u, (const BYTE *)&v40, 4u);
    if ( v32 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xAF,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v32);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::GetImpl'::`2'::impl) )
  {
    v47 = 5;
    LODWORD(v40) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                     (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                     (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v47);
    v33 = winrt::hstring::c_str((winrt::hstring *)&c_supportBlendedDisplaySettings);
    v34 = RegSetValueExW(*a3, v33, 0, 4u, (const BYTE *)&v40, 4u);
    if ( v34 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xB6,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v34);
  }
  winrt::hstring::~hstring(&v37);
  winrt::hstring::~hstring(&v36);
  v35 = (std::_Ref_count_base *)a2[1];
LABEL_21:
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
}
