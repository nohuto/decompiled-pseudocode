/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x180032048
 * Callers:
 *     _Spectre::SendShutdownOrSuspendTelemetry::Engine::SendShutdownOrSuspendTelemetry_::_1_::dtor$9 @ 0x1800E5FB5 (_Spectre--SendShutdownOrSuspendTelemetry--Engine--SendShutdownOrSuspendTelemetry_--_1_--dtor$9.c)
 *     _Spectre::SendShutdownOrSuspendTelemetry::Engine::SendShutdownOrSuspendTelemetry_::_1_::dtor$20 @ 0x1800E5FC7 (_Spectre--SendShutdownOrSuspendTelemetry--Engine--SendShutdownOrSuspendTelemetry_--_1_--dtor$20.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
