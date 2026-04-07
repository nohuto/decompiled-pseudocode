/*
 * XREFs of ?find_interface@?$implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800FAAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax

  v2 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler> )
    v2 = a2[1] + 0x339BEF0A3E5A7575LL;
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
