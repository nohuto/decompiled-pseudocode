/*
 * XREFs of _CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor$3 @ 0x1800DB889
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800531F8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      (CreativeFramework::TargetedContentLayoutHelpers::Tile *)(a2 + 192),
      a2);
  }
}
