/*
 * XREFs of ?find_interface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805981D0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx

  if ( winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>) )
  {
    v4 = v3 + 16;
  }
  else
  {
    if ( winrt::operator==(v2, &winrt::impl::guid_v<IApplicationViewChangeListener>) )
      return v5;
    if ( !winrt::operator==(v6, &winrt::impl::guid_v<IWindowSnappingEvents>) )
      return 0LL;
    v4 = v3 + 8;
  }
  return v4 & -(__int64)(v3 != 0);
}
