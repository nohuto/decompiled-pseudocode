/*
 * XREFs of ??1CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x1800B3C3C
 * Callers:
 *     _CProjectionBorderManager::_AddDisplayCaptureEntry_::_1_::dtor$2 @ 0x1800D3E24 (_CProjectionBorderManager--_AddDisplayCaptureEntry_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY(
        CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 3);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 1);
}
