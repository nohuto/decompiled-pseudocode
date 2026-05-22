/*
 * XREFs of ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800FD644
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x18005B2A8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 * Callees:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800FC6C8 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediat.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800FC790 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerIn.c)
 *     ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x1800FD764 (-pop_back@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 *     ?pop_front@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x1800FD7AC (-pop_front@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 */

__int64 *__fastcall std::deque<PointerInputMediator::PointerFrame>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // rdx
  __int64 *v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  char *v9; // rsi
  __int64 v10; // rax
  __int64 *v12[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v13[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  __int64 *v15[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 *v17[3]; // [rsp+68h] [rbp-18h] BYREF

  v5 = *(__int64 **)(a3 + 16);
  v6 = *(__int64 **)(a4 + 16);
  v7 = PointerInputMediator::s_frameQueue;
  v8 = (unsigned __int64)v5 - qword_180268D48;
  v9 = (char *)((char *)v6 - (char *)v5);
  if ( v6 == v5 )
  {
    a2[1] = 0LL;
    *a2 = v7;
    a2[2] = (__int64)v5;
  }
  else
  {
    v12[1] = 0LL;
    v13[1] = 0LL;
    v15[1] = 0LL;
    v12[0] = (__int64 *)PointerInputMediator::s_frameQueue;
    v12[2] = v6;
    v13[0] = (__int64 *)PointerInputMediator::s_frameQueue;
    v15[0] = (__int64 *)PointerInputMediator::s_frameQueue;
    if ( v8 >= qword_180268D48 + qword_180268D50 - (__int64)v6 )
    {
      v16 = (__int64)v5;
      v14 = qword_180268D48 + qword_180268D50;
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        v17,
        v12,
        (__int64)v13,
        v15);
      do
      {
        std::deque<PointerInputMediator::PointerFrame>::pop_back(&PointerInputMediator::s_frameQueue);
        --v9;
      }
      while ( v9 );
    }
    else
    {
      v14 = (__int64)v5;
      v16 = qword_180268D48;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        v17,
        (__int64)v15,
        v13,
        v12);
      do
      {
        std::deque<PointerInputMediator::PointerFrame>::pop_front(&PointerInputMediator::s_frameQueue);
        --v9;
      }
      while ( v9 );
    }
    a2[1] = 0LL;
    v10 = PointerInputMediator::s_frameQueue;
    a2[2] = v8 + qword_180268D48;
    *a2 = v10;
  }
  return a2;
}
