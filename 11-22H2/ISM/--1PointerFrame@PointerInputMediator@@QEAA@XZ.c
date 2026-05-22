/*
 * XREFs of ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x18010B790
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x180067818 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 *     _PointerInputMediator::RoutePointers_::_1_::dtor$1 @ 0x180067FDC (_PointerInputMediator--RoutePointers_--_1_--dtor$1.c)
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18010BA0C (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     _PointerInputMediator::OnNewFrame_::_1_::dtor$1 @ 0x18010BB19 (_PointerInputMediator--OnNewFrame_--_1_--dtor$1.c)
 *     ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x18010C284 (-pop_back@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 *     ?pop_front@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x18010C2CC (-pop_front@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180056318 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18010AF50 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMediator@@@st.c)
 */

void __fastcall PointerInputMediator::PointerFrame::~PointerFrame(void **this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  std::_Deallocate<16,0>(this[30], ((_BYTE *)this[31] - (_BYTE *)this[30]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[30] = 0LL;
  this[31] = 0LL;
  this[32] = 0LL;
  std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>(
    v2,
    (_QWORD **)this[28],
    v3,
    v4);
  std::_Deallocate<16,0>(this[28], 0x30uLL);
  std::vector<Windows::UI::Color>::_Tidy((__int64)(this + 24));
  std::vector<Windows::UI::Color>::_Tidy((__int64)(this + 21));
}
