/*
 * XREFs of ??$_Uninitialized_move@PEAULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULegacyInputInfo@@QEAU1@0PEAU1@AEAV?$allocator@ULegacyInputInfo@@@0@@Z @ 0x1800DDBE8
 * Callers:
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800DD690 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 * Callees:
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 */

char *__fastcall std::_Uninitialized_move<LegacyInputInfo *>(char *Src, char *a2, char *a3)
{
  char *i; // rdi

  for ( i = Src; i != a2; i += 3008 )
  {
    memcpy_0(a3, i, 0xBC0uLL);
    a3 += 3008;
  }
  return a3;
}
