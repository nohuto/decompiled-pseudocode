/*
 * XREFs of ??1CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x1800AF70C
 * Callers:
 *     _CProjectionBorderManager::_AddDisplayCaptureEntry_::_1_::dtor$2 @ 0x1800CED64 (_CProjectionBorderManager--_AddDisplayCaptureEntry_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY(
        CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)this + 1);
}
