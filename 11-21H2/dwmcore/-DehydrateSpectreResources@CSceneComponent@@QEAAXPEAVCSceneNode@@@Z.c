/*
 * XREFs of ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18025BAC8
 * Callers:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x18023E0F0 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x18023E540 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18025BB84 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18018598C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18023CAA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QE.c)
 *     ??$_Find@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x18025B878 (--$_Find@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@@s.c)
 */

void __fastcall CSceneComponent::DehydrateSpectreResources(CSceneComponent *this, struct CSceneNode *a2)
{
  __int64 **v2; // rsi
  __int64 *v5; // rbp
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int64); // rbx
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  struct CSceneNode *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (__int64 **)((char *)this + 64);
  v5 = (__int64 *)std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find<CSceneNode *>(
                    (__int64)this + 64,
                    (__int64)&v12);
  if ( v5 != *v2 )
  {
    v6 = *((_QWORD *)a2 + 17);
    v7 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL);
    v8 = (*(__int64 (__fastcall **)(CSceneComponent *))(*(_QWORD *)this + 192LL))(this);
    v7(v6, v8);
    v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
           v2,
           v5);
    std::_Deallocate<16,0>(v9, 0x30uLL);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialCompositionLabel>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SpatialCompositionLabel>::GetImpl'::`2'::impl,
      0,
      v10,
      v11);
  }
}
