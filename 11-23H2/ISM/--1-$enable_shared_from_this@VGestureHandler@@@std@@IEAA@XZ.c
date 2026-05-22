/*
 * XREFs of ??1?$enable_shared_from_this@VGestureHandler@@@std@@IEAA@XZ @ 0x1800601C8
 * Callers:
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$4 @ 0x18006BF43 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$4.c)
 *     _std::_Construct_in_place_CustomCursorApplication2_std::shared_ptr_SystemCursorService2__unsigned_int_&_BamoCustomCursorControllerClient2Proxy___&__::_1_::dtor$5 @ 0x180100B99 (_std--_Construct_in_place_CustomCursorApplication2_std--shared_ptr_SystemCursorServ_ea_180100B99.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$1 @ 0x18010406D (_SystemCursor2--SystemCursor2_--_1_--dtor$1.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$0 @ 0x180104186 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$0.c)
 *     _SystemCursorShape2::SystemCursorShape2_::_1_::dtor$1 @ 0x1801042D6 (_SystemCursorShape2--SystemCursorShape2_--_1_--dtor$1.c)
 *     ??1GestureHandler@@QEAA@XZ @ 0x180152C90 (--1GestureHandler@@QEAA@XZ.c)
 *     _GestureHandler::GestureHandler_::_1_::dtor$1 @ 0x18015668B (_GestureHandler--GestureHandler_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800C05B8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::enable_shared_from_this<GestureHandler>::~enable_shared_from_this<GestureHandler>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
