/*
 * XREFs of _lambda_41fdec79629b933043b6dd44cc33a98f_::__lambda_41fdec79629b933043b6dd44cc33a98f_ @ 0x1801AF3EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::_CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___ @ 0x1801AF590 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___--_CTask.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x180463074 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AF58 (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_41fdec79629b933043b6dd44cc33a98f_::__lambda_41fdec79629b933043b6dd44cc33a98f_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)(a1 + 96));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 80));
  return std::vector<Geometry::CRect>::_Tidy(a1 + 56);
}
