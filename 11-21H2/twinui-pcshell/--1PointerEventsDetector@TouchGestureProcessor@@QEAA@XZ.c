/*
 * XREFs of ??1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ @ 0x18015ECEC
 * Callers:
 *     ??1TouchGestureProcessor@@QEAA@XZ @ 0x18015EB70 (--1TouchGestureProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x18015ED38 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 */

void __fastcall TouchGestureProcessor::PointerEventsDetector::~PointerEventsDetector(
        TouchGestureProcessor::PointerEventsDetector *this,
        __int64 a2)
{
  __int64 v3; // rdx

  std::_Func_class<void,>::_Tidy((__int64)this + 88, a2);
  std::_Func_class<void,>::_Tidy((__int64)this + 24, v3);
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    (char *)this + 8,
    (char *)this + 8,
    *(_QWORD *)(*((_QWORD *)this + 1) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 1), 0x20uLL);
}
