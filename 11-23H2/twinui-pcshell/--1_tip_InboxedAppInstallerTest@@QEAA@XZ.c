/*
 * XREFs of ??1_tip_InboxedAppInstallerTest@@QEAA@XZ @ 0x180235AB0
 * Callers:
 *     ??1?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@QEAA@XZ @ 0x1802353D8 (--1-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_InboxedAppInstallerTest::~_tip_InboxedAppInstallerTest(_tip_InboxedAppInstallerTest *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 112);
  std::wstring::_Tidy_deallocate((__int64)this + 80);
  std::wstring::_Tidy_deallocate((__int64)this + 48);
}
