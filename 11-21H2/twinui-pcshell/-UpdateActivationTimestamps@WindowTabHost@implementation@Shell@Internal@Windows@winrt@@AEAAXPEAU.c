/*
 * XREFs of ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x18000A0D0
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180147140 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x1801BA2E0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1801BA2E0.c)
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180578710 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        HWND a2,
        HWND a3)
{
  _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME v6; // [rsp+48h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), a2);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  do
  {
    _mm_pause();
    GetSystemTimeAsFileTime(&v6);
  }
  while ( v6.dwLowDateTime == SystemTimeAsFileTime.dwLowDateTime
       && v6.dwHighDateTime == SystemTimeAsFileTime.dwHighDateTime );
  (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), a3);
}
