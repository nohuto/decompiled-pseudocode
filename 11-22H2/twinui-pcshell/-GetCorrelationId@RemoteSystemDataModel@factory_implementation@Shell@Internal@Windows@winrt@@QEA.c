/*
 * XREFs of ?GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@@Z @ 0x18071185C
 * Callers:
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x180711904 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180719A68 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x18070BA54 (--$find@X@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implem.c)
 *     ?at@?$unordered_map@Uhstring@winrt@@U12@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAAAEAUhstring@winrt@@AEBU34@@Z @ 0x18071AA6C (-at@-$unordered_map@Uhstring@winrt@@U12@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
        RTL_SRWLOCK *a1,
        winrt::hstring *a2,
        __int64 *a3)
{
  RTL_SRWLOCK *v6; // rbx
  winrt::impl **v7; // rax
  struct winrt::impl::hstring_header *v8; // rdx
  unsigned int v9; // r8d
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1 + 7;
  AcquireSRWLockShared(a1 + 7);
  if ( !*a3
    || (PVOID)*std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::find<void>(
                 &a1[8].Ptr,
                 &v11,
                 a3) == a1[9].Ptr )
  {
    winrt::hstring::hstring(a2, &LocaleName);
  }
  else
  {
    v7 = (winrt::impl **)std::unordered_map<winrt::hstring,winrt::hstring>::at(&a1[8], a3);
    *(_QWORD *)a2 = winrt::impl::duplicate_hstring(*v7, v8, v9);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return a2;
}
