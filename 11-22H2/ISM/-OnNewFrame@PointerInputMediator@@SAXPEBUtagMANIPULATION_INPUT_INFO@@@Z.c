/*
 * XREFs of ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18010BA0C
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1801080E8 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$emplace_back@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?A_T$$QEAUPointerFrame@PointerInputMediator@@@Z @ 0x180067540 (--$emplace_back@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInputMediator@.c)
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800675E8 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ??$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXAEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18010AD94 (--$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInput.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x18010B3F8 (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x18010B790 (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ??D?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAAEAUPointerFrame@PointerInputMediator@@XZ @ 0x18010B91C (--D-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@s.c)
 *     ?begin@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@XZ @ 0x18010C0AC (-begin@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 *     ?empty@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBA_NXZ @ 0x18010C154 (-empty@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 *     ?pop_front@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x18010C2CC (-pop_front@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PointerInputMediator::OnNewFrame(const struct tagMANIPULATION_INPUT_INFO *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  const struct tagMANIPULATION_INPUT_INFO *v5[2]; // [rsp+20h] [rbp-168h] BYREF
  __int64 *v6[4]; // [rsp+30h] [rbp-158h] BYREF
  void *v7[36]; // [rsp+50h] [rbp-138h] BYREF

  v5[0] = a1;
  v5[1] = (const struct tagMANIPULATION_INPUT_INFO *)&PointerInputMediator::s_frameQueueLock;
  v2 = _Mtx_lock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
  if ( v2 )
    std::_Throw_C_error(v2);
  if ( (unsigned __int8)std::deque<PointerInputMediator::PointerFrame>::empty(PointerInputMediator::s_frameLookaside) )
  {
    std::deque<PointerInputMediator::PointerFrame>::_Emplace_back_internal<tagMANIPULATION_INPUT_INFO const * &>(v3, v5);
  }
  else
  {
    std::deque<PointerInputMediator::PointerFrame>::begin(PointerInputMediator::s_frameLookaside, v6);
    v4 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator*(v6);
    PointerInputMediator::PointerFrame::PointerFrame((__int64)v7, v4);
    std::deque<PointerInputMediator::PointerFrame>::pop_front(PointerInputMediator::s_frameLookaside);
    PointerInputMediator::PointerFrame::Initialize((PointerInputMediator::PointerFrame *)v7, a1);
    std::deque<PointerInputMediator::PointerFrame>::emplace_back<PointerInputMediator::PointerFrame>(
      &PointerInputMediator::s_frameQueue,
      (__int64)v7);
    PointerInputMediator::PointerFrame::~PointerFrame(v7);
  }
  _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
}
