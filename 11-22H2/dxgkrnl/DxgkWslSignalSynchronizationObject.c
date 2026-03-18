/*
 * XREFs of DxgkWslSignalSynchronizationObject @ 0x1C0354770
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C016B0D0 (DxgkSignalSynchronizationObjectInternal.c)
 */

__int64 __fastcall DxgkWslSignalSynchronizationObject(__int64 a1, __int64 a2)
{
  return DxgkSignalSynchronizationObjectInternal(a1, 1, a2, 0);
}
