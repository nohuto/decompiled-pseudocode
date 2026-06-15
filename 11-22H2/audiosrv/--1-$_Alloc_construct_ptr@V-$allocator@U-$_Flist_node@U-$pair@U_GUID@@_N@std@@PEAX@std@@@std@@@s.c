/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@U?$pair@U_GUID@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014A4F4
 * Callers:
 *     _EffectPack::CanProcessingModeBeParameterized_::_1_::dtor$45 @ 0x180078BBD (_EffectPack--CanProcessingModeBeParameterized_--_1_--dtor$45.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::pair<_GUID,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::pair<_GUID,bool>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x20uLL);
}
