/*
 * XREFs of ?AddRef@CCompFrameStats@@UEAAKXZ @ 0x18004A420
 * Callers:
 *     ?AddRef@CAnimationFrameStats@@WII@EAAKXZ @ 0x1800643A0 (-AddRef@CAnimationFrameStats@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompFrameStats::AddRef(CCompFrameStats *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
