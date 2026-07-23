/*
 * XREFs of VfMiscExReleaseFastMutexUnsafe_Entry @ 0x140ADFC30
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140AE1594 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExReleaseFastMutexUnsafe_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0x3AuLL, *(_QWORD *)(a1 + 8));
}
