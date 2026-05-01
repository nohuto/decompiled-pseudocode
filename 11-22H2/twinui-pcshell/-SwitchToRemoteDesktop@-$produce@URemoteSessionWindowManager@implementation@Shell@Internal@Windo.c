/*
 * XREFs of ?SwitchToRemoteDesktop@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUguid@3@H@Z @ 0x1807238B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::SwitchToRemoteDesktop(
        __int64 a1)
{
  __int64 v1; // rax
  void (*v2)(void); // rax
  __int64 result; // rax
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 24;
  if ( !a1 )
    v1 = 40LL;
  v2 = *(void (**)(void))(**(_QWORD **)v1 + 24LL);
  try
  {
    v2();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v4);
  }
  return result;
}
