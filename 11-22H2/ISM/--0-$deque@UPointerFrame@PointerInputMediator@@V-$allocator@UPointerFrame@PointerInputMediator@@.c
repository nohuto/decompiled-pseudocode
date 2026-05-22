/*
 * XREFs of ??0?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x180053178
 * Callers:
 *     _dynamic_initializer_for__PointerInputMediator::s_frameLookaside__ @ 0x180002210 (_dynamic_initializer_for__PointerInputMediator--s_frameLookaside__.c)
 *     _dynamic_initializer_for__PointerInputMediator::s_frameQueue__ @ 0x180002240 (_dynamic_initializer_for__PointerInputMediator--s_frameQueue__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::deque<PointerInputMediator::PointerFrame>::deque<PointerInputMediator::PointerFrame>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v2[1] = 0LL;
  *a1 = v2;
  *v2 = a1;
  return a1;
}
