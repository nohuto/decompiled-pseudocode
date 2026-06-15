/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCXvmPowerReferenceManager@@@2@_K1@Z @ 0x18010E420
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@?$vector@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@1@QEAV21@AEAV21@@Z @ 0x18010D6E0 (--$_Emplace_reallocate@AEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@-$vector@V-$shared_.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x1801193A8 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@-$vector@V-$shared_pt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@0@@Z @ 0x1800EEBB0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAX.c)
 */

void __fastcall std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPackConfiguration const>>>(
      (__int64)v6,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
