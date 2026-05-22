/*
 * XREFs of ?Invalidate@CCompFrameStats@@MEAAXXZ @ 0x1801A4060
 * Callers:
 *     ?StartTimedCollection@CAnimationFrameStats@@UEAAXII@Z @ 0x18000C5C0 (-StartTimedCollection@CAnimationFrameStats@@UEAAXII@Z.c)
 *     ?Invalidate@CTouchFrameStats@@MEAAXXZ @ 0x1801A5820 (-Invalidate@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?Shutdown@CCompFrameStats@@IEAAXXZ @ 0x180006644 (-Shutdown@CCompFrameStats@@IEAAXXZ.c)
 */

void __fastcall CCompFrameStats::Invalidate(CCompFrameStats *this)
{
  *((_BYTE *)this + 12) = 0;
  CCompFrameStats::Shutdown(this);
  *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
  *((_QWORD *)this + 18) = *((_QWORD *)this + 17);
}
