/*
 * XREFs of ??$_Uninitialized_move@PEAPEAVSpectreWorld@@V?$allocator@PEAVSpectreWorld@@@std@@@std@@YAPEAPEAVSpectreWorld@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVSpectreWorld@@@0@@Z @ 0x1800170D4
 * Callers:
 *     ??$_Emplace_reallocate@PEAVSpectreWorld@@@?$vector@PEAVSpectreWorld@@V?$allocator@PEAVSpectreWorld@@@std@@@std@@QEAAPEAPEAVSpectreWorld@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180016DFC (--$_Emplace_reallocate@PEAVSpectreWorld@@@-$vector@PEAVSpectreWorld@@V-$allocator@PEAVSpectreWor.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAVSpectreWorld@@PEAPEAV1@@std@@YAPEAPEAVSpectreWorld@@PEAPEAV1@00@Z @ 0x180016D8C (--$_Copy_memmove@PEAPEAVSpectreWorld@@PEAPEAV1@@std@@YAPEAPEAVSpectreWorld@@PEAPEAV1@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<SpectreWorld * *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<SpectreWorld * *,SpectreWorld * *>(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
