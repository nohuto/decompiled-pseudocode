/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x18031E408
 * Callers:
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsBoolean__tagpropertykey__::_1_::dtor$0 @ 0x1802159CE (_CPropertyStoreHelperBase_IPropertyStore_--GetAsBoolean__tagpropertykey__--_1_--dtor$0.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsString__tagpropertykey__::_1_::dtor$0 @ 0x18023984B (_CPropertyStoreHelperBase_IPropertyStore_--GetAsString__tagpropertykey__--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$5 @ 0x180239D3A (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$5.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsInt32__tagpropertykey__::_1_::dtor$0 @ 0x18031DAB5 (_CPropertyStoreHelperBase_IPropertyStore_--GetAsInt32__tagpropertykey__--_1_--dtor$0.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetBoolean__tagpropertykey__::_1_::dtor$0 @ 0x18031DB45 (_CPropertyStoreHelperBase_IPropertyStore_--GetBoolean__tagpropertykey__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
