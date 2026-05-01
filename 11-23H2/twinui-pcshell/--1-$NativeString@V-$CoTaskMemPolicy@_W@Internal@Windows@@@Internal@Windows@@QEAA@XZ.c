/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18077CD4C
 * Callers:
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$0 @ 0x18078006E (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$1 @ 0x18078007A (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>(
        __int64 a1)
{
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Free(a1);
}
