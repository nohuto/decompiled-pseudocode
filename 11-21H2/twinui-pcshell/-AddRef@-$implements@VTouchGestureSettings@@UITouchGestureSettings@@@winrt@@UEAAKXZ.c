/*
 * XREFs of ?AddRef@?$implements@VTouchGestureSettings@@UITouchGestureSettings@@@winrt@@UEAAKXZ @ 0x180022080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchGestureSettings,ITouchGestureSettings>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
