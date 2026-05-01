/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180194964
 * Callers:
 *     ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x1801948AC (--1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ.c)
 *     ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18048C500 (--1-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_pt.c)
 *     ??1?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18048C558 (--1-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@U.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rsi

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (std::_Ref_count_base *)v2[7];
      v4 = (_QWORD *)*v2;
      if ( v3 )
        std::_Ref_count_base::_Decref(v3);
      std::wstring::_Tidy_deallocate((__int64)(v2 + 2));
      std::_Deallocate<16,0>(v2, 0x40uLL);
      v2 = v4;
    }
    while ( v4 );
  }
}
