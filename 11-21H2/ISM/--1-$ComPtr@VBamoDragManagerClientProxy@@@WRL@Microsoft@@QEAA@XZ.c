/*
 * XREFs of ??1?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18013D31C
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$4 @ 0x18013B0FD (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_18013B0FD.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$5 @ 0x18013B10D (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_18013B10D.c)
 *     _DragNDropProcessor::CancelDrag_::_1_::dtor$0 @ 0x18013DEBB (_DragNDropProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$2 @ 0x18013F3B0 (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$2.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$6 @ 0x18013FC70 (_DragNDropProcessor--HitTest_--_1_--dtor$6.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$1 @ 0x1801411CB (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$1.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$0 @ 0x180141A92 (_DragNDropProcessor--StartDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartManualDrag_::_1_::dtor$1 @ 0x180141E9F (_DragNDropProcessor--StartManualDrag_--_1_--dtor$1.c)
 *     _ResizeProcessor::CancelResize_::_1_::dtor$0 @ 0x180144FC7 (_ResizeProcessor--CancelResize_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$4 @ 0x1801457FD (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$4.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$1 @ 0x180145BAA (_ResizeProcessor--HitTest_--_1_--dtor$1.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$2 @ 0x180145BB6 (_ResizeProcessor--HitTest_--_1_--dtor$2.c)
 *     _ResizeProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x1801470DE (_ResizeProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartManualResize_::_1_::dtor$0 @ 0x18014745C (_ResizeProcessor--StartManualResize_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartResize_::_1_::dtor$0 @ 0x1801477D6 (_ResizeProcessor--StartResize_--_1_--dtor$0.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$4 @ 0x180147A04 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_180147A04.c)
 *     _EdgyProcessor::CancelDrag_::_1_::dtor$0 @ 0x180148D8C (_EdgyProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _EdgyProcessor::HitTest_::_1_::dtor$1 @ 0x180149D47 (_EdgyProcessor--HitTest_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartGestureRecognition_::_1_::dtor$1 @ 0x18014B748 (_EdgyProcessor--StartGestureRecognition_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::~ComPtr<BamoDragManagerClientProxy>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(a1);
}
