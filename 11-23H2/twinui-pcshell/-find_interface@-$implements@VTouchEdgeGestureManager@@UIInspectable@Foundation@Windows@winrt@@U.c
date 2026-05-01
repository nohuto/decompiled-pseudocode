/*
 * XREFs of ?find_interface@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800DA510
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v7; // rax

  if ( winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>) )
  {
    v7 = v3 + 16;
    return v7 & -(__int64)(v3 != 0);
  }
  if ( !winrt::operator==(v2, winrt::impl::guid_v<ITouchEdgeGesture>) )
  {
    if ( !winrt::operator==(v4, winrt::impl::guid_v<IGameFocusEvents>) )
      return 0LL;
    v7 = v3 + 8;
    return v7 & -(__int64)(v3 != 0);
  }
  return v5;
}
