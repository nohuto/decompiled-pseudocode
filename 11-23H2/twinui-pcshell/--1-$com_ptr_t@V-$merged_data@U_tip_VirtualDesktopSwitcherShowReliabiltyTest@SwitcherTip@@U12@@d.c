/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028B6C8
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18028B59C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyT.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028B718 (--1-$test_data_control@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028B750 (--1-$test_watcher@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028B780 (--1-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@de.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028BBF0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTi.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180771E10 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x18028BAFC (-Release@-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>::Release(v1);
  return result;
}
