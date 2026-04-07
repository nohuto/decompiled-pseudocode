/*
 * XREFs of ??1CAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x1800B3C64
 * Callers:
 *     _CProjectionBorderManager::_AddTabGroupCaptureEntry_::_1_::dtor$2 @ 0x1800D4329 (_CProjectionBorderManager--_AddTabGroupCaptureEntry_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY::~CAPTURE_TAB_GROUP_MAP_ENTRY(CBaseObject **this)
{
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 3);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 1);
}
