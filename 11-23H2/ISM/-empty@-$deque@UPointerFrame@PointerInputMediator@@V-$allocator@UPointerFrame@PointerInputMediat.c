/*
 * XREFs of ?empty@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBA_NXZ @ 0x1800FD634
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800FCEEC (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::deque<PointerInputMediator::PointerFrame>::empty(__int64 a1)
{
  return *(_QWORD *)(a1 + 32) == 0LL;
}
