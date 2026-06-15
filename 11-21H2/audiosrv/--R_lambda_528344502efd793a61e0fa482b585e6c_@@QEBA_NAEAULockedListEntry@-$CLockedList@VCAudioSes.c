/*
 * XREFs of ??R_lambda_528344502efd793a61e0fa482b585e6c_@@QEBA_NAEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@Z @ 0x1800DF5B0
 * Callers:
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@std@@V_lambda_528344502efd793a61e0fa482b585e6c_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_528344502efd793a61e0fa482b585e6c_@@@Z @ 0x1800DEE40 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-_ea_1800DEE40.c)
 * Callees:
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x1800DF554 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 */

bool __fastcall _lambda_528344502efd793a61e0fa482b585e6c_::operator()(__int64 a1, __int64 a2)
{
  bool v4; // zf
  bool result; // al

  result = 0;
  if ( operator==((__int64 *)a2, *(_QWORD **)a1) )
  {
    v4 = (*(_DWORD *)(a2 + 8))-- == 1;
    **(_BYTE **)(a1 + 8) = 1;
    if ( v4 )
      return 1;
  }
  return result;
}
