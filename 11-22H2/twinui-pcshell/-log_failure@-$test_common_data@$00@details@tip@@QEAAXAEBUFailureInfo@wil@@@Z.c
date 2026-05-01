/*
 * XREFs of ?log_failure@?$test_common_data@$00@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x18041ABF0
 * Callers:
 *     ?NotifyFailure@?$test_watcher@U_tip_IsSupportedTipTest@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x180278450 (-NotifyFailure@-$test_watcher@U_tip_IsSupportedTipTest@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??$emplace_back@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAA?A_TAEBUFailureInfo@wil@@@Z @ 0x180414A50 (--$emplace_back@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailu.c)
 */

void __fastcall tip::details::test_common_data<1>::log_failure(__int64 a1, const struct wil::FailureInfo *a2)
{
  __int64 v3; // rbx

  v3 = a1;
  if ( tip::details::test_common_data<1>::begin_update(a1) )
  {
    try
    {
      std::vector<wil::StoredFailureInfo>::emplace_back<wil::FailureInfo const &>((__int64 *)(v3 + 64), a2);
    }
    catch ( ... )
    {
      *(_DWORD *)(a1 + 56) |= 0x100000u;
      v3 = a1;
    }
  }
  tip::details::test_common_data<1>::end_update(v3);
}
