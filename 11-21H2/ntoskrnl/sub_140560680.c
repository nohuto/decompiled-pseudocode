/*
 * XREFs of sub_140560680 @ 0x140560680
 * Callers:
 *     sub_140950424 @ 0x140950424 (sub_140950424.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     sub_140946508 @ 0x140946508 (sub_140946508.c)
 */

__int64 __fastcall sub_140560680(PVOID *Object, __int64 a2, __int64 a3)
{
  PVOID *v4; // rdi
  unsigned int v5; // ebp
  KIRQL v6; // al
  PVOID v7; // rcx
  struct _DEVICE_OBJECT *v8; // rsi
  KIRQL v9; // bl
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  KIRQL v11; // al
  PVOID *v12; // rbx
  KIRQL v13; // si

  v4 = Object;
  ObfReferenceObject(Object);
  while ( 1 )
  {
    v5 = sub_140946508(v4, sub_1409504C0, a3);
    if ( v5 )
      break;
    v6 = KeAcquireQueuedSpinLock(9uLL);
    v7 = v4[7];
    v8 = 0LL;
    v9 = v6;
    if ( v7 )
    {
      v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)v7 + 1);
      if ( v8 )
        ObfReferenceObject(*((PVOID *)v7 + 1));
    }
    KeReleaseQueuedSpinLock(9uLL, v9);
    if ( v8 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v8);
      v5 = sub_140946508(DeviceAttachmentBaseRef, sub_1409504C0, a3);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      ObfDereferenceObject(v8);
      if ( v5 )
        break;
    }
    v11 = KeAcquireQueuedSpinLock(0xAuLL);
    v12 = (PVOID *)v4[3];
    v13 = v11;
    if ( v12 )
      ObfReferenceObject(v4[3]);
    KeReleaseQueuedSpinLock(0xAuLL, v13);
    ObfDereferenceObject(v4);
    v4 = v12;
    if ( !v12 )
      return v5;
  }
  ObfDereferenceObject(v4);
  return v5;
}
