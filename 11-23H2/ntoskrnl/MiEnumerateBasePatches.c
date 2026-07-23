/*
 * XREFs of MiEnumerateBasePatches @ 0x1406971E4
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140642D80 (MiMarkHotPatchesForHiberPhase.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x140696FEC (MiApplyRequiredSessionDriverHotPatches.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2D8FC (MmReplaceImportEntriesForVerifier.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35318 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __fastcall MiEnumerateBasePatches(__int64 a1, unsigned int (__fastcall *a2)(_QWORD *, __int64), __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 296);
  for ( i = *(_QWORD **)(a1 + 296); i != v3 && a2(i - 37, a3); i = (_QWORD *)*i )
    ;
}
