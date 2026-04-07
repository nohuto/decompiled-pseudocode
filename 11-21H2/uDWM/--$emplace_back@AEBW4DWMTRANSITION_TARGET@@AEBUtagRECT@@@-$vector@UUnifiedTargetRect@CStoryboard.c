/*
 * XREFs of ??$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAAAEAUUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D43E8
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800DB654 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$emplace_back@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEBU2@@Z @ 0x1800D43B8 (--$emplace_back@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<CStoryboard::UnifiedTargetRect>::emplace_back<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
        __int64 a1,
        int *a2,
        _OWORD *a3)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 == *(_QWORD *)(a1 + 16) )
    return std::vector<CStoryboard::UnifiedTargetRect>::_Emplace_reallocate<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
             (const char *)a1,
             v5,
             a2,
             a3);
  v6 = *a2;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_DWORD *)v5 = v6 & 0xFFF;
  *(_OWORD *)(v5 + 4) = *a3;
  std::vector<tagRECT>::emplace_back<tagRECT const &>((_QWORD *)(v5 + 24), a3);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 48;
  return result;
}
