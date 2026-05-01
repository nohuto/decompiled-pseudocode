/*
 * XREFs of ??0?$unordered_set@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@Uguid@winrt@@@4@@std@@QEAA@XZ @ 0x18001D0E0
 * Callers:
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x18001B0F8 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18001C644 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@Uguid@winrt@@@1@@Z @ 0x18001D110 (--0-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std.c)
 */

__int64 __fastcall std::unordered_set<winrt::guid>::unordered_set<winrt::guid>(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>(
    a1,
    &v3);
  return a1;
}
