/*
 * XREFs of DCompositionCreateDevice @ 0x1800FF650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DCompositionCreateDevice(struct IUnknown *a1, const struct _GUID *a2, void **a3)
{
  return DirectComposition::CDevice::DCompositionCreateDevice(a1, a2, a3);
}
