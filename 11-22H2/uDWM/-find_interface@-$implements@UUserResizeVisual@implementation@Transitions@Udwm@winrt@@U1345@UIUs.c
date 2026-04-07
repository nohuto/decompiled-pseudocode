/*
 * XREFs of ?find_interface@?$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180103F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax

  v2 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::IUserResizeVisual>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::IUserResizeVisual> )
    v2 = a2[1] - 0x756FC6DD141E8D93LL;
  if ( v2 )
  {
    v4 = *a2 - winrt::impl::guid_v<Udwm::Transitions::IBitmapManager>;
    if ( *a2 == winrt::impl::guid_v<Udwm::Transitions::IBitmapManager> )
      v4 = a2[1] + 0x43C31C528C50EF4ALL;
    return (a1 - 16) & -(__int64)(v4 == 0);
  }
  else
  {
    result = a1 - 8;
    if ( a1 == 16 )
      return 0LL;
  }
  return result;
}
