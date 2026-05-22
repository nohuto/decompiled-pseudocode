/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800FC6C8
 * Callers:
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800FD644 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 * Callees:
 *     ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FCD7C (--4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 **__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        __int64 **a1,
        __int64 **a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 *v5; // r15
  __int64 v7; // rsi
  __int64 *v8; // r12
  __int64 *v9; // rbp
  __int64 v10; // r14
  __int64 *v11; // rax
  __int64 **result; // rax

  v5 = a2[2];
  if ( *a2 )
    v7 = **a2;
  else
    v7 = 0LL;
  v8 = *(__int64 **)(a3 + 16);
  v9 = a4[2];
  if ( *a4 )
    v10 = **a4;
  else
    v10 = 0LL;
  while ( v5 != v8 )
  {
    PointerInputMediator::PointerFrame::operator=(
      *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * ((unsigned __int64)v9 & (*(_QWORD *)(v10 + 16) - 1LL))),
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * ((unsigned __int64)v5 & (*(_QWORD *)(v7 + 16) - 1LL))));
    v9 = (__int64 *)((char *)v9 + 1);
    v5 = (__int64 *)((char *)v5 + 1);
  }
  v11 = *a4;
  a1[1] = 0LL;
  *a1 = v11;
  result = a1;
  a4[2] = v9;
  a1[2] = v9;
  return result;
}
