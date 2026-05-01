/*
 * XREFs of ??1_tip_AppPrelaunch@@QEAA@XZ @ 0x180695300
 * Callers:
 *     ??1?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@XZ @ 0x180235300 (--1-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall _tip_AppPrelaunch::~_tip_AppPrelaunch(_tip_AppPrelaunch *this, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((char *)this + 64, a2);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 40);
}
