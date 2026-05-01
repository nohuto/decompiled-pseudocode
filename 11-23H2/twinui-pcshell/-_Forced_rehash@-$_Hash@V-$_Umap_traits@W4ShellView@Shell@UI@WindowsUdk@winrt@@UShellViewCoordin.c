/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x18012B848
 * Callers:
 *     ?CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@CA?AU134567@AEBUShellAnimationCoordinator@34567@AEBV?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@@Z @ 0x18012B520 (-CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Sh.c)
 *     ??$emplace@AEBU?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@1@@Z @ 0x18012BBD4 (--$emplace@AEBU-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@@2@@Z @ 0x18012BA40 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18012BA40.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  unsigned int *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 *v15; // r10
  _QWORD *v16; // rdx
  __int64 v17; // r10
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = (_QWORD *)a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>>>>>::_Assign_grow(
    a1 + 3,
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  v9 = *(_QWORD **)a1[1];
  v10 = v9;
  while ( v9 != v4 )
  {
    v10 = (_QWORD *)*v10;
    result = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)v9 + 16, 4uLL);
    v13 = a1[3];
    v14 = 2 * (a1[6] & result);
    if ( *(_QWORD **)(v13 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & result)) = v12;
LABEL_6:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_7;
    }
    result = *(_QWORD *)(v13 + 16 * (a1[6] & result) + 8);
    v7 = *v11;
    if ( (_DWORD)v7 == *(_DWORD *)(result + 16) )
    {
      v17 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v18 = *(_QWORD **)(v12 + 8);
        *v18 = v10;
        v7 = v10[1];
        *(_QWORD *)v7 = v17;
        result = *(_QWORD *)(v17 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v17 + 8) = v7;
        v10[1] = v18;
        *(_QWORD *)(v12 + 8) = result;
      }
      goto LABEL_6;
    }
    do
    {
      v15 = (unsigned __int64 *)(result + 8);
      if ( *(_QWORD *)(v13 + 8 * v14) == result )
      {
        v16 = *(_QWORD **)(v12 + 8);
        *v16 = v10;
        v7 = v10[1];
        *(_QWORD *)v7 = result;
        result = *v15;
        *(_QWORD *)result = v12;
        *v15 = v7;
        v10[1] = v16;
        *(_QWORD *)(v12 + 8) = result;
        *(_QWORD *)(v13 + 8 * v14) = v12;
        goto LABEL_7;
      }
      result = *v15;
    }
    while ( (_DWORD)v7 != *(_DWORD *)(*v15 + 16) );
    v19 = *(_QWORD *)result;
    v20 = *(_QWORD **)(v12 + 8);
    *v20 = v10;
    v7 = v10[1];
    *(_QWORD *)v7 = v19;
    result = *(_QWORD *)(v19 + 8);
    *(_QWORD *)result = v12;
    *(_QWORD *)(v19 + 8) = v7;
    v10[1] = v20;
    *(_QWORD *)(v12 + 8) = result;
LABEL_7:
    v9 = v10;
  }
  return result;
}
