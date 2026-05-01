/*
 * XREFs of ?get_ProviderWindows@?$produce@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystem@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18072A3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180523C1C (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::Windows::Internal::Shell::IRemoteSystem>::get_ProviderWindows(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  AcquireSRWLockShared((PSRWLOCK)v4);
  v8 = v4;
  v5 = a1 + 40;
  if ( !a1 )
    v5 = 56LL;
  try
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
      (__int64 *)v5,
      &v7);
    if ( v4 )
      ReleaseSRWLockShared((PSRWLOCK)v4);
    *a2 = v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
