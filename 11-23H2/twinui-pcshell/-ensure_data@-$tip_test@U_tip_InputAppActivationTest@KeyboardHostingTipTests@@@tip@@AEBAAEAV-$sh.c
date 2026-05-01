/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18051CD38
 * Callers:
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1800A3B50 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 *     ??C?$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA?AV?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@1@XZ @ 0x18050CF3C (--C-$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA-AV-$test_data_con.c)
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18050D570 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18050EFD4 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@tip@@@std@@QEAA@XZ @ 0x180507C98 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTe.c)
 */

_QWORD *__fastcall tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xE0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest>>::_Ref_count_obj2<tip::details::test_merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
