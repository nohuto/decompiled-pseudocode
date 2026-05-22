/*
 * XREFs of ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FCD7C
 * Callers:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800FC6C8 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediat.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800FC790 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerIn.c)
 * Callees:
 *     ??4?$vector@IV?$allocator@I@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EB640 (--4-$vector@IV-$allocator@I@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Move_assign@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800FD260 (-_Move_assign@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$.c)
 */

__int64 __fastcall PointerInputMediator::PointerFrame::operator=(__int64 a1, __int64 a2)
{
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  *(_BYTE *)(a1 + 160) = *(_BYTE *)(a2 + 160);
  *(_DWORD *)(a1 + 164) = *(_DWORD *)(a2 + 164);
  std::vector<unsigned int>::operator=((_QWORD *)(a1 + 168), (_QWORD *)(a2 + 168));
  std::vector<unsigned int>::operator=((_QWORD *)(a1 + 192), (_QWORD *)(a2 + 192));
  if ( a1 + 216 != a2 + 216 )
    std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Move_assign();
  return a1;
}
