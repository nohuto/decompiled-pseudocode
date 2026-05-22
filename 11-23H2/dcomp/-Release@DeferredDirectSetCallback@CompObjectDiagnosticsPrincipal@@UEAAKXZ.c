/*
 * XREFs of ?Release@DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@UEAAKXZ @ 0x18019E240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@AEAA@XZ @ 0x18019C9B4 (--1DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@AEAA@XZ.c)
 */

__int64 __fastcall CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback::Release(
        CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback::~DeferredDirectSetCallback(this);
    operator delete(this);
  }
  return v2;
}
