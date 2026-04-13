/*
 * XREFs of ??1PublishWindowsTipService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800B9B90
 * Callers:
 *     ??_GPublishWindowsTipService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800B9BD0 (--_GPublishWindowsTipService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::PublishWindowsTipService::~PublishWindowsTipService(
        CreativeFramework::Actions::PublishWindowsTipService *this)
{
  std::wstring::_Tidy((_QWORD *)this + 5, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 1, 1, 0LL);
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
