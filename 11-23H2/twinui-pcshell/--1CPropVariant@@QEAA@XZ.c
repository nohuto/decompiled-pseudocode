/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x1803EC44C
 * Callers:
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsString__tagpropertykey__::_1_::dtor$0 @ 0x1802EA15F (_CPropertyStoreHelperBase_IPropertyStore_--GetAsString__tagpropertykey__--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$5 @ 0x1802EA907 (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$5.c)
 *     _wil::PropertyStoreHelperBase_IPropertyStore_::GetAsInt32__tagpropertykey__::_1_::dtor$0 @ 0x1803EBCD9 (_wil--PropertyStoreHelperBase_IPropertyStore_--GetAsInt32__tagpropertykey__--_1_--dtor$0.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetBoolean__tagpropertykey__::_1_::dtor$0 @ 0x1803EBD69 (_CPropertyStoreHelperBase_IPropertyStore_--GetBoolean__tagpropertykey__--_1_--dtor$0.c)
 *     _wil::PropertyStoreHelperBase_IPropertyStore_::GetAsBoolean__tagpropertykey__::_1_::dtor$0 @ 0x18064C6BA (_wil--PropertyStoreHelperBase_IPropertyStore_--GetAsBoolean__tagpropertykey__--_1_--dtor$0.c)
 *     _wil::PropertyStoreHelperBase_IPropertyStore_::GetAsString__tagpropertykey__::_1_::dtor$0 @ 0x18069A361 (_wil--PropertyStoreHelperBase_IPropertyStore_--GetAsString__tagpropertykey__--_1_--dtor$0.c)
 *     _wil::PropertyStoreHelperBase_IPropertyStore_::GetString__tagpropertykey__::_1_::dtor$0 @ 0x18069A3FC (_wil--PropertyStoreHelperBase_IPropertyStore_--GetString__tagpropertykey__--_1_--dtor$0.c)
 *     _wil::PropertyStoreHelperBase_IPropertyStore_::GetUInt32__tagpropertykey__::_1_::dtor$0 @ 0x18069A496 (_wil--PropertyStoreHelperBase_IPropertyStore_--GetUInt32__tagpropertykey__--_1_--dtor$0.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$1 @ 0x1806A2A09 (_GetUnpackagedAppPinnableItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
