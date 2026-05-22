/*
 * XREFs of ??1UnavailableRegion@DirectComposition@@QEAA@XZ @ 0x18008A770
 * Callers:
 *     ??1CTileClump@DirectComposition@@MEAA@XZ @ 0x180036EB4 (--1CTileClump@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DirectComposition::UnavailableRegion::~UnavailableRegion(void **this)
{
  FastRegion::CRegion::FreeMemory(this);
}
