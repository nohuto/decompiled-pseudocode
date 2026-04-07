/*
 * XREFs of ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180004F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 */

void __fastcall CAnimationFrameStats::SendTelemetry(CAnimationFrameStats *this)
{
  if ( *((_BYTE *)this + 144) )
    CAnimationFrameStats::SendAnimationLastFrameTelemetry(this);
}
