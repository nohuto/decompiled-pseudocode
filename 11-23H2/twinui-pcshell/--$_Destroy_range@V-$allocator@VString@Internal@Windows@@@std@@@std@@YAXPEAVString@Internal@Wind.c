/*
 * XREFs of ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1803D2EC8
 * Callers:
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x1801BF15C (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     _std::vector_Windows::Internal::String_std::allocator_Windows::Internal::String___::_Emplace_reallocate_Windows::Internal::String__::_1_::catch$0 @ 0x1803D3172 (_std--vector_Windows--Internal--String_std--allocator_Windows--Internal--String___--_Emplace_rea.c)
 *     ??$_Uninitialized_move@PEAVString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0PEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1803D3DD0 (--$_Uninitialized_move@PEAVString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@.c)
 *     ?_Change_array@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXQEAVString@Internal@Windows@@_K1@Z @ 0x1803DC7A8 (-_Change_array@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x1803DCFE0 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 *     ?erase@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@0@Z @ 0x1803DD13C (-erase@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::_Destroy_range<std::allocator<Windows::Internal::String>>(HSTRING *a1, HSTRING *a2)
{
  HSTRING *v3; // rbx
  HRESULT result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = WindowsDeleteString(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
