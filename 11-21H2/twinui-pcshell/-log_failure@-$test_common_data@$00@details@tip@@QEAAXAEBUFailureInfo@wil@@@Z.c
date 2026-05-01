/*
 * XREFs of ?log_failure@?$test_common_data@$00@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x180452794
 * Callers:
 *     ?NotifyFailure@?$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1801C9300 (-NotifyFailure@-$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??$emplace_back@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAAEAVStoredFailureInfo@wil@@AEBUFailureInfo@3@@Z @ 0x18038D9A4 (--$emplace_back@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailu.c)
 */

void __fastcall tip::details::test_common_data<1>::log_failure(__int64 a1, const struct wil::FailureInfo *a2)
{
  __int64 v3; // rbx

  v3 = a1;
  if ( tip::details::test_common_data<1>::begin_update(a1) )
  {
    try
    {
      std::vector<wil::StoredFailureInfo>::emplace_back<wil::FailureInfo const &>((__int64 *)(v3 + 32), a2);
    }
    catch ( ... )
    {
      *(_DWORD *)(a1 + 24) |= 0x100000u;
      v3 = a1;
    }
  }
  tip::details::test_common_data<1>::end_update(v3);
}
