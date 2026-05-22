/*
 * XREFs of ??1?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18016A730
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$4 @ 0x180168746 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_180168746.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$5 @ 0x180168756 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_180168756.c)
 *     _DragNDropProcessor::CancelDrag_::_1_::dtor$0 @ 0x18016B30D (_DragNDropProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$2 @ 0x18016C53C (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$2.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$6 @ 0x18016CD68 (_DragNDropProcessor--HitTest_--_1_--dtor$6.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$1 @ 0x18016E34B (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$1.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$0 @ 0x18016EC1A (_DragNDropProcessor--StartDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartManualDrag_::_1_::dtor$1 @ 0x18016F0BE (_DragNDropProcessor--StartManualDrag_--_1_--dtor$1.c)
 *     _ResizeProcessor::CancelResize_::_1_::dtor$0 @ 0x180171EF7 (_ResizeProcessor--CancelResize_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$4 @ 0x18017269A (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$4.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$1 @ 0x1801729FC (_ResizeProcessor--HitTest_--_1_--dtor$1.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$2 @ 0x180172A08 (_ResizeProcessor--HitTest_--_1_--dtor$2.c)
 *     _ResizeProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x180173BF4 (_ResizeProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartManualResize_::_1_::dtor$0 @ 0x180173ED5 (_ResizeProcessor--StartManualResize_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartResize_::_1_::dtor$0 @ 0x1801741CE (_ResizeProcessor--StartResize_--_1_--dtor$0.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$4 @ 0x180174475 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_180174475.c)
 *     _EdgyProcessor::CancelDrag_::_1_::dtor$0 @ 0x180175C09 (_EdgyProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _EdgyProcessor::HitTest_::_1_::dtor$1 @ 0x1801768E0 (_EdgyProcessor--HitTest_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartGestureRecognition_::_1_::dtor$1 @ 0x18017820C (_EdgyProcessor--StartGestureRecognition_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::~ComPtr<BamoDragManagerClientProxy>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(a1);
}
