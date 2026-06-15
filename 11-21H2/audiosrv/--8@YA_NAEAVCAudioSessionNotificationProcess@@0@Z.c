/*
 * XREFs of ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x1800DF554
 * Callers:
 *     ??R_lambda_528344502efd793a61e0fa482b585e6c_@@QEBA_NAEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@Z @ 0x1800DF5B0 (--R_lambda_528344502efd793a61e0fa482b585e6c_@@QEBA_NAEAULockedListEntry@-$CLockedList@VCAudioSes.c)
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800DF7F4 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall operator==(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  int v3; // ebx

  v2 = *a1;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2);
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2) == v3;
}
