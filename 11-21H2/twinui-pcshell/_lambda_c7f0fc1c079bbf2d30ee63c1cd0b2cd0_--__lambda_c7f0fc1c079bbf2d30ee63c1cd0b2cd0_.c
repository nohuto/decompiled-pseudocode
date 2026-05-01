/*
 * XREFs of _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_ @ 0x1801AF4E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___::_CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___ @ 0x1801AF680 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___--_CTask.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180462280 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AEA8 (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 5));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 3);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
