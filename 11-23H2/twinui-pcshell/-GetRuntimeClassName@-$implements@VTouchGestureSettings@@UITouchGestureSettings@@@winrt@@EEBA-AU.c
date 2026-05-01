/*
 * XREFs of ?GetRuntimeClassName@?$implements@VTouchGestureSettings@@UITouchGestureSettings@@@winrt@@EEBA?AUhstring@2@XZ @ 0x18064B250
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<TouchGestureSettings,ITouchGestureSettings>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"{8bc0416b-e6fa-4b43-9553-9386b4584de0}",
          (winrt::impl *)0x26);
  return a2;
}
