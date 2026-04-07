/*
 * XREFs of ??1CAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x1800AF734
 * Callers:
 *     _CProjectionBorderManager::_AddTabGroupCaptureEntry_::_1_::dtor$2 @ 0x1800CF259 (_CProjectionBorderManager--_AddTabGroupCaptureEntry_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY::~CAPTURE_TAB_GROUP_MAP_ENTRY(CBaseObject **this)
{
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(this + 3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(this + 1);
}
