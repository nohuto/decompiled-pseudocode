/*
 * XREFs of ??1?$weak_ptr@VSystemCursorService2@@@std@@QEAA@XZ @ 0x1800E8244
 * Callers:
 *     _std::_Construct_in_place_CustomCursorApplication2_std::shared_ptr_SystemCursorService2__unsigned_int_&_BamoCustomCursorControllerClient2Proxy___&__::_1_::dtor$5 @ 0x1800E7D39 (_std--_Construct_in_place_CustomCursorApplication2_std--shared_ptr_SystemCursorServ_ea_1800E7D39.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$1 @ 0x1800EB421 (_SystemCursor2--SystemCursor2_--_1_--dtor$1.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$0 @ 0x1800EB53A (_SystemCursorService2--SystemCursorService2_--_1_--dtor$0.c)
 *     _SystemCursorShape2::SystemCursorShape2_::_1_::dtor$1 @ 0x1800EB68A (_SystemCursorShape2--SystemCursorShape2_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800A88B8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::weak_ptr<SystemCursorService2>::~weak_ptr<SystemCursorService2>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
