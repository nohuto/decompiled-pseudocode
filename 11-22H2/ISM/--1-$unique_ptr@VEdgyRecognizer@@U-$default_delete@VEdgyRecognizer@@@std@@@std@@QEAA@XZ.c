/*
 * XREFs of ??1?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ @ 0x180175388
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$7 @ 0x1801744A5 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_1801744A5.c)
 * Callees:
 *     ??_GEdgyRecognizer@@QEAAPEAXI@Z @ 0x18017585C (--_GEdgyRecognizer@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<EdgyRecognizer>::~unique_ptr<EdgyRecognizer>(EdgyRecognizer **a1, unsigned int a2)
{
  EdgyRecognizer *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return EdgyRecognizer::`scalar deleting destructor'(v2, a2);
  return result;
}
