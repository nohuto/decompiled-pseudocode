/*
 * XREFs of sub_1402A4000 @ 0x1402A4000
 * Callers:
 *     sub_1402A4094 @ 0x1402A4094 (sub_1402A4094.c)
 *     sub_140558960 @ 0x140558960 (sub_140558960.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 *     sub_1409397B8 @ 0x1409397B8 (sub_1409397B8.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402A4064 @ 0x1402A4064 (sub_1402A4064.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

_DWORD *__fastcall sub_1402A4000(__int64 a1)
{
  KIRQL v2; // di
  _DWORD *v3; // rax
  _DWORD *v4; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = (_DWORD *)sub_1402A4064(a1);
  v4 = v3;
  if ( (v3[12] & 0x1000) != 0 )
    ObfReferenceObjectWithTag(v3, 0x746C6644u);
  else
    v4 = 0LL;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v4;
}
