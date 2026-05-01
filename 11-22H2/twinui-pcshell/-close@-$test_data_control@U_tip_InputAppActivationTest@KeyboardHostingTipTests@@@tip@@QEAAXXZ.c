/*
 * XREFs of ?close@?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAAXXZ @ 0x18051CC14
 * Callers:
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1800A3B50 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 *     ??1?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA@XZ @ 0x18050C1B0 (--1-$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAA@XZ.c)
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18050D570 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18050EFD4 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BD3E0 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 */

void __fastcall tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::close(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip::details::test_common_data<0>::end_update(v2 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
  }
}
