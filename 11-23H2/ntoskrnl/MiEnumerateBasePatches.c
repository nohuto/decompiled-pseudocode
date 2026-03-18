/*
 * XREFs of MiEnumerateBasePatches @ 0x1406971E4
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406408E8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140642830 (MiMarkHotPatchesForHiberPhase.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x140696FEC (MiApplyRequiredSessionDriverHotPatches.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2D64C (MmReplaceImportEntriesForVerifier.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35068 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void __fastcall MiEnumerateBasePatches(__int64 a1, unsigned int (__fastcall *a2)(_QWORD *, __int64), __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 296);
  for ( i = *(_QWORD **)(a1 + 296); i != v3 && a2(i - 37, a3); i = (_QWORD *)*i )
    ;
}
