/*
 * XREFs of VfMiscExReleaseFastMutex_Entry @ 0x140AE0C30
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140AE2574 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExReleaseFastMutex_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0x34uLL, *(_QWORD *)(a1 + 8));
}
