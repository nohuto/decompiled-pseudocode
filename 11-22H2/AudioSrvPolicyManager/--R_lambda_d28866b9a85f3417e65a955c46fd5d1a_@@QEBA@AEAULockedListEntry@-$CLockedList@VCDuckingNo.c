/*
 * XREFs of ??R_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@QEBA@AEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@Z @ 0x180020E54
 * Callers:
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@std@@V_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@@Z @ 0x18001FF50 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList@.c)
 * Callees:
 *     ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x180020570 (--8@YA_NAEAVCDuckingNotification@@0@Z.c)
 */

bool __fastcall _lambda_d28866b9a85f3417e65a955c46fd5d1a_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _BYTE *v4; // rax
  bool v5; // zf

  if ( !operator==(a2, *a1) )
    return 0;
  v4 = *(_BYTE **)(v3 + 8);
  v5 = (*(_DWORD *)(v2 + 56))-- == 1;
  *v4 = 1;
  return v5;
}
