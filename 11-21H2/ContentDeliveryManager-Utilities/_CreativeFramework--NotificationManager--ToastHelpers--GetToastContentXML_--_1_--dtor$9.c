/*
 * XREFs of _CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML_::_1_::dtor$9 @ 0x1800F6239
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180057CF0 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~0x10u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(*(void ***)(a2 + 56));
  }
}
