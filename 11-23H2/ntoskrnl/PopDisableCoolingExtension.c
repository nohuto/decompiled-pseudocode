/*
 * XREFs of PopDisableCoolingExtension @ 0x1409832A8
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x140982FF0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopPropogateCoolingChange @ 0x1405871F0 (PopPropogateCoolingChange.c)
 *     PopDiagTraceCoolingExtension @ 0x14086182C (PopDiagTraceCoolingExtension.c)
 */

void __fastcall PopDisableCoolingExtension(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64); // rdi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = (__int64 *)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive(a1 + 32);
  if ( *(_BYTE *)(a1 + 64) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    PopDiagTraceCoolingExtension(a1, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(a1 + 80) = &Event;
    PopPropogateCoolingChange(a1);
    PopReleaseRwLock(v1);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)v1);
    *(_QWORD *)(a1 + 80) = 0LL;
    v3 = *(_QWORD *)(a1 + 96);
    v4 = *(void (__fastcall **)(__int64))(a1 + 112);
    PopReleaseRwLock(v1);
    v4(v3);
  }
  else
  {
    PopReleaseRwLock(v1);
  }
}
