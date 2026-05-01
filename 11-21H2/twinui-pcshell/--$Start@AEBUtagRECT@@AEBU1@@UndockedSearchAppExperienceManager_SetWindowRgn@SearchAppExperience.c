/*
 * XREFs of ??$Start@AEBUtagRECT@@AEBU1@@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@SA?AV01@AEBUtagRECT@@0@Z @ 0x18019A150
 * Callers:
 *     ?SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x180023F40 (-SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z.c)
 * Callees:
 *     ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@0@Z @ 0x1801A1558 (-StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceM_ea_1801A1558.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18038E02C (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_18038E02C.c)
 */

// Hidden C++ exception states: #wind=1
SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *__fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::Start<tagRECT const &,tagRECT const &>(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(this, a2, a3);
  return this;
}
