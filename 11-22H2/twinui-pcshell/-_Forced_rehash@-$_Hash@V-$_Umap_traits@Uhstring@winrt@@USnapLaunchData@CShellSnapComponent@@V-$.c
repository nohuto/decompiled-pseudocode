/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18022288C
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x18022082C (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@C.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x180221A24 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V-$.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@2@@Z @ 0x1802223A0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1802223A0.c)
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18065CD90 (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  __int64 *v5; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // r14
  _QWORD *v15; // rsi
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // r13
  _QWORD *v20; // r8
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = v2[1];
  v5 = v2 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>>>>>::_Assign_grow(
    (__int64)(v2 + 3),
    2 * v7,
    v4);
  v2[7] = v7;
  v2[6] = v7 - 1;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
            v8,
            v9 + 2);
    v13 = *v5;
    v14 = 2 * (v2[6] & v11);
    if ( *(_QWORD *)(v13 + 16 * (v2[6] & v11)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (v2[6] & v11)) = v9;
      *(_QWORD *)(v13 + 8 * v14 + 8) = v9;
    }
    else
    {
      v15 = *(_QWORD **)(v13 + 16 * (v2[6] & v11) + 8);
      if ( (unsigned __int8)winrt::operator==((__int64)(v9 + 2), (__int64)(v15 + 2), v12) )
      {
        v16 = (_QWORD *)*v15;
        if ( (_QWORD *)*v15 != v9 )
        {
          v17 = (_QWORD *)v9[1];
          *v17 = v10;
          v8 = (_QWORD *)v10[1];
          *v8 = v16;
          v18 = (_QWORD *)v16[1];
          *v18 = v9;
          v16[1] = v8;
          v10[1] = v17;
          v9[1] = v18;
        }
        *(_QWORD *)(v13 + 8 * v14 + 8) = v9;
      }
      else
      {
        v19 = v15;
        while ( 1 )
        {
          v20 = v15 + 1;
          if ( *(_QWORD **)(v13 + 8 * v14) == v19 )
            break;
          v15 = (_QWORD *)*v20;
          v19 = (_QWORD *)*v20;
          if ( (unsigned __int8)winrt::operator==((__int64)(v9 + 2), *v20 + 16LL, (__int64)v20) )
          {
            v21 = *v15;
            v22 = (_QWORD *)v9[1];
            *v22 = v10;
            v8 = (_QWORD *)v10[1];
            *v8 = v21;
            v23 = *(_QWORD **)(v21 + 8);
            *v23 = v9;
            *(_QWORD *)(v21 + 8) = v8;
            v10[1] = v22;
            v9[1] = v23;
            goto LABEL_16;
          }
        }
        v24 = (_QWORD *)v9[1];
        *v24 = v10;
        v25 = (_QWORD *)v10[1];
        *v25 = v15;
        v8 = (_QWORD *)*v20;
        *v8 = v9;
        *v20 = v25;
        v10[1] = v24;
        v9[1] = v8;
        *(_QWORD *)(v13 + 8 * v14) = v9;
      }
LABEL_16:
      v2 = a1;
    }
    v9 = v10;
    v5 = v2 + 3;
  }
  v28 = 0LL;
  return std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Clear_guard::~_Clear_guard(&v28);
}
