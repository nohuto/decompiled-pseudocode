/*
 * XREFs of ??1?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAA@XZ @ 0x1803BEFD0
 * Callers:
 *     _CloneTitleBarConfiguration_::_1_::dtor$0 @ 0x1802BBF43 (_CloneTitleBarConfiguration_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__::_1_::dtor$0 @ 0x1802BBF55 (_wil--MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__--_1_--dtor$0.c)
 *     _CDesktopPositioner::_CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x1802BBF82 (_CDesktopPositioner--_CreateTitlebarConfiguration_--_1_--dtor$0.c)
 *     _FullScreenPositionerHelpers::CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x1803EEA71 (_FullScreenPositionerHelpers--CreateTitlebarConfiguration_--_1_--dtor$0.c)
 *     _TabletModePositioner::CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x1805BB3B7 (_TabletModePositioner--CreateTitlebarConfiguration_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::~ComPtr<ApplicationViewTitlebarConfiguration>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(a1);
}
