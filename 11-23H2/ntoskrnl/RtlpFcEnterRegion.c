/*
 * XREFs of RtlpFcEnterRegion @ 0x1407D10A8
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x14035D29C (RtlpFcBufferManagerReferenceBuffers.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *RtlpFcEnterRegion()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  --result->KernelApcDisable;
  return result;
}
