/*
 * XREFs of ?IsCaptureSession@CAudioSession@@UEAAHXZ @ 0x180010060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioSession::IsCaptureSession(CAudioSession *this)
{
  return (*((_DWORD *)this + 57) & 8) == 0;
}
