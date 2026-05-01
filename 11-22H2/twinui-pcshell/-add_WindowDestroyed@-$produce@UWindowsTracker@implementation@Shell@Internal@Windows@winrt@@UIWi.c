/*
 * XREFs of ?add_WindowDestroyed@?$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1801BA9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x180190938 (-add@-$event@U-$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTracker>::add_WindowDestroyed(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  PVOID v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a1 + 88;
  if ( !a1 )
    v5 = 104LL;
  try
  {
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>>::add(
      (RTL_SRWLOCK *)v5,
      &v7,
      (__int64)&v8);
    *a3 = v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
