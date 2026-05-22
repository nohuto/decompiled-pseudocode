/*
 * XREFs of ??0?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAA@XZ @ 0x180047D10
 * Callers:
 *     CallOnThreadExit::_dynamic_initializer_for__s_callbacks__ @ 0x180001580 (CallOnThreadExit--_dynamic_initializer_for__s_callbacks__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *std::list<CallOnThreadExit::CallbackData>::list<CallOnThreadExit::CallbackData>()
{
  _QWORD *v0; // rax

  xmmword_180242FC0 = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *v0 = v0;
  v0[1] = v0;
  *(_QWORD *)&xmmword_180242FC0 = v0;
  return &xmmword_180242FC0;
}
