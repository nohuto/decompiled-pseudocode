/*
 * XREFs of ??0?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAA@XZ @ 0x180052EA8
 * Callers:
 *     CallOnThreadExit::_dynamic_initializer_for__s_callbacks__ @ 0x180002380 (CallOnThreadExit--_dynamic_initializer_for__s_callbacks__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x180052EEC (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 */

__int128 *std::list<CallOnThreadExit::CallbackData>::list<CallOnThreadExit::CallbackData>()
{
  size_t size_of; // rax
  _QWORD *v1; // rax

  xmmword_1802784D0 = 0LL;
  size_of = std::_Get_size_of_n<96>(1LL);
  v1 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v1 = v1;
  v1[1] = v1;
  *(_QWORD *)&xmmword_1802784D0 = v1;
  return &xmmword_1802784D0;
}
