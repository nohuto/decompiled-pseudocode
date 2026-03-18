/*
 * XREFs of ??1InteractionSourceManager@@QEAA@XZ @ 0x180263CE4
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180218970 (--1CInteractionTracker@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180218664 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_retur.c)
 *     ??1?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180218944 (--1-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV?$CWeakReference@VCInteractionTracker@@@@@Z @ 0x180253B4C (--$ReleaseInterface@V-$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV-$CWeakReference@VCInt.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180263FFC (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1802655FC (-clear@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x1802663BC (-ClearAllConfigurations@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::~InteractionSourceManager(InteractionSourceManager *this)
{
  __int64 ***v2; // rsi
  __int64 **i; // rbx
  __int64 v4; // rcx

  InteractionSourceManager::ClearActiveManipulations(this);
  v2 = (__int64 ***)*((_QWORD *)this + 3);
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    CChainingHelper::ClearAllConfigurations((CChainingHelper *)i[3]);
    CResource::UnRegisterNotifierInternal(*(CResource **)(*((_QWORD *)this + 1) + 16LL), (struct CResource *)i[2]);
  }
  std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::clear((char *)this + 16);
  ReleaseInterface<CWeakReference<CInteractionTracker>>((__int64 *)this + 1);
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::~deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>((void **)this + 10);
  std::_Deallocate<16,0>(*((void **)this + 5), (*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  std::_List_node<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>,void *>>>(
    v4,
    *((_QWORD ***)this + 3));
  std::_Deallocate<16,0>(*((void **)this + 3), 0x20uLL);
}
