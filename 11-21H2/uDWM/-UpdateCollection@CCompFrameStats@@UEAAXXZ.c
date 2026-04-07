/*
 * XREFs of ?UpdateCollection@CCompFrameStats@@UEAAXXZ @ 0x18010B200
 * Callers:
 *     ?UpdateCollection@CAnimationFrameStats@@UEAAXXZ @ 0x18010AA80 (-UpdateCollection@CAnimationFrameStats@@UEAAXXZ.c)
 * Callees:
 *     ?CollectStats@CCompFrameStats@@IEAAX_K@Z @ 0x180002A1C (-CollectStats@CCompFrameStats@@IEAAX_K@Z.c)
 */

void __fastcall CCompFrameStats::UpdateCollection(CCompFrameStats *this)
{
  unsigned int v2; // r8d

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  CCompFrameStats::CollectStats(this, 0LL, v2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}
