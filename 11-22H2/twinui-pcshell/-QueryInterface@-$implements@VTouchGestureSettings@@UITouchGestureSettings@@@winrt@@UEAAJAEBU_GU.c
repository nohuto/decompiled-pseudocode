/*
 * XREFs of ?QueryInterface@?$implements@VTouchGestureSettings@@UITouchGestureSettings@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B1250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchGestureSettings,ITouchGestureSettings>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<TouchGestureSettings,ITouchGestureSettings>::query_interface(a1 + 8, a2, a3);
}
