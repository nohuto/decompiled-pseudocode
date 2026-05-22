/*
 * XREFs of ??$?RAEBUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUUniversalPropertyChangedEventArgs@12345@@_lambda_f7189cc794088eeaf33bed95e453010f_@@QEBA?A_PAEBUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUUniversalPropertyChangedEventArgs@23456@@Z @ 0x18010C3F8
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_f7189cc794088eeaf33bed95e453010f_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18010D390 (-Invoke@-$delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement_ea_18010D390.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_f7189cc794088eeaf33bed95e453010f_::operator()<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher const &,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64 *, __int64 *); // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a1 + *(int *)(a1 + 16);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(a1 + 8);
  v6 = *a3;
  v9 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *a2;
  v10 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return v5(v4, &v10, &v9);
}
