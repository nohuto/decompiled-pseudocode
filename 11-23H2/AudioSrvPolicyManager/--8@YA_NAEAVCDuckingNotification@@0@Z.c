/*
 * XREFs of ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x180020380
 * Callers:
 *     ??R_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@QEBA@AEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@Z @ 0x180020C64 (--R_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@QEBA@AEAULockedListEntry@-$CLockedList@VCDuckingNo.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800210A0 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8) )
    return 0;
  if ( *(_QWORD *)a1 && *(_QWORD *)a2 )
    return *(_QWORD *)a1 == *(_QWORD *)a2;
  return 1;
}
