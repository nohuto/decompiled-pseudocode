/*
 * XREFs of ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801C7AB4
 * Callers:
 *     ?AppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x1801C39BC (-AppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV-$span@PEAVCSceneN.c)
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x180250CB4 (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023350 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18007FCFC (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Insert_range@PEAPEAVCSceneNode@@@?$vector@PEAVCSceneNode@@V?$allocator@PEAVCSceneNode@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCSceneNode@@@std@@@std@@@1@PEAPEAVCSceneNode@@1Uforward_iterator_tag@1@@Z @ 0x1801BE920 (--$_Insert_range@PEAPEAVCSceneNode@@@-$vector@PEAVCSceneNode@@V-$allocator@PEAVCSceneNode@@@std@.c)
 *     ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x180250BD4 (-OnChildrenChanged@CSceneNode@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendChildren(
        struct CResource ***this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi

  v6 = CResource::RegisterNNotifiersInternal((CResource *)this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1373u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 9);
    std::vector<CSceneNode *>::_Insert_range<CSceneNode * *>(
      this + 9,
      this[10],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    CSceneNode::OnChildrenChanged((CSceneNode *)this);
  }
  return v8;
}
