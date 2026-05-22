/*
 * XREFs of DCompositionCreateDwmDevice @ 0x1800FF660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DCompositionCreateDwmDevice(const struct _GUID *a1, void **a2, struct IDwmChannel **a3)
{
  return DirectComposition::CDevice::DCompositionCreateDwmDevice(a1, a2, a3);
}
