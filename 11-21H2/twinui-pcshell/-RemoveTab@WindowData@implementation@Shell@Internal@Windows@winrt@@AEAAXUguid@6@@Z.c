/*
 * XREFs of ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18057A674
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18001C644 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18001B7A8 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x180238E36 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_i_ea_180238E36.c)
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_winrt::guid_______lambda_1dfe672833850c3ec4cf9e8c9bbfc16a___ @ 0x18057A1DC (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_winrt--guid_______lam.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBUguid@winrt@@@Z @ 0x18057A824 (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Inte.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA_KAEBUguid@winrt@@@Z @ 0x18057A910 (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V-$_Uhash.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTab(_QWORD *a1, __int128 *a2)
{
  __int64 v2; // rbx
  __int64 *v3; // r8
  char *v6; // rdx
  __int128 v7; // xmm0
  _QWORD *v8; // rax
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v11[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-20h] BYREF

  v12[1] = 0LL;
  v2 = (__int64)(a1 + 19);
  v3 = (__int64 *)a1[22];
  v11[1] = 0LL;
  v6 = (char *)v3 + a1[23];
  v11[2] = v3;
  v12[2] = v6;
  v7 = *a2;
  v12[0] = a1[19];
  v10 = v7;
  v11[0] = (__int64 *)(v12[0] & -(__int64)(a1 + 19 != 0LL));
  std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_winrt::guid_______lambda_1dfe672833850c3ec4cf9e8c9bbfc16a___(
    v13,
    v11,
    (__int64)v12,
    &v10);
  v8 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
         v11,
         (__int64)v13);
  std::deque<winrt::guid>::erase(v2, v13, (__int64)v8);
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::erase(
    a1 + 11,
    a2);
  v10 = *a2;
  winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTabProxyWindow((__int64)a1, (__int64)&v10);
  return std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::erase(
           a1 + 3,
           a2);
}
