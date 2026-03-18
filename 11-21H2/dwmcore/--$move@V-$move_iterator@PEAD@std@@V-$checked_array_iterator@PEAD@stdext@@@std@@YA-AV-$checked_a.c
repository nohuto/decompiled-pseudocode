/*
 * XREFs of ??$move@V?$move_iterator@PEAD@std@@V?$checked_array_iterator@PEAD@stdext@@@std@@YA?AV?$checked_array_iterator@PEAD@stdext@@V?$move_iterator@PEAD@0@0V12@@Z @ 0x1802AC128
 * Callers:
 *     ?reserve_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAD_K0@Z @ 0x1800F11DC (-reserve_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?clear_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800F12B8 (-clear_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<char *>,stdext::checked_array_iterator<char *>>(
        __int64 a1,
        char *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed __int64 v5; // rsi
  bool v7; // cf
  char *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  if ( a3 - (__int64)a2 >= 0 )
  {
    if ( v5 <= 0 )
      goto LABEL_7;
    v7 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  else
  {
    v7 = a4[2] < (unsigned __int64)&a2[-a3];
  }
  if ( v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v8 = (char *)(*a4 + a4[2]);
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = &v8[v5 - *a4];
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
