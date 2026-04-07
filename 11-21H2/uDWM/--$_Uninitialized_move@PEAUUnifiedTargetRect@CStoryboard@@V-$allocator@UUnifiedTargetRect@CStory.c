/*
 * XREFs of ??$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAPEAUUnifiedTargetRect@CStoryboard@@QEAU12@0PEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800D432C
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D41C0 (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800D4070 (--$_Destroy_range@V-$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetR.c)
 */

char *__fastcall std::_Uninitialized_move<CStoryboard::UnifiedTargetRect *>(_QWORD *a1, _QWORD *a2, char *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 5;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_DWORD *)a3 = *((_DWORD *)v4 - 10);
      a3 += 48;
      *(_OWORD *)((char *)v4 + (_QWORD)v5 - 36) = *(_OWORD *)((char *)v4 - 36);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = *(v4 - 2);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = *v4;
      *(v4 - 2) = 0LL;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4 += 6;
    }
    while ( v4 - 5 != a2 );
  }
  std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(a3, a3);
  return a3;
}
