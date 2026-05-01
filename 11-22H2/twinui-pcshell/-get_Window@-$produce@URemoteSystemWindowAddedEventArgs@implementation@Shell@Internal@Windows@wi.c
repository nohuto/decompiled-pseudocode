/*
 * XREFs of ?get_Window@?$produce@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemWindowAddedEventArgs@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_UI_WindowId@23@@Z @ 0x18072A750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::get_Window(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 32LL;
  *a2 = *(_QWORD *)v2;
  return 0LL;
}
