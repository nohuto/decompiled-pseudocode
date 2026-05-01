/*
 * XREFs of ??$make_shared@V?$test_merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@details@tip@@@0@XZ @ 0x180122AF0
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@2@XZ @ 0x18011F83C (-start_and_watch_errors@-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA-AV-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest>,>(
        _QWORD *a1)
{
  char *v2; // rdx
  _QWORD *result; // rax

  v2 = (char *)operator new(0xA8uLL);
  *(_OWORD *)v2 = 0LL;
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest>>::`vftable';
  *((_QWORD *)v2 + 4) = &tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::c_details;
  *((_QWORD *)v2 + 3) = v2 + 16;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 8) = 0LL;
  *((_QWORD *)v2 + 9) = 0LL;
  *((_QWORD *)v2 + 10) = 0LL;
  *((_QWORD *)v2 + 11) = 0LL;
  *((_QWORD *)v2 + 12) = 0LL;
  *((_DWORD *)v2 + 12) = 0;
  *(_OWORD *)(v2 + 104) = 0LL;
  *((_WORD *)v2 + 61) = -1;
  v2[120] = 0;
  *((_QWORD *)v2 + 16) = 0LL;
  *((_QWORD *)v2 + 17) = 0LL;
  *((_QWORD *)v2 + 18) = 0LL;
  *((_DWORD *)v2 + 38) = 0;
  *((_QWORD *)v2 + 2) = &tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::`vftable';
  *((_QWORD *)v2 + 20) = v2 + 48;
  result = a1;
  *a1 = v2 + 16;
  a1[1] = v2;
  return result;
}
