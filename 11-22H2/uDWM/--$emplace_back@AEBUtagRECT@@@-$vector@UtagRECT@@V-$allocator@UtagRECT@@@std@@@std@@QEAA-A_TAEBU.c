/*
 * XREFs of ??$emplace_back@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_TAEBUtagRECT@@@Z @ 0x1800D94C0
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D92D4 (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 *     ??$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAA?A_TAEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D94F0 (--$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CStoryboard.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800DE380 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<tagRECT>::emplace_back<tagRECT const &>(_QWORD *a1, _OWORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = (_BYTE *)a1[1];
  if ( v3 == (_BYTE *)a1[2] )
    return std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>(a1, v3, a2);
  *(_OWORD *)v3 = *a2;
  result = (char *)a1[1];
  a1[1] = result + 16;
  return result;
}
