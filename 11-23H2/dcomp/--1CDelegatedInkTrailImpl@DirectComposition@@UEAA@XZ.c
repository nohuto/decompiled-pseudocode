/*
 * XREFs of ??1CDelegatedInkTrailImpl@DirectComposition@@UEAA@XZ @ 0x1800E657C
 * Callers:
 *     ??_ECDelegatedInkTrailImpl@DirectComposition@@UEAAPEAXI@Z @ 0x1800E6600 (--_ECDelegatedInkTrailImpl@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@1@@Z @ 0x1800E6404 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@.c)
 */

void __fastcall DirectComposition::CDelegatedInkTrailImpl::~CDelegatedInkTrailImpl(
        DirectComposition::CDelegatedInkTrailImpl *this)
{
  void **v1; // rbx
  __int64 v3; // rcx
  DirectComposition::CDelayedDestructionObject *v4; // rcx

  v1 = (void **)((char *)this + 48);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>,void *>>>(
    (__int64)this + 48,
    (__int64)this + 48,
    *(_QWORD *)(*((_QWORD *)this + 6) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x60uLL);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = (DirectComposition::CDelayedDestructionObject *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    DirectComposition::CDelayedDestructionObject::Release(v4);
  }
}
