/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x1800B2EF4
 * Callers:
 *     ??1?$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@QEAA@XZ @ 0x1800B2F7C (--1-$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocator@U-$pair@QEBGPEB.c)
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800B30E0 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 *     CreativeFramework::Triggers::_dynamic_atexit_destructor_for__wellKnownWnfs__ @ 0x1800F7C50 (CreativeFramework--Triggers--_dynamic_atexit_destructor_for__wellKnownWnfs__.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x1800B3308 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$al.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::~_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(
        void **a1)
{
  _QWORD *v2; // rax
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi

  v2 = *a1;
  v3 = (_BYTE *)*((_QWORD *)*a1 + 1);
  v4 = v3;
  if ( !v3[25] )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Erase(
        a1,
        *((_QWORD *)v4 + 2));
      v4 = *(_BYTE **)v4;
      operator delete(v3);
      v3 = v4;
    }
    while ( !v4[25] );
    v2 = *a1;
  }
  v2[1] = v2;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  operator delete(*a1);
}
