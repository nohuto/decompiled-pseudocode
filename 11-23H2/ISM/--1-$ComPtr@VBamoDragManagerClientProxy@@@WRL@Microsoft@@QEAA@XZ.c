/*
 * XREFs of ??1?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18015C4B0
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$4 @ 0x18015A4C6 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_18015A4C6.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$5 @ 0x18015A4D6 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_18015A4D6.c)
 *     _DragNDropProcessor::CancelDrag_::_1_::dtor$0 @ 0x18015D08D (_DragNDropProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$2 @ 0x18015E2BC (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$2.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$6 @ 0x18015EAE8 (_DragNDropProcessor--HitTest_--_1_--dtor$6.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$1 @ 0x1801600CB (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$1.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$0 @ 0x18016099A (_DragNDropProcessor--StartDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartManualDrag_::_1_::dtor$1 @ 0x180160E3E (_DragNDropProcessor--StartManualDrag_--_1_--dtor$1.c)
 *     _ResizeProcessor::CancelResize_::_1_::dtor$0 @ 0x180163C77 (_ResizeProcessor--CancelResize_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$4 @ 0x18016441A (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$4.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$1 @ 0x18016477C (_ResizeProcessor--HitTest_--_1_--dtor$1.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$2 @ 0x180164788 (_ResizeProcessor--HitTest_--_1_--dtor$2.c)
 *     _ResizeProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x180165974 (_ResizeProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartManualResize_::_1_::dtor$0 @ 0x180165C55 (_ResizeProcessor--StartManualResize_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartResize_::_1_::dtor$0 @ 0x180165F4E (_ResizeProcessor--StartResize_--_1_--dtor$0.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$4 @ 0x1801661F5 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_1801661F5.c)
 *     _EdgyProcessor::CancelDrag_::_1_::dtor$0 @ 0x180167989 (_EdgyProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _EdgyProcessor::HitTest_::_1_::dtor$1 @ 0x180168660 (_EdgyProcessor--HitTest_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartGestureRecognition_::_1_::dtor$1 @ 0x180169F8C (_EdgyProcessor--StartGestureRecognition_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::~ComPtr<BamoDragManagerClientProxy>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(a1);
}
