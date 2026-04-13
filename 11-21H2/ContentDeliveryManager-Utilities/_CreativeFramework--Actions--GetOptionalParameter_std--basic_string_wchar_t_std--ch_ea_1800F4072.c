/*
 * XREFs of _CreativeFramework::Actions::GetOptionalParameter_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______::_1_::dtor$2 @ 0x1800F4072
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180057CF0 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::GetOptionalParameter_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 80));
  }
}
