/*
 * XREFs of _lambda_6e59436657fdc730ce46c13d2be9f9a3_::__lambda_6e59436657fdc730ce46c13d2be9f9a3_ @ 0x18019B8D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___::_CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___ @ 0x18019BA04 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___--_CTask.c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A10D4 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$1 @ 0x1801A124F (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$1.c)
 * Callees:
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18019BEE4 (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_6e59436657fdc730ce46c13d2be9f9a3_::__lambda_6e59436657fdc730ce46c13d2be9f9a3_(__int64 a1)
{
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)(a1 + 48));
  return std::vector<Geometry::CRect>::_Tidy(a1 + 24);
}
