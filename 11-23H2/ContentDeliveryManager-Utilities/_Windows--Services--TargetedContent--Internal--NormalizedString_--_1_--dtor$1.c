/*
 * XREFs of _Windows::Services::TargetedContent::Internal::NormalizedString_::_1_::dtor$1 @ 0x1800D94C6
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800531F8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::NormalizedString_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      *(CreativeFramework::TargetedContentLayoutHelpers::Tile **)(a2 + 40),
      a2);
  }
}
