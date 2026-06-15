/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@0@@Z @ 0x1800EEBB0
 * Callers:
 *     _std::vector_std::shared_ptr_EffectPackConfiguration_const___std::allocator_std::shared_ptr_EffectPackConfiguration_const______::_Emplace_reallocate_std::shared_ptr_EffectPackConfiguration_const___&__::_1_::catch$0 @ 0x18010D7EF (_std--vector_std--shared_ptr_EffectPackConfiguration_const___std--allocator_std--shared_ptr_Effe.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@@Z @ 0x18010D830 (--$_Uninitialized_move@PEAV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared.c)
 *     ??1EffectPackConfigurationManager@@UEAA@XZ @ 0x18010D97C (--1EffectPackConfigurationManager@@UEAA@XZ.c)
 *     ?RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010E324 (-RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCXvmPowerReferenceManager@@@2@_K1@Z @ 0x18010E420 (-_Change_array@-$vector@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared_p.c)
 *     _std::vector_std::shared_ptr_CXvmPowerReferenceManager__std::allocator_std::shared_ptr_CXvmPowerReferenceManager_____::_Emplace_reallocate_std::shared_ptr_CXvmPowerReferenceManager__const_&__::_1_::catch$0 @ 0x1801194CC (_std--vector_std--shared_ptr_CXvmPowerReferenceManager__std--allocator_std--shared_ptr_CXvmPower.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A1C (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<EffectPackConfiguration const>>>(
        __int64 a1,
        __int64 a2)
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
