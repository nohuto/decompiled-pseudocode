/*
 * XREFs of ??0DCVISRGNLOCK@@QEAA@XZ @ 0x1C02D5304
 * Callers:
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C02D53A0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

DCVISRGNLOCK *__fastcall DCVISRGNLOCK::DCVISRGNLOCK(DCVISRGNLOCK *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx

  v2 = Gre::Base::Globals(this);
  GreAcquireSemaphore(*((_QWORD *)v2 + 11));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v2 + 11), 3LL);
  return this;
}
