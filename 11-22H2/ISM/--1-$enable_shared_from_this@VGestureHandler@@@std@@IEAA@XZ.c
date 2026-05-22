/*
 * XREFs of ??1?$enable_shared_from_this@VGestureHandler@@@std@@IEAA@XZ @ 0x1800729F8
 * Callers:
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$4 @ 0x18007FA93 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$4.c)
 *     _std::_Construct_in_place_CustomCursorApplication2_std::shared_ptr_SystemCursorService2__unsigned_int_&_BamoCustomCursorControllerClient2Proxy___&__::_1_::dtor$5 @ 0x18010F6B9 (_std--_Construct_in_place_CustomCursorApplication2_std--shared_ptr_SystemCursorServ_ea_18010F6B9.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$1 @ 0x180112BAD (_SystemCursor2--SystemCursor2_--_1_--dtor$1.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$0 @ 0x180112CC6 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$0.c)
 *     _SystemCursorShape2::SystemCursorShape2_::_1_::dtor$1 @ 0x180112E16 (_SystemCursorShape2--SystemCursorShape2_--_1_--dtor$1.c)
 *     ??1GestureHandler@@QEAA@XZ @ 0x180160F70 (--1GestureHandler@@QEAA@XZ.c)
 *     _GestureHandler::GestureHandler_::_1_::dtor$1 @ 0x18016496B (_GestureHandler--GestureHandler_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800D0BC8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::enable_shared_from_this<GestureHandler>::~enable_shared_from_this<GestureHandler>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
