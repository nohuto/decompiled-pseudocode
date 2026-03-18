/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1C00D8850
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1C0153B90 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  ExReleaseResourceLite(*this[1]);
  KeLeaveCriticalRegion();
}
