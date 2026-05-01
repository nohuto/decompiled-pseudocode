/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x1801873CC
 * Callers:
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180162744 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::_Unchecked_erase(
        __int64 a1,
        _QWORD *a2)
{
  const unsigned __int8 **v2; // rdi
  bool v4; // cf
  __int64 v5; // r8
  const unsigned __int8 *v6; // rdx
  __int64 appended; // rax
  _QWORD *v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  std::_Ref_count_base *v13; // rcx

  v2 = (const unsigned __int8 **)(a2 + 2);
  v4 = a2[5] < 8uLL;
  v5 = a2[4];
  v6 = (const unsigned __int8 *)(a2 + 2);
  if ( !v4 )
    v6 = *v2;
  appended = std::_Fnv1a_append_bytes(a1, v6, 2 * v5);
  v9 = v8[3];
  v10 = 2 * (v8[6] & appended);
  if ( *(_QWORD **)(v9 + 16 * (v8[6] & appended) + 8) == a2 )
  {
    if ( *(_QWORD **)(v9 + 16 * (v8[6] & appended)) == a2 )
    {
      v11 = v8[1];
      *(_QWORD *)(v9 + 8 * v10) = v11;
    }
    else
    {
      v11 = a2[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(_QWORD **)(v9 + 16 * (v8[6] & appended)) == a2 )
  {
    *(_QWORD *)(v9 + 16 * (v8[6] & appended)) = *a2;
  }
  v12 = *a2;
  --v8[2];
  *(_QWORD *)a2[1] = v12;
  *(_QWORD *)(v12 + 8) = a2[1];
  v13 = (std::_Ref_count_base *)v2[5];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  std::wstring::_Tidy_deallocate((__int64)v2);
  std::_Deallocate<16,0>(a2, 0x40uLL);
  return v12;
}
