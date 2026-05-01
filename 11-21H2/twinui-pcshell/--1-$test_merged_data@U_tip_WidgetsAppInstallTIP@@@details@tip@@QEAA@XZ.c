/*
 * XREFs of ??1?$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@QEAA@XZ @ 0x1801C4740
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@@std@@EEAAXXZ @ 0x1801CE7B0 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@@std@@.c)
 * Callees:
 *     ??1_tip_WidgetsAppInstallTIP@@QEAA@XZ @ 0x1801C47D0 (--1_tip_WidgetsAppInstallTIP@@QEAA@XZ.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_WidgetsAppInstallTIP>::~test_merged_data<_tip_WidgetsAppInstallTIP>(
        __int64 a1)
{
  _tip_WidgetsAppInstallTIP::~_tip_WidgetsAppInstallTIP((_tip_WidgetsAppInstallTIP *)(a1 + 144));
  return tip::details::test_common_data<1>::~test_common_data<1>(a1 + 8);
}
