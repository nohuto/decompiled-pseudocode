/*
 * XREFs of ??$?RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@12345@@_lambda_688536045750b024e9c980c09e4232a8_@@QEBAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@Z @ 0x1805A80DC
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_688536045750b024e9c980c09e4232a8_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805A8490 (-Invoke@-$delegate@U-$TypedEventHandler@UIWindowManagementEvents2@WindowManagementE_ea_1805A8490.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@USnapMigrationHandler@@@winrt@@AEAAXXZ @ 0x1805A8DC0 (-unconditional_release_ref@-$com_ptr@USnapMigrationHandler@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_688536045750b024e9c980c09e4232a8_::operator()<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 const &,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = *a1;
  if ( v6 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v6 + 24LL))(
      v6,
      &winrt::impl::guid_v<IInspectable>,
      &v9);
    result = v9;
    if ( v9 )
      v7 = v9 - 16;
    else
      v7 = 0LL;
    v9 = 0LL;
    v10 = v7;
  }
  else
  {
    v10 = 0LL;
    v7 = 0LL;
  }
  if ( v7 )
  {
    ((void (__fastcall *)(__int64, __int64, __int64))a1[1])(v7 + *((int *)a1 + 4), a2, a3);
    return winrt::com_ptr<SnapMigrationHandler>::unconditional_release_ref(&v10);
  }
  return result;
}
