/*
 * XREFs of ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x18008CAF0
 * Callers:
 *     ?push_back@?$vector@GV?$allocator@G@std@@@std@@QEAAX$$QEAG@Z @ 0x18008D5B4 (-push_back@-$vector@GV-$allocator@G@std@@@std@@QEAAX$$QEAG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18001217C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAGV?$allocator@G@std@@@std@@YAPEAGQEAG0PEAGAEAV?$allocator@G@0@@Z @ 0x18008CCE8 (--$_Uninitialized_move@PEAGV-$allocator@G@std@@@std@@YAPEAGQEAG0PEAGAEAV-$allocator@G@0@@Z.c)
 *     ?_Calculate_growth@?$vector@GV?$allocator@G@std@@@std@@AEBA_K_K@Z @ 0x18008D4D0 (-_Calculate_growth@-$vector@GV-$allocator@G@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@GV?$allocator@G@std@@@std@@AEAAXQEAG_K1@Z @ 0x18008D508 (-_Change_array@-$vector@GV-$allocator@G@std@@@std@@AEAAXQEAG_K1@Z.c)
 */

char *__fastcall std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(__int64 *a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 size_of; // rax
  char *v11; // rdi
  _WORD *v12; // r8
  char *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<unsigned short>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<2>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = &v11[2 * ((a2 - v3) >> 1)];
  *(_WORD *)v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<unsigned short *>(v15, a2, v11);
    v14 = a1[1];
    v12 = v13 + 2;
    v15 = a2;
  }
  std::_Uninitialized_move<unsigned short *>(v15, v14, v12);
  std::vector<unsigned short>::_Change_array(a1, v11, v8, v9);
  return &v11[2 * ((a2 - v3) >> 1)];
}
