/*
 * XREFs of _std::make_shared_CreativeFramework::Actions::AddTileToCollectionService_wchar_t_const___CreativeFramework::Actions::PinToStartProperties_&__::_1_::dtor$1 @ 0x1800DAEA6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x1800533AC (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

void __fastcall std::make_shared_CreativeFramework::Actions::AddTileToCollectionService_wchar_t_const___CreativeFramework::Actions::PinToStartProperties____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(*(_QWORD *)(a2 + 80));
  }
}
