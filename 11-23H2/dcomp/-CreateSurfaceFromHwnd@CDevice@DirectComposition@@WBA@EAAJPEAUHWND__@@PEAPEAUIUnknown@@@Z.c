/*
 * XREFs of ?CreateSurfaceFromHwnd@CDevice@DirectComposition@@WBA@EAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z @ 0x1800A89B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateSurfaceFromHwnd(__int64 a1, HWND a2, struct IUnknown **a3)
{
  return DirectComposition::CDevice::CreateSurfaceFromHwnd((DirectComposition::CDevice *)(a1 - 16), a2, a3);
}
