/*
 * XREFs of IoGetLowerDeviceObjectWithTag @ 0x14036657C
 * Callers:
 *     IoGetLowerDeviceObject @ 0x140366560 (IoGetLowerDeviceObject.c)
 *     IopSynchronousCall @ 0x140768594 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x140855D60 (PiControlGetDeviceStack.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9DF68 (IoBuildPoDeviceNotifyList.c)
 *     IopCheckDeviceFlags @ 0x140A9E6E0 (IopCheckDeviceFlags.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 */

void *__fastcall IoGetLowerDeviceObjectWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  __int64 v5; // rax
  void *v6; // rbx
  int v7; // ecx
  void *v8; // rax

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = 0LL;
  v7 = *(_DWORD *)(v5 + 32);
  if ( (v7 & 0xF) == 0 || (v7 & 0xE) == 0 && *(_QWORD *)(v5 + 48) )
  {
    v8 = *(void **)(v5 + 48);
    if ( v8 )
    {
      v6 = v8;
      ObfReferenceObjectWithTag(v8, a2);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v6;
}
