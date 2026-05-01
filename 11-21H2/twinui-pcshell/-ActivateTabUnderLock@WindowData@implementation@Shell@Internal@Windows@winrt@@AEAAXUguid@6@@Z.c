/*
 * XREFs of ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180238AF6
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18001C644 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x180577D64 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 * Callees:
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18001C314 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@1@AEBUguid@winrt@@@Z @ 0x18001CB58 (--$find@X@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@I.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x180238E36 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_i_ea_180238E36.c)
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_winrt::guid_______lambda_e1a68749c2a620fba4796884a9d090f2___ @ 0x18057A288 (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_winrt--g_ea_18057A288.c)
 *     ?push_front@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAXAEBUguid@winrt@@@Z @ 0x18057A9FC (-push_front@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAXAEBUguid@winrt@@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(
        _QWORD *a1,
        __int128 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v7; // r8
  __int128 v8; // xmm0
  __int64 result; // rax
  _QWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+90h] [rbp+10h] BYREF

  v12[1] = 0LL;
  v2 = a1 + 19;
  v3 = a1[22];
  v5 = a1[19];
  v7 = a1[23];
  v13[1] = 0LL;
  v8 = *a2;
  v12[2] = v3 + v7;
  v12[0] = v5;
  v13[2] = v3;
  v13[0] = v5 & -(__int64)(a1 + 19 != 0LL);
  v11 = v8;
  ((void (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, __int128 *))std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_winrt::guid_______lambda_e1a68749c2a620fba4796884a9d090f2___)(
    v14,
    v13,
    v12,
    &v11);
  result = v2[4] + v2[3];
  if ( v15 != result )
  {
    v10 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
            v13,
            (__int64)v14);
    std::deque<winrt::guid>::erase(v2, v14, v10);
    std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::find<void>(
      (__int64)(a1 + 3),
      &v16,
      *(_QWORD *)(a1[20] + 8 * (a1[22] & (a1[21] - 1LL))));
    if ( v16 != a1[4] )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
        *(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)(v16 + 32),
        0);
    return std::deque<winrt::guid>::push_front(v2, a2);
  }
  return result;
}
