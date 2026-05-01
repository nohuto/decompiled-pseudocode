/*
 * XREFs of _lambda_4b0775d64c2392808fe7dff402e255dc_::__lambda_4b0775d64c2392808fe7dff402e255dc_ @ 0x1802066D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___::_CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___ @ 0x180206898 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___--_CTask.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18020B060 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DA9DE (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_4b0775d64c2392808fe7dff402e255dc_::__lambda_4b0775d64c2392808fe7dff402e255dc_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)(a1 + 96));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 80));
  return std::vector<Geometry::CRect>::_Tidy(a1 + 56);
}
