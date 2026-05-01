/*
 * XREFs of ?erase@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@0@Z @ 0x1803DD13C
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1803D89EC (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1803D2EC8 (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x1803D3418 (--$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEA.c)
 */

HSTRING **__fastcall std::vector<Windows::Internal::String>::erase(__int64 a1, HSTRING **a2, HSTRING *a3, HSTRING *a4)
{
  HSTRING *v7; // rdi
  HSTRING **result; // rax

  if ( a3 != a4 )
  {
    v7 = std::_Move_unchecked<Windows::Internal::String *,Windows::Internal::String *>(a4, *(HSTRING **)(a1 + 8), a3);
    std::_Destroy_range<std::allocator<Windows::Internal::String>>(v7, *(HSTRING **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v7;
  }
  result = a2;
  *a2 = a3;
  return result;
}
