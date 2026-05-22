/*
 * XREFs of ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x1801A6FA4
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801A7548 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801A81A8 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4)
{
  _DWORD *i; // rax

  if ( a2 != a3 )
  {
    do
    {
      if ( *a2 == *a4 )
        break;
      ++a2;
    }
    while ( a2 != a3 );
    if ( a2 != a3 )
    {
      for ( i = a2 + 1; i != a3; ++i )
      {
        if ( *i != *a4 )
          *a2++ = *i;
      }
    }
  }
  *a1 = a2;
  return a1;
}
