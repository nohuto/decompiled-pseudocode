/*
 * XREFs of ??$find_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@std@@V_lambda_9c87987138ffa5ecb6aee109509755f0_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@0@V10@V10@V_lambda_9c87987138ffa5ecb6aee109509755f0_@@@Z @ 0x180019BA0
 * Callers:
 *     ?OnWindowsMessageDeliveryChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001A480 (-OnWindowsMessageDeliveryChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall std::find_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<InputSite::AttachedInputObjectEntry>>>,_lambda_9c87987138ffa5ecb6aee109509755f0_>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 **a4)
{
  __int64 *v5; // rdi
  __int64 **result; // rax
  __int64 *v7; // r13
  __int64 *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r15
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v12)(_QWORD, GUID *, __int64 *); // r12
  __int64 v13; // rcx
  bool v14; // al

  v5 = a2;
  result = a1;
  if ( a2 == a3 )
  {
    *a1 = a2;
  }
  else
  {
    v7 = *a4;
    v8 = a4[1];
    do
    {
      v9 = *v5;
      v10 = *v7;
      v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v5[1];
      v12 = **v11;
      v13 = *v8;
      if ( *v8 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = v12(v11, &GUID_d3573f80_52a7_d2c9_ece4_38e96aede26c, v8) >= 0;
      if ( v9 == v10 && v14 )
        break;
      v5 += 2;
    }
    while ( v5 != a3 );
    result = a1;
    *a1 = v5;
  }
  return result;
}
