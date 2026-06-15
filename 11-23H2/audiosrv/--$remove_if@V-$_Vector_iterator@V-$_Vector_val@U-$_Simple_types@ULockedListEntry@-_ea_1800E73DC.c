/*
 * XREFs of ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@std@@V_lambda_528344502efd793a61e0fa482b585e6c_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_528344502efd793a61e0fa482b585e6c_@@@Z @ 0x1800E73DC
 * Callers:
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800E88C0 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_528344502efd793a61e0fa482b585e6c_@@QEBA@AEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@Z @ 0x1800E7BCC (--R_lambda_528344502efd793a61e0fa482b585e6c_@@QEBA@AEAULockedListEntry@-$CLockedList@VCAudioSess.c)
 */

__int64 **__fastcall std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>>,_lambda_528344502efd793a61e0fa482b585e6c_>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx

  for ( i = a2; i != a3; i += 2 )
  {
    if ( (unsigned __int8)_lambda_528344502efd793a61e0fa482b585e6c_::operator()(a4, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( !(unsigned __int8)_lambda_528344502efd793a61e0fa482b585e6c_::operator()(a4, j) )
      {
        v9 = *j;
        *j = 0LL;
        v10 = *i;
        *i = v9;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        *((_DWORD *)i + 2) = *((_DWORD *)j + 2);
        i += 2;
      }
    }
  }
  *a1 = i;
  return a1;
}
