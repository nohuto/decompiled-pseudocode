/*
 * XREFs of ??$make_shared@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@0@XZ @ 0x18008D130
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@XZ @ 0x18008D0E8 (-ensure_data@-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_me.c)
 * Callees:
 *     ??0?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@QEAA@XZ @ 0x18008D39C (--0-$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x130uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>>::`vftable';
  tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>::test_merged_data<_tip_RecoverRemoteSessionTipTest>(v3 + 4);
  *a1 = v3 + 4;
  result = a1;
  a1[1] = v3;
  return result;
}
