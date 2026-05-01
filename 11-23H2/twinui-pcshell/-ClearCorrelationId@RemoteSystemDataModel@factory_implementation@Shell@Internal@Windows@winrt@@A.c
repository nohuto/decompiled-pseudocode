/*
 * XREFs of ?ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18070FA5C
 * Callers:
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180717B68 (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180719A68 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUhstring@winrt@@@Z @ 0x18071B25C (-erase@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhs.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::ClearCorrelationId(
        RTL_SRWLOCK *this,
        const struct winrt::hstring *a2)
{
  RTL_SRWLOCK *v4; // rbx

  if ( *(_QWORD *)a2 )
  {
    v4 = this + 7;
    AcquireSRWLockExclusive(this + 7);
    std::_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::erase(
      &this[8],
      a2);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
