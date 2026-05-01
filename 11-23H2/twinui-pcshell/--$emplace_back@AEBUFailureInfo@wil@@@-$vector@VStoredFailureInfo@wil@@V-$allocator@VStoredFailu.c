/*
 * XREFs of ??$emplace_back@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAA?A_TAEBUFailureInfo@wil@@@Z @ 0x180414A50
 * Callers:
 *     ?log_failure@?$test_common_data@$00@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x18041ABF0 (-log_failure@-$test_common_data@$00@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1804F6D0C (-log_failure@-$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char *__fastcall std::vector<wil::StoredFailureInfo>::emplace_back<wil::FailureInfo const &>(
        __int64 *a1,
        const struct wil::FailureInfo *a2)
{
  wil::StoredFailureInfo *v2; // rax
  char *result; // rax

  v2 = (wil::StoredFailureInfo *)a1[1];
  if ( v2 == (wil::StoredFailureInfo *)a1[2] )
    return std::vector<wil::StoredFailureInfo>::_Emplace_reallocate<wil::FailureInfo const &>(a1, a1[1], a2);
  *((_QWORD *)v2 + 19) = 0LL;
  *((_QWORD *)v2 + 20) = 0LL;
  wil::StoredFailureInfo::SetFailureInfo(v2, a2);
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 168);
  return result;
}
