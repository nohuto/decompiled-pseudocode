/*
 * XREFs of ??$invoke@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@VListenerWindow@@UListenerWindowNotificationArgs@@@impl@winrt@@YA_NAEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBVListenerWindow@@AEBUListenerWindowNotificationArgs@@@Z @ 0x1800384C4
 * Callers:
 *     ??$?RVListenerWindow@@UListenerWindowNotificationArgs@@@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBVListenerWindow@@AEBUListenerWindowNotificationArgs@@@Z @ 0x18003840C (--$-RVListenerWindow@@UListenerWindowNotificationArgs@@@-$event@U-$EventHandler@UIInspectable@Fo.c)
 * Callees:
 *     ??R?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEBAXAEBUIInspectable@123@0@Z @ 0x180038584 (--R-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEBAXAEBUII.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800385C0 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,ListenerWindow,ListenerWindowNotificationArgs>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct IUnknown *v5; // rax
  void *v6; // r8
  struct IUnknown *v7; // rax
  void *v8; // r8
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  v5 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL))(a3);
  winrt::copy_from_abi((winrt *)&v13, v5, v6);
  v12 = 0LL;
  v7 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  winrt::copy_from_abi((winrt *)&v12, v7, v8);
  try
  {
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>::operator()(a1, &v12, &v13);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  }
  catch ( ... )
  {
    v10 = *(_DWORD *)winrt::to_hresult(&v12);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBDAEAP6AHHHPEAX__EP6AHHH1__E_Z(
      v11,
      &`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,ListenerWindow,ListenerWindowNotificationArgs>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,ListenerWindow,ListenerWindowNotificationArgs>'::`4'::handler)(
      v10,
      0LL,
      0LL);
    return v10 != -2147417848 && v10 != -2147023174 && v10 != -1996357631;
  }
  return 1;
}
