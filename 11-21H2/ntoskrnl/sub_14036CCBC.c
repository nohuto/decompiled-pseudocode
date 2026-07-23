/*
 * XREFs of sub_14036CCBC @ 0x14036CCBC
 * Callers:
 *     IoGetLowerDeviceObject @ 0x14036CCA0 (IoGetLowerDeviceObject.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     sub_1407F1CDC @ 0x1407F1CDC (sub_1407F1CDC.c)
 *     sub_140A50D3C @ 0x140A50D3C (sub_140A50D3C.c)
 *     sub_140A51350 @ 0x140A51350 (sub_140A51350.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall sub_14036CCBC(__int64 a1, ULONG a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // di
  void *v7; // rbx
  int v8; // r8d

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = v4;
  v7 = 0LL;
  v8 = *(_DWORD *)(v5 + 32);
  if ( (v8 & 0xF) == 0 || (v8 & 0xE) == 0 && *(_QWORD *)(v5 + 48) )
  {
    if ( *(_QWORD *)(v5 + 48) )
    {
      v7 = *(void **)(v5 + 48);
      ObfReferenceObjectWithTag(v7, a2);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
  return v7;
}
