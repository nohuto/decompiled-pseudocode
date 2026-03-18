/*
 * XREFs of ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A55C
 * Callers:
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A518 (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E6F80 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801F59C8 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18021E190 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18022656C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x180254384 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@_N@1@AEBQEBVCResource@@@Z @ 0x180031F14 (--$_Try_emplace@AEBQEBVCResource@@$$V@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceRe.c)
 *     ??4?$com_ptr_t@VCWeakResourceReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCWeakResourceReference@@@Z @ 0x18004A5F8 (--4-$com_ptr_t@VCWeakResourceReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCWeakRe.c)
 *     ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x18004A648 (--0CWeakResourceReference@@AEAA@PEAVCResource@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWeakResourceReference::Get(struct CResource *a1, struct CWeakResourceReference **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  struct CWeakResourceReference *v6; // rax
  CWeakResourceReference *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  struct CWeakResourceReference *v11; // [rsp+50h] [rbp+8h] BYREF
  struct CResource *v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v11 = 0LL;
  if ( (*((_BYTE *)a1 + 32) & 8) != 0 )
  {
    v12 = a1;
    v5 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Try_emplace<CResource const * const &,>(
           (__int64)a1,
           (__int64)&v10,
           (__int64 *)&v12);
    wil::com_ptr_t<CWeakResourceReference,wil::err_returncode_policy>::operator=(
      &v11,
      *(_QWORD *)(*(_QWORD *)v5 + 24LL));
    v6 = v11;
  }
  else
  {
    v8 = (CWeakResourceReference *)DefaultHeap::AllocClear(0x30uLL);
    if ( v8 )
      v8 = CWeakResourceReference::CWeakResourceReference(v8, a1);
    wil::com_ptr_t<CWeakResourceReference,wil::err_returncode_policy>::operator=(&v11, v8);
    v6 = v11;
    if ( !v11 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x20u, 0LL);
      return v2;
    }
  }
  *a2 = v6;
  return v2;
}
