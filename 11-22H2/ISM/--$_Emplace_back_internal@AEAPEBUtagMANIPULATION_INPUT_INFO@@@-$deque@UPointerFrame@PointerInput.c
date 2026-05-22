/*
 * XREFs of ??$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXAEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18010AD94
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18010BA0C (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18010B554 (--0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x18010BBB0 (-_Growmap@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 */

__int64 __fastcall std::deque<PointerInputMediator::PointerFrame>::_Emplace_back_internal<tagMANIPULATION_INPUT_INFO const * &>(
        __int64 a1,
        const struct tagMANIPULATION_INPUT_INFO **a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = qword_1802780D0;
  v4 = qword_1802780C0;
  if ( qword_1802780C0 <= (unsigned __int64)(qword_1802780D0 + 1) )
  {
    std::deque<PointerInputMediator::PointerFrame>::_Growmap(&PointerInputMediator::s_frameQueue);
    v2 = qword_1802780D0;
    v4 = qword_1802780C0;
  }
  v5 = v4 - 1;
  qword_1802780C8 &= v5;
  v6 = v5 & (qword_1802780C8 + v2);
  v7 = qword_1802780B8;
  if ( !*(_QWORD *)(qword_1802780B8 + 8 * v6) )
  {
    *(_QWORD *)(qword_1802780B8 + 8 * v6) = operator new(0x118uLL);
    v7 = qword_1802780B8;
  }
  result = PointerInputMediator::PointerFrame::PointerFrame(*(PointerInputMediator::PointerFrame **)(v7 + 8 * v6), *a2);
  ++qword_1802780D0;
  return result;
}
