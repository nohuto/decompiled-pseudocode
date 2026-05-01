/*
 * XREFs of ??1_tip_ToggleDashboardThroughSVC@@QEAA@XZ @ 0x180695328
 * Callers:
 *     ??1?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ @ 0x180235498 (--1-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall _tip_ToggleDashboardThroughSVC::~_tip_ToggleDashboardThroughSVC(
        _tip_ToggleDashboardThroughSVC *this,
        __int64 a2)
{
  __int64 v3; // rdx

  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((char *)this + 64, a2);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((char *)this + 24, v3);
}
