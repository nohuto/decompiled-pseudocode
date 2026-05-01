/*
 * XREFs of ??$?RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@12345@@_lambda_688536045750b024e9c980c09e4232a8_@@QEBA?A_PAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@Z @ 0x18067483C
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_688536045750b024e9c980c09e4232a8_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180674BE0 (-Invoke@-$delegate@U-$TypedEventHandler@UIWindowManagementEvents2@WindowManagementE_ea_180674BE0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int64 *__fastcall _lambda_688536045750b024e9c980c09e4232a8_::operator()<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 const &,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  volatile signed __int64 *result; // rax
  volatile signed __int64 *v8; // r9
  volatile signed __int64 *v9; // rbx
  volatile signed __int64 *v10; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int64 *v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = *a1;
  if ( v6 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, volatile signed __int64 **))(*(_QWORD *)v6 + 24LL))(
      v6,
      &winrt::impl::guid_v<IInspectable>,
      &v10);
    result = v10;
    if ( v10 )
      result = v10 - 2;
    v8 = result;
    v10 = 0LL;
    v11 = result;
    v9 = result;
  }
  else
  {
    v11 = 0LL;
    result = 0LL;
    v8 = 0LL;
    v9 = 0LL;
  }
  if ( result )
  {
    result = (volatile signed __int64 *)((__int64 (__fastcall *)(char *, __int64, __int64, volatile signed __int64 *))a1[1])(
                                          (char *)result + *((int *)a1 + 4),
                                          a2,
                                          a3,
                                          v8);
    v8 = v9;
  }
  if ( v8 )
    return (volatile signed __int64 *)winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v11);
  return result;
}
