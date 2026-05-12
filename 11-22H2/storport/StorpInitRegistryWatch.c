/*
 * XREFs of StorpInitRegistryWatch @ 0x1C0021044
 * Callers:
 *     StorEnableRegistryKeyNotification @ 0x1C0044F24 (StorEnableRegistryKeyNotification.c)
 *     DllInitialize @ 0x1C0063C00 (DllInitialize.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00A30B8 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpInitRegistryWatch(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 16) = a1;
  ExInitializeResourceLite((PERESOURCE)(a2 + 24));
  *(_QWORD *)(a2 + 128) = 0LL;
  *(_QWORD *)(a2 + 144) = StorpWatchForRegistryChanges;
  *(_QWORD *)(a2 + 152) = a2;
  KeInitializeEvent((PRKEVENT)(a2 + 160), NotificationEvent, 0);
  result = 1LL;
  *(_WORD *)(a2 + 184) = 1;
  return result;
}
