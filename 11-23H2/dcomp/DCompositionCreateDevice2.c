/*
 * XREFs of DCompositionCreateDevice2 @ 0x180089770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DCompositionCreateDevice2(struct IUnknown *a1, const struct _GUID *a2, void **a3)
{
  return DirectComposition::CDevice::DCompositionCreateDevice2(a1, a2, a3);
}
