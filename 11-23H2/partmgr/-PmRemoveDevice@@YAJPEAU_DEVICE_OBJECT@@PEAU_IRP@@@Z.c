/*
 * XREFs of ?PmRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001E204
 * Callers:
 *     ?PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001C340 (-PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C00047F4 (-PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 */

__int64 __fastcall PmRemoveDevice(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // rdi
  struct _DEVICE_OBJECT *v4; // rsi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  unsigned int v22; // ebx

  DeviceExtension = (char *)a1->DeviceExtension;
  v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 2);
  PmRemoveHelper((struct _DEVICE_EXTENSION *)DeviceExtension);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), a2, 0x20u);
  v5 = (void *)*((_QWORD *)DeviceExtension + 142);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)DeviceExtension + 142) = 0LL;
  }
  v6 = (void *)*((_QWORD *)DeviceExtension + 141);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)DeviceExtension + 141) = 0LL;
  }
  v7 = (void *)*((_QWORD *)DeviceExtension + 138);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)DeviceExtension + 138) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 29);
  RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 28);
  RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 392));
  RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 376));
  RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 360));
  RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 344));
  v8 = (void *)*((_QWORD *)DeviceExtension + 42);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)DeviceExtension + 42) = 0LL;
  }
  v9 = (void *)*((_QWORD *)DeviceExtension + 41);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)DeviceExtension + 41) = 0LL;
  }
  v10 = (void *)*((_QWORD *)DeviceExtension + 40);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)DeviceExtension + 40) = 0LL;
  }
  v11 = (void *)*((_QWORD *)DeviceExtension + 39);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)DeviceExtension + 39) = 0LL;
  }
  v12 = (void *)*((_QWORD *)DeviceExtension + 38);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)DeviceExtension + 38) = 0LL;
  }
  v13 = (void *)*((_QWORD *)DeviceExtension + 37);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)DeviceExtension + 37) = 0LL;
  }
  v14 = (void *)*((_QWORD *)DeviceExtension + 35);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *((_QWORD *)DeviceExtension + 35) = 0LL;
  }
  v15 = (void *)*((_QWORD *)DeviceExtension + 36);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)DeviceExtension + 36) = 0LL;
  }
  v16 = (void *)*((_QWORD *)DeviceExtension + 34);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *((_QWORD *)DeviceExtension + 34) = 0LL;
  }
  v17 = (void *)*((_QWORD *)DeviceExtension + 33);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *((_QWORD *)DeviceExtension + 33) = 0LL;
  }
  v18 = (void *)*((_QWORD *)DeviceExtension + 32);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    *((_QWORD *)DeviceExtension + 32) = 0LL;
  }
  v19 = (void *)*((_QWORD *)DeviceExtension + 31);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
    *((_QWORD *)DeviceExtension + 31) = 0LL;
  }
  v20 = (void *)*((_QWORD *)DeviceExtension + 30);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    *((_QWORD *)DeviceExtension + 30) = 0LL;
  }
  v21 = (void *)*((_QWORD *)DeviceExtension + 29);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *((_QWORD *)DeviceExtension + 29) = 0LL;
  }
  IoFreeIrp(*((PIRP *)DeviceExtension + 107));
  IoFreeWorkItem(*((PIO_WORKITEM *)DeviceExtension + 106));
  IoFreeWorkItem(*((PIO_WORKITEM *)DeviceExtension + 111));
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v22 = IofCallDriver(v4, a2);
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
  IoDeleteDevice(*((PDEVICE_OBJECT *)DeviceExtension + 1));
  return v22;
}
