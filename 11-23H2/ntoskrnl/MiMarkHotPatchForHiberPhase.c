/*
 * XREFs of MiMarkHotPatchForHiberPhase @ 0x140642D50
 * Callers:
 *     <none>
 * Callees:
 *     MiMarkNonPagedHiberPhasePages @ 0x140AAC304 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MiMarkHotPatchForHiberPhase(__int64 a1, __int64 a2)
{
  MiMarkNonPagedHiberPhasePages(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 48) + *(unsigned int *)(a1 + 64) + a2 - 1, 0LL);
  return 1LL;
}
