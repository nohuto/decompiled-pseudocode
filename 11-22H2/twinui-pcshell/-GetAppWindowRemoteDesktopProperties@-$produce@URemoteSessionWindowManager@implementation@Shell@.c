/*
 * XREFs of ?GetAppWindowRemoteDesktopProperties@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAH_KPEAUstruct_Windows_Internal_Shell_AppWindowRemoteDesktopProperties@23@@Z @ 0x1801863B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::GetAppWindowRemoteDesktopProperties(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]

  v4 = a1 + 24;
  if ( !a1 )
    v4 = 40LL;
  try
  {
    (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)v4 + 88LL))(*(_QWORD *)v4, &v7, a2);
    *(_OWORD *)a3 = v7;
    *(_QWORD *)(a3 + 16) = v8;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
