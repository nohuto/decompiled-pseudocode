/*
 * XREFs of _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer_::_1_::dtor$0 @ 0x1800D9CD2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x1800533AC (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(*(_QWORD *)(a2 + 120));
  }
}
