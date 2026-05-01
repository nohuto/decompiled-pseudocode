/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_76fecbe7358a01e93ab2124297e3dac5_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18048EDB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>,_lambda_76fecbe7358a01e93ab2124297e3dac5_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
    if ( v4 )
    {
      LOBYTE(v5) = (*(int (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) >= 0;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 72LL))(a3, v5);
      if ( v6 < 0 )
        winrt::throw_hresult(v6);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
