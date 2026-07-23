/*
 * XREFs of LpcExitProcess @ 0x140688B4C
 * Callers:
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402085B0 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x140688B90 (AlpcpCleanupProcessViews.c)
 */

__int64 __fastcall LpcExitProcess(struct _KPROCESS *a1)
{
  if ( a1[1].SecureState.SecureHandle )
  {
    PsReturnProcessPagedPoolQuota(a1, a1[1].SecureState.SecureHandle);
    a1[1].SecureState.SecureHandle = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
