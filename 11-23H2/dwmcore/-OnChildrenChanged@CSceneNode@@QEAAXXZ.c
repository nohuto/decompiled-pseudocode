/*
 * XREFs of ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x180250BD4
 * Callers:
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801C7AB4 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x180250E34 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneNode::OnChildrenChanged(CSceneNode *this)
{
  CSceneNode **v1; // rsi
  CSceneNode **i; // rdi

  v1 = (CSceneNode **)*((_QWORD *)this + 10);
  for ( i = (CSceneNode **)*((_QWORD *)this + 9); i != v1; ++i )
    CSceneNode::SetParent(*i, this);
  if ( *((_QWORD *)this + 17) )
    (*(void (__fastcall **)(CSceneNode *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
