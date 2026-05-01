/*
 * XREFs of ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x18046D5C0
 * Callers:
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x180287E80 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedLis.c)
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x18046323C (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 *     ?log_failure@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x18046D390 (-log_failure@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x18046D40C (-log_failure@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x180024400 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z @ 0x1801F12A0 (-reserve@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z.c)
 */

char __fastcall tip2::vector_nothrow<wil::StoredFailureInfo>::push_back(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // rdx
  char result; // al

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) < v2 )
    goto LABEL_5;
  v5 = 2 * v2;
  if ( !v2 )
    v5 = 10LL;
  result = tip2::vector_nothrow<wil::StoredFailureInfo>::reserve((void **)a1, v5);
  if ( result )
  {
LABEL_5:
    wil::StoredFailureInfo::StoredFailureInfo(*(_QWORD *)a1 + 168LL * *(_QWORD *)(a1 + 16), a2);
    ++*(_QWORD *)(a1 + 16);
    return 1;
  }
  return result;
}
