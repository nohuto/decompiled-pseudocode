/*
 * XREFs of ?begin@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@XZ @ 0x18010C0AC
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18010BA0C (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::deque<PointerInputMediator::PointerFrame>::begin(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1[3];
  a2[1] = 0LL;
  a2[2] = v2;
  *a2 = *a1;
  return a2;
}
