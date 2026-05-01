/*
 * XREFs of ?cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@UIAsyncAction@Foundation@Windows@3@@Z @ 0x1801CF0E4
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_dcee8798513fab46317d31c20fdb92c7_@@CAXPEAX@Z @ 0x1805BBB40 (-_lambda_invoker_cdecl_@_lambda_dcee8798513fab46317d31c20fdb92c7_@@CAXPEAX@Z.c)
 * Callees:
 *     ??1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180020144 (--1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously$_InitCoro$2 @ 0x1801CF008 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncAction_--cancel_asynchronously$_Ini.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>::cancel_asynchronously(
        winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *this)
{
  void *v2; // rax
  char v3; // bl
  char v5; // [rsp+148h] [rbp+10h] BYREF
  int v6; // [rsp+150h] [rbp+18h] BYREF

  v2 = operator new(0x109uLL);
  v6 = 0;
  winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously__InitCoro_2(
    (__int64)&v5,
    (__int64)&v6,
    (__int64)v2,
    (__int64)this);
  v3 = v5;
  winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs(this);
  return v3;
}
