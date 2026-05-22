/*
 * XREFs of ?CreateTargetForHwnd@CDevice@DirectComposition@@UEAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z @ 0x18006A430
 * Callers:
 *     ?CreateTargetForHwnd@CDevice@DirectComposition@@WBA@EAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z @ 0x1800A89F0 (-CreateTargetForHwnd@CDevice@DirectComposition@@WBA@EAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateTargetForHwnd(
        DirectComposition::CDevice *this,
        HWND a2,
        int a3,
        struct IDCompositionTarget **a4)
{
  return DirectComposition::CDevice::CreateTargetHelper(this, a2, a3 != 0, a4);
}
