/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@@Z @ 0x1800C23BC
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800C2A7C (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     _std::vector_std::shared_ptr_CXvmPowerReferenceManager__std::allocator_std::shared_ptr_CXvmPowerReferenceManager_____::_Emplace_reallocate_std::shared_ptr_CXvmPowerReferenceManager__const_&__::_1_::catch$0 @ 0x180103613 (_std--vector_std--shared_ptr_CXvmPowerReferenceManager__std--allocator_std--shared_ptr_CXvmPower.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@@Z @ 0x180103858 (--$_Uninitialized_move@PEAV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCXvmPowerReferenceManager@@@2@_K1@Z @ 0x180104930 (-_Change_array@-$vector@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared_p.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
