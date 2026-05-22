/*
 * XREFs of std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801C524C
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801C6524 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001A970 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A6FE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1801C4B04 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801C539C (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 i; // rbx
  __int128 v8; // xmm1
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // r14
  __int64 v13; // [rsp+28h] [rbp-29h] BYREF
  int v14; // [rsp+38h] [rbp-19h]
  char v15; // [rsp+40h] [rbp-11h]
  _QWORD v16[3]; // [rsp+48h] [rbp-9h] BYREF
  _OWORD v17[2]; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+80h] [rbp+2Fh]

  v13 = a2;
  for ( i = a2; i != a3; i = v13 )
  {
    v14 = *(_DWORD *)(i + 32);
    v15 = *(_BYTE *)(i + 40);
    std::vector<enum _Button>::vector<enum _Button>(v16, i + 48);
    v8 = *(_OWORD *)(i + 88);
    v17[0] = *(_OWORD *)(i + 72);
    v18 = *(_QWORD *)(i + 104);
    v17[1] = v8;
    v11 = *a4 == v15
       && std::operator==<enum _Button,std::allocator<enum _Button>>((__int64)(a4 + 8), v16)
       && operator==((__int64)(a4 + 32), (__int64)v17, v9, v10);
    std::vector<Windows::UI::Color>::_Tidy((__int64)v16);
    if ( v11 )
      break;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v13);
  }
  *a1 = i;
  return a1;
}
