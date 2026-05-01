/*
 * XREFs of ??1_tip_WidgetsAppInstallTIP@@QEAA@XZ @ 0x180695350
 * Callers:
 *     ??1?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@QEAA@XZ @ 0x180235570 (--1-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_WidgetsAppInstallTIP::~_tip_WidgetsAppInstallTIP(_tip_WidgetsAppInstallTIP *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 48);
  std::wstring::_Tidy_deallocate((__int64)this + 16);
}
