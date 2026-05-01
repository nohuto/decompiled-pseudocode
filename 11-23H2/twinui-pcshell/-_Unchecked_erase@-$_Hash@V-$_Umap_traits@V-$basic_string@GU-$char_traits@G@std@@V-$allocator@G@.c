/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x1801C5E04
 * Callers:
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019BBA4 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
  __int64 v11; // rsi
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // rax

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
      v14 = v8[1];
      *(_QWORD *)(v9 + 8 * v10) = v14;
    }
    else
    {
      v14 = a2[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v14;
  }
  else if ( *(_QWORD **)(v9 + 16 * (v8[6] & appended)) == a2 )
  {
    *(_QWORD *)(v9 + 16 * (v8[6] & appended)) = *a2;
  }
  v11 = *a2;
  --v8[2];
  *(_QWORD *)a2[1] = v11;
  *(_QWORD *)(v11 + 8) = a2[1];
  v12 = (std::_Ref_count_base *)v2[5];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  std::wstring::_Tidy_deallocate((__int64)v2);
  std::_Deallocate<16,0>(a2, 0x40uLL);
  return v11;
}
