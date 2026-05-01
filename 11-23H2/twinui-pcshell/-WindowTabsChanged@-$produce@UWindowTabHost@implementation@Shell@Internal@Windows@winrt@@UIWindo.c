/*
 * XREFs of ?WindowTabsChanged@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180031640
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@2@@Z @ 0x1800317B8 (-add@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::WindowTabsChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]
  __int64 v8; // [rsp+58h] [rbp+20h]

  v7 = a2;
  v4 = a1 + 768;
  if ( !a1 )
    v4 = 800LL;
  AcquireSRWLockExclusive((PSRWLOCK)v4);
  v8 = v4;
  try
  {
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::add();
    if ( v4 )
      ReleaseSRWLockExclusive((PSRWLOCK)v4);
    *a3 = v6;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
