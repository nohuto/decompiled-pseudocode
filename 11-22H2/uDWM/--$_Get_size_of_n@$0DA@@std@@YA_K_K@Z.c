/*
 * XREFs of ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18006D420
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D92D4 (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800B8D34 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<48>(unsigned __int64 a1)
{
  if ( a1 > 0x555555555555555LL )
    std::_Throw_bad_array_new_length();
  return 48 * a1;
}
