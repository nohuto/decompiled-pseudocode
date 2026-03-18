/*
 * XREFs of AcpiPrmTargetDeviceChangeCallback @ 0x1C00B1720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AcpiAcquirePrmInterface @ 0x1C00B14C8 (AcpiAcquirePrmInterface.c)
 */

__int64 __fastcall AcpiPrmTargetDeviceChangeCallback(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rax
  PVOID v5; // rdi
  __int64 v6; // rax

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v3 = 0;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v2 )
  {
    _InterlockedExchange(&AcpiPrmContext, 0);
    ExWaitForRundownProtectionRelease(&RunRef);
    ((void (__fastcall *)(_QWORD))qword_1C0081CA0)(0LL);
    return (unsigned int)v3;
  }
  v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v4 )
  {
    _InterlockedExchange(&AcpiPrmContext, 0);
    ExWaitForRundownProtectionRelease(&RunRef);
    v5 = qword_1C0081C80;
    qword_1C0081C80 = 0LL;
    goto LABEL_15;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v6 )
  {
    v5 = qword_1C0081C80;
    v3 = AcpiAcquirePrmInterface(&stru_1C0081CC0, 0, (__int64)&unk_1C0081C88);
    if ( v3 >= 0 )
      _InterlockedExchange(&AcpiPrmContext, 2);
    else
      _InterlockedExchange(&AcpiPrmContext, 0);
LABEL_15:
    if ( v5 )
      IoUnregisterPlugPlayNotification(v5);
  }
  return (unsigned int)v3;
}
