/*
 * XREFs of ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@std@@V_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@@Z @ 0x18001FF50
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180021410 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x1800204F8 (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??R_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@QEBA@AEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@Z @ 0x180020E54 (--R_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@QEBA@AEAULockedListEntry@-$CLockedList@VCDuckingNo.c)
 */

_QWORD *__fastcall std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>>,_lambda_d28866b9a85f3417e65a955c46fd5d1a_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  __int64 j; // rsi
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 64LL )
  {
    if ( (unsigned __int8)_lambda_d28866b9a85f3417e65a955c46fd5d1a_::operator()(a4, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 64; j != a3; j += 64LL )
    {
      if ( !(unsigned __int8)_lambda_d28866b9a85f3417e65a955c46fd5d1a_::operator()(a4, j) )
      {
        CDuckingNotification::operator=(i, j);
        *(_DWORD *)(i + 56) = *(_DWORD *)(j + 56);
        i += 64LL;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
