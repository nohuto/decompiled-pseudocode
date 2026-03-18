/*
 * XREFs of PopCoolingExtensionPnpNotification @ 0x14098B4E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopPropogateCoolingChange @ 0x1405C9A5C (PopPropogateCoolingChange.c)
 *     PopAcquireCoolingInterface @ 0x1408296B8 (PopAcquireCoolingInterface.c)
 *     PopDiagTraceCoolingExtension @ 0x14086141C (PopDiagTraceCoolingExtension.c)
 *     PopDisableCoolingExtension @ 0x14098B798 (PopDisableCoolingExtension.c)
 *     PopOrphanCoolingExtension @ 0x14098B868 (PopOrphanCoolingExtension.c)
 */

__int64 __fastcall PopCoolingExtensionPnpNotification(char *NotificationStructure, _BYTE *Context)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax

  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
  {
    PopDisableCoolingExtension(Context);
    return 0LL;
  }
  v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v4 )
  {
    PopDisableCoolingExtension(Context);
LABEL_9:
    PopOrphanCoolingExtension(Context);
    return 0LL;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v6 )
  {
    if ( (int)PopAcquireCoolingInterface((__int64)Context) < 0 )
      goto LABEL_9;
    PopAcquireRwLockExclusive((ULONG_PTR)(Context + 32));
    Context[64] = 1;
    PopDiagTraceCoolingExtension((__int64)Context, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_ADD);
    if ( *((_BYTE **)Context + 2) != Context + 16 )
      PopPropogateCoolingChange((__int64)Context);
    PopReleaseRwLock((ULONG_PTR)(Context + 32));
  }
  return 0LL;
}
