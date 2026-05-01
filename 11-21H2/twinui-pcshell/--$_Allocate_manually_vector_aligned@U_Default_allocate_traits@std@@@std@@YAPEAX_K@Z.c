/*
 * XREFs of ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1802DE4C0
 * Callers:
 *     ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x18007CBD0 (-_Reallocate_exactly@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180088008 (-_Growmap@-$deque@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800891F0 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x18008AC74 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18008B090 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18010AB34 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x180111D80 (--$_Emplace_reallocate@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$al.c)
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x180126BD0 (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UAp.c)
 *     ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x180127270 (-overflow@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@MEAAHH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(unsigned __int64 a1)
{
  void *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  void *v4; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    std::_Throw_bad_array_new_length();
  v1 = operator new(a1 + 39);
  v4 = v1;
  if ( !v1 )
  {
    _o__invalid_parameter_noinfo_noreturn(0LL, v2, v3);
    __debugbreak();
    JUMPOUT(0x1802DE502LL);
  }
  result = ((unsigned __int64)v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v4;
  return result;
}
