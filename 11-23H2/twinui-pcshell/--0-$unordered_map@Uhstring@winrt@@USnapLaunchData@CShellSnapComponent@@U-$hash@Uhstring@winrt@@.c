/*
 * XREFs of ??0?$unordered_map@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@6@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@@std@@QEAA@XZ @ 0x18022160C
 * Callers:
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x180109480 (--0CShellSnapComponent@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@1@AEBV?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@1@@Z @ 0x180221384 (--0-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V-$_Uhash_compar.c)
 */

__int64 __fastcall std::unordered_map<winrt::hstring,CShellSnapComponent::SnapLaunchData>::unordered_map<winrt::hstring,CShellSnapComponent::SnapLaunchData>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>(
    a1,
    &v3);
  return a1;
}
