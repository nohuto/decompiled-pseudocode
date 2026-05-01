/*
 * XREFs of ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18018F040
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4_____lambda_2b1190aa71c35694843c2dd3124163c4___ @ 0x1801E58A8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___--CTaskW.c)
 *     _lambda_2b1190aa71c35694843c2dd3124163c4_::_lambda_2b1190aa71c35694843c2dd3124163c4_ @ 0x1801E7ED8 (_lambda_2b1190aa71c35694843c2dd3124163c4_--_lambda_2b1190aa71c35694843c2dd3124163c4_.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAUtagRECT@@AEBQEAU1@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAX_KAEBQEAUtagRECT@@1@Z @ 0x18018F07C (--$_Construct_n@AEBQEAUtagRECT@@AEBQEAU1@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 */

_QWORD *__fastcall std::vector<tagRECT>::vector<tagRECT>(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<tagRECT>::_Construct_n<tagRECT * const &,tagRECT * const &>(a1, (__int64)(a2[1] - *a2) >> 4);
  return a1;
}
