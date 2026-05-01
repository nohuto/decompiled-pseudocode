/*
 * XREFs of ?GetRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x180712DCC
 * Callers:
 *     ?GetRemoteSystem@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180712D40 (-GetRemoteSystem@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x180712E84 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180718E60 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180719620 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@URemoteSystem@S.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetRemoteSystem(
        RTL_SRWLOCK *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rsi
  __int64 v7; // rax
  _QWORD v9[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+80h] [rbp+18h]

  v6 = a1 + 16;
  AcquireSRWLockShared(a1 + 16);
  v11 = v6;
  v9[0] = *a3;
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::TryLookup(
    &a1[18],
    &v10,
    v9);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    *a2 = v7;
    if ( v6 )
      ReleaseSRWLockShared(v6);
  }
  else
  {
    if ( v6 )
      ReleaseSRWLockShared(v6);
    *a2 = 0LL;
  }
  return a2;
}
