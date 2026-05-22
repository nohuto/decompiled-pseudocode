/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800E30B0
 * Callers:
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800E4818 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 * Callees:
 *     ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800E3838 (--4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 *v7; // r13
  __int64 v8; // r14
  __int64 *v9; // rbp
  __int64 v10; // r15
  __int64 *v11; // r12
  __int64 *v12; // rax
  __int64 *v13; // rax
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = *(__int64 **)(a2 + 16);
  v7 = a3[2];
  if ( *a3 )
    v8 = **a3;
  else
    v8 = 0LL;
  v9 = a4[2];
  if ( *a4 )
    v10 = **a4;
  else
    v10 = 0LL;
  v11 = a3[2];
  while ( v5 != v11 )
  {
    v7 = (__int64 *)((char *)v7 - 1);
    v9 = (__int64 *)((char *)v9 - 1);
    v11 = v7;
    PointerInputMediator::PointerFrame::operator=(
      *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * ((unsigned __int64)v9 & (*(_QWORD *)(v10 + 16) - 1LL))),
      *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)v7 & (*(_QWORD *)(v8 + 16) - 1LL))));
  }
  v12 = *a4;
  a4[2] = v9;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v12 )
  {
    v13 = (__int64 *)*v12;
    if ( v13 )
      v4 = *v13;
    *a1 = v4;
  }
  result = a1;
  a1[2] = v9;
  return result;
}
