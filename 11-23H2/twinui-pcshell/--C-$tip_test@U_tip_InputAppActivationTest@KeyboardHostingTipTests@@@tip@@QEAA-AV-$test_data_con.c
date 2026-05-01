/*
 * XREFs of ??C?$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA?AV?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@1@XZ @ 0x18050CF3C
 * Callers:
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator() @ 0x180208118 (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--operator().c)
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 * Callees:
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18051CD38 (-ensure_data@-$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV-$sh.c)
 */

__int64 *__fastcall tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = (__int64 *)tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::ensure_data(a1);
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = v3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v5 = *v3;
  *a2 = *v3;
  a2[1] = v3[1];
  tip::details::test_common_data<0>::begin_update(v5 + 8);
  return a2;
}
