/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x18013D4EC
 * Callers:
 *     _SearchForHeadphones_::_1_::dtor$4 @ 0x180071820 (_SearchForHeadphones_--_1_--dtor$4.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsUInt32__tagpropertykey__::_1_::dtor$0 @ 0x180071832 (_CPropertyStoreHelperBase_IPropertyStore_--GetAsUInt32__tagpropertykey__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
