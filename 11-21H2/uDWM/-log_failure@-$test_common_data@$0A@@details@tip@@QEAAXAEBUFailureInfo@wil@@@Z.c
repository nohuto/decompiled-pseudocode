/*
 * XREFs of ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1800F62A8
 * Callers:
 *     ?NotifyFailure@?$test_watcher@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800F4470 (-NotifyFailure@-$test_watcher@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@E.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18003FFFC (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180095DFC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x1800F1E50 (--$_Emplace_reallocate@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 */

void __fastcall tip::details::test_common_data<0>::log_failure(__int64 a1, const struct wil::FailureInfo *a2)
{
  __int64 *v3; // rbx
  wil::StoredFailureInfo *v4; // rax

  v3 = (__int64 *)a1;
  if ( tip::details::test_common_data<0>::begin_update(a1) )
  {
    v4 = (wil::StoredFailureInfo *)v3[5];
    if ( v4 == (wil::StoredFailureInfo *)v3[6] )
    {
      try
      {
        std::vector<wil::StoredFailureInfo>::_Emplace_reallocate<wil::FailureInfo const &>(v3 + 4, v3[5], a2);
      }
      catch ( ... )
      {
        *(_DWORD *)(a1 + 24) |= 0x100000u;
        v3 = (__int64 *)a1;
      }
    }
    else
    {
      *((_QWORD *)v4 + 19) = 0LL;
      *((_QWORD *)v4 + 20) = 0LL;
      wil::StoredFailureInfo::SetFailureInfo(v4, a2);
      v3[5] += 168LL;
    }
  }
  tip::details::test_common_data<0>::end_update((__int64)v3);
}
