/*
 * XREFs of ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800E4818
 * Callers:
 *     ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64 (-RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 * Callees:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800E2FD8 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediat.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800E30B0 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerIn.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800E3190 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediat.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800E37BC (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x1800E4A04 (-pop_back@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 */

_QWORD *__fastcall std::deque<PointerInputMediator::PointerFrame>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 **v9; // r10
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r11
  __int64 **v13; // r10
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h]
  __int64 **v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 *v23[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v24[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
         v24,
         a3);
  v5 = 0LL;
  v17 = PointerInputMediator::s_frameQueue;
  v18 = 0LL;
  v19 = v4[2];
  v6 = v19;
  v8 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
         v24,
         v7);
  v10 = v19 - *((_QWORD *)&xmmword_180242FA0 + 1);
  v21 = 0LL;
  v20 = v9;
  v22 = v8[2];
  v11 = v22 - v19;
  if ( v22 == v19 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v9 )
    {
      if ( *v9 )
        v5 = **v9;
      *a2 = v5;
    }
    a2[2] = v6;
  }
  else
  {
    if ( v10 >= *((_QWORD *)&xmmword_180242FA0 + 1) + qword_180242FB0 - v22 )
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
        v24,
        (__int64)&v17);
      v18 = 0LL;
      v19 = v14;
      v17 = v15;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
        v23,
        (__int64)&v20);
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        &v20,
        v23,
        (__int64)&v17,
        v24);
      for ( ; v11; --v11 )
        std::deque<PointerInputMediator::PointerFrame>::pop_back(&PointerInputMediator::s_frameQueue);
    }
    else
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
        v23,
        (__int64)&v20);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
        v24,
        (__int64)&v17);
      v21 = 0LL;
      v22 = v12;
      v20 = v13;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        &v17,
        (__int64)&v20,
        v24,
        v23);
      for ( ; v11; --v11 )
      {
        PointerInputMediator::PointerFrame::~PointerFrame(*(PointerInputMediator::PointerFrame **)(*((_QWORD *)&PointerInputMediator::s_frameQueue + 1)
                                                                                                 + 8
                                                                                                 * (*((_QWORD *)&xmmword_180242FA0 + 1) & (xmmword_180242FA0 - 1))));
        if ( --qword_180242FB0 )
          ++*((_QWORD *)&xmmword_180242FA0 + 1);
        else
          *((_QWORD *)&xmmword_180242FA0 + 1) = 0LL;
      }
    }
    v22 = *((_QWORD *)&xmmword_180242FA0 + 1);
    v20 = (__int64 **)PointerInputMediator::s_frameQueue;
    v21 = 0LL;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
      &v17,
      (__int64)&v20);
    v19 += v10;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
      a2,
      (__int64)&v17);
  }
  return a2;
}
