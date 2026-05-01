/*
 * XREFs of ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1804F6D0C
 * Callers:
 *     ?NotifyFailure@?$test_watcher@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1804F5DE0 (-NotifyFailure@-$test_watcher@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@tip@@EE.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??$emplace_back@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAA?A_TAEBUFailureInfo@wil@@@Z @ 0x180414A50 (--$emplace_back@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailu.c)
 */

void __fastcall tip::details::test_common_data<0>::log_failure(__int64 a1, const struct wil::FailureInfo *a2)
{
  __int64 v3; // rbx

  v3 = a1;
  if ( tip::details::test_common_data<0>::begin_update(a1) )
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
  tip::details::test_common_data<0>::end_update(v3);
}
