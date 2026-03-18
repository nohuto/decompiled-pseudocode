/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C00277CC
 * Callers:
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this, unsigned int a2)
{
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vInitialize(this, a2);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
