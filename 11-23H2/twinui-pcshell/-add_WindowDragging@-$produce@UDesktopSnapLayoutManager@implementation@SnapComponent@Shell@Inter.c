/*
 * XREFs of ?add_WindowDragging@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180686010
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@2@@Z @ 0x180685EA4 (-add@-$event@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>::add_WindowDragging(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  PVOID v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a1 + 48;
  if ( !a1 )
    v5 = 96LL;
  try
  {
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>::add(
      (RTL_SRWLOCK *)v5,
      &v7,
      &v8);
    *a3 = v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
