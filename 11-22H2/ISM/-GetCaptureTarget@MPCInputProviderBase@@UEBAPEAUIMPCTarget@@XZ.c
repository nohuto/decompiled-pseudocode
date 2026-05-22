/*
 * XREFs of ?GetCaptureTarget@MPCInputProviderBase@@UEBAPEAUIMPCTarget@@XZ @ 0x18002C7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCTarget *__fastcall MPCInputProviderBase::GetCaptureTarget(MPCInputProviderBase *this)
{
  return (struct IMPCTarget *)*((_QWORD *)this + 450);
}
