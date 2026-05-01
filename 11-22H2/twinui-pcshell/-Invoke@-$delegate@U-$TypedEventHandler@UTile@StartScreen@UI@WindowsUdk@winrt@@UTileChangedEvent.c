/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_09ec479edf7333951db41c7f2e8a33bc_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1806F4110
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>,_lambda_09ec479edf7333951db41c7f2e8a33bc_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void (*v4)(void); // rbx
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(void (**)(void))(a1 + 16);
  v7 = a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  v8 = a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  try
  {
    v4();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
