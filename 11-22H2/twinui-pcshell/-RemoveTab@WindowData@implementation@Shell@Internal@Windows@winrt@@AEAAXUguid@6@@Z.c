/*
 * XREFs of ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18063A0A8
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18003369C (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180034818 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x1802E812A (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBUguid@winrt@@@Z @ 0x18063A4EC (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Inte.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA_KAEBUguid@winrt@@@Z @ 0x18063A5D8 (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V-$_Uhash.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTab(__int64 a1, _OWORD *a2)
{
  __int64 *v2; // r10
  __int64 v4; // r8
  __int64 v6; // rsi
  __int64 *v7; // r9
  __int64 v8; // r11
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  _OWORD v12[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = (__int64 *)(a1 + 152);
  v4 = *(_QWORD *)(a1 + 176);
  v6 = v4 + *(_QWORD *)(a1 + 184);
  if ( a1 == -152 )
    v7 = 0LL;
  else
    v7 = (__int64 *)*v2;
  v12[0] = *a2;
  if ( v7 )
    v8 = *v7;
  else
    v8 = 0LL;
  while ( v4 != v6 )
  {
    v10 = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * (v4 & (*(_QWORD *)(v8 + 16) - 1LL)));
    if ( winrt::operator==(&v10, v12) )
      break;
    ++v4;
  }
  v11 = v4;
  v10 = (unsigned __int64)v7;
  std::deque<winrt::guid>::erase(v2, (__int64 **)v12, (__int64 *)&v10);
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::erase(
    a1 + 88,
    a2);
  v10 = *a2;
  winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTabProxyWindow(a1, (__int64)&v10);
  return std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::erase(
           a1 + 24,
           a2);
}
