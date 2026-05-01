/*
 * XREFs of ??$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x1803D3418
 * Callers:
 *     ?RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAV23@@Z @ 0x1803DAF30 (-RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal@W.c)
 *     ?erase@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@0@Z @ 0x1803DD13C (-erase@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 */

HSTRING *__fastcall std::_Move_unchecked<Windows::Internal::String *,Windows::Internal::String *>(
        HSTRING *a1,
        HSTRING *a2,
        HSTRING *a3)
{
  HSTRING *i; // rdi

  for ( i = a1; i != a2; ++i )
  {
    Windows::Internal::String::Release(a3);
    *a3++ = *i;
    *i = 0LL;
  }
  return a3;
}
