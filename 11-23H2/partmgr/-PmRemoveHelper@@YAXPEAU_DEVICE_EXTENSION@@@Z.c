/*
 * XREFs of ?PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C00047F4
 * Callers:
 *     ?PmSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001E1A8 (-PmSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001E204 (-PmRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 *     PmRemoveIds @ 0x1C0003DC0 (PmRemoveIds.c)
 *     PmWmiCounterDisable @ 0x1C0022550 (PmWmiCounterDisable.c)
 */

void __fastcall PmRemoveHelper(struct _DEVICE_EXTENSION *a1)
{
  KSPIN_LOCK *v1; // rsi
  char *DeviceExtension; // rbp
  KIRQL v4; // al
  int v5; // ecx
  KIRQL v6; // bl
  KIRQL v7; // al
  __int64 v8; // rdx
  PVOID *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  void *v13; // rcx

  v1 = (KSPIN_LOCK *)((char *)a1 + 112);
  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
  v5 = *((_DWORD *)a1 + 128);
  v6 = v4;
  if ( (v5 & 0x10) != 0 )
  {
    KeReleaseSpinLock(v1, v4);
  }
  else
  {
    *((_DWORD *)a1 + 128) = v5 & 0xFFFFFFEE | 0x10;
    PmWakeupNotificationWorkItem((__int64)a1);
    KeReleaseSpinLock(v1, v6);
    KeWaitForSingleObject((char *)a1 + 824, Executive, 0, 0, 0LL);
    KeWaitForSingleObject((char *)a1 + 56, Executive, 0, 0, 0LL);
    v7 = KeAcquireSpinLockRaiseToDpc(v1);
    *((_DWORD *)a1 + 128) &= ~2u;
    KeReleaseSpinLock(v1, v7);
    KeReleaseMutex((PRKMUTEX)a1 + 1, 0);
    KeWaitForSingleObject(DeviceExtension + 104, Executive, 0, 0, 0LL);
    PmRemoveIds((__int64)a1);
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 104), 0);
    IoWMIRegistrationControl(*((PDEVICE_OBJECT *)a1 + 1), 2u);
    LOBYTE(v8) = 1;
    PmWmiCounterDisable((char *)a1 + 720, v8);
    v9 = (PVOID *)((char *)a1 + 1144);
    *((_BYTE *)a1 + 704) = 0;
    if ( a1 != (struct _DEVICE_EXTENSION *)-1144LL && *v9 )
    {
      v13 = (void *)*((_QWORD *)*v9 + 26);
      if ( v13 )
        ObfDereferenceObject(v13);
      ExFreePoolWithTag(*v9, 0);
      *v9 = 0LL;
    }
    if ( *((_QWORD *)a1 + 63) )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)a1 + 31, 0);
      RtlFreeUnicodeString((PUNICODE_STRING)a1 + 31);
    }
    if ( *((_QWORD *)a1 + 61) )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)a1 + 30, 0);
      RtlFreeUnicodeString((PUNICODE_STRING)a1 + 30);
    }
    KeWaitForSingleObject(DeviceExtension + 16, Executive, 0, 0, 0LL);
    v10 = (_QWORD *)((char *)a1 + 152);
    v11 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 16), 0);
    v10[1] = v10;
    *v10 = v10;
  }
}
