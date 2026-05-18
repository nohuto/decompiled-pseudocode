/*
 * XREFs of ??$_Emplace_reallocate@E@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z @ 0x18008F06C
 * Callers:
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x18008F460 (--$_Uninitialized_move@PEAEV-$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV-$allocator@E@0@@Z.c)
 *     ?_Calculate_growth@?$vector@EV?$allocator@E@std@@@std@@AEBA_K_K@Z @ 0x1800911A4 (-_Calculate_growth@-$vector@EV-$allocator@E@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800911DC (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 */

char *__fastcall std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(__int64 *a1, __int64 a2, char *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  char *v10; // rdi
  char *v11; // r14
  _BYTE *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx

  v3 = *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<unsigned char>::_Calculate_growth(a1, v6 + 1);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  v11 = &v10[a2 - v3];
  v12 = v10;
  *v11 = *a3;
  v13 = a1[1];
  v14 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<unsigned char *>(v14, a2, v10);
    v13 = a1[1];
    v12 = v11 + 1;
    v14 = a2;
  }
  std::_Uninitialized_move<unsigned char *>(v14, v13, v12);
  std::vector<unsigned char>::_Change_array(a1, v10, v8, v9);
  return &v10[a2 - v3];
}
