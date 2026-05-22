/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800E2FD8
 * Callers:
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800E4818 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 * Callees:
 *     ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800E3838 (--4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        _QWORD *a1,
        __int64 **a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 v4; // rbx
  __int64 *v5; // r12
  __int64 v8; // r14
  __int64 *v9; // r13
  __int64 *v10; // rbp
  __int64 v11; // r15
  __int64 *v12; // rax
  __int64 *v13; // rax
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = a2[2];
  if ( *a2 )
    v8 = **a2;
  else
    v8 = 0LL;
  v9 = *(__int64 **)(a3 + 16);
  v10 = a4[2];
  if ( *a4 )
    v11 = **a4;
  else
    v11 = 0LL;
  while ( v5 != v9 )
  {
    PointerInputMediator::PointerFrame::operator=(
      *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * ((unsigned __int64)v10 & (*(_QWORD *)(v11 + 16) - 1LL))),
      *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)v5 & (*(_QWORD *)(v8 + 16) - 1LL))));
    v10 = (__int64 *)((char *)v10 + 1);
    v5 = (__int64 *)((char *)v5 + 1);
  }
  v12 = *a4;
  a4[2] = v10;
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
  a1[2] = v10;
  return result;
}
