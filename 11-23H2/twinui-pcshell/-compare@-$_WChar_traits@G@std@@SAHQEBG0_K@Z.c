/*
 * XREFs of ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18008FF20
 * Callers:
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180038680 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18008FDB8 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x1800C4710 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18017B6A0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1802D21B6 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ?GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18061D5D0 (-GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_WChar_traits<unsigned short>::compare(char *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int16 v4; // r9
  signed __int64 v5; // rcx
  bool v6; // cc
  unsigned __int16 v7; // r9

  result = 0LL;
  if ( a3 )
  {
    v4 = *(_WORD *)a1;
    if ( *(_WORD *)a1 < *(_WORD *)a2 )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      v5 = a1 - a2;
      v6 = v4 <= *(_WORD *)a2;
      while ( v6 )
      {
        if ( a3 == 1 )
          return result;
        a2 += 2;
        --a3;
        v7 = *(_WORD *)&a2[v5];
        v6 = v7 <= *(_WORD *)a2;
        if ( v7 < *(_WORD *)a2 )
          return 0xFFFFFFFFLL;
      }
      return 1LL;
    }
  }
  return result;
}
