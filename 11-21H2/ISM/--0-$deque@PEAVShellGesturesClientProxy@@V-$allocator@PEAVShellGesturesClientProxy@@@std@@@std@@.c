/*
 * XREFs of ??0?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA@XZ @ 0x18004774C
 * Callers:
 *     _dynamic_initializer_for__ShellGesturesProcessor::s_clients__ @ 0x180001650 (_dynamic_initializer_for__ShellGesturesProcessor--s_clients__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *std::deque<ShellGesturesClientProxy *>::deque<ShellGesturesClientProxy *>()
{
  _QWORD *v0; // rax

  qword_180243030 = 0LL;
  ShellGesturesProcessor::s_clients = 0LL;
  xmmword_180243020 = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v0[1] = 0LL;
  *(_QWORD *)&ShellGesturesProcessor::s_clients = v0;
  *v0 = &ShellGesturesProcessor::s_clients;
  return &ShellGesturesProcessor::s_clients;
}
