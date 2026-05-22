/*
 * XREFs of _dynamic_initializer_for__ShellGesturesProcessor::s_clients__ @ 0x180002450
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA@XZ @ 0x180053244 (--0-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@.c)
 */

int dynamic_initializer_for__ShellGesturesProcessor::s_clients__()
{
  std::deque<ShellGesturesClientProxy *>::deque<ShellGesturesClientProxy *>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__ShellGesturesProcessor::s_clients__);
}
