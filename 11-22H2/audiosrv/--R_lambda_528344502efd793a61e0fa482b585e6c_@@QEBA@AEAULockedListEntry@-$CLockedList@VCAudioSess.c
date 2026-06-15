/*
 * XREFs of ??R_lambda_528344502efd793a61e0fa482b585e6c_@@QEBA@AEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@Z @ 0x1800E7C1C
 * Callers:
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@std@@V_lambda_528344502efd793a61e0fa482b585e6c_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_528344502efd793a61e0fa482b585e6c_@@@Z @ 0x1800E742C (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-_ea_1800E742C.c)
 * Callees:
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x180052164 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 */

bool __fastcall _lambda_528344502efd793a61e0fa482b585e6c_::operator()(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  bool v5; // zf

  if ( !operator==((__int64 *)a2, *(_QWORD **)a1) )
    return 0;
  v4 = *(_BYTE **)(a1 + 8);
  v5 = (*(_DWORD *)(a2 + 8))-- == 1;
  *v4 = 1;
  return v5;
}
