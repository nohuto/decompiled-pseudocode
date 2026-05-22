/*
 * XREFs of ??0?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x1800477A0
 * Callers:
 *     _dynamic_initializer_for__PointerInputMediator::s_frameQueue__ @ 0x180001440 (_dynamic_initializer_for__PointerInputMediator--s_frameQueue__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *std::deque<PointerInputMediator::PointerFrame>::deque<PointerInputMediator::PointerFrame>()
{
  _QWORD *v0; // rax

  qword_180242FB0 = 0LL;
  PointerInputMediator::s_frameQueue = 0LL;
  xmmword_180242FA0 = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v0[1] = 0LL;
  *(_QWORD *)&PointerInputMediator::s_frameQueue = v0;
  *v0 = &PointerInputMediator::s_frameQueue;
  return &PointerInputMediator::s_frameQueue;
}
