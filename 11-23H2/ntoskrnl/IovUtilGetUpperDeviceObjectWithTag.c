/*
 * XREFs of IovUtilGetUpperDeviceObjectWithTag @ 0x140AD2AE0
 * Callers:
 *     IovpExamineDevObjForwarding @ 0x140ACCF80 (IovpExamineDevObjForwarding.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 */

void *__fastcall IovUtilGetUpperDeviceObjectWithTag(__int64 a1)
{
  KIRQL v2; // al
  void *v3; // rbx
  KIRQL v4; // di

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(a1 + 24);
  v4 = v2;
  if ( v3 )
    ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v3;
}
