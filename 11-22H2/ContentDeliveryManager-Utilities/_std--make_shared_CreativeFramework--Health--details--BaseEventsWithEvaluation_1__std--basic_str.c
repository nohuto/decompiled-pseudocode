/*
 * XREFs of _std::make_shared_CreativeFramework::Health::details::BaseEventsWithEvaluation_1__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&_bool_const_&__::_1_::dtor$1 @ 0x1800D63A5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x1800533AC (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

void __fastcall std::make_shared_CreativeFramework::Health::details::BaseEventsWithEvaluation_1__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___bool_const____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(*(_QWORD *)(a2 + 80));
  }
}
