/*
 * XREFs of ?Release@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C000E370
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C003ACFC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestOutputBuffer::Release(FxRequestOutputBuffer *this, void *Tag, int Line, const char *File)
{
  FxRequest::ReleaseIrpReference((FxRequest *)&this[-17]);
  return 1LL;
}
