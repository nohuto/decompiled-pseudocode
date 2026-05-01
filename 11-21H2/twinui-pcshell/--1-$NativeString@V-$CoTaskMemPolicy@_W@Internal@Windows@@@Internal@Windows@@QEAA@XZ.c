/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180440F64
 * Callers:
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$0 @ 0x180443AC5 (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$1 @ 0x180443AD1 (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>(
        __int64 a1)
{
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Free(a1);
}
