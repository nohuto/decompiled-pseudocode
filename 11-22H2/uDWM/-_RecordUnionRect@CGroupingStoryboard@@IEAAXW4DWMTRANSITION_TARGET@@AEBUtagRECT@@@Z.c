/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800DE380
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E15E0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_TAEBUtagRECT@@@Z @ 0x1800D94C0 (--$emplace_back@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-A_TAEBU.c)
 *     ??$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAA?A_TAEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D94F0 (--$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CStoryboard.c)
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800DDE04 (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

char *__fastcall CGroupingStoryboard::_RecordUnionRect(_QWORD *a1, __int64 a2, RECT *a3)
{
  unsigned int v5; // eax
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
  v9 = 0;
  v10 = v5;
  v6 = a1 + 16;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, v5, &v9) < 0 )
    return (char *)std::vector<CStoryboard::UnifiedTargetRect>::emplace_back<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
                     (__int64)(a1 + 16),
                     (int *)&v10,
                     a3);
  v7 = 48LL * v9;
  UnionRect((LPRECT)(*v6 + v7 + 4), a3, (const RECT *)(*v6 + v7 + 4));
  return std::vector<tagRECT>::emplace_back<tagRECT const &>((_QWORD *)(v7 + *v6 + 24LL), a3);
}
