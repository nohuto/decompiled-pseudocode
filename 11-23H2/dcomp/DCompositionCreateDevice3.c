/*
 * XREFs of DCompositionCreateDevice3 @ 0x18001BDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall DCompositionCreateDevice3(struct IUnknown *a1, const struct _GUID *a2, void **a3)
{
  return DirectComposition::CDevice::DCompositionCreateDevice3(a1, a2, a3);
}
