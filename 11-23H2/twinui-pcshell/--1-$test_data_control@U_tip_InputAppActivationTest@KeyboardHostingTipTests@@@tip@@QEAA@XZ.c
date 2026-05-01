/*
 * XREFs of ??1?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA@XZ @ 0x18050C1B0
 * Callers:
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator() @ 0x180208118 (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--operator().c)
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 *     __lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator()_::_1_::dtor$4 @ 0x180208D8E (__lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator()_--_1_--dtor$4.c)
 *     __lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator()_::_1_::dtor$7 @ 0x180208D9A (__lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator()_--_1_--dtor$7.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAAXXZ @ 0x18051CC14 (-close@-$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAAXXZ.c)
 */

void __fastcall tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::~test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::close(a1);
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
