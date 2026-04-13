/*
 * XREFs of _std::money_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getmfld_::_1_::dtor$6 @ 0x1800D46BB
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800531F8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall std::money_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getmfld_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~2u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      (CreativeFramework::TargetedContentLayoutHelpers::Tile *)(a2 + 152),
      a2);
  }
}
