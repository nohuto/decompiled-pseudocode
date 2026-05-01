/*
 * XREFs of ?push_back@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z @ 0x18046D564
 * Callers:
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x18028909C (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180462FB8 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 * Callees:
 *     ?reserve@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z @ 0x1801F10F0 (-reserve@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z.c)
 *     ??0test_flag@tip2@@QEAA@$$QEAU01@@Z @ 0x180466148 (--0test_flag@tip2@@QEAA@$$QEAU01@@Z.c)
 */

char __fastcall tip2::vector_nothrow<tip2::test_flag>::push_back(__int64 a1, __int64 a2)
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
  result = tip2::vector_nothrow<tip2::test_flag>::reserve((void **)a1, v5);
  if ( result )
  {
LABEL_5:
    tip2::test_flag::test_flag(*(_QWORD *)a1 + 104LL * *(_QWORD *)(a1 + 16), a2);
    ++*(_QWORD *)(a1 + 16);
    return 1;
  }
  return result;
}
