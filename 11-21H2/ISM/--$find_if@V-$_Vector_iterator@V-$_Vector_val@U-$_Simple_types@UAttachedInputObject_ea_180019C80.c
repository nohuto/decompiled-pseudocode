/*
 * XREFs of ??$find_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@std@@V_lambda_d6de44a36166cac7bfd3df642eeedd3e_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@0@V10@V10@V_lambda_d6de44a36166cac7bfd3df642eeedd3e_@@@Z @ 0x180019C80
 * Callers:
 *     ?OnInputDelegationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001A690 (-OnInputDelegationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall std::find_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<InputSite::AttachedInputObjectEntry>>>,_lambda_d6de44a36166cac7bfd3df642eeedd3e_>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 **a4)
{
  __int64 *v5; // rdi
  __int64 *v7; // rbp
  __int64 *v8; // r14
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // r15
  __int64 v12; // rcx
  int v13; // eax
  bool v14; // al
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+8h]

  v5 = a2;
  if ( a2 != a3 )
  {
    v7 = *a4;
    v8 = a4[1];
    do
    {
      v9 = *v5;
      v10 = *v7;
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v5[1];
      v16 = **v11;
      v12 = *v8;
      if ( *v8 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v13 = v16(v11, &GUID_699c674c_1728_3f00_eb37_62deb026b269, v8);
      }
      else
      {
        v13 = (**v11)(v11, &GUID_699c674c_1728_3f00_eb37_62deb026b269, v8);
      }
      v14 = v13 >= 0;
      if ( v9 == v10 && v14 )
        break;
      v5 += 2;
    }
    while ( v5 != a3 );
  }
  *a1 = v5;
  return a1;
}
