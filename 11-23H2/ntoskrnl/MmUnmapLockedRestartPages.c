/*
 * XREFs of MmUnmapLockedRestartPages @ 0x140A2B750
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiUnmapMdlCommon @ 0x14061E728 (MiUnmapMdlCommon.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 */

void __fastcall MmUnmapLockedRestartPages(__int64 a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 PteAddress; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiUnmapMdlCommon(v2, (__int64)AnyMultiplexedVm, 0, a1, v3);
  *(_WORD *)(a1 + 10) &= 0xFFDEu;
  PteAddress = MiGetPteAddress(v2);
  MiReleaseDriverPtes(0, PteAddress, v3);
}
