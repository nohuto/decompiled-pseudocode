/*
 * XREFs of ??$_Emplace_reallocate@UAnimationObjectInfo@Composition@UI@Windows@@@?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@QEAAPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x1800689B0
 * Callers:
 *     ?Insert@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAX$$QEAUAnimationObjectInfo@345@W4AnimationObjectInfoType@2345@@Z @ 0x180068904 (-Insert@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAX$$QEAUAnimati.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180068B10 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@0PEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068B40 (--$_Uninitialized_move@PEAUAnimationObjectInfo@Composition@UI@Windows@@V-$allocator@UAnimationOb.c)
 *     ?_Change_array@?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUAnimationObjectInfo@Composition@UI@Windows@@_K1@Z @ 0x180068BE0 (-_Change_array@-$vector@UAnimationObjectInfo@Composition@UI@Windows@@V-$allocator@UAnimationObje.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall std::vector<Windows::UI::Composition::AnimationObjectInfo>::_Emplace_reallocate<Windows::UI::Composition::AnimationObjectInfo>(
        const char *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // r15
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx

  v4 = 0x666666666666666LL;
  v7 = (a2 - *(_QWORD *)a1) / 40;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3);
  if ( v8 == 0x666666666666666LL )
    std::_Dwm_Xlength_error(a1);
  v9 = v8 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<40>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)(v13 + 40 * v7);
  *v14 = *a3;
  v15 = a3 + 1;
  *a3 = 0LL;
  v14[1] = 0LL;
  if ( v14 + 1 != a3 + 1 )
  {
    v14[1] = *v15;
    *v15 = 0LL;
  }
  v16 = a3[4];
  v17 = a3[3];
  v18 = a3[2];
  a3[4] = 0LL;
  a3[3] = 0LL;
  a3[2] = 0LL;
  v19 = (_QWORD *)v13;
  v14[2] = v18;
  v14[3] = v17;
  v14[4] = v16;
  v20 = *((_QWORD *)a1 + 1);
  v21 = *(_QWORD *)a1;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<Windows::UI::Composition::AnimationObjectInfo *>(v21, a2, v13);
    v20 = *((_QWORD *)a1 + 1);
    v19 = v14 + 5;
    v21 = a2;
  }
  std::_Uninitialized_move<Windows::UI::Composition::AnimationObjectInfo *>(v21, v20, v19);
  std::vector<Windows::UI::Composition::AnimationObjectInfo>::_Change_array(a1, v13, v9, v4);
  return v14;
}
