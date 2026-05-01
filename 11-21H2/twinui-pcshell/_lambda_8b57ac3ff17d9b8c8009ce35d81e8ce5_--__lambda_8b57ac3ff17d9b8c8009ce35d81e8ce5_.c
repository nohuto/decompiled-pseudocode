/*
 * XREFs of _lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_ @ 0x1801AF484
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___::_CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___ @ 0x1801AF630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___--_CTask.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180462080 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18022E07E (--1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::~OnApplicationChromeOffsetsChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)(a1 + 3));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
