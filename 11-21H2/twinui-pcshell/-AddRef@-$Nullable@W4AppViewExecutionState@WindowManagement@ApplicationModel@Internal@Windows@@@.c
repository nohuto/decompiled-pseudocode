/*
 * XREFs of ?AddRef@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@W7EAAKXZ @ 0x1801F1A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::AddRef(
        __int64 a1)
{
  return CViewPositionChangedEventArgs::AddRef((CViewPositionChangedEventArgs *)(a1 - 8));
}
