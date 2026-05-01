/*
 * XREFs of ?IsUwpWindowEventDispatcherEnabled@@YA_NXZ @ 0x180161EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall IsUwpWindowEventDispatcherEnabled(Windows::Internal::ApplicationModel::WindowManagement *a1)
{
  return Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(a1);
}
