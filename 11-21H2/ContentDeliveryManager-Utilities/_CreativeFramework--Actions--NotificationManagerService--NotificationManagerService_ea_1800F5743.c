/*
 * XREFs of _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$12 @ 0x1800F5743
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180057CF0 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 656));
  }
}
