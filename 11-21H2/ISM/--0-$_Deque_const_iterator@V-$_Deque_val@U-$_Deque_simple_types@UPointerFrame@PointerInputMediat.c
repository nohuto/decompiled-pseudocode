/*
 * XREFs of ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800E3190
 * Callers:
 *     ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64 (-RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800E4818 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 *     ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x180151104 (-UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z.c)
 *     ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x180151374 (-erase@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // r8

  v2 = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( *(_QWORD *)a2 )
  {
    v3 = **(__int64 ***)a2;
    if ( v3 )
      v2 = *v3;
    *a1 = v2;
  }
  a1[2] = *(_QWORD *)(a2 + 16);
  return a1;
}
