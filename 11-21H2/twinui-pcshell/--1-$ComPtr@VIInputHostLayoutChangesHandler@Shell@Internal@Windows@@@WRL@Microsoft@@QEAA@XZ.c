/*
 * XREFs of ??1?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18038E1E8
 * Callers:
 *     _UndockedSearchAppExperienceManager::RegisterTouchKeyboardEventHandlers_::_1_::dtor$0 @ 0x180222021 (_UndockedSearchAppExperienceManager--RegisterTouchKeyboardEventHandlers_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::~ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(a1);
}
