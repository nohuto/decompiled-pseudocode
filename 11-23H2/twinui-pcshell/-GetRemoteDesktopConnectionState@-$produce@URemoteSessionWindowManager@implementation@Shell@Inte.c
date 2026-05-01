/*
 * XREFs of ?GetRemoteDesktopConnectionState@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUguid@3@PEAH@Z @ 0x1807216B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::GetRemoteDesktopConnectionState(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rax

  v3 = a1 + 24;
  if ( !a1 )
    v3 = 40LL;
  *a3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 96LL))(*(_QWORD *)v3);
  return 0LL;
}
