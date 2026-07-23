/*
 * XREFs of IoUnregisterShutdownNotification @ 0x140A65430
 * Callers:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1406113D0 @ 0x1406113D0 (sub_1406113D0.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // al
  PVOID *v3; // rbx
  KIRQL v4; // bp
  PVOID *v5; // rsi
  PVOID *v6; // rdx
  PVOID **v7; // rax
  PVOID *i; // rbx
  PVOID *v9; // rsi
  PVOID *v10; // rax
  PVOID **v11; // rdx

  MmLockPagableSectionByHandle(ImageSectionHandle);
  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = (PVOID *)qword_140C46F50;
  v4 = v2;
  while ( v3 != &qword_140C46F50 )
  {
    v5 = v3;
    if ( v3[2] == DeviceObject )
    {
      v6 = (PVOID *)*v3;
      if ( *((PVOID **)*v3 + 1) != v3 || (v7 = (PVOID **)v3[1], *v7 != v3) )
LABEL_16:
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      v3 = (PVOID *)v3[1];
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v5, 0);
    }
    v3 = (PVOID *)*v3;
  }
  for ( i = (PVOID *)qword_140C46F60; i != &qword_140C46F60; i = (PVOID *)*i )
  {
    v9 = i;
    if ( i[2] == DeviceObject )
    {
      v10 = (PVOID *)*i;
      if ( *((PVOID **)*i + 1) != i )
        goto LABEL_16;
      v11 = (PVOID **)i[1];
      if ( *v11 != i )
        goto LABEL_16;
      *v11 = v10;
      v10[1] = v11;
      i = (PVOID *)i[1];
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v9, 0);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  MmUnlockPagableImageSection(ImageSectionHandle);
  DeviceObject->Flags &= ~0x800u;
}
