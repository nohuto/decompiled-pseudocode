/*
 * XREFs of ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800E37BC
 * Callers:
 *     ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64 (-RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 *     _PointerInputMediator::RoutePointer_::_1_::dtor$3 @ 0x1800E41F6 (_PointerInputMediator--RoutePointer_--_1_--dtor$3.c)
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800E4818 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 *     ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x1800E4A04 (-pop_back@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E2D0C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMediator@@@st.c)
 */

void __fastcall PointerInputMediator::PointerFrame::~PointerFrame(PointerInputMediator::PointerFrame *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  std::_Deallocate<16,0>(
    *((void **)this + 29),
    (*((_QWORD *)this + 30) - *((_QWORD *)this + 29)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>(
    v2,
    *((_QWORD *)this + 27),
    v3,
    v4);
  std::_Deallocate<16,0>(*((void **)this + 27), 0x30uLL);
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 184);
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 160);
}
