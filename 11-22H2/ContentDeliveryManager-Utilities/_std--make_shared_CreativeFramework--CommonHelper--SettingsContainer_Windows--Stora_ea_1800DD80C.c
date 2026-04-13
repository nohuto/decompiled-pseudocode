/*
 * XREFs of _std::make_shared_CreativeFramework::CommonHelper::SettingsContainer_Windows::Storage::IApplicationDataContainer___&__::_1_::dtor$1 @ 0x1800DD80C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x1800533AC (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

void __fastcall std::make_shared_CreativeFramework::CommonHelper::SettingsContainer_Windows::Storage::IApplicationDataContainer______::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(*(_QWORD *)(a2 + 80));
  }
}
