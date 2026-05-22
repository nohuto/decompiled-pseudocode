/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800FC790
 * Callers:
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800FD644 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 * Callees:
 *     ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FCD7C (--4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 **__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        __int64 **a1,
        __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 *v5; // rbx
  __int64 *v6; // r13
  __int64 v7; // rbp
  __int64 *v8; // r15
  __int64 v9; // r14
  __int64 *v10; // r12
  __int64 *v11; // rsi
  __int64 *v12; // rax
  __int64 **result; // rax

  v5 = *(__int64 **)(a2 + 16);
  v6 = a3[2];
  if ( *a3 )
    v7 = **a3;
  else
    v7 = 0LL;
  v8 = a4[2];
  if ( *a4 )
    v9 = **a4;
  else
    v9 = 0LL;
  v10 = a3[2];
  v11 = a4[2];
  while ( v5 != v10 )
  {
    v6 = (__int64 *)((char *)v6 - 1);
    v8 = (__int64 *)((char *)v8 - 1);
    v10 = v6;
    v11 = v8;
    PointerInputMediator::PointerFrame::operator=(
      *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)v8 & (*(_QWORD *)(v9 + 16) - 1LL))),
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * ((unsigned __int64)v6 & (*(_QWORD *)(v7 + 16) - 1LL))));
  }
  v12 = *a4;
  a4[2] = v11;
  a1[1] = 0LL;
  *a1 = v12;
  result = a1;
  a1[2] = v11;
  return result;
}
