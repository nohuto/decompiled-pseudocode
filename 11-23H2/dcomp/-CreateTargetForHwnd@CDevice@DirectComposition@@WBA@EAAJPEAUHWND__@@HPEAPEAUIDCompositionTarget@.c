/*
 * XREFs of ?CreateTargetForHwnd@CDevice@DirectComposition@@WBA@EAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z @ 0x1800A89F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateTargetForHwnd(
        __int64 a1,
        HWND a2,
        int a3,
        struct IDCompositionTarget **a4)
{
  return DirectComposition::CDevice::CreateTargetForHwnd((DirectComposition::CDevice *)(a1 - 16), a2, a3, a4);
}
