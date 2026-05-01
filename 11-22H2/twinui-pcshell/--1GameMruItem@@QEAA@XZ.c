/*
 * XREFs of ??1GameMruItem@@QEAA@XZ @ 0x1803D4A64
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UGameMruItem@@@std@@EEAAXXZ @ 0x1803DC8B0 (-_Destroy@-$_Ref_count_obj2@UGameMruItem@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall GameMruItem::~GameMruItem(GameMruItem *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 72);
  std::wstring::_Tidy_deallocate((__int64)this + 40);
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}
