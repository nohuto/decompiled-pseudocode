/*
 * XREFs of ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800FCAC4
 * Callers:
 *     ??$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXAEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800FC304 (--$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInput.c)
 * Callees:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18005B088 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800D282C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800D282C.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@AEAAXXZ @ 0x1800FD00C (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=5
PointerInputMediator::PointerFrame *__fastcall PointerInputMediator::PointerFrame::PointerFrame(
        PointerInputMediator::PointerFrame *this,
        const struct tagMANIPULATION_INPUT_INFO *a2)
{
  char *v4; // rdi
  unsigned __int64 *v5; // rbx

  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  v4 = (char *)this + 216;
  *((_DWORD *)this + 54) = 0;
  v5 = (unsigned __int64 *)((char *)this + 224);
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::_Alloc_sentinel_and_proxy((char *)this + 224);
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 7LL;
  *((_QWORD *)v4 + 7) = 8LL;
  *(_DWORD *)v4 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(v4 + 24),
    0x10uLL,
    *v5);
  PointerInputMediator::PointerFrame::Initialize(this, a2);
  return this;
}
