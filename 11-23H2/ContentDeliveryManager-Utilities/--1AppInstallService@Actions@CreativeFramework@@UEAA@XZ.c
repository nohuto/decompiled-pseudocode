/*
 * XREFs of ??1AppInstallService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800A9F08
 * Callers:
 *     ??_GAppInstallService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800A9FE0 (--_GAppInstallService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::AppInstallService::~AppInstallService(
        CreativeFramework::Actions::AppInstallService *this)
{
  std::wstring::_Tidy((_QWORD *)this + 30, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 26, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 22, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 18, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 14, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 10, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 5, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 1, 1, 0LL);
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
