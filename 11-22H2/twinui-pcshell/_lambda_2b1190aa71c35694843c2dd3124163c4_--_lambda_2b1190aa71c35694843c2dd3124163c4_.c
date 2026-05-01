/*
 * XREFs of _lambda_2b1190aa71c35694843c2dd3124163c4_::_lambda_2b1190aa71c35694843c2dd3124163c4_ @ 0x1801E7ED8
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B9030 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 * Callees:
 *     ??0UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@AEBV01@@Z @ 0x1800BA978 (--0UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@AEB.c)
 *     ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18018F040 (--0-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_2b1190aa71c35694843c2dd3124163c4_::_lambda_2b1190aa71c35694843c2dd3124163c4_(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3,
        _QWORD *a4,
        struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *a5)
{
  __int128 v6; // xmm0

  v6 = *a3;
  *(_QWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 8) = v6;
  std::vector<tagRECT>::vector<tagRECT>((_QWORD *)(a1 + 24), a4);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::UndockedSearchAppExperienceManager_SetWindowRgn(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)(a1 + 48),
    a5);
  return a1;
}
