/*
 * XREFs of ??$_Uninitialized_move@PEAVString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0PEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1803D3DD0
 * Callers:
 *     ??$_Emplace_reallocate@VString@Internal@Windows@@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAPEAVString@Internal@Windows@@QEAV234@$$QEAV234@@Z @ 0x1803D3060 (--$_Emplace_reallocate@VString@Internal@Windows@@@-$vector@VString@Internal@Windows@@V-$allocato.c)
 *     ?_Reallocate_exactly@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1803DCD8C (-_Reallocate_exactly@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1803D2EC8 (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 */

HSTRING *__fastcall std::_Uninitialized_move<Windows::Internal::String *>(HSTRING *a1, HSTRING *a2, HSTRING *a3)
{
  while ( a1 != a2 )
  {
    *a3++ = *a1;
    *a1++ = 0LL;
  }
  std::_Destroy_range<std::allocator<Windows::Internal::String>>(a3, a3);
  return a3;
}
