/*
 * XREFs of ?find_interface@?$implements@VTouchGestureSettings@@UITouchGestureSettings@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180159260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchGestureSettings,ITouchGestureSettings>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a2 - winrt::impl::guid_v<ITouchGestureSettings>;
  if ( *a2 == winrt::impl::guid_v<ITouchGestureSettings> )
    v2 = a2[1] + 0x1FB2A74B796CAC6BLL;
  return (a1 - 8) & -(__int64)(v2 == 0);
}
