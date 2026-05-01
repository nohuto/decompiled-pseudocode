/*
 * XREFs of _lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_ @ 0x1801E7E58
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x18046A530 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1.c)
 * Callees:
 *     ??0UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@AEBV01@@Z @ 0x1800BA978 (--0UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@AEB.c)
 */

__int64 __fastcall lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3,
        __int128 *a4,
        struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *a5)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  v6 = *a3;
  v7 = *a4;
  *(_QWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 8) = v6;
  *(_OWORD *)(a1 + 24) = v7;
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::UndockedSearchAppExperienceManager_SetWindowRgn(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)(a1 + 40),
    a5);
  return a1;
}
