/*
 * XREFs of ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1802E7E96
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18003369C (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 *     ?ActivateTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x180639BC4 (-ActivateTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@1@AEBUguid@winrt@@@Z @ 0x1800349D0 (--$find@X@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@I.c)
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180035BE0 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x1802E812A (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 *     ??$emplace_front@AEBUguid@winrt@@@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?A_TAEBUguid@winrt@@@Z @ 0x1806398CC (--$emplace_front@AEBUguid@winrt@@@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEA.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(
        _QWORD *a1,
        _OWORD *a2)
{
  __int64 **v2; // rbx
  __int64 v4; // r8
  __int64 v6; // r11
  __int64 *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  _OWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = (__int64 **)(a1 + 19);
  v4 = a1[22];
  v6 = v4 + a1[23];
  if ( a1 == (_QWORD *)-152LL )
    v7 = 0LL;
  else
    v7 = *v2;
  v13[0] = *a2;
  if ( v7 )
    v8 = *v7;
  else
    v8 = 0LL;
  while ( v4 != v6 )
  {
    v11 = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * (v4 & (*(_QWORD *)(v8 + 16) - 1LL)));
    if ( winrt::operator==(&v11, v13) )
    {
      v12 = v9;
      v11 = v10;
      std::deque<winrt::guid>::erase(v2, v13, &v11);
      std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::find<void>(
        (__int64)(a1 + 3),
        v13,
        v2[1][(unsigned __int64)v2[3] & ((unsigned __int64)v2[2] - 1)]);
      if ( *(_QWORD *)&v13[0] != a1[4] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
          *(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)(*(_QWORD *)&v13[0] + 32LL),
          0);
      std::deque<winrt::guid>::emplace_front<winrt::guid const &>(v2, a2);
      return;
    }
    v4 = v9 + 1;
  }
}
