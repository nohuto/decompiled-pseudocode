/*
 * XREFs of __lambda_4f27881777b3828299edd9a0e9cb6746_::operator()_::_1_::dtor$45 @ 0x1800F216D
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180057CF0 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall _lambda_4f27881777b3828299edd9a0e9cb6746_::operator()_::_1_::dtor_45(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 192) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 192) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 272));
  }
}
