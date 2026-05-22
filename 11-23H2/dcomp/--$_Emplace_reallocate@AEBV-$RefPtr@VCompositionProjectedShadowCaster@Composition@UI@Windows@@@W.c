/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000E4A8
 * Callers:
 *     ?InsertCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowCaster@234@_N0@Z @ 0x180007224 (-InsertCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedSh.c)
 *     ??$emplace@AEBV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@AEBV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x180183634 (--$emplace@AEBV-$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsof.c)
 * Callees:
 *     ?_Change_array@?$vector@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXQEAV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@_K1@Z @ 0x18000E5A8 (-_Change_array@-$vector@V-$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowCaster>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowCaster> const &>(
        __int64 a1,
        char *a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  char *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  char *v15; // r14
  char *v16; // rbp
  char *v17; // r8
  char *v18; // rdx
  char *v19; // rcx
  char *v21; // r9
  signed __int64 v22; // rdx
  char *v23; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v6 = a2;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = *a3;
  v15 = (char *)v13;
  v16 = (char *)(v13 + 8 * v5);
  *(_QWORD *)v16 = *a3;
  if ( v14 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v14);
  v17 = *(char **)(a1 + 8);
  v18 = v15;
  v19 = *(char **)a1;
  if ( v6 == v17 )
  {
    while ( v19 != v17 )
    {
      *(_QWORD *)v18 = 0LL;
      if ( v18 != v19 )
      {
        *(_QWORD *)v18 = *(_QWORD *)v19;
        *(_QWORD *)v19 = 0LL;
      }
      v18 += 8;
      v19 += 8;
    }
  }
  else
  {
    while ( v19 != v6 )
    {
      *(_QWORD *)v18 = 0LL;
      if ( v18 != v19 )
      {
        *(_QWORD *)v18 = *(_QWORD *)v19;
        *(_QWORD *)v19 = 0LL;
      }
      v18 += 8;
      v19 += 8;
    }
    v21 = *(char **)(a1 + 8);
    if ( v6 != v21 )
    {
      v22 = v16 - v6;
      do
      {
        v23 = &v6[v22 + 8];
        *(_QWORD *)v23 = 0LL;
        if ( v23 != v6 )
        {
          *(_QWORD *)v23 = *(_QWORD *)v6;
          *(_QWORD *)v6 = 0LL;
        }
        v6 += 8;
      }
      while ( v6 != v21 );
    }
  }
  std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowCaster>>::_Change_array(
    a1,
    v15,
    v9,
    v3);
  return v16;
}
