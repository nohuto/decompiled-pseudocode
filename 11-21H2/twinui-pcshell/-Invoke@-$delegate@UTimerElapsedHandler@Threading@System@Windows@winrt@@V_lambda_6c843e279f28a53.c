/*
 * XREFs of ?Invoke@?$delegate@UTimerElapsedHandler@Threading@System@Windows@winrt@@V_lambda_6c843e279f28a538fde4193809616d7e_@@@impl@winrt@@UEAAHPEAX@Z @ 0x180333EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_6c843e279f28a538fde4193809616d7e_>::Invoke(
        __int64 a1,
        __int64 a2)
{
  void (*v2)(void); // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(void (**)(void))(a1 + 16);
  v4 = a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  try
  {
    v2();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
