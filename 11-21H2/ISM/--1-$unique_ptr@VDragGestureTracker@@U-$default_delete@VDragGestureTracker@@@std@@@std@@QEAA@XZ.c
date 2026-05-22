/*
 * XREFs of ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x18013D4E8
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$8 @ 0x18013B13D (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_18013B13D.c)
 *     _EdgyRecognizer::EdgyRecognizer_::_1_::dtor$0 @ 0x18014BAE9 (_EdgyRecognizer--EdgyRecognizer_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<DragGestureTracker>::~unique_ptr<DragGestureTracker>(_QWORD **a1)
{
  _QWORD *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1[2] )
      DestroyInteractionContext();
    operator delete(v1);
  }
}
