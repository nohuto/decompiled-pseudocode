/*
 * XREFs of ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01EE920
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C01D1400 (DxgkSignalSynchronizationObjectInternal.c)
 */

__int64 __fastcall DxgkCddSignalSynchronizationObject(const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkSignalSynchronizationObjectInternal((__int64)a1, 0, 0LL, 1);
}
