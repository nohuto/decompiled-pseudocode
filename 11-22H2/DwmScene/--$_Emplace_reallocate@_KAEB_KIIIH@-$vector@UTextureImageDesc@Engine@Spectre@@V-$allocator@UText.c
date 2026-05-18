/*
 * XREFs of ??$_Emplace_reallocate@_KAEB_KIIIH@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAAPEAUTextureImageDesc@Engine@Spectre@@QEAU234@$$QEA_KAEB_K$$QEAI33$$QEAH@Z @ 0x180054DA4
 * Callers:
 *     ??$emplace_back@_KAEB_KIIIH@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAA?A_T$$QEA_KAEB_K$$QEAI22$$QEAH@Z @ 0x180054F34 (--$emplace_back@_KAEB_KIIIH@-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UTextureImag.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18001E974 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x18001F508 (-_Calculate_growth@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$.c)
 *     ?_Change_array@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEAAXQEAUTextureImageDesc@Engine@Spectre@@_K1@Z @ 0x180056AC4 (-_Change_array@-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UTextureImageDesc@Engine@.c)
 */

char *__fastcall std::vector<Spectre::Engine::TextureImageDesc>::_Emplace_reallocate<unsigned __int64,unsigned __int64 const &,unsigned int,unsigned int,unsigned int,int>(
        char **a1,
        char *a2,
        __int64 *a3,
        _QWORD *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8)
{
  char *v8; // rsi
  __int64 v11; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  unsigned __int64 size_of; // rax
  _OWORD *v17; // r11
  char *v18; // rsi
  int v19; // r10d
  int v20; // edx
  __int64 v21; // rax
  int v22; // r9d
  int v23; // r8d
  _OWORD *v24; // rcx
  char *v25; // rdx
  char *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  char *v29; // rdx
  _OWORD *v30; // rcx
  __int128 v31; // xmm1

  v8 = *a1;
  v11 = (a1[1] - *a1) >> 5;
  if ( v11 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v14 = v11 + 1;
  v15 = std::vector<std::wstring>::_Calculate_growth(a1, v11 + 1);
  size_of = std::_Get_size_of_n<32>(v15);
  v17 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v18 = (char *)v17 + ((a2 - v8) & 0xFFFFFFFFFFFFFFE0uLL);
  v19 = *a8;
  v20 = *a5;
  v21 = *a3;
  v22 = *a7;
  v23 = *a6;
  *((_QWORD *)v18 + 1) = *a4;
  v24 = v17;
  *(_QWORD *)v18 = v21;
  *((_DWORD *)v18 + 4) = v20;
  *((_DWORD *)v18 + 5) = v23;
  *((_DWORD *)v18 + 6) = v22;
  *((_DWORD *)v18 + 7) = v19;
  v25 = a1[1];
  v26 = *a1;
  if ( a2 == v25 )
  {
    while ( v26 != v25 )
    {
      *v24 = *(_OWORD *)v26;
      v24 += 2;
      v27 = *((_OWORD *)v26 + 1);
      v26 += 32;
      *(v24 - 1) = v27;
    }
  }
  else
  {
    while ( v26 != a2 )
    {
      *v24 = *(_OWORD *)v26;
      v24 += 2;
      v28 = *((_OWORD *)v26 + 1);
      v26 += 32;
      *(v24 - 1) = v28;
    }
    v29 = a1[1];
    if ( a2 != v29 )
    {
      v30 = v18 + 32;
      do
      {
        *v30 = *(_OWORD *)a2;
        v30 += 2;
        v31 = *((_OWORD *)a2 + 1);
        a2 += 32;
        *(v30 - 1) = v31;
      }
      while ( a2 != v29 );
    }
  }
  std::vector<Spectre::Engine::TextureImageDesc>::_Change_array(a1, v17, v14, v15);
  return v18;
}
