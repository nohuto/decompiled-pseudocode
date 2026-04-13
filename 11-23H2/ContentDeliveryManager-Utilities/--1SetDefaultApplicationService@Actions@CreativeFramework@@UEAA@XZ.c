/*
 * XREFs of ??1SetDefaultApplicationService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800AC970
 * Callers:
 *     ??_EPinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800ACFF0 (--_EPinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::SetDefaultApplicationService::~SetDefaultApplicationService(
        CreativeFramework::Actions::SetDefaultApplicationService *this)
{
  std::wstring::_Tidy((_QWORD *)this + 9, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 5, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 1, 1, 0LL);
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
