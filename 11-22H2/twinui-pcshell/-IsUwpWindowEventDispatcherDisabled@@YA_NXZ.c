/*
 * XREFs of ?IsUwpWindowEventDispatcherDisabled@@YA_NXZ @ 0x1801BE9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180170144 (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

bool __fastcall IsUwpWindowEventDispatcherDisabled(Windows::Internal::ApplicationModel::WindowManagement *a1)
{
  return Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(a1) == 0;
}
