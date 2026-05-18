/*
 * XREFs of ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18009FE54
 * Callers:
 *     ??$emplace_back@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAA?A_TAEBM@Z @ 0x1800A0158 (--$emplace_back@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAA-A_TAEBM@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180017028 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@AEBA_K_K@Z @ 0x18001F4CC (-_Calculate_growth@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@A.c)
 *     ??$_Uninitialized_copy@PEAMV?$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV?$allocator@M@0@@Z @ 0x180081AB0 (--$_Uninitialized_copy@PEAMV-$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV-$allocator@M@0@@Z.c)
 *     ?_Change_array@?$vector@MV?$allocator@M@std@@@std@@AEAAXQEAM_K1@Z @ 0x1800A04D4 (-_Change_array@-$vector@MV-$allocator@M@std@@@std@@AEAAXQEAM_K1@Z.c)
 */

char *__fastcall std::vector<float>::_Emplace_reallocate<float const &>(void **a1, __int64 a2, _DWORD *a3)
{
  void *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 size_of; // rax
  char *v11; // rdi
  char *v12; // r8
  char *v13; // r14
  __int64 v14; // rdx
  void *v15; // rcx

  v3 = *a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<enum D3D_FEATURE_LEVEL>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<4>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = &v11[4 * ((a2 - (__int64)v3) >> 2)];
  *(_DWORD *)v13 = *a3;
  v14 = (__int64)a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_copy<float *>(v15, a2, v11);
    v14 = (__int64)a1[1];
    v12 = v13 + 4;
    v15 = (void *)a2;
  }
  std::_Uninitialized_copy<float *>(v15, v14, v12);
  std::vector<float>::_Change_array(a1, v11, v8, v9);
  return &v11[4 * ((a2 - (__int64)v3) >> 2)];
}
