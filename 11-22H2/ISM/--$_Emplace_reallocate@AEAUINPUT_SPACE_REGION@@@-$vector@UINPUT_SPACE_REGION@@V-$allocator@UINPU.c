/*
 * XREFs of ??$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAPEAUINPUT_SPACE_REGION@@QEAU2@AEAU2@@Z @ 0x1801B00A0
 * Callers:
 *     ??$emplace_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAA?A_TAEAUINPUT_SPACE_REGION@@@Z @ 0x1801B0AF8 (--$emplace_back@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEBA_K_K@Z @ 0x18004F6E4 (-_Calculate_growth@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@A.c)
 *     ?_Change_array@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXQEAUINPUT_SPACE_REGION@@_K1@Z @ 0x18004F768 (-_Change_array@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x1800606E4 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<INPUT_SPACE_REGION>::_Emplace_reallocate<INPUT_SPACE_REGION &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r10
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // r15
  _OWORD *v15; // r14
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  char *result; // rax
  unsigned __int64 v21; // [rsp+50h] [rbp+8h]
  void *v22; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 200;
  v7 = 0x8F5C28F5C28F5C29uLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0x147AE147AE147AELL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<INPUT_SPACE_REGION>::_Calculate_growth(a1, v7 + 1);
  v10 = v9;
  v21 = v9;
  if ( v9 > v11 )
    std::_Throw_bad_array_new_length();
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(200 * v9);
  v13 = (__int64)v12;
  v22 = v12;
  try
  {
    v14 = &v12[200 * v6];
    *(_OWORD *)v14 = *a3;
    *((_OWORD *)v14 + 1) = a3[1];
    *((_OWORD *)v14 + 2) = a3[2];
    *((_OWORD *)v14 + 3) = a3[3];
    *((_OWORD *)v14 + 4) = a3[4];
    *((_OWORD *)v14 + 5) = a3[5];
    *((_OWORD *)v14 + 6) = a3[6];
    *((_OWORD *)v14 + 7) = a3[7];
    v15 = a3 + 8;
    *((_OWORD *)v14 + 8) = *v15;
    *((_OWORD *)v14 + 9) = v15[1];
    *((_OWORD *)v14 + 10) = v15[2];
    *((_OWORD *)v14 + 11) = v15[3];
    *((_QWORD *)v14 + 24) = *((_QWORD *)v15 + 8);
    v16 = a1[1];
    v17 = *a1;
    v18 = v12;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v12, v17, a2 - (_BYTE *)*a1);
      v18 = v14 + 200;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<INPUT_SPACE_REGION>::_Change_array((__int64)a1, v13, v8, v10);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, 200 * v21);
    throw;
  }
  return result;
}
