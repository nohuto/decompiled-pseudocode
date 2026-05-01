/*
 * XREFs of ??4?$tip_test@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAAAEAV01@AEBV?$test_watcher@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@1@@Z @ 0x18028A1D4
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x18028ABD8 (-Release@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::operator=(
        void **a1,
        __int64 a2)
{
  volatile signed __int32 *v2; // rax
  void *v4; // rcx

  v2 = *(volatile signed __int32 **)(a2 + 48);
  v4 = *a1;
  *a1 = (void *)v2;
  if ( v2 )
    _InterlockedIncrement(v2 + 70);
  if ( v4 )
    tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::Release(v4);
  return a1;
}
