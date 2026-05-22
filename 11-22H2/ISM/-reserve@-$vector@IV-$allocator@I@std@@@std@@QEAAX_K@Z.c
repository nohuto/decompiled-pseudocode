/*
 * XREFs of ?reserve@?$vector@IV?$allocator@I@std@@@std@@QEAAX_K@Z @ 0x18010C3AC
 * Callers:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800675E8 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x1800606E4 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ?_Reallocate_exactly@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x18010BE1C (-_Reallocate_exactly@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<unsigned int>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[2] - *a1) >> 2;
  if ( a2 > result )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    return std::vector<unsigned int>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
