/*
 * XREFs of MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x140656C58
 * Callers:
 *     MiGetSlabStandbyListWorker @ 0x1406572B0 (MiGetSlabStandbyListWorker.c)
 * Callees:
 *     MiSetNextStandbyPageSameNodeNoLockAsserts @ 0x1402DD410 (MiSetNextStandbyPageSameNodeNoLockAsserts.c)
 *     MiSetPfnNodeBlinkLow @ 0x14034A438 (MiSetPfnNodeBlinkLow.c)
 */

signed __int64 __fastcall MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2 & 0xFFFFFFFFFFLL;
  MiSetPfnNodeBlinkLow(a1, a2);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 36) & 0xFFE00000 | (v2 >> 19);
  return MiSetNextStandbyPageSameNodeNoLockAsserts(a1, a2 >> 40);
}
