/*
 * XREFs of ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x1807187BC
 * Callers:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18008CE7C (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180113570 (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180714D9C (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     ??$emplace@AEBUhstring@winrt@@AEBU12@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@_N@1@AEBUhstring@winrt@@0@Z @ 0x18070B8AC (--$emplace@AEBUhstring@winrt@@AEBU12@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_comp.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const struct winrt::hstring *a2,
        winrt::impl **a3)
{
  RTL_SRWLOCK *v6; // rbp
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (RTL_SRWLOCK *)((char *)this + 56);
  AcquireSRWLockExclusive((PSRWLOCK)this + 7);
  std::_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::emplace<winrt::hstring const &,winrt::hstring const &>(
    (float *)this + 16,
    (__int64)v7,
    (__int64 *)a2,
    a3);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
